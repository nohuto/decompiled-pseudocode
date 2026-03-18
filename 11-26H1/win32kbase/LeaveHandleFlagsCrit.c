/*
 * XREFs of LeaveHandleFlagsCrit @ 0x14013F440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveHandleFlagsCrit(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(UserSessionState + 19840));
}
