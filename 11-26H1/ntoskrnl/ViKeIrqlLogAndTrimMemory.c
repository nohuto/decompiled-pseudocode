/*
 * XREFs of ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C26330 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C342A0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140C394C0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140C395C0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeSynchronizeExecution @ 0x140C39CA0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140C39D80 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140C39E80 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C3A050 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C3A30C (ViKeAcquireSpinLockCommon.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140C4DA70 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140C497C8 (MmVerifierTrimMemory.c)
 *     VfKeIrqlLogRaise @ 0x140C4CD5C (VfKeIrqlLogRaise.c)
 */

__int64 __fastcall ViKeIrqlLogAndTrimMemory(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi

  v2 = a1;
  if ( !ViIrqlTrimAndLog )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  LOBYTE(a2) = a1;
  LOBYTE(a1) = CurrentIrql;
  v4 = VfKeIrqlLogRaise(a1, a2);
  if ( KeAreInterruptsEnabled() && CurrentIrql < 2u && v2 >= 2u )
  {
    if ( ViIrqlTrimAndLog )
      MmVerifierTrimMemory((unsigned __int8)VfTrimControl);
  }
  return v4;
}
