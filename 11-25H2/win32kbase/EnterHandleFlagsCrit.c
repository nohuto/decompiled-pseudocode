/*
 * XREFs of EnterHandleFlagsCrit @ 0x1400F8470
 * Callers:
 *     UserDeleteW32Process @ 0x140162C50 (UserDeleteW32Process.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterHandleFlagsCrit(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 19808));
}
