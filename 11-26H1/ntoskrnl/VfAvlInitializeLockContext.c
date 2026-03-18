/*
 * XREFs of VfAvlInitializeLockContext @ 0x1404DCB40
 * Callers:
 *     DifEnumeratePluginData @ 0x140640A60 (DifEnumeratePluginData.c)
 *     VfTargetRecoverIoCallbacks @ 0x140641628 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x14064169C (VfTargetReplaceIoCallbacks.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C20324 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C21FA0 (VfAvlDeleteAllTreeNodes.c)
 *     VfTargetDriversDisableVerifier @ 0x140C28F0C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C28F98 (VfTargetDriversEnableVerifier.c)
 *     VfTargetDriversGetCounters @ 0x140C29044 (VfTargetDriversGetCounters.c)
 *     VfTargetEtwRegister @ 0x140C29154 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140C29248 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140C29374 (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140C29404 (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140C29598 (ViTargetAddToCounter.c)
 *     ViTargetIncrementCounter @ 0x140C29768 (ViTargetIncrementCounter.c)
 *     ViTargetWMIDeregister @ 0x140C29968 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C2E290 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjAdd @ 0x140C30898 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140C3092C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140C30AB0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C30D98 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140C30E38 (ViRemLockFindSurrogate.c)
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
 *     VfWmiVerifyIrpStackUpward @ 0x140C3B500 (VfWmiVerifyIrpStackUpward.c)
 *     VfLookasideAdd @ 0x140C3EC54 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C3ED78 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140C403C0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140C406AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C407D0 (VfTrackResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140C453C8 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForResource @ 0x140C461BC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C46340 (VfCheckForLookaside.c)
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
