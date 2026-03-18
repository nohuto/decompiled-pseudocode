/*
 * XREFs of VfAvlCleanupLockContext @ 0x1403B84FC
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403B7A04 (VfTargetDriversGetNode.c)
 *     VfTargetDriversAdd @ 0x1403B7B18 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
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
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403B8560 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

__int64 __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi

  if ( (*(_BYTE *)(a1 + 12) & 2) != 0 )
    result = ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
  {
    result = *(unsigned int *)(a1 + 16);
    if ( (result & 0xF) == 0 )
    {
      v3 = *(unsigned __int8 *)(a1 + 8);
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 8));
      __writecr8(v3);
      *(_BYTE *)(a1 + 12) &= ~1u;
      *(_BYTE *)(a1 + 8) = 0;
    }
  }
  return result;
}
