/*
 * XREFs of ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D3898
 * Callers:
 *     ?ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401CD7E0 (-ClearPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14015C750 (ApiSetEditionProcessForegroundPriorityChanged.c)
 */

void __fastcall ForegroundBoost::DeboostAllProcesses(ForegroundBoost *this, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // r8d
  int v6; // ecx
  char v7; // bp
  bool v8; // di
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // edx
  __int64 i; // rsi
  int v15; // r8d
  bool v16; // r14
  bool v17; // r15
  int v18; // edi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx

  v3 = W32GetUserSessionState((_DWORD)this, a2, a3) + 18904;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v6 = (int)WPP_GLOBAL_Control;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      13,
      20,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids);
  }
  for ( i = *(_QWORD *)(W32GetUserSessionState(v6, v4, v5) + 36408); i; i = *(_QWORD *)(i + 1112) )
  {
    v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *(_DWORD *)(i + 56);
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v15);
      LOBYTE(v20) = v17;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69136),
        4,
        13,
        21,
        (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
        v18);
    }
    PsSetProcessPriorityByClass(*(_QWORD *)i, 0LL);
    ApiSetEditionProcessForegroundPriorityChanged(i, 0);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v15);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 69136),
      4,
      13,
      22,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids);
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
