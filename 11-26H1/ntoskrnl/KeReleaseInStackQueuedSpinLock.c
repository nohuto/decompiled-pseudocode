/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x140304580
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     IoDiskIoAttributionQuery @ 0x140207594 (IoDiskIoAttributionQuery.c)
 *     IopRecordIoAttribution @ 0x140207A74 (IopRecordIoAttribution.c)
 *     SepQueueWorkItem @ 0x140216B84 (SepQueueWorkItem.c)
 *     ExDisableResourceBoostLite @ 0x14021A270 (ExDisableResourceBoostLite.c)
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     CcIsThereDirtyDataHelper @ 0x14025A064 (CcIsThereDirtyDataHelper.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     ExpReleaseResourceForThreadLite @ 0x140304020 (ExpReleaseResourceForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x14030DCFC (ExpWorkerFactoryCreateThread.c)
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140347130 (ExpRemovePoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x14035679C (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaGetTranslationEntries @ 0x1403584D8 (HalpDmaGetTranslationEntries.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140359080 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x1403591E8 (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x140359340 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035B01C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x14035B200 (HalpDmaReturnPageToOwner.c)
 *     HalpDmaReturnToContiguousPool @ 0x14035B35C (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x14035B454 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x14035BA10 (KeRemoveDeviceQueue.c)
 *     HalAllocateAdapterChannelV2 @ 0x14035BB40 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035BE20 (HalBuildScatterGatherListV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x14035CC90 (HalpAllocateAdapterCallbackV2.c)
 *     IopMapTransfer @ 0x14035E030 (IopMapTransfer.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PfpPartitionGetNext @ 0x140384620 (PfpPartitionGetNext.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140384FA0 (CcPostWorkQueueCachemapUninit.c)
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140385C00 (CcCanIWriteStreamEx.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403861F0 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcCachemapUninitWorkerThread @ 0x140386E50 (CcCachemapUninitWorkerThread.c)
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcRepostToSynchronousLazywriter @ 0x140387C9C (CcRepostToSynchronousLazywriter.c)
 *     CcScanLogHandleList @ 0x140387D58 (CcScanLogHandleList.c)
 *     CcPostWorkQueueRegular @ 0x1403881CC (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140389220 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcAsyncCopyRead @ 0x140389580 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140389E24 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcUpdateReadHistory @ 0x14038A9B8 (CcUpdateReadHistory.c)
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcQuickLazyWriteScanForVolume @ 0x14038BAD0 (CcQuickLazyWriteScanForVolume.c)
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x14038BCD0 (CcReapPrivateVolumeCachemapWorkerThread.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x14039B640 (CcFlushCachePostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcGetDirtyPagesHelper @ 0x14039D5E0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcDeleteMbcb @ 0x14039DF64 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14039E13C (CcDeleteBcbs.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcPostPVCMForDeleteToPartition @ 0x14039EC94 (CcPostPVCMForDeleteToPartition.c)
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     CcGetFlushedValidData @ 0x14039FE80 (CcGetFlushedValidData.c)
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     PoQueryWatchdogTime @ 0x1403B3890 (PoQueryWatchdogTime.c)
 *     ExpShutdownWorkerFactory @ 0x1403B3AE0 (ExpShutdownWorkerFactory.c)
 *     IopCloseWaitCompletionPacket @ 0x1403B44F0 (IopCloseWaitCompletionPacket.c)
 *     PopQueueQuerySetIrp @ 0x1403BC828 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x1403BDC38 (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x1403BFDEC (PopFreeIrp.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     WmipReceiveNotifications @ 0x1403DE4EC (WmipReceiveNotifications.c)
 *     IopDeleteIoCompletionInternal @ 0x1403DF3CC (IopDeleteIoCompletionInternal.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     CcCoalescingCallBackHelper @ 0x1403E3670 (CcCoalescingCallBackHelper.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E3B28 (CcForEachPrivateVolumeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcGetPartitionWithCreate @ 0x1403E5118 (CcGetPartitionWithCreate.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x1403E530C (CcFindPrivateVolumeCacheMap.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x1403E6E08 (CcInsertPrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     WmipWriteWnodeToObject @ 0x1403FB190 (WmipWriteWnodeToObject.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteComplete2 @ 0x14040EDA0 (CcMdlWriteComplete2.c)
 *     ExpConvertExclusiveToSharedLite @ 0x14041EB0C (ExpConvertExclusiveToSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14042DC6C (ExpSetResourceOwnerPointerEx.c)
 *     ExpExpandResourceOwnerTable @ 0x14042E344 (ExpExpandResourceOwnerTable.c)
 *     ExpIsResourceAcquiredSharedLite @ 0x14042F630 (ExpIsResourceAcquiredSharedLite.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x140439EB8 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14043A160 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x14043DB7C (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14043DDE8 (KeSetSchedulingGroupCpuRates.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140461C90 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140466788 (CcNotifyOfMappedWriteComplete.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140472BD0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140472CD0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeInsertByKeyDeviceQueue @ 0x140472F90 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x1404730E0 (KeInsertDeviceQueue.c)
 *     CcSetLogHandleForFileEx @ 0x140475F50 (CcSetLogHandleForFileEx.c)
 *     CcChangeBackingFileObject @ 0x14047B150 (CcChangeBackingFileObject.c)
 *     CcIsThereDirtyLoggedPages @ 0x14047FE50 (CcIsThereDirtyLoggedPages.c)
 *     PoHandleIrp @ 0x1404804CC (PoHandleIrp.c)
 *     CcWaitForUninitializeCacheMap @ 0x140485448 (CcWaitForUninitializeCacheMap.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x140486160 (CcSetAdditionalCacheAttributesEx.c)
 *     CcSetAdditionalCacheAttributes @ 0x140486270 (CcSetAdditionalCacheAttributes.c)
 *     CcMapDataForOverwrite @ 0x14048739C (CcMapDataForOverwrite.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14048E1A0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     KeQuerySchedulingGroupHistory @ 0x14049AE7C (KeQuerySchedulingGroupHistory.c)
 *     NtWorkerFactoryWorkerReady @ 0x14049B640 (NtWorkerFactoryWorkerReady.c)
 *     PopPowerRequestRevokeRequests @ 0x14049F650 (PopPowerRequestRevokeRequests.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14049F870 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14049FC60 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestHandleClose @ 0x14049FCF8 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1404A459C (AlpcpFreeCompletionPacketLookaside.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404AB6C8 (PopCompleteNotifyTransitionCommon.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404AD134 (CcUpdateSharedCacheMapFlag.c)
 *     ExpDeleteWorkerFactory @ 0x1404AE4F0 (ExpDeleteWorkerFactory.c)
 *     PopWakeDeviceList @ 0x1404B2F38 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B3160 (PopSleepDeviceList.c)
 *     CcAsyncLazywriteWorkerThread @ 0x1404B4CA0 (CcAsyncLazywriteWorkerThread.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 *     KeRemoveSchedulingGroup @ 0x1404BFB64 (KeRemoveSchedulingGroup.c)
 *     WmipCompleteGuidIrpWithError @ 0x1404C306C (WmipCompleteGuidIrpWithError.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     CcGetFileObjectFromSectionPtrs @ 0x1404CAD70 (CcGetFileObjectFromSectionPtrs.c)
 *     CcSetParallelFlushFile @ 0x1404D1360 (CcSetParallelFlushFile.c)
 *     PopUpdateWakeSource @ 0x1404D6A5C (PopUpdateWakeSource.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1404D6DC0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcPostWorkQueueSpecial @ 0x1404E8124 (CcPostWorkQueueSpecial.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404E8960 (PopPowerRequestUnrevokeRequests.c)
 *     PopGetCurrentWakeInfos @ 0x1404EB95C (PopGetCurrentWakeInfos.c)
 *     CcPostPVCMDelayedDelete @ 0x1404F07E4 (CcPostPVCMDelayedDelete.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404F26A0 (CcAddDirtyPagesToExternalCache.c)
 *     PopGetMostRecentWakeInfo @ 0x1404F2828 (PopGetMostRecentWakeInfo.c)
 *     PopDereferenceWakeInfos @ 0x1404F382C (PopDereferenceWakeInfos.c)
 *     CcSetLoggedDataThreshold @ 0x1404F3E10 (CcSetLoggedDataThreshold.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404F8CDC (PopReleaseWakeSourceSpinLock.c)
 *     CcUpdateExternalCacheInfoEx @ 0x1404FE9A0 (CcUpdateExternalCacheInfoEx.c)
 *     CcLogExtraWBThreadAction @ 0x140501E9C (CcLogExtraWBThreadAction.c)
 *     CcProcessDelayedDeletePVCM @ 0x140506DE0 (CcProcessDelayedDeletePVCM.c)
 *     IoPerfInit @ 0x14050857C (IoPerfInit.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140511D00 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140511E84 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     ExPoolQueryLimits @ 0x1405127B0 (ExPoolQueryLimits.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 *     NtCancelWaitCompletionPacket @ 0x140516120 (NtCancelWaitCompletionPacket.c)
 *     ExpCapturePoolTrackTables @ 0x140529B0C (ExpCapturePoolTrackTables.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x14057B3B4 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalReadDmaCounterV2 @ 0x14057C770 (HalReadDmaCounterV2.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14058B724 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaDequeueAdapter @ 0x14058BA08 (HalpDmaDequeueAdapter.c)
 *     HalpDmaQueueAdapter @ 0x14058BBD8 (HalpDmaQueueAdapter.c)
 *     CcGetFileObjectFromSectionPtrsRef @ 0x1405B2F80 (CcGetFileObjectFromSectionPtrsRef.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 *     CcRegisterExternalCacheEx @ 0x1405B3970 (CcRegisterExternalCacheEx.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B3E18 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcErrorCallbackRoutine @ 0x1405B4060 (CcErrorCallbackRoutine.c)
 *     CcIsThereDirtyDataEx @ 0x1405B43F0 (CcIsThereDirtyDataEx.c)
 *     CcSetLogHandleForFile @ 0x1405B44D0 (CcSetLogHandleForFile.c)
 *     CcMdlWriteAbort @ 0x1405B47D0 (CcMdlWriteAbort.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405B487C (CcDrainDelayDeleteForPartitionExit.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 *     CcExitPartition @ 0x1405B4ED4 (CcExitPartition.c)
 *     CcGetDeviceGuidAsync @ 0x1405B5910 (CcGetDeviceGuidAsync.c)
 *     CcCompleteAsyncLazywriteWorker @ 0x1405B5E78 (CcCompleteAsyncLazywriteWorker.c)
 *     CcCompleteAsyncLazywriteWorkerThread @ 0x1405B5F40 (CcCompleteAsyncLazywriteWorkerThread.c)
 *     CcCompleteAsyncWriteBehind @ 0x1405B5FF4 (CcCompleteAsyncWriteBehind.c)
 *     IopIrpExtensionControl @ 0x1405CD314 (IopIrpExtensionControl.c)
 *     IopUpdateFunctionPointers @ 0x1405CD450 (IopUpdateFunctionPointers.c)
 *     IoCancelMiniCompletionPacket @ 0x1405CE180 (IoCancelMiniCompletionPacket.c)
 *     IoPerfReset @ 0x1405CE5DC (IoPerfReset.c)
 *     KeRemoveEntryDeviceQueue @ 0x1405F3DD0 (KeRemoveEntryDeviceQueue.c)
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405FB85C (-KiEnableGroupScheduling@@YAXXZ.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405FBBA4 (KeUpdateGroupSchedulingConstants.c)
 *     KiTraceSchedulingGroupRundown @ 0x1405FBCC0 (KiTraceSchedulingGroupRundown.c)
 *     PfpPartitionInsertToGlobals @ 0x140602CC8 (PfpPartitionInsertToGlobals.c)
 *     PfpPartitionRemoveFromGlobals @ 0x140602DA8 (PfpPartitionRemoveFromGlobals.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1406161C0 (PopRecordPoIrpBlackboxInformation.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14063DDEC (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     DifKeReleaseInStackQueuedSpinLockWrapper @ 0x140666C50 (DifKeReleaseInStackQueuedSpinLockWrapper.c)
 *     ExpPlGrowTableIfNeeded @ 0x1406D0990 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x1406D0D90 (ExpTrackTableInsertLimit.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1406D2A04 (ExpTryToAcquireResourceExclusiveLite.c)
 *     ExpWorkerFactoryManagerThread @ 0x1406D73E0 (ExpWorkerFactoryManagerThread.c)
 *     NtQueryInformationWorkerFactory @ 0x1406D7550 (NtQueryInformationWorkerFactory.c)
 *     NtShutdownWorkerFactory @ 0x1406D77B0 (NtShutdownWorkerFactory.c)
 *     PnprMarkOrMirrorPages @ 0x140BF7DB4 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140BFE6CC (KiAddProcessorToGroupSchedulingDatabase.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140C03590 (PopBroadcastBlameBugcheckCallback.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  unsigned __int64 v7; // r8
  char v8; // di
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v15; // eax
  __int64 v16; // rdx
  unsigned __int32 v17; // ett
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v23; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v24[33]; // [rsp+28h] [rbp-130h] BYREF
  __int64 retaddr; // [rsp+158h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)LockHandle, retaddr, v2, v3);
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
    _InterlockedOr(v22, 0);
    v8 = KeDisableInterrupts(Lock, v1, &Next->Lock);
    v9 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v7 >> 5) & 0x7F], 0LL);
    memset_0(v24, 0, 0x100uLL);
    v11 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v11 )
    {
LABEL_7:
      if ( v8 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v15 = *SchedulerAssist;
          do
          {
            v16 = v15;
            LODWORD(v16) = v15 & 0xFFDFFFFF;
            v17 = v15;
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v15 & 0xFFDFFFFF, v15);
          }
          while ( v17 != v15 );
          if ( (v15 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v16, SchedulerAssist, v10);
        }
        _enable();
      }
      goto LABEL_8;
    }
    v23 = 2097153LL;
    memset_0(v24, 0, 0x100uLL);
    while ( 1 )
    {
      v18 = *(_QWORD *)(v11 + 8);
      v19 = *(_QWORD *)(v11 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v11 + 24), 1) )
      {
        v20 = *(_QWORD *)(v18 + 200);
        v21 = *(unsigned __int8 *)(v18 + 208);
        if ( (unsigned __int16)v23 > (unsigned __int16)v21 )
          goto LABEL_27;
        if ( WORD1(v23) > (unsigned __int16)v21 )
          break;
      }
LABEL_28:
      v11 = v19;
      if ( !v19 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors((__int64)&v23);
        else
          HalRequestIpi(0, (__int64)&v23);
        goto LABEL_7;
      }
    }
    LOWORD(v23) = v21 + 1;
LABEL_27:
    v24[v21] |= v20;
    goto LABEL_28;
  }
LABEL_8:
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), OldIrql);
  __writecr8(OldIrql);
}
