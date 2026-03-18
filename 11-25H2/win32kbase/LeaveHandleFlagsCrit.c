/*
 * XREFs of LeaveHandleFlagsCrit @ 0x1400F8B60
 * Callers:
 *     UserDeleteW32Process @ 0x140162C50 (UserDeleteW32Process.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveHandleFlagsCrit(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(UserSessionState + 19808));
}
