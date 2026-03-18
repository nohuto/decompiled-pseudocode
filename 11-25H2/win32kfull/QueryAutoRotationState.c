/*
 * XREFs of QueryAutoRotationState @ 0x140266D10
 * Callers:
 *     NtUserGetAutoRotationState @ 0x1401E0600 (NtUserGetAutoRotationState.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x14020BB84 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 * Callees:
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x140266D38 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 */

__int64 __fastcall QueryAutoRotationState(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CRotationMgr::QueryAutoRotationState(*(_QWORD *)(UserSessionState + 66072));
}
