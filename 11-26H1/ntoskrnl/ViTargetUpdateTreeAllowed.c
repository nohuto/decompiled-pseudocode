/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x140C2F954
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C26330 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfTargetFreeContiguousMemory @ 0x140C2F384 (VfTargetFreeContiguousMemory.c)
 *     ViTargetAddToCounter @ 0x140C2F5A8 (ViTargetAddToCounter.c)
 *     ViTargetIncrementCounter @ 0x140C2F778 (ViTargetIncrementCounter.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C342A0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140C39320 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140C39400 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140C394C0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140C395C0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140C396B0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140C39CA0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140C39D80 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140C39E80 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140C39F80 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C3A050 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C3A30C (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140C3AEA4 (ViFaultsInjectionNotification.c)
 * Callees:
 *     <none>
 */

_BOOL8 ViTargetUpdateTreeAllowed()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return ViTargetInitialized != 0;
  return result;
}
