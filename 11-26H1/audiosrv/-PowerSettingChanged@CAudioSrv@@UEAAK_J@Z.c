/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800D9810
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001E64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800D9A90 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v2; // ebx
  UUID *v6; // rsi
  UUID *v7; // rbp
  __int64 v8; // rdx
  int v9; // edi
  char v10; // si
  __int64 v11; // rax
  _DWORD *v12; // rcx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  RPC_STATUS Status; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER v18; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  Status = 0;
  if ( !Uuid1 )
    return 13LL;
  v6 = Uuid1 + 1;
  v7 = Uuid1 + 1;
  if ( Uuid1[1].Data1 != 4 )
    goto LABEL_22;
  if ( !UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v7 = Uuid1 + 1;
    if ( v6->Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x20u,
          (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids,
          *(_DWORD *)&Uuid1[1].Data2);
      }
      return CAudioSrv::ProcessAwayModeStateChange(this, *(_DWORD *)&Uuid1[1].Data2 != 0);
    }
LABEL_22:
    v11 = *(_QWORD *)&Uuid1->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&Uuid1->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v11 = *(_QWORD *)Uuid1->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v11 && v7->Data1 == 4 )
    {
      if ( *(_DWORD *)&Uuid1[1].Data2 )
      {
        g_bLowPowerEpoch = 1;
      }
      else
      {
        g_bLowPowerEpoch = 0;
        g_timeLastExitFromLPE.QuadPart = 0LL;
        QueryPerformanceCounter(&g_timeLastExitFromLPE);
      }
      v12 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v12 > 4u && tlgKeywordOn((__int64)v12, 64LL) )
      {
        v17 = g_bLowPowerEpoch;
        v18 = g_timeLastExitFromLPE;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v13,
          (int)&unk_1801A4D28,
          v14,
          v15,
          (__int64)&v18,
          (__int64)&v17);
      }
    }
    return v2;
  }
  v9 = *(_DWORD *)&Uuid1[1].Data2;
  v10 = -1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_126de3733680384bb8fabd64a7dcaca6_Traceguids, v9);
  }
  if ( v9 )
  {
    if ( (unsigned int)(v9 - 1) <= 1 )
      v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  if ( g_streamMonitorManager )
  {
    LOBYTE(v8) = v10;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)g_streamMonitorManager + 16LL))(g_streamMonitorManager, v8);
  }
  return v2;
}
