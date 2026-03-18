/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402CDC34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14031D32C (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8508 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@45445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001348 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U3@U2@U2@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x14005A14C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14006287C (-CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14031E4B8 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1403FA2E8 (DxgkIncreaseMonitorUniqueness.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, GUID *a6)
{
  __int64 v6; // rax
  int v9; // edi
  __int64 v10; // r13
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  bool i; // zf
  __int64 v16; // rcx
  struct _LUID *v17; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // r9
  int v20; // eax
  GUID *p_ActivityId; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-61h] BYREF
  __int64 v26; // [rsp+80h] [rbp-59h] BYREF
  int v27; // [rsp+88h] [rbp-51h] BYREF
  int v28; // [rsp+8Ch] [rbp-4Dh] BYREF
  int v29; // [rsp+90h] [rbp-49h] BYREF
  struct _GUID *v30; // [rsp+98h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-29h]
  struct _GUID v34; // [rsp+B8h] [rbp-21h] BYREF
  GUID ActivityId; // [rsp+C8h] [rbp-11h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v33 = a4;
  v9 = a3;
  v10 = a2;
  ADAPTER_DISPLAY::CheckPendingReleaseVidPnOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v6 + 16) + 3160LL));
  if ( a3 )
  {
    if ( a3 != 7 )
      goto LABEL_3;
  }
  else if ( !*(_BYTE *)(a1 + 13) )
  {
    v9 = 7;
  }
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v16 = *(_QWORD *)(a1 + 16);
  v25 = 0LL;
  DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(v16 + 16), v17, 0LL, &v25);
  v24 = 0;
  v34 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
    (struct DXGGLOBAL *)((char *)Global + 305640),
    0,
    (enum _DXGK_RAPID_HPD_TYPE *)&v24,
    &v34,
    0LL);
  if ( (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000000080LL) )
  {
    v30 = &v34;
    v31 = v25;
    if ( a6 )
      v20 = a6[2].Data4[4];
    else
      v20 = -1;
    v27 = v20;
    p_ActivityId = &ActivityId;
    v28 = a5;
    v22 = *(_QWORD *)(a1 + 16);
    v32 = a4;
    if ( a6 )
      p_ActivityId = a6;
    v29 = v9;
    v23 = *(_QWORD *)(v22 + 16);
    v26 = *(_QWORD *)(v23 + 412);
    LODWORD(v25) = v10;
    LOWORD(v24) = 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
      v23,
      (__int64)&unk_140145BEF,
      (__int64)p_ActivityId,
      v19,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v29,
      (__int64)&v32,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v31,
      (__int64 *)&v30);
  }
LABEL_3:
  if ( v9 <= 6 )
  {
    if ( v9 != 6 )
    {
      v12 = (unsigned int)v9;
      if ( v9 )
      {
        if ( v9 == 1 || v9 == 2 )
        {
LABEL_12:
          if ( (unsigned int)v9 <= 3 )
            goto LABEL_13;
          goto LABEL_10;
        }
        v12 = (unsigned int)(v9 - 3);
        if ( v9 != 3 )
        {
          v12 = (unsigned int)(v9 - 4);
          if ( (unsigned int)v12 >= 2 )
          {
LABEL_37:
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3417;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Unknown monitor event was processed. This switch block should be updated to decide whether the mo"
                        "nitor uniqueness is affected.",
              3417LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_12;
          }
        }
      }
    }
LABEL_38:
    DxgkIncreaseMonitorUniqueness(v12);
    goto LABEL_12;
  }
  v12 = (unsigned int)(v9 - 7);
  if ( v9 == 7 )
    goto LABEL_38;
  if ( v9 != 8 && v9 != 9 )
  {
    v12 = (unsigned int)(v9 - 10);
    if ( v9 != 10 )
    {
      v12 = (unsigned int)(v9 - 11);
      if ( v9 != 11 )
      {
        if ( v9 == 12 )
          goto LABEL_10;
        goto LABEL_37;
      }
    }
    goto LABEL_38;
  }
LABEL_10:
  if ( (unsigned int)(v9 - 7) > 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3425;
  }
LABEL_13:
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v26, (struct DXGFASTMUTEX *)(a1 + 144));
  v13 = *(_QWORD **)(a1 + 64);
  for ( i = v13 == (_QWORD *)(a1 + 64); ; i = v13 == (_QWORD *)(a1 + 64) )
  {
    if ( i )
      v13 = 0LL;
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v26);
    if ( !v13 )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int, GUID *))v13[2])(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           (unsigned int)v10,
           v13[3],
           (unsigned int)v9,
           v33,
           a5,
           a6) < 0 )
    {
      WdLogSingleEntry4(2LL, v13[2], v13[3], v9, v10);
      WdLogGlobalForLineNumber = 3469;
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v26, (struct DXGFASTMUTEX *)(a1 + 144));
    v13 = (_QWORD *)*v13;
  }
  ADAPTER_DISPLAY::ReleasePendingVidPnSourceOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 3160LL));
  return 0LL;
}
