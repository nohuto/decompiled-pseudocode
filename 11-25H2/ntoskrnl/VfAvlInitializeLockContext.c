/*
 * XREFs of VfAvlInitializeLockContext @ 0x14049CD28
 * Callers:
 *     DifEnumeratePluginData @ 0x1406045C0 (DifEnumeratePluginData.c)
 *     VfTargetRecoverIoCallbacks @ 0x140605220 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x140605290 (VfTargetReplaceIoCallbacks.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B73BCC (VfAvlDeleteAllTreeNodes.c)
 *     VfTargetDriversDisableVerifier @ 0x140B7B2FC (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140B7B384 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140B7B4CC (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140B7B5C0 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140B7B6EC (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140B7B77C (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140B7B910 (ViTargetAddToCounter.c)
 *     ViTargetWMIDeregister @ 0x140B7BC58 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B7FC00 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjAdd @ 0x140B82424 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140B824BC (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B82640 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B82924 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140B829C4 (ViRemLockFindSurrogate.c)
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
 *     VfSuspectDriversGetVerifierInformation @ 0x140B8A8B4 (VfSuspectDriversGetVerifierInformation.c)
 *     VfLookasideAdd @ 0x140B8FE64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140B8FF88 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140B915C0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140B918AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140B919D0 (VfTrackResource.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140B96230 (VfWmiVerifyIrpStackUpward.c)
 *     VfCheckForResource @ 0x140B971F8 (VfCheckForResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140B97B1C (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140B97CB0 (VfCheckForLookaside.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 12) = 4;
  return result;
}
