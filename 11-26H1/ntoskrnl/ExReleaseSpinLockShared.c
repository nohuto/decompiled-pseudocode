/*
 * XREFs of ExReleaseSpinLockShared @ 0x14026CEE0
 * Callers:
 *     IopQueueWorkItemProlog @ 0x140202F00 (IopQueueWorkItemProlog.c)
 *     PsGetNextPartitionUnsafe @ 0x14025839C (PsGetNextPartitionUnsafe.c)
 *     MiGetPartitionNodeInformation @ 0x140258FD8 (MiGetPartitionNodeInformation.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026CAD0 (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026CD00 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x14026E950 (PsGetEffectiveContainerId.c)
 *     ExpAddTagForBigPages @ 0x14029B070 (ExpAddTagForBigPages.c)
 *     MiKernelStackVaToStackNode @ 0x1402A2024 (MiKernelStackVaToStackNode.c)
 *     MiGetControlAreaPtes @ 0x1402E3790 (MiGetControlAreaPtes.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiGetPageFromSlabAllocator @ 0x14033A4BC (MiGetPageFromSlabAllocator.c)
 *     ExRemovePoolTag @ 0x1403447D0 (ExRemovePoolTag.c)
 *     ExpCheckForResource @ 0x140344B48 (ExpCheckForResource.c)
 *     RtlpCSparseBitmapUnlock @ 0x140351A4C (RtlpCSparseBitmapUnlock.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x140357750 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     MiStartingOffsetNeedLock @ 0x14036D190 (MiStartingOffsetNeedLock.c)
 *     IoQueueWorkItemEx @ 0x1403819A0 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x140382430 (IoQueueWorkItem.c)
 *     MiCheckSlabPage @ 0x14038A86C (MiCheckSlabPage.c)
 *     MiApplyDebuggerPatches @ 0x14038C7F8 (MiApplyDebuggerPatches.c)
 *     PopPepProcessEvent @ 0x1403AFCF0 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1403B1784 (PopPepComponentSetLatency.c)
 *     PopPepLockActivityLink @ 0x1403B3A70 (PopPepLockActivityLink.c)
 *     PopFxLockDevice @ 0x1403B74A4 (PopFxLockDevice.c)
 *     MmUnmapReservedMapping @ 0x1403C1C70 (MmUnmapReservedMapping.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403CB24C (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     MiObtainParkedCoreMasks @ 0x1403E9CF8 (MiObtainParkedCoreMasks.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403F54DC (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     MiPageFileLargestBitmapsRun @ 0x140405994 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x140405E3C (MiFindFreePageFileSpace.c)
 *     InsertEventEntryInLookUpTable @ 0x140459DC4 (InsertEventEntryInLookUpTable.c)
 *     PsGetWorkOnBehalfThread @ 0x14045F7E0 (PsGetWorkOnBehalfThread.c)
 *     MiTrimSection @ 0x1404651E0 (MiTrimSection.c)
 *     HalpIommuFlushDmaDomain @ 0x14047B404 (HalpIommuFlushDmaDomain.c)
 *     IommupHvFlushDomainTbs @ 0x14047BC18 (IommupHvFlushDomainTbs.c)
 *     VmpPrefetchVirtualAddresses @ 0x14049B1E8 (VmpPrefetchVirtualAddresses.c)
 *     MiGetChannelInformation @ 0x1404A43F4 (MiGetChannelInformation.c)
 *     MiComputeHardAgingPercent @ 0x1404B1DCC (MiComputeHardAgingPercent.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404B5970 (MmMapLockedPagesWithReservedMapping.c)
 *     MiWorkingSetManager @ 0x1404BE000 (MiWorkingSetManager.c)
 *     VmColdPagesHint @ 0x1404BE180 (VmColdPagesHint.c)
 *     MiPartitionTrimmedEnough @ 0x1404C212C (MiPartitionTrimmedEnough.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404C475C (MiComputeUnusedSegmentReduction.c)
 *     VmpSplitMemoryRange @ 0x1404C8B68 (VmpSplitMemoryRange.c)
 *     MiIsCalibrationWorthwhile @ 0x1404CACF0 (MiIsCalibrationWorthwhile.c)
 *     MiCreateCommit @ 0x1404CF830 (MiCreateCommit.c)
 *     MiReferencePfBackedSection @ 0x1404D1764 (MiReferencePfBackedSection.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1404D1FF4 (PopPepGetDevicePlatformStateDependents.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404DC920 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404E5274 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404E8120 (PopPepGetComponentVetoMasks.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1404EBE80 (MiAbsorbPossibleEngineChanges.c)
 *     MiGenerateAccessViolation @ 0x1404ED878 (MiGenerateAccessViolation.c)
 *     MiGetPrivatePageCount @ 0x1404EE528 (MiGetPrivatePageCount.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404F4CE8 (PopPepGetDeviceVetoMasks.c)
 *     MiUpdateEngineAffinities @ 0x1404FDD1C (MiUpdateEngineAffinities.c)
 *     MiInitializeCachedExtentWalker @ 0x1405044E8 (MiInitializeCachedExtentWalker.c)
 *     MiTransientPageListWriter @ 0x14050BC30 (MiTransientPageListWriter.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiGetOptimalEngineMix @ 0x140510C58 (MiGetOptimalEngineMix.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x1405280BC (MiSuitableZeroingProcessorAvailable.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140529F94 (SepValidateAndCopyGlobalEntry.c)
 *     MiGetListOfPendingBadPages @ 0x14052AB58 (MiGetListOfPendingBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x14052D548 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     IommupDomainDetachPasidDevice @ 0x140588288 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140592A90 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x140611864 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140611AE4 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140615D38 (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140647EC4 (ViIrpDatabaseReleaseLockShared.c)
 *     VmpAccessFaultBatch @ 0x1406C09D0 (VmpAccessFaultBatch.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C1C10 (VmpUpdateCommitStateMemoryRange.c)
 *     VmpPinMemoryRanges @ 0x1406C1F74 (VmpPinMemoryRanges.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406ED674 (MiReleasePartitionHugeIoSpace.c)
 *     MiUnlockIoPfnTree @ 0x1406F4E8C (MiUnlockIoPfnTree.c)
 *     MiDeleteAwePageTables @ 0x1407011B0 (MiDeleteAwePageTables.c)
 *     MiCloneWriteWatch @ 0x140703194 (MiCloneWriteWatch.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     MiFindPageFileMemoryExtent @ 0x14070CB30 (MiFindPageFileMemoryExtent.c)
 *     ExQuerySystemLockInformation @ 0x140BFF388 (ExQuerySystemLockInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockShared(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
