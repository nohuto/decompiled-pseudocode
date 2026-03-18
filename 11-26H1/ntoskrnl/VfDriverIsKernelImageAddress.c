/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140C46BA8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C20324 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     MmIsVerifierEnabled @ 0x140C21200 (MmIsVerifierEnabled.c)
 *     ViTargetIncrementCounter @ 0x140C29768 (ViTargetIncrementCounter.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C2E290 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfPendingShouldForce @ 0x140C3004C (VfPendingShouldForce.c)
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
 *     VfTargetDriversGetVerifierData @ 0x140C46B58 (VfTargetDriversGetVerifierData.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
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
