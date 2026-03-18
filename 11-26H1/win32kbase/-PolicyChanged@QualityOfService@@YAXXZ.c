/*
 * XREFs of ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401CC5A8
 * Callers:
 *     ?ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401CD7E0 (-ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 *     ?SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401CD880 (-SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14017BF20 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4 (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 */

void __fastcall QualityOfService::PolicyChanged(QualityOfService *this, int a2, int a3)
{
  CTouchProcessor *v3; // rcx
  char v4; // di
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  int v12; // r8d
  _QWORD **v13; // r14
  _QWORD *i; // rsi
  _QWORD *v15; // rbx
  int PsProcessWindowState; // r12d
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  bool v20; // bp
  bool v21; // r15
  int v22; // ebx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // [rsp+50h] [rbp-38h] BYREF
  int v31; // [rsp+58h] [rbp-30h]
  int v32; // [rsp+5Ch] [rbp-2Ch]
  char v33; // [rsp+90h] [rbp+8h] BYREF
  int v34; // [rsp+98h] [rbp+10h] BYREF

  v3 = WPP_GLOBAL_Control;
  v4 = 1;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      18,
      (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
  {
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v11;
  }
  v13 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 1208) + 41344LL) + 24LL);
  for ( i = *v13; i != v13; i = (_QWORD *)*i )
  {
    v15 = i - 142;
    if ( (int)tagPROCESSINFO::GetPsProcessWindowState((__int64)(i - 142), 1) > 1 )
    {
      PsProcessWindowState = tagPROCESSINFO::GetPsProcessWindowState((__int64)(i - 142), 0);
      if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x200000000004LL) )
      {
        v19 = *((unsigned int *)v15 + 14);
        v33 = PsProcessWindowState;
        v34 = v19;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v19,
          byte_140281EC3,
          v17,
          v18,
          (__int64)&v34,
          (__int64)&v33);
      }
      v30 = *v15;
      v31 = PsProcessWindowState;
      v32 = 0;
      PsSetProcessesWindowState(1LL, &v30);
      v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *((_DWORD *)v15 + 14);
        v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
        LOBYTE(v24) = v21;
        LOBYTE(v25) = v20;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v24,
          *(_QWORD *)(v23 + 69136),
          4,
          14,
          19,
          (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids,
          v22,
          PsProcessWindowState);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
    LOBYTE(v28) = v26;
    LOBYTE(v29) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v28,
      *(_QWORD *)(v27 + 69136),
      4,
      14,
      20,
      (__int64)&WPP_f64b18c5451f34bf0a4a7e3a4e877b23_Traceguids);
  }
}
