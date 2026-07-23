/*
 * XREFs of VfAvlCleanupLockContext @ 0x1403C23FC
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 *     DifEnumeratePluginData @ 0x140644640 (DifEnumeratePluginData.c)
 *     VfTargetRecoverIoCallbacks @ 0x140645208 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x14064527C (VfTargetReplaceIoCallbacks.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C26330 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140C27FB0 (VfAvlDeleteAllTreeNodes.c)
 *     VfTargetDriversDisableVerifier @ 0x140C2EF1C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C2EFA8 (VfTargetDriversEnableVerifier.c)
 *     VfTargetDriversGetCounters @ 0x140C2F054 (VfTargetDriversGetCounters.c)
 *     VfTargetEtwRegister @ 0x140C2F164 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140C2F258 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140C2F384 (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140C2F414 (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140C2F5A8 (ViTargetAddToCounter.c)
 *     ViTargetIncrementCounter @ 0x140C2F778 (ViTargetIncrementCounter.c)
 *     ViTargetWMIDeregister @ 0x140C2F978 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C342A0 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjAdd @ 0x140C368A8 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140C3693C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140C36AC0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C36DA8 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140C36E48 (ViRemLockFindSurrogate.c)
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
 *     VfWmiVerifyIrpStackUpward @ 0x140C41510 (VfWmiVerifyIrpStackUpward.c)
 *     VfLookasideAdd @ 0x140C44C64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C44D88 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140C463D0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140C466BC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C467E0 (VfTrackResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140C4B3D8 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForResource @ 0x140C4C1CC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C4C350 (VfCheckForLookaside.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403C2460 (ViAvlReleaseTableLockFromDpcLevel.c)
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
