/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x1401D3798
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401D49C4 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::CanAdjustPriority(__int64 a1)
{
  char v2; // si
  bool v3; // bp
  unsigned __int8 ThreadId; // al
  __int64 v5; // rcx
  char v6; // di
  int v7; // ebx
  int v8; // edx
  int v9; // r8d
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0xC) == 0 )
    return 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)a1);
    v5 = *(_QWORD *)(a1 + 456);
    v6 = ThreadId;
    v7 = *(_DWORD *)(v5 + 56);
    UserSessionState = W32GetUserSessionState(v5, v8, v9);
    LOBYTE(v11) = v3;
    LOBYTE(v12) = v2;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      13,
      10,
      (__int64)&WPP_385c7bc0c4aa39805304af27af14d1cc_Traceguids,
      v7,
      v6);
  }
  return 0;
}
