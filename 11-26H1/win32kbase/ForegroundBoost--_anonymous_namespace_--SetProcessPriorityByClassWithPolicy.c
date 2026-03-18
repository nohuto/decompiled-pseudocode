/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401D42F4
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401D3C04 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 */

__int64 __fastcall ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  int v5; // edx
  int v6; // r8d
  char v8; // di
  bool v9; // bl
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // si
  int v15; // ebx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  if ( ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(a1, a2, a3) )
  {
    PsSetProcessPriorityByClass(*(_QWORD *)a1, a2);
    return 1LL;
  }
  else
  {
    v8 = 1;
    v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69136),
        3,
        13,
        11,
        (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v8 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *(_DWORD *)(a1 + 56);
      v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v6);
      LOBYTE(v17) = v14;
      LOBYTE(v18) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69136),
        4,
        13,
        12,
        (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
        v15);
    }
    return 2LL;
  }
}
