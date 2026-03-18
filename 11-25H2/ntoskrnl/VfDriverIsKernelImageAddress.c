/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140B97EEC
 * Callers:
 *     MmIsVerifierEnabled @ 0x140B72D70 (MmIsVerifierEnabled.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B7FC00 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfPendingShouldForce @ 0x140B81BE8 (VfPendingShouldForce.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140B84F50 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B85008 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140B85130 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B851F0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B852F0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140B853E0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140B859D0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B85AB0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B85BB0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140B85CB0 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B85EB0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B860E0 (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140B86C0C (ViFaultsInjectionNotification.c)
 *     VfTargetDriversGetVerifierData @ 0x140B97E9C (VfTargetDriversGetVerifierData.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 *     VfCheckUserHandle @ 0x140B99248 (VfCheckUserHandle.c)
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
