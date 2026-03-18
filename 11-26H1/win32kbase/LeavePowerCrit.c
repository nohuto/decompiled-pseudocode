/*
 * XREFs of LeavePowerCrit @ 0x140149300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LeavePowerCrit(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(UserSessionState + 512));
}
