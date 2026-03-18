/*
 * XREFs of ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D4474
 * Callers:
 *     ?SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z @ 0x1401CD880 (-SetPolicy@tagWINDOWSTATION@@QEAAXW4WindowStationPolicy@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ApiSetEditionProcessForegroundPriorityChanged @ 0x14015C750 (ApiSetEditionProcessForegroundPriorityChanged.c)
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 */

void __fastcall ForegroundBoost::SyncBoostAllProcesses(ForegroundBoost *this, int a2, int a3)
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
  __int64 v13; // rdx
  _QWORD *i; // rsi
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  bool v18; // r14
  bool v19; // r15
  int v20; // edi
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  bool v25; // r14
  bool v26; // r15
  int v27; // edi
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // di
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx

  v3 = W32GetUserSessionState((_DWORD)this, a2, a3) + 18904;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v6 = (int)WPP_GLOBAL_Control;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
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
      23,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids);
  }
  for ( i = *(_QWORD **)(W32GetUserSessionState(v6, v4, v5) + 36408); i; i = (_QWORD *)i[139] )
  {
    if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass((__int64)i, v13) == 1 )
    {
      v18 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = *((_DWORD *)i + 14);
        v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
        LOBYTE(v22) = v19;
        LOBYTE(v23) = v18;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 69136),
          4,
          13,
          24,
          (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
          v20);
      }
      v24 = 1LL;
    }
    else
    {
      v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = *((_DWORD *)i + 14);
        v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
        LOBYTE(v29) = v26;
        LOBYTE(v30) = v25;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 69136),
          4,
          13,
          25,
          (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
          v27);
      }
      PsSetProcessPriorityByClass(*i, 1LL);
      v24 = 2LL;
    }
    PsSetProcessPriorityByClass(*i, v24);
    ApiSetEditionProcessForegroundPriorityChanged((__int64)i, 1u);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v7 = 0;
  }
  v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v13, v15);
    LOBYTE(v33) = v31;
    LOBYTE(v34) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v33,
      *(_QWORD *)(v32 + 69136),
      4,
      13,
      26,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids);
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
