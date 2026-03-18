/*
 * XREFs of EnterPowerCrit @ 0x140149AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterPowerCrit(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 512));
}
