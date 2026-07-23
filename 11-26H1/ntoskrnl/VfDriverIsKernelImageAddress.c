/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140C4CBB8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C26330 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     MmIsVerifierEnabled @ 0x140C27210 (MmIsVerifierEnabled.c)
 *     ViTargetIncrementCounter @ 0x140C2F778 (ViTargetIncrementCounter.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C342A0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfPendingShouldForce @ 0x140C3605C (VfPendingShouldForce.c)
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
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 *     VfCheckUserHandle @ 0x140C4DC48 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( ViDriverKernelBase )
  {
    if ( a1 >= ViDriverKernelBase )
      return a1 < ViDriverKernelEnd;
  }
  return result;
}
