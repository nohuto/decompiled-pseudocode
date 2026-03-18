/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x140C29944
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C20324 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfTargetFreeContiguousMemory @ 0x140C29374 (VfTargetFreeContiguousMemory.c)
 *     ViTargetAddToCounter @ 0x140C29598 (ViTargetAddToCounter.c)
 *     ViTargetIncrementCounter @ 0x140C29768 (ViTargetIncrementCounter.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C2E290 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140C33310 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140C333F0 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140C334B0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140C335B0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140C336A0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140C33C90 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140C33D70 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140C33E70 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140C33F70 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C34040 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C342FC (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140C34E94 (ViFaultsInjectionNotification.c)
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
