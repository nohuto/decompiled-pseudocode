/*
 * XREFs of KeSetEvent @ 0x1402C0780
 * Callers:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14020C9A0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CC1C (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     PopQueueTargetDpc @ 0x14021AB1C (PopQueueTargetDpc.c)
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     ExfReleaseRundownProtection @ 0x1402657E0 (ExfReleaseRundownProtection.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     FsFilterFreeCompletionStack @ 0x14026E958 (FsFilterFreeCompletionStack.c)
 *     SmFpFree @ 0x140280590 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x140280D40 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140280DD0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiQueueControlAreaDelete @ 0x14028D000 (MiQueueControlAreaDelete.c)
 *     MiObtainDynamicVa @ 0x1402A4348 (MiObtainDynamicVa.c)
 *     MiBroadcastPeriodicEventToChildPartitions @ 0x1402A6248 (MiBroadcastPeriodicEventToChildPartitions.c)
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     MiSignalPartitionTrimThreads @ 0x1402A6860 (MiSignalPartitionTrimThreads.c)
 *     MiModifiedWriterPeriodicTick @ 0x1402A7214 (MiModifiedWriterPeriodicTick.c)
 *     MiWakeMappedPageWriter @ 0x1402A729C (MiWakeMappedPageWriter.c)
 *     MiScheduleZeroPageThreads @ 0x1402A7444 (MiScheduleZeroPageThreads.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402ABC50 (MiInsertSecondaryListStandbyPage.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     CcDecrementVacbActiveCount @ 0x1402BF9B0 (CcDecrementVacbActiveCount.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 *     IoReleaseRemoveLockEx @ 0x1402C1010 (IoReleaseRemoveLockEx.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402C1160 (ExpPartitionCreateThreadIfNecessary.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiCheckForControlAreaDeletion @ 0x1402EDB60 (MiCheckForControlAreaDeletion.c)
 *     MiDecrementZeroEngineThread @ 0x1402F5CAC (MiDecrementZeroEngineThread.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14030A994 (EtwpCovSampCaptureBufferQueue.c)
 *     KiProcessDisconnectList @ 0x14030E320 (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     KiInswapAndReadyThread @ 0x1403115E4 (KiInswapAndReadyThread.c)
 *     KiRequestProcessInSwap @ 0x14031178C (KiRequestProcessInSwap.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KiInSwapSingleProcess @ 0x140312684 (KiInSwapSingleProcess.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiCommitPoolMemory @ 0x140366880 (MiCommitPoolMemory.c)
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14036BE78 (MiUpdateSlabTypeAvailablePages.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     PopFxActivateComponentWorker @ 0x14037CC20 (PopFxActivateComponentWorker.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     CcDereferencePartition @ 0x1403861A0 (CcDereferencePartition.c)
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140389E24 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcReapPrivateVolumeCachemap @ 0x14038BB90 (CcReapPrivateVolumeCachemap.c)
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxComponentWork @ 0x140397000 (PopFxComponentWork.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140397560 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperWorker @ 0x1403977F0 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcDeleteBcbs @ 0x14039E13C (CcDeleteBcbs.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     MiResolveTransitionFault @ 0x1403A8C64 (MiResolveTransitionFault.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403B4F30 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopFxCompleteComponentActivation @ 0x1403B8A04 (PopFxCompleteComponentActivation.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403BBDB0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     PopFxReleasePowerIrp @ 0x1403BFFD8 (PopFxReleasePowerIrp.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     WmipUnreferenceRegEntry @ 0x1403C0F80 (WmipUnreferenceRegEntry.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403C1660 (VfPoolDelayFreeIfPossible.c)
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     MiMarkMdlComplete @ 0x1403C5184 (MiMarkMdlComplete.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403CAC08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MiFlushComplete @ 0x1403CB1D0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1403CBAA8 (MiFreeOverlappedFlushEntry.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DEF10 (NtSignalAndWaitForSingleObject.c)
 *     WheapProcessWorkQueueItem @ 0x1403E2D50 (WheapProcessWorkQueueItem.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     MiFlushAllPagesWorker @ 0x1403E3C5C (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E3DAC (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x1403E4038 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     MiIncreaseAvailablePages @ 0x1403E8BC0 (MiIncreaseAvailablePages.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E8DF0 (MiUpdateAvailableEventsAtDpc.c)
 *     SmKmStoreHelperSendCommand @ 0x1403E9BDC (SmKmStoreHelperSendCommand.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403EA560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403EEB50 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     MiModifiedWriterInitialize @ 0x1403FD9B8 (MiModifiedWriterInitialize.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1403FDB00 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiModifiedWriterWakeStore @ 0x1403FF9C8 (MiModifiedWriterWakeStore.c)
 *     SmKmUnlockMdl @ 0x14040060C (SmKmUnlockMdl.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404027E8 (MiStoreDecrementOutstandingWrites.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x140404388 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     IopCopyCompleteReadRequest @ 0x14040F450 (IopCopyCompleteReadRequest.c)
 *     KiDecrementProcessStackCount @ 0x140410010 (KiDecrementProcessStackCount.c)
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopMcDereferenceMdl @ 0x1404111E8 (IopMcDereferenceMdl.c)
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 *     PopUserPresentSet @ 0x1404273D4 (PopUserPresentSet.c)
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 *     ExpWakePushLock @ 0x140428464 (ExpWakePushLock.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140430218 (HalpReleaseSecondaryIcEntryShared.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x140430298 (KiReleaseSecondaryPassiveConnectLock.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14043394C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     MiDecrementVadsBeingDeleted @ 0x14043B970 (MiDecrementVadsBeingDeleted.c)
 *     EtwpApcPoolThunk @ 0x14043FEF0 (EtwpApcPoolThunk.c)
 *     MiRecordLargePageCandidate @ 0x1404409A0 (MiRecordLargePageCandidate.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140447B00 (ExReleaseRundownProtectionCacheAware.c)
 *     IoAcquireRemoveLockEx @ 0x14044F150 (IoAcquireRemoveLockEx.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     MiUpdateCommitCounts @ 0x14045BB84 (MiUpdateCommitCounts.c)
 *     ExpReleaseRundownProtection @ 0x14045CF10 (ExpReleaseRundownProtection.c)
 *     FsFilterCtrlFree @ 0x140460640 (FsFilterCtrlFree.c)
 *     EtwpFinalizePendingApc @ 0x140460F50 (EtwpFinalizePendingApc.c)
 *     SmEvictComplete @ 0x140468D14 (SmEvictComplete.c)
 *     MiFreeExcessSegments @ 0x14046E490 (MiFreeExcessSegments.c)
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140478F60 (LZNT1DecompressChunkWorkItem.c)
 *     MiSyncCommitSignals @ 0x140479400 (MiSyncCommitSignals.c)
 *     PnpRemoveDeviceActionRequests @ 0x14047BC14 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     PopQueueDirectedDripsWork @ 0x14047CD84 (PopQueueDirectedDripsWork.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140482930 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140484930 (EtwpCovSampCaptureQueueDpc.c)
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 *     MiWakeCommitRequest @ 0x14049D094 (MiWakeCommitRequest.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x14049FF30 (PopPowerRequestCallbackWorker.c)
 *     KeRetryOutswapProcess @ 0x1404A401C (KeRetryOutswapProcess.c)
 *     PfpEventHandleFullBuffer @ 0x1404A5960 (PfpEventHandleFullBuffer.c)
 *     MiDecrementControlAreaCount @ 0x1404A9360 (MiDecrementControlAreaCount.c)
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404AB6C8 (PopCompleteNotifyTransitionCommon.c)
 *     CcPurgeAndClearCacheSection @ 0x1404ACF44 (CcPurgeAndClearCacheSection.c)
 *     MiMarkPendingCommitRequests @ 0x1404AE0D0 (MiMarkPendingCommitRequests.c)
 *     MiCopyFileOnlyPage @ 0x1404AF42C (MiCopyFileOnlyPage.c)
 *     MiAllocateMappedWriterMdls @ 0x1404AF940 (MiAllocateMappedWriterMdls.c)
 *     CmpCompleteFlushAndPurgeIrp @ 0x1404B2620 (CmpCompleteFlushAndPurgeIrp.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B367C (MiPfCompleteCoalescedIo.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1404B5E00 (MiStoreContractVirtualPagefileApc.c)
 *     DifKeSetEventWrapper @ 0x1404BA590 (DifKeSetEventWrapper.c)
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404C0780 (KiBalanceSetManagerDeferredRoutine.c)
 *     MiReplenishSlabAllocatorWorker @ 0x1404C2AB0 (MiReplenishSlabAllocatorWorker.c)
 *     MiPfIssueCoalescedSupport @ 0x1404C5220 (MiPfIssueCoalescedSupport.c)
 *     ExpEnumerateCallback @ 0x1404C5D00 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1404C7DA0 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     PopUserPresentSetWorker @ 0x1404C8F50 (PopUserPresentSetWorker.c)
 *     EtwpLoggerDpc @ 0x1404CFB70 (EtwpLoggerDpc.c)
 *     PnpUnlockDeviceActionQueue @ 0x1404D0F6C (PnpUnlockDeviceActionQueue.c)
 *     PfpReturnAccessBuffer @ 0x1404D2BC0 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1404D6260 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CmpLazyFlushDpcRoutine @ 0x1404D7B50 (CmpLazyFlushDpcRoutine.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1404D9960 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     PopBatteryIrpComplete @ 0x1404DA220 (PopBatteryIrpComplete.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404DE92C (MmStoreFlushOutstandingEvictions.c)
 *     MiQueuePageFileExtension @ 0x1404DFC08 (MiQueuePageFileExtension.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404E227C (PopUnregisterPowerSettingCallback.c)
 *     PopPowerAdapterIrpComplete @ 0x1404F0F10 (PopPowerAdapterIrpComplete.c)
 *     PopFxCompleteComponentPerfState @ 0x1404F2BC8 (PopFxCompleteComponentPerfState.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1404F4BA0 (ExpWorkQueueManagerReaperTimer.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404F6680 (PopFxFindAndReferenceAcpiDevice.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404F7CB0 (EtwpCovSampCaptureCleanupLookasides.c)
 *     PnpUnlockMountableDevice @ 0x1404F87B4 (PnpUnlockMountableDevice.c)
 *     MiIncrementZeroEngineThread @ 0x1404FAFBC (MiIncrementZeroEngineThread.c)
 *     MiReadFromMemoryPagefile @ 0x1404FC998 (MiReadFromMemoryPagefile.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404FD660 (KiSynchronizePassiveInterruptExecution.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140501378 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiDecrementCloneHeaderCount @ 0x140506AAC (MiDecrementCloneHeaderCount.c)
 *     CcProcessDelayedDeletePVCM @ 0x140506DE0 (CcProcessDelayedDeletePVCM.c)
 *     IopFreeReserveIrp @ 0x1405073A4 (IopFreeReserveIrp.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405087E8 (PopFxAcpiForwardPepWorkRequest.c)
 *     MiFinishPageFileExtension @ 0x140508B3C (MiFinishPageFileExtension.c)
 *     MiStoreExtendVirtualPagefile @ 0x14050B248 (MiStoreExtendVirtualPagefile.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14050B81C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     MiPageNotZero @ 0x14050EAD8 (MiPageNotZero.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiWakeFileOnlyReaper @ 0x140524C90 (MiWakeFileOnlyReaper.c)
 *     MiHandlePageFileSizeChanges @ 0x14052751C (MiHandlePageFileSizeChanges.c)
 *     PnpCompleteSystemStartProcess @ 0x140527E20 (PnpCompleteSystemStartProcess.c)
 *     MiModifiedPageWriterExit @ 0x14052AA78 (MiModifiedPageWriterExit.c)
 *     MiProcessingPageExtendComplete @ 0x140530EA0 (MiProcessingPageExtendComplete.c)
 *     MiObtainFreePages @ 0x140533DBC (MiObtainFreePages.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     HalpDeleteSecondaryIcEntry @ 0x140591E58 (HalpDeleteSecondaryIcEntry.c)
 *     HalpProcessSecondarySignalList @ 0x140592170 (HalpProcessSecondarySignalList.c)
 *     HalpLoadSfsUpdateWorker @ 0x14059D350 (HalpLoadSfsUpdateWorker.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405B487C (CcDrainDelayDeleteForPartitionExit.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     FsRtlStackOverflowRead @ 0x1405BA880 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1405CD144 (IopFreeBackpocketIrp.c)
 *     PnprQuiesce @ 0x1405DE678 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405DF9F0 (PnpDiagnosticCompletionRoutine.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405ED2C0 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1405F8C00 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x1405F8C3C (KiSignalWaitDisconnectLock.c)
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 *     ?KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405FBA60 (-KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 *     ?KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1406000D0 (-KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1406028B4 (PfpScenCtxWaiterTimedOut.c)
 *     PopDeviceIdleCompletion @ 0x140606A30 (PopDeviceIdleCompletion.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     PopBatteryWakeDpc @ 0x14060F900 (PopBatteryWakeDpc.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x1406139E0 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1406149B0 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640230 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x140643C0C (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     EtwSendTraceBuffer @ 0x1406CA270 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x1406CB5E0 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1406CC8F0 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1406D15A0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1406D15F0 (ExRegisterBootDevice.c)
 *     WheapAddErrorSource @ 0x1406D8C98 (WheapAddErrorSource.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406E70A0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     CmSiSetEvent @ 0x1406E7D40 (CmSiSetEvent.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E9508 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1406EB650 (MiZeroPageFile.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1406EC070 (MiHotAddBootDeferredDescriptors.c)
 *     MiDistributeSystemCacheVaReductions @ 0x1406EC2FC (MiDistributeSystemCacheVaReductions.c)
 *     MiFinishResume @ 0x1406F4600 (MiFinishResume.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1406FA7D0 (MiSignalNonPagedPoolWatchers.c)
 *     MiIrpCompletionApcRoutine @ 0x1406FDA00 (MiIrpCompletionApcRoutine.c)
 *     MiFinishHoldingDirtyFaults @ 0x140700E74 (MiFinishHoldingDirtyFaults.c)
 *     MiIncreaseCommitLimits @ 0x14070A538 (MiIncreaseCommitLimits.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14070EDF4 (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDeletePartition @ 0x14070EF98 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14070FAE0 (MiStoreRundownWritesApc.c)
 *     MiAttemptPageFileReductionApc @ 0x1407121C0 (MiAttemptPageFileReductionApc.c)
 *     MiWakeAllZeroConductors @ 0x14071387C (MiWakeAllZeroConductors.c)
 *     MiWakeBackgroundZeroAffinityConductors @ 0x140713960 (MiWakeBackgroundZeroAffinityConductors.c)
 *     MiZeroEngineSetOptimalCount @ 0x140713B28 (MiZeroEngineSetOptimalCount.c)
 *     MiZeroPageThread @ 0x140713D40 (MiZeroPageThread.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140714488 (MiSignalNewAcceleratorsAvailable.c)
 *     PspGetSetContextSpecialApc @ 0x140735750 (PspGetSetContextSpecialApc.c)
 *     ExpPartitionCreatePool @ 0x14077511C (ExpPartitionCreatePool.c)
 *     HvlQuerySetBootPagesInfo @ 0x140779028 (HvlQuerySetBootPagesInfo.c)
 *     PfGenerateTrace @ 0x14077C418 (PfGenerateTrace.c)
 *     Phase1Initialization @ 0x1407829A0 (Phase1Initialization.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140784AB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 *     ArbArbiterHandler @ 0x14078A970 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14078AC9C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14078E560 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x1407921C0 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x140797100 (IopConnectLinkTrackingPort.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1407B7CB0 (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1407CA4B0 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x1407CAD40 (PfpParametersWatcher.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x1407CE2C4 (PopPowerLimitUpdatePendingEvents.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D9840 (PopPowerAggregatorDozeTimerWorker.c)
 *     TtmiWriteEventToAllQueues @ 0x1407EC734 (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407F2C4C (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1407F4880 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1407F499C (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1407F8AD0 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PspCriticalProcessDeathInfoCollectApc @ 0x140800760 (PspCriticalProcessDeathInfoCollectApc.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 *     PsIsVsmEnclaveTerminated @ 0x1408046B4 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1408047F8 (PsTerminateVsmEnclave.c)
 *     RtlpCtSelfSubscribe @ 0x14080ECFC (RtlpCtSelfSubscribe.c)
 *     EtwInitialize @ 0x14082A958 (EtwInitialize.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140836EB0 (EtwpCovSampCaptureWorkerThread.c)
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     MUIRegistrySystemRoutine @ 0x140849990 (MUIRegistrySystemRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14084ECC0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WheapProcessWaitingETWEvents @ 0x14084F860 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x14084FC40 (WheaRegChangeNotifyCallback.c)
 *     CmpInitializeSystemHivesLoad @ 0x1408514A8 (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpPostApcRunDown @ 0x1408572F0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     WdtpBarkWorkerThread @ 0x1408A64D0 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x1408ACED0 (SbpVmbusNotificationHandler.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1408C001C (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     EtwpQueueNotification @ 0x140914660 (EtwpQueueNotification.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     DbgkpWakeTarget @ 0x14091D3BC (DbgkpWakeTarget.c)
 *     DbgkpSetProcessDebugObject @ 0x14091D490 (DbgkpSetProcessDebugObject.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     NtAlpcSendWaitReceivePort @ 0x140929090 (NtAlpcSendWaitReceivePort.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     PiUEventDereferenceEventEntry @ 0x1409A801C (PiUEventDereferenceEventEntry.c)
 *     DbgkpCloseObject @ 0x1409BA900 (DbgkpCloseObject.c)
 *     ExpWnfNotifySubscription @ 0x1409C38A8 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 *     DbgkpQueueMessage @ 0x1409CF35C (DbgkpQueueMessage.c)
 *     PfTLoggingWorker @ 0x1409F1030 (PfTLoggingWorker.c)
 *     PfTReplaceCurrentBuffer @ 0x1409F2068 (PfTReplaceCurrentBuffer.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409F2F20 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopCompleteAction @ 0x1409F4288 (PopCompleteAction.c)
 *     PopSystemIdleWorker @ 0x1409F7600 (PopSystemIdleWorker.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1409FF3F0 (PspEvaluateAndNotifyEmptyJob.c)
 *     WmipReleaseCollectionEnabled @ 0x140A09BAC (WmipReleaseCollectionEnabled.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140A13A78 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A141BC (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140A14400 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpDisassociateConsumer @ 0x140A14A2C (EtwpDisassociateConsumer.c)
 *     EtwpStopLoggerInstance @ 0x140A14B5C (EtwpStopLoggerInstance.c)
 *     EtwpShutdownConsumers @ 0x140A153E4 (EtwpShutdownConsumers.c)
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x140A1B2E0 (PnpCompleteDeviceEvent.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A27458 (SPCallServerHandleQueryPolicy.c)
 *     EtwpCovSampContextAddSamples @ 0x140A31980 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140A3230C (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     IopLoadUnloadDriver @ 0x140A39590 (IopLoadUnloadDriver.c)
 *     MiPfExecuteReadList @ 0x140A5AB58 (MiPfExecuteReadList.c)
 *     NtSetEventEx @ 0x140A5BF10 (NtSetEventEx.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     AlpcpTrackPortReferences @ 0x140A827A0 (AlpcpTrackPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x140A84A70 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A9B040 (RtlDecompressFragmentLZNT1.c)
 *     IoDisconnectInterrupt @ 0x140A9C840 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140A9CECC (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A9D024 (IopInitializeActiveConnectBlock.c)
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140AA90C4 (IopAcquireReleaseDispatcherLock.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 *     CmpPostApc @ 0x140AE20D0 (CmpPostApc.c)
 *     MiInSwapStoreWorker @ 0x140AECA90 (MiInSwapStoreWorker.c)
 *     CmpWakeWriteQueueWaiters @ 0x140AED540 (CmpWakeWriteQueueWaiters.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140AEFF60 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     WmipQueueNotification @ 0x140AF3DC4 (WmipQueueNotification.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x140AF9530 (CmpGetVolumeClusterSizeCompletion.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFE4F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     PopBsdFlush @ 0x140B02804 (PopBsdFlush.c)
 *     NtDebugContinue @ 0x140B077A0 (NtDebugContinue.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B08574 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140B15BB0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 *     HalpGetDynamicDevicePointer @ 0x140B28DA8 (HalpGetDynamicDevicePointer.c)
 *     SmpFlushStorePages @ 0x140B290C0 (SmpFlushStorePages.c)
 *     MiStartZeroEngineThreads @ 0x140B29FA4 (MiStartZeroEngineThreads.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2DD3C (PopPowerAggregatorDozeTimerDisarm.c)
 *     PopFanWorker @ 0x140B36AD0 (PopFanWorker.c)
 *     PopBatteryReadTag @ 0x140B3F4F0 (PopBatteryReadTag.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B420B0 (PopFxUpdateVetoMaskWork.c)
 *     PsSetSessionObjectIoEvent @ 0x140B4929C (PsSetSessionObjectIoEvent.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 *     PspDereferenceSessionFinal @ 0x140B4C914 (PspDereferenceSessionFinal.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 *     NtNotifyChangeSession @ 0x140B4ED50 (NtNotifyChangeSession.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     IopSendMessageToTrackService @ 0x140B51334 (IopSendMessageToTrackService.c)
 *     WmipProcessSynchronousEtw @ 0x140B5545C (WmipProcessSynchronousEtw.c)
 *     CmpWaitForHiveMount @ 0x140B58CE0 (CmpWaitForHiveMount.c)
 *     DbgkRegisterErrorPort @ 0x140B5AFE4 (DbgkRegisterErrorPort.c)
 *     PnpShutdownDevices @ 0x140B6EEA4 (PnpShutdownDevices.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140BF8BF0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140BFE9BC (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140BFF52C (PopHandleWakeSources.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140C03500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140C036E0 (PopBuildDeviceNotifyListWatchdog.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140C066B4 (MiZeroAllPageFiles.c)
 *     MiMirrorComplete @ 0x140C070E4 (MiMirrorComplete.c)
 *     EmpReleasePagingReference @ 0x140C09E9C (EmpReleasePagingReference.c)
 *     PopEndMirroring @ 0x140C09F60 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 *     ExpSetSwappingKernelApc @ 0x140C0C8F0 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x140C0CC70 (PopFlushVolumeWorker.c)
 *     PfpScenCtxScenarioSet @ 0x140C10118 (PfpScenCtxScenarioSet.c)
 *     HalpPiix4Detect @ 0x140C10AEC (HalpPiix4Detect.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140C1B460 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140C32930 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140C36480 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140C42510 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140C58350 (AnFwpFadeAnimationTimer.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     MiInitializePagedPoolEvents @ 0x140D000F4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  KPRIORITY v4; // r15d
  int v6; // r13d
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v9; // r8
  LONG SignalState; // esi
  LONG result; // eax
  LIST_ENTRY *p_WaitListHead; // r12
  bool v13; // zf
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v15; // rdx
  __int64 v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  char v18; // cl
  LONG v19; // eax
  LONG v20; // eax
  __int64 v21; // rax
  char v22; // cl
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF

  v4 = Increment;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v6 = 0;
  }
  else
  {
    if ( !Wait && Event->Header.SignalState == 1 )
    {
      _InterlockedOr(v23, 0);
      result = Event->Header.SignalState;
      if ( result == 1 )
        return result;
    }
    v6 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Increment) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, Increment);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Event->Header.Lock, *(__int64 *)&Increment, Wait);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    p_WaitListHead = &Event->Header.WaitListHead;
    Event->Header.SignalState = 1;
    v13 = v6 == 0;
    Flink = Event->Header.WaitListHead.Flink;
    if ( v13 )
    {
      while ( Flink != p_WaitListHead )
      {
        v15 = Flink->Flink;
        v16 = (__int64)Flink;
        Flink = v15;
        v17 = *(struct _LIST_ENTRY **)(v16 + 8);
        if ( v15->Blink != (struct _LIST_ENTRY *)v16 || v17->Flink != (struct _LIST_ENTRY *)v16 )
          __fastfail(3u);
        v17->Flink = v15;
        v15->Blink = v17;
        v18 = *(_BYTE *)(v16 + 16);
        switch ( v18 )
        {
          case 1:
            if ( KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), 0LL) )
            {
              v19 = Event->Header.SignalState - 1;
              Event->Header.SignalState = v19;
              if ( !v19 )
                goto LABEL_8;
            }
            break;
          case 2:
            *(_BYTE *)(v16 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(v16 + 24), (_QWORD *)v16, v9);
            v20 = Event->Header.SignalState - 1;
            Event->Header.SignalState = v20;
            if ( !v20 )
              goto LABEL_8;
            break;
          case 4:
            *(_BYTE *)(v16 + 17) = 5;
            Event->Header.SignalState = 0;
            KiInsertQueueDpc(*(_QWORD *)(v16 + 24), 0);
            break;
          default:
            KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
            break;
        }
      }
    }
    else
    {
      while ( Flink != p_WaitListHead )
      {
        v21 = (__int64)Flink;
        Flink = Flink->Flink;
        v22 = *(_BYTE *)(v21 + 16);
        switch ( v22 )
        {
          case 1:
            KiTryUnwaitThread((__int64)CurrentPrcb, v21, *(unsigned __int16 *)(v21 + 18), 0LL);
            break;
          case 2:
            *(_BYTE *)(v21 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(v21 + 24), (_QWORD *)v21, v9);
            break;
          case 4:
            *(_BYTE *)(v21 + 17) = 5;
            Event->Header.SignalState = 0;
            KiInsertQueueDpc(*(_QWORD *)(v21 + 24), 0);
            break;
          default:
            KiTryUnwaitThread((__int64)CurrentPrcb, v21, 256LL, 0LL);
            break;
        }
      }
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
    }
  }
LABEL_8:
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, Wait != 0 ? 3 : 0, 1u, v4, CurrentIrql);
  return SignalState;
}
