/*
 * XREFs of EnterHandleFlagsCrit @ 0x14013CBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterHandleFlagsCrit(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 19840));
}
