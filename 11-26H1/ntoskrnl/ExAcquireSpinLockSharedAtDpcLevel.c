/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030
 * Callers:
 *     KiVpBackingThreadYieldExecution @ 0x140239F24 (KiVpBackingThreadYieldExecution.c)
 *     MiWalkLevelCompleted @ 0x140249800 (MiWalkLevelCompleted.c)
 *     MiGetPartitionNodeInformation @ 0x14025A7B8 (MiGetPartitionNodeInformation.c)
 *     KiSetLegacyAffinityThread @ 0x14025BD0C (KiSetLegacyAffinityThread.c)
 *     MmIsFileObjectAPagingFile @ 0x14026B890 (MmIsFileObjectAPagingFile.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiEmptyDecayClusterTimers @ 0x140298A3C (MiEmptyDecayClusterTimers.c)
 *     MiLockPageListAndLastPage @ 0x14029ADA0 (MiLockPageListAndLastPage.c)
 *     MiKernelStackVaToStackNode @ 0x1402A1574 (MiKernelStackVaToStackNode.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1402ABA58 (MiGetSlabRepurposedStandbyListWorker.c)
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiIdentifyProtoPage @ 0x1402D3F60 (MiIdentifyProtoPage.c)
 *     MiReacquireWalkLocks @ 0x1402E32A0 (MiReacquireWalkLocks.c)
 *     MiCreateCombineAnchor @ 0x1402E9BD4 (MiCreateCombineAnchor.c)
 *     KeSetUserGroupAffinityThread @ 0x1402F56D4 (KeSetUserGroupAffinityThread.c)
 *     MiInitializeEngineWorkAffinity @ 0x1402F63C4 (MiInitializeEngineWorkAffinity.c)
 *     MiObtainParkedCoreMasks @ 0x1402F6BD8 (MiObtainParkedCoreMasks.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDecommitRemoveEnclavePageForce @ 0x140343E60 (MiDecommitRemoveEnclavePageForce.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     MiLockPageListAndFirstPage @ 0x14036B5A4 (MiLockPageListAndFirstPage.c)
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiCheckSlabPage @ 0x14038C61C (MiCheckSlabPage.c)
 *     MiObtainPagefileHashes @ 0x14038DD0C (MiObtainPagefileHashes.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1403993F0 (vDbgPrintExWithPrefixInternalHelper.c)
 *     MiTransientCombineAddress @ 0x1403A8290 (MiTransientCombineAddress.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403C2390 (ViAvlAcquireTableLockAtDpcLevel.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0 (KiActivateWaiterQueueWithThreadLock.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403FEA88 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiGetPrototypePteRanges @ 0x140443C58 (MiGetPrototypePteRanges.c)
 *     MiProtoFaultLog @ 0x14044EAB0 (MiProtoFaultLog.c)
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
 *     VmpQueryAccessedState @ 0x14045D8F4 (VmpQueryAccessedState.c)
 *     MiGetSharedProtosAtDpc @ 0x140463BB0 (MiGetSharedProtosAtDpc.c)
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 *     ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x14047F03C (-KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE.c)
 *     MiStopHugePageAccessor @ 0x140487CF4 (MiStopHugePageAccessor.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x14048CB48 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     MiSystemImageHasPrivateFixups @ 0x140492D78 (MiSystemImageHasPrivateFixups.c)
 *     MiBackgroundZeroComplete @ 0x14049EACC (MiBackgroundZeroComplete.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 *     KiRundownMutants @ 0x1404AB48C (KiRundownMutants.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 *     MiInsertSlabEntry @ 0x1404BCC44 (MiInsertSlabEntry.c)
 *     MiIsCalibrationWorthwhile @ 0x1404C4720 (MiIsCalibrationWorthwhile.c)
 *     MiCreateCommit @ 0x1404C9260 (MiCreateCommit.c)
 *     MiGenerateAccessViolation @ 0x1404E6E58 (MiGenerateAccessViolation.c)
 *     MiMergeNewProcessAffinity @ 0x1404F8524 (MiMergeNewProcessAffinity.c)
 *     MiGetOptimalEngineMix @ 0x14050A6C8 (MiGetOptimalEngineMix.c)
 *     MiFaultRedirectToProto @ 0x14050B390 (MiFaultRedirectToProto.c)
 *     MiFindOptimalEngineToAddThread @ 0x14052203C (MiFindOptimalEngineToAddThread.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405249A8 (VmpInvalidateOutstandingFaults.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x14052A72C (MiSuitableZeroingProcessorAvailable.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     DbgEnumerateCallback @ 0x14061AF50 (DbgEnumerateCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14061B1EC (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x14061D9CC (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x14064589C (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140645A20 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14064FC18 (CarAcquireDbLockAtDpcLevelSafe.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x140650D4C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406F0774 (MiGetPageInHugePageBadStatus.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 *     MiResolveMappedFileFaultGetCopyExtents @ 0x1406FC4C4 (MiResolveMappedFileFaultGetCopyExtents.c)
 *     MiFindPageFileMemoryExtent @ 0x1407117E0 (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x140714CA0 (MiGetPrototypePteBoundaries.c)
 *     ViDeadlockDetectionLock @ 0x140C3D470 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  signed __int32 v2; // eax
  __int64 v3; // rdx
  signed __int32 v4; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw((const void *)SpinLock);
    v2 = *SpinLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v3 = (unsigned int)(v2 + 1);
      v4 = v2;
      v2 = _InterlockedCompareExchange(SpinLock, v3, v2);
      if ( v4 == v2 )
        break;
      if ( v2 < 0 )
      {
        LOBYTE(v3) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)SpinLock, v3, v1);
        return;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
}
