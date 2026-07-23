/*
 * XREFs of ExReleaseSpinLockShared @ 0x14026C450
 * Callers:
 *     IopQueueWorkItemProlog @ 0x140202FE0 (IopQueueWorkItemProlog.c)
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     MiGetPartitionNodeInformation @ 0x14025A7B8 (MiGetPartitionNodeInformation.c)
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026C040 (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x14026DEC0 (PsGetEffectiveContainerId.c)
 *     ExpAddTagForBigPages @ 0x14029A5D0 (ExpAddTagForBigPages.c)
 *     MiKernelStackVaToStackNode @ 0x1402A1574 (MiKernelStackVaToStackNode.c)
 *     MiGetControlAreaPtes @ 0x1402C57D0 (MiGetControlAreaPtes.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiObtainParkedCoreMasks @ 0x1402F6BD8 (MiObtainParkedCoreMasks.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 *     ExRemovePoolTag @ 0x140346850 (ExRemovePoolTag.c)
 *     ExpCheckForResource @ 0x140346BC8 (ExpCheckForResource.c)
 *     RtlpCSparseBitmapUnlock @ 0x140353ACC (RtlpCSparseBitmapUnlock.c)
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403594F0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 *     MiStartingOffsetNeedLock @ 0x14036EF30 (MiStartingOffsetNeedLock.c)
 *     IoQueueWorkItemEx @ 0x140383750 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x1403841E0 (IoQueueWorkItem.c)
 *     MiCheckSlabPage @ 0x14038C61C (MiCheckSlabPage.c)
 *     MiApplyDebuggerPatches @ 0x14038E5A8 (MiApplyDebuggerPatches.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403B212C (SepGetSingletonEntryFromIndexNumber.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1403BB494 (PopPepComponentSetLatency.c)
 *     PopPepLockActivityLink @ 0x1403BD780 (PopPepLockActivityLink.c)
 *     PopFxLockDevice @ 0x1403C13A4 (PopFxLockDevice.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403EEE8C (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403FEA88 (MiPageFileLargestBitmapsRun.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
 *     PsGetWorkOnBehalfThread @ 0x140458EE0 (PsGetWorkOnBehalfThread.c)
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     HalpIommuFlushDmaDomain @ 0x140474D74 (HalpIommuFlushDmaDomain.c)
 *     IommupHvFlushDomainTbs @ 0x140475588 (IommupHvFlushDomainTbs.c)
 *     VmpPrefetchVirtualAddresses @ 0x140494D38 (VmpPrefetchVirtualAddresses.c)
 *     MiGetChannelInformation @ 0x14049DA84 (MiGetChannelInformation.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     MiWorkingSetManager @ 0x1404B7850 (MiWorkingSetManager.c)
 *     VmColdPagesHint @ 0x1404B79D0 (VmColdPagesHint.c)
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404BE03C (MiComputeUnusedSegmentReduction.c)
 *     VmpSplitMemoryRange @ 0x1404C2504 (VmpSplitMemoryRange.c)
 *     MiIsCalibrationWorthwhile @ 0x1404C4720 (MiIsCalibrationWorthwhile.c)
 *     MiCreateCommit @ 0x1404C9260 (MiCreateCommit.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x1404CBBA4 (PopPepGetDevicePlatformStateDependents.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404D6000 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     PopPepGetMinimumDevicePowerState @ 0x1404DE814 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepGetComponentVetoMasks @ 0x1404E14E0 (PopPepGetComponentVetoMasks.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1404E5460 (MiAbsorbPossibleEngineChanges.c)
 *     MiGenerateAccessViolation @ 0x1404E6E58 (MiGenerateAccessViolation.c)
 *     MiGetPrivatePageCount @ 0x1404E7B08 (MiGetPrivatePageCount.c)
 *     PopPepGetDeviceVetoMasks @ 0x1404EE2C8 (PopPepGetDeviceVetoMasks.c)
 *     MiUpdateEngineAffinities @ 0x1404F725C (MiUpdateEngineAffinities.c)
 *     MiInitializeCachedExtentWalker @ 0x1404FDCAC (MiInitializeCachedExtentWalker.c)
 *     MiTransientPageListWriter @ 0x1405056A0 (MiTransientPageListWriter.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiGetOptimalEngineMix @ 0x14050A6C8 (MiGetOptimalEngineMix.c)
 *     MiSuitableZeroingProcessorAvailable @ 0x14052A72C (MiSuitableZeroingProcessorAvailable.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14052C4B4 (SepValidateAndCopyGlobalEntry.c)
 *     MiGetListOfPendingBadPages @ 0x14052D078 (MiGetListOfPendingBadPages.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x14052FA68 (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     IommupDomainDetachPasidDevice @ 0x14058A958 (IommupDomainDetachPasidDevice.c)
 *     HalpQueryNumaRangeTableInformation @ 0x140595210 (HalpQueryNumaRangeTableInformation.c)
 *     PopPepPlatformStateRegistered @ 0x1406146A4 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x140614924 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140618CCC (PspJobIoRateVolumeEntryReference.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14064BAA4 (ViIrpDatabaseReleaseLockShared.c)
 *     VmpAccessFaultBatch @ 0x1406C45B0 (VmpAccessFaultBatch.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C57F0 (VmpUpdateCommitStateMemoryRange.c)
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 *     MiReleasePartitionHugeIoSpace @ 0x1406F2314 (MiReleasePartitionHugeIoSpace.c)
 *     MiUnlockIoPfnTree @ 0x1406F9AFC (MiUnlockIoPfnTree.c)
 *     MiDeleteAwePageTables @ 0x140705E80 (MiDeleteAwePageTables.c)
 *     MiCloneWriteWatch @ 0x140707E64 (MiCloneWriteWatch.c)
 *     MiNoPagesLastChance @ 0x140708830 (MiNoPagesLastChance.c)
 *     MiFindPageFileMemoryExtent @ 0x1407117E0 (MiFindPageFileMemoryExtent.c)
 *     ExQuerySystemLockInformation @ 0x140C05598 (ExQuerySystemLockInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockShared(PEX_SPIN_LOCK SpinLock, KIRQL OldIrql)
{
  unsigned __int64 v2; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
