/*
 * XREFs of PsDereferencePartition @ 0x140381940
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     PsGetNextPartition @ 0x1402580F8 (PsGetNextPartition.c)
 *     PfLogForegroundProcess @ 0x14025875C (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     MiRebuildLargePages @ 0x1402C8400 (MiRebuildLargePages.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140348260 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmQueryMemoryListInformation @ 0x1403485A8 (MmQueryMemoryListInformation.c)
 *     MmAllocateContiguousMemoryEx @ 0x140348FD0 (MmAllocateContiguousMemoryEx.c)
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     PfpPartitionDereferenceParent @ 0x140381780 (PfpPartitionDereferenceParent.c)
 *     PfLogFileDataAccess @ 0x1403817A0 (PfLogFileDataAccess.c)
 *     PfpPartitionIterate @ 0x140382630 (PfpPartitionIterate.c)
 *     PfHardFaultLog @ 0x14038E8C4 (PfHardFaultLog.c)
 *     MmFreeNonChargedSecurePages @ 0x1403C2E54 (MmFreeNonChargedSecurePages.c)
 *     MiRevertThreadAffinity @ 0x1403C354C (MiRevertThreadAffinity.c)
 *     CcGetPartitionWithCreate @ 0x1403E1F28 (CcGetPartitionWithCreate.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmAllocateNonChargedSecurePages @ 0x1404170E8 (MmAllocateNonChargedSecurePages.c)
 *     PfpLogApplicationEvent @ 0x140446FB0 (PfpLogApplicationEvent.c)
 *     MiRebalanceZeroFreeLists @ 0x1404B83A0 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     EtwpClearPartitionContext @ 0x1404FA0F4 (EtwpClearPartitionContext.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404FCD14 (MmGetNodeFastLargePageCounts.c)
 *     MiEmptyAccessLogs @ 0x140501AF0 (MiEmptyAccessLogs.c)
 *     MiObtainFreePages @ 0x140531914 (MiObtainFreePages.c)
 *     PsQuitNextPartition @ 0x140616964 (PsQuitNextPartition.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14063CDAC (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     EtwpSetPartitionContext @ 0x1406C77EC (EtwpSetPartitionContext.c)
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MiQuarantineBadPage @ 0x1406F15B8 (MiQuarantineBadPage.c)
 *     MiContractWsSwapPageFileWorker @ 0x140704250 (MiContractWsSwapPageFileWorker.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140777A08 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1407F96B4 (PspSetJobMemoryPartition.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     NtManagePartition @ 0x1407FD4C0 (NtManagePartition.c)
 *     PsCreatePartition @ 0x1407FDA4C (PsCreatePartition.c)
 *     PspAllocatePartition @ 0x1407FDBD8 (PspAllocatePartition.c)
 *     PspClosePartitionHandle @ 0x1407FDE80 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x1407FE050 (PspTeardownPartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x140819228 (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x1408193C4 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x1408195C0 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x1408199A8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     MmRemovePhysicalMemory @ 0x140867460 (MmRemovePhysicalMemory.c)
 *     MmAllocateMemoryRanges @ 0x140867D80 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x140868080 (MmQueryMemoryRanges.c)
 *     MmIdentifyPhysicalMemory @ 0x140868394 (MmIdentifyPhysicalMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14086A430 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScanPagefileSpace @ 0x14086C170 (MiScanPagefileSpace.c)
 *     MmManagePartitionMoveMemory @ 0x14087D0C8 (MmManagePartitionMoveMemory.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x14087E624 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x14087EC30 (MiSpecialPurposeMemoryRemoved.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x14087EDA8 (MiSpecialPurposeMemoryTypeDereference.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x14087EEE0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     MiCreateSection @ 0x1409BA4D4 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1409BA6F4 (MiInitializeCreateSectionPacket.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MmAllocateUserStack @ 0x1409F2008 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1409F22A0 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1409F2980 (NtAllocateVirtualMemory.c)
 *     MmGetPageFileInformation @ 0x140B13430 (MmGetPageFileInformation.c)
 *     MmBuildLargePages @ 0x140B20AD8 (MmBuildLargePages.c)
 *     SmProcessCompressionInfoRequest @ 0x140B26488 (SmProcessCompressionInfoRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B2EB04 (SmProcessSystemStoreTrimRequest.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140B4D600 (MmGetPhysicalMemoryRangesEx2.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B65CA0 (MiInitializePartitionSpecialPurposeMemory.c)
 *     MmPerformMemoryListCommand @ 0x140C0C460 (MmPerformMemoryListCommand.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 80);
    v5->Parameter = (void *)a1;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    v5->List.Flink = 0LL;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
