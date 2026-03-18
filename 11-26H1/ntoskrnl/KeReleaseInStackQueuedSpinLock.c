/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x1402B98C0
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x140205314 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x14020570C (ExpApplyPriorityBoost.c)
 *     IoDiskIoAttributionQuery @ 0x1402074B4 (IoDiskIoAttributionQuery.c)
 *     IopRecordIoAttribution @ 0x140207994 (IopRecordIoAttribution.c)
 *     SepQueueWorkItem @ 0x140216854 (SepQueueWorkItem.c)
 *     CcCopyReadEx @ 0x14021CC00 (CcCopyReadEx.c)
 *     CcScheduleReadAheadNuma @ 0x14021D0F8 (CcScheduleReadAheadNuma.c)
 *     CcForceWriteThrough @ 0x140222070 (CcForceWriteThrough.c)
 *     CcIsThereDirtyDataHelper @ 0x140258884 (CcIsThereDirtyDataHelper.c)
 *     ExDisableResourceBoostLite @ 0x1402609F0 (ExDisableResourceBoostLite.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402B8340 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402B9360 (ExpReleaseResourceForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402C2B40 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x1402C303C (ExpWorkerFactoryCreateThread.c)
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     CcUnpinFileDataEx @ 0x1402DF3C0 (CcUnpinFileDataEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402E1B68 (ExpAcquireSharedStarveExclusive.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1403450B0 (ExpRemovePoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x14034AA60 (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x14034AEA4 (ExpInsertPoolTracker.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x1403549F4 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x140356738 (HalpDmaGetTranslationEntries.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x1403572E0 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x140357448 (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1403575A0 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035927C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x140359460 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToContiguousPool @ 0x1403595BC (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x1403596B4 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140359C70 (KeRemoveDeviceQueue.c)
 *     HalAllocateAdapterChannelV2 @ 0x140359DA0 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035A080 (HalBuildScatterGatherListV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14035AEF0 (HalpAllocateAdapterCallbackV2.c)
 *     IopMapTransfer @ 0x14035C290 (IopMapTransfer.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     PfpPartitionIterate @ 0x140382630 (PfpPartitionIterate.c)
 *     PfpPartitionGetNext @ 0x140382870 (PfpPartitionGetNext.c)
 *     CcPostWorkQueueCachemapUninit @ 0x1403831F0 (CcPostWorkQueueCachemapUninit.c)
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140383E50 (CcCanIWriteStreamEx.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x140384440 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcWriteBehindPreProcess @ 0x1403848C4 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcCachemapUninitWorkerThread @ 0x1403850A0 (CcCachemapUninitWorkerThread.c)
 *     CcInitializeVolumeCacheMap @ 0x14038538C (CcInitializeVolumeCacheMap.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1403856E4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcAsyncLazywriteWorker @ 0x140385850 (CcAsyncLazywriteWorker.c)
 *     CcRepostToSynchronousLazywriter @ 0x140385EEC (CcRepostToSynchronousLazywriter.c)
 *     CcScanLogHandleList @ 0x140385FA8 (CcScanLogHandleList.c)
 *     CcPostWorkQueueRegular @ 0x14038641C (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 *     CcPerformReadAhead @ 0x140386E18 (CcPerformReadAhead.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140387470 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcAsyncCopyRead @ 0x1403877D0 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140388074 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcUpdateReadHistory @ 0x140388C08 (CcUpdateReadHistory.c)
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 *     CcNotifyOfMappedWrite @ 0x14038984C (CcNotifyOfMappedWrite.c)
 *     CcQuickLazyWriteScanForVolume @ 0x140389D20 (CcQuickLazyWriteScanForVolume.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x140389F20 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 *     CcFlushCachePreProcess @ 0x1403991C8 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x1403998E0 (CcFlushCachePostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x140399E5C (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheOneRange @ 0x14039A180 (CcFlushCacheOneRange.c)
 *     CcPurgeCacheSection @ 0x14039B300 (CcPurgeCacheSection.c)
 *     CcGetDirtyPagesHelper @ 0x14039B880 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcDeleteMbcb @ 0x14039C204 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14039C3DC (CcDeleteBcbs.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcPostPVCMForDeleteToPartition @ 0x14039CF34 (CcPostPVCMForDeleteToPartition.c)
 *     CcSetDirtyPinnedData @ 0x14039D2A0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14039D5F0 (CcSetDirtyInMask.c)
 *     CcGetFlushedValidData @ 0x14039E120 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x14039E300 (CcSetFileSizesEx.c)
 *     CcCompleteAsyncRead @ 0x14039E848 (CcCompleteAsyncRead.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     PoQueryWatchdogTime @ 0x1403A9C80 (PoQueryWatchdogTime.c)
 *     ExpShutdownWorkerFactory @ 0x1403A9ED0 (ExpShutdownWorkerFactory.c)
 *     PopQueueQuerySetIrp @ 0x1403B2B18 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x1403B3D2C (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x1403B5EEC (PopFreeIrp.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403C08E4 (ExpInsertPoolTrackerExpansion.c)
 *     WmipReceiveNotifications @ 0x1403DB2FC (WmipReceiveNotifications.c)
 *     IopDeleteIoCompletionInternal @ 0x1403DC1DC (IopDeleteIoCompletionInternal.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcCoalescingCallBackHelper @ 0x1403E0480 (CcCoalescingCallBackHelper.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E0938 (CcForEachPrivateVolumeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcGetPartitionWithCreate @ 0x1403E1F28 (CcGetPartitionWithCreate.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E1FBC (CcCreatePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403E211C (CcFindPrivateVolumeCacheMap.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E2360 (CcAcquireByteRangeForWrite.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403E3C18 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E3E90 (CcDeletePrivateVolumeCacheMap.c)
 *     WmipWriteWnodeToObject @ 0x1403FE9A0 (WmipWriteWnodeToObject.c)
 *     CcMdlWriteComplete2 @ 0x14040F680 (CcMdlWriteComplete2.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     ExpConvertExclusiveToSharedLite @ 0x140431ADC (ExpConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14043AF30 (ExAcquireSharedWaitForExclusive.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14043B3BC (ExpSetResourceOwnerPointerEx.c)
 *     ExpExpandResourceOwnerTable @ 0x14043BA94 (ExpExpandResourceOwnerTable.c)
 *     ExpIsResourceAcquiredSharedLite @ 0x14043CD80 (ExpIsResourceAcquiredSharedLite.c)
 *     IoMapTransferInternal @ 0x14043F90C (IoMapTransferInternal.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404413A8 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140441650 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     KeInsertSchedulingGroup @ 0x140444BD0 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x14044506C (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1404452DC (KeSetSchedulingGroupCpuRates.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1404685E0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14046D008 (CcNotifyOfMappedWriteComplete.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140479270 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140479370 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeInsertByKeyDeviceQueue @ 0x140479630 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140479780 (KeInsertDeviceQueue.c)
 *     CcSetLogHandleForFileEx @ 0x14047C5E0 (CcSetLogHandleForFileEx.c)
 *     CcChangeBackingFileObject @ 0x1404817E0 (CcChangeBackingFileObject.c)
 *     CcIsThereDirtyLoggedPages @ 0x140486480 (CcIsThereDirtyLoggedPages.c)
 *     PoHandleIrp @ 0x140486AFC (PoHandleIrp.c)
 *     CcWaitForUninitializeCacheMap @ 0x14048B908 (CcWaitForUninitializeCacheMap.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x14048C620 (CcSetAdditionalCacheAttributesEx.c)
 *     CcSetAdditionalCacheAttributes @ 0x14048C730 (CcSetAdditionalCacheAttributes.c)
 *     CcMapDataForOverwrite @ 0x14048D85C (CcMapDataForOverwrite.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140494650 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     KeQuerySchedulingGroupHistory @ 0x1404A134C (KeQuerySchedulingGroupHistory.c)
 *     NtWorkerFactoryWorkerReady @ 0x1404A1B10 (NtWorkerFactoryWorkerReady.c)
 *     PopPowerRequestRevokeRequests @ 0x1404A5FC0 (PopPowerRequestRevokeRequests.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1404A61E0 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceAcquire @ 0x1404A6310 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1404A65D0 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestHandleClose @ 0x1404A6668 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestCallbackWorker @ 0x1404A68A0 (PopPowerRequestCallbackWorker.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1404AAF0C (AlpcpFreeCompletionPacketLookaside.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404B21BC (PopCompleteNotifyTransitionCommon.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404B3B68 (CcUpdateSharedCacheMapFlag.c)
 *     ExpDeleteWorkerFactory @ 0x1404B50A0 (ExpDeleteWorkerFactory.c)
 *     PopWakeDeviceList @ 0x1404B96A8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B98D0 (PopSleepDeviceList.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404BB4C0 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404BB630 (CcAsyncLazywriteWorkerMulti.c)
 *     KeRemoveSchedulingGroup @ 0x1404C61B4 (KeRemoveSchedulingGroup.c)
 *     WmipCompleteGuidIrpWithError @ 0x1404C964C (WmipCompleteGuidIrpWithError.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     CcGetFileObjectFromSectionPtrs @ 0x1404D1340 (CcGetFileObjectFromSectionPtrs.c)
 *     CcSetParallelFlushFile @ 0x1404D7B90 (CcSetParallelFlushFile.c)
 *     PopUpdateWakeSource @ 0x1404DD37C (PopUpdateWakeSource.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1404DD6E0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcPostWorkQueueSpecial @ 0x1404EEB44 (CcPostWorkQueueSpecial.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404EF380 (PopPowerRequestUnrevokeRequests.c)
 *     PopGetCurrentWakeInfos @ 0x1404F237C (PopGetCurrentWakeInfos.c)
 *     CcPostPVCMDelayedDelete @ 0x1404F71D4 (CcPostPVCMDelayedDelete.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404F9090 (CcAddDirtyPagesToExternalCache.c)
 *     PopGetMostRecentWakeInfo @ 0x1404F9218 (PopGetMostRecentWakeInfo.c)
 *     PopDereferenceWakeInfos @ 0x1404FA21C (PopDereferenceWakeInfos.c)
 *     CcSetLoggedDataThreshold @ 0x1404FA800 (CcSetLoggedDataThreshold.c)
 *     CcLazyWriteScan @ 0x1404FB788 (CcLazyWriteScan.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404FF4EC (PopReleaseWakeSourceSpinLock.c)
 *     CcUpdateExternalCacheInfoEx @ 0x140505060 (CcUpdateExternalCacheInfoEx.c)
 *     CcLogExtraWBThreadAction @ 0x1405083F4 (CcLogExtraWBThreadAction.c)
 *     CcProcessDelayedDeletePVCM @ 0x14050D370 (CcProcessDelayedDeletePVCM.c)
 *     IoPerfInit @ 0x14050EB0C (IoPerfInit.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140518290 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140518414 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     ExPoolQueryLimits @ 0x140518D40 (ExPoolQueryLimits.c)
 *     ExAllocateHeapSpecialPool @ 0x14051A678 (ExAllocateHeapSpecialPool.c)
 *     IopCloseWaitCompletionPacket @ 0x14051B810 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x14051BB80 (NtCancelWaitCompletionPacket.c)
 *     ExpCapturePoolTrackTables @ 0x14052749C (ExpCapturePoolTrackTables.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x140578E84 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalReadDmaCounterV2 @ 0x14057A240 (HalReadDmaCounterV2.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x140589054 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaDequeueAdapter @ 0x140589338 (HalpDmaDequeueAdapter.c)
 *     HalpDmaQueueAdapter @ 0x140589508 (HalpDmaQueueAdapter.c)
 *     CcGetFileObjectFromSectionPtrsRef @ 0x1405B0770 (CcGetFileObjectFromSectionPtrsRef.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B0D70 (CcQueueLazyWriteScanThread.c)
 *     CcRegisterExternalCacheEx @ 0x1405B1160 (CcRegisterExternalCacheEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B1608 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcErrorCallbackRoutine @ 0x1405B1850 (CcErrorCallbackRoutine.c)
 *     CcIsThereDirtyDataEx @ 0x1405B1BE0 (CcIsThereDirtyDataEx.c)
 *     CcSetLogHandleForFile @ 0x1405B1CC0 (CcSetLogHandleForFile.c)
 *     CcMdlWriteAbort @ 0x1405B1FC0 (CcMdlWriteAbort.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405B206C (CcDrainDelayDeleteForPartitionExit.c)
 *     CcDeletePartition @ 0x1405B2214 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405B2470 (CcDeleteSectionsForPartition.c)
 *     CcExitPartition @ 0x1405B26C4 (CcExitPartition.c)
 *     CcGetDeviceGuidAsync @ 0x1405B3100 (CcGetDeviceGuidAsync.c)
 *     CcCompleteAsyncLazywriteWorker @ 0x1405B3668 (CcCompleteAsyncLazywriteWorker.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x1405B3730 (CcCompleteAsyncLazywriteWorkerThread.c)
 *     CcCompleteAsyncWriteBehind @ 0x1405B37E4 (CcCompleteAsyncWriteBehind.c)
 *     IopIrpExtensionControl @ 0x1405CAA44 (IopIrpExtensionControl.c)
 *     IopUpdateFunctionPointers @ 0x1405CAB80 (IopUpdateFunctionPointers.c)
 *     IoCancelMiniCompletionPacket @ 0x1405CB910 (IoCancelMiniCompletionPacket.c)
 *     IoPerfReset @ 0x1405CBD6C (IoPerfReset.c)
 *     KeRemoveEntryDeviceQueue @ 0x1405F1460 (KeRemoveEntryDeviceQueue.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405F8E3C (-KiEnableGroupScheduling@@YAXXZ.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405F9184 (KeUpdateGroupSchedulingConstants.c)
 *     KiTraceSchedulingGroupRundown @ 0x1405F92A0 (KiTraceSchedulingGroupRundown.c)
 *     PfpPartitionInsertToGlobals @ 0x140600218 (PfpPartitionInsertToGlobals.c)
 *     PfpPartitionRemoveFromGlobals @ 0x1406002F8 (PfpPartitionRemoveFromGlobals.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140613304 (PopRecordPoIrpBlackboxInformation.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14063AD24 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     DifKeReleaseInStackQueuedSpinLockWrapper @ 0x140663070 (DifKeReleaseInStackQueuedSpinLockWrapper.c)
 *     ExpPlGrowTableIfNeeded @ 0x1406CC960 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x1406CCD60 (ExpTrackTableInsertLimit.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1406CE9D4 (ExpTryToAcquireResourceExclusiveLite.c)
 *     ExpWorkerFactoryManagerThread @ 0x1406D33B0 (ExpWorkerFactoryManagerThread.c)
 *     NtQueryInformationWorkerFactory @ 0x1406D3520 (NtQueryInformationWorkerFactory.c)
 *     NtShutdownWorkerFactory @ 0x1406D3780 (NtShutdownWorkerFactory.c)
 *     PnprMarkOrMirrorPages @ 0x140BF1DB4 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140BF86CC (KiAddProcessorToGroupSchedulingDatabase.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140BFD590 (PopBroadcastBlameBugcheckCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     HalRequestIpi @ 0x1403EC520 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1403ECBF0 (HvlWakeVirtualProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v1; // rdx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  unsigned __int64 v5; // r8
  char v6; // di
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v13; // eax
  __int64 v14; // rdx
  unsigned __int32 v15; // ett
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v21; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v22[33]; // [rsp+28h] [rbp-130h] BYREF
  void *retaddr; // [rsp+158h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_8;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( !LockHandle->LockQueue.Next )
  {
    if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                              0LL,
                                              (signed __int64)LockHandle) )
      goto LABEL_8;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
  }
  LockHandle->LockQueue.Next = 0LL;
  Lock = LockHandle->LockQueue.Lock;
  if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)&Next->Lock, (__int64)Lock)) & 4) != 0 )
  {
    _InterlockedOr(v20, 0);
    v6 = KeDisableInterrupts(Lock, v1, &Next->Lock);
    v7 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v5 >> 5) & 0x7F], 0LL);
    memset_0(v22, 0, 0x100uLL);
    v9 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v9 )
    {
LABEL_7:
      if ( v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v13 = *SchedulerAssist;
          do
          {
            v14 = v13;
            LODWORD(v14) = v13 & 0xFFDFFFFF;
            v15 = v13;
            v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
          }
          while ( v15 != v13 );
          if ( (v13 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v14, SchedulerAssist, v8);
        }
        _enable();
      }
      goto LABEL_8;
    }
    v21 = 2097153LL;
    memset_0(v22, 0, 0x100uLL);
    while ( 1 )
    {
      v16 = *(_QWORD *)(v9 + 8);
      v17 = *(_QWORD *)(v9 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v9 + 24), 1) )
      {
        v18 = *(_QWORD *)(v16 + 200);
        v19 = *(unsigned __int8 *)(v16 + 208);
        if ( (unsigned __int16)v21 > (unsigned __int16)v19 )
          goto LABEL_27;
        if ( WORD1(v21) > (unsigned __int16)v19 )
          break;
      }
LABEL_28:
      v9 = v17;
      if ( !v17 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors(&v21);
        else
          HalRequestIpi(0LL, &v21);
        goto LABEL_7;
      }
    }
    LOWORD(v21) = v19 + 1;
LABEL_27:
    v22[v19] |= v18;
    goto LABEL_28;
  }
LABEL_8:
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), OldIrql);
  __writecr8(OldIrql);
}
