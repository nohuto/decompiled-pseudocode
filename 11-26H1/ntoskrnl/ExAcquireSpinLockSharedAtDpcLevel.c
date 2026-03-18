/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0
 * Callers:
 *     KiVpBackingThreadYieldExecution @ 0x1402385C4 (KiVpBackingThreadYieldExecution.c)
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     MiGetPartitionNodeInformation @ 0x140258FD8 (MiGetPartitionNodeInformation.c)
 *     KiSetLegacyAffinityThread @ 0x14025A52C (KiSetLegacyAffinityThread.c)
 *     MmIsFileObjectAPagingFile @ 0x14026C320 (MmIsFileObjectAPagingFile.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiEmptyDecayClusterTimers @ 0x1402994DC (MiEmptyDecayClusterTimers.c)
 *     MiLockPageListAndLastPage @ 0x14029B840 (MiLockPageListAndLastPage.c)
 *     MiKernelStackVaToStackNode @ 0x1402A2024 (MiKernelStackVaToStackNode.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1402C9C98 (MiGetSlabRepurposedStandbyListWorker.c)
 *     MiCheckUserVirtualAddress @ 0x1402D1920 (MiCheckUserVirtualAddress.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiLocateSubsectionNode @ 0x1402E48B0 (MiLocateSubsectionNode.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     MiIdentifyProtoPage @ 0x1402F1EE0 (MiIdentifyProtoPage.c)
 *     MiReacquireWalkLocks @ 0x140301220 (MiReacquireWalkLocks.c)
 *     MiCreateCombineAnchor @ 0x140307B54 (MiCreateCombineAnchor.c)
 *     MiGetPageFromSlabAllocator @ 0x14033A4BC (MiGetPageFromSlabAllocator.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDecommitRemoveEnclavePageForce @ 0x140341DE0 (MiDecommitRemoveEnclavePageForce.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     MmLockLoadedModuleListShared @ 0x140366E14 (MmLockLoadedModuleListShared.c)
 *     MiAbortCombineScan @ 0x1403691D0 (MiAbortCombineScan.c)
 *     MiLockPageListAndFirstPage @ 0x140369804 (MiLockPageListAndFirstPage.c)
 *     MiFreePageToSlabAllocator @ 0x140369964 (MiFreePageToSlabAllocator.c)
 *     MiLocateCloneAddress @ 0x14036BA4C (MiLocateCloneAddress.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiCheckSlabPage @ 0x14038A86C (MiCheckSlabPage.c)
 *     MiObtainPagefileHashes @ 0x14038BF5C (MiObtainPagefileHashes.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14038ED10 (MiReferenceControlAreaFileWithTag.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140397670 (vDbgPrintExWithPrefixInternalHelper.c)
 *     MiTransientCombineAddress @ 0x1403A6530 (MiTransientCombineAddress.c)
 *     ViAvlAcquireTableLockAtDpcLevel @ 0x1403B8490 (ViAvlAcquireTableLockAtDpcLevel.c)
 *     MmUnmapReservedMapping @ 0x1403C1C70 (MmUnmapReservedMapping.c)
 *     KeSetUserGroupAffinityThread @ 0x1403E87F4 (KeSetUserGroupAffinityThread.c)
 *     MiInitializeEngineWorkAffinity @ 0x1403E94E4 (MiInitializeEngineWorkAffinity.c)
 *     MiObtainParkedCoreMasks @ 0x1403E9CF8 (MiObtainParkedCoreMasks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403F65F0 (KiActivateWaiterQueueWithThreadLock.c)
 *     MiPageFileLargestBitmapsRun @ 0x140405994 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x140405E3C (MiFindFreePageFileSpace.c)
 *     MiGetPrototypePteRanges @ 0x14044BB34 (MiGetPrototypePteRanges.c)
 *     MiProtoFaultLog @ 0x140457240 (MiProtoFaultLog.c)
 *     InsertEventEntryInLookUpTable @ 0x140459DC4 (InsertEventEntryInLookUpTable.c)
 *     VmpQueryAccessedState @ 0x140464934 (VmpQueryAccessedState.c)
 *     MiGetSharedProtosAtDpc @ 0x14046A430 (MiGetSharedProtosAtDpc.c)
 *     MiAgeTargetedWorkingSet @ 0x140476D30 (MiAgeTargetedWorkingSet.c)
 *     ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x1404856CC (-KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE.c)
 *     MiStopHugePageAccessor @ 0x14048E1B4 (MiStopHugePageAccessor.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x1404935B8 (MiDoesControlAreaHaveUserWritableReferences.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049754C (MiCaptureWriteWatchDirtyBit.c)
 *     MiSystemImageHasPrivateFixups @ 0x140499228 (MiSystemImageHasPrivateFixups.c)
 *     MiBackgroundZeroComplete @ 0x1404A543C (MiBackgroundZeroComplete.c)
 *     MiComputeHardAgingPercent @ 0x1404B1DCC (MiComputeHardAgingPercent.c)
 *     KiRundownMutants @ 0x1404B1F80 (KiRundownMutants.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404B5970 (MmMapLockedPagesWithReservedMapping.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiInsertSlabEntry @ 0x1404C33F4 (MiInsertSlabEntry.c)
 *     MiIsCalibrationWorthwhile @ 0x1404CACF0 (MiIsCalibrationWorthwhile.c)
 *     MiCreateCommit @ 0x1404CF830 (MiCreateCommit.c)
 *     MiGenerateAccessViolation @ 0x1404ED878 (MiGenerateAccessViolation.c)
 *     MiMergeNewProcessAffinity @ 0x1404FED34 (MiMergeNewProcessAffinity.c)
 *     MiGetOptimalEngineMix @ 0x140510C58 (MiGetOptimalEngineMix.c)
 *     MiFaultRedirectToProto @ 0x140511920 (MiFaultRedirectToProto.c)
 *     MiFindOptimalEngineToAddThread @ 0x14051F998 (MiFindOptimalEngineToAddThread.c)
 *     VmpInvalidateOutstandingFaults @ 0x14052233C (VmpInvalidateOutstandingFaults.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x1405280BC (MiSuitableZeroingProcessorAvailable.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E5BB8 (KiUpdateProcessAvailableCpuState.c)
 *     DbgEnumerateCallback @ 0x140617F00 (DbgEnumerateCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14061819C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x14061A97C (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x140641CBC (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     IovAiAcquireDbLockAtDpcLevelSafe @ 0x140641E40 (IovAiAcquireDbLockAtDpcLevelSafe.c)
 *     CarAcquireDbLockAtDpcLevelSafe @ 0x14064C038 (CarAcquireDbLockAtDpcLevelSafe.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x14064D16C (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406EBAD4 (MiGetPageInHugePageBadStatus.c)
 *     MiLockIoPfnTree @ 0x1406F4668 (MiLockIoPfnTree.c)
 *     MiResolveMappedFileFaultGetCopyExtents @ 0x1406F7854 (MiResolveMappedFileFaultGetCopyExtents.c)
 *     MiFindPageFileMemoryExtent @ 0x14070CB30 (MiFindPageFileMemoryExtent.c)
 *     MiGetPrototypePteBoundaries @ 0x14070FFA4 (MiGetPrototypePteBoundaries.c)
 *     ViDeadlockDetectionLock @ 0x140C37460 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // r8
  signed __int32 v2; // eax
  __int64 v3; // rdx
  signed __int32 v4; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
