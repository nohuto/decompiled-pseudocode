/*
 * XREFs of KeSetEvent @ 0x1402DE9C0
 * Callers:
 *     EtwpQueueApc @ 0x14020AA10 (EtwpQueueApc.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BDCC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14020C8C0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CB3C (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CDA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     EtwpTraceMessageVa @ 0x1402176B0 (EtwpTraceMessageVa.c)
 *     EtwpCloseLogger @ 0x140218150 (EtwpCloseLogger.c)
 *     PopFxTryReferenceDevice @ 0x140218E68 (PopFxTryReferenceDevice.c)
 *     EtwpSwitchBuffer @ 0x140219160 (EtwpSwitchBuffer.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024BD00 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     AlpcpSignal @ 0x1402648EC (AlpcpSignal.c)
 *     ExfReleaseRundownProtection @ 0x140266270 (ExfReleaseRundownProtection.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     FsFilterFreeCompletionStack @ 0x14026F3E8 (FsFilterFreeCompletionStack.c)
 *     SmFpFree @ 0x140281020 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140281140 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1402817D0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140281860 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiQueueControlAreaDelete @ 0x14028DAA0 (MiQueueControlAreaDelete.c)
 *     MiObtainDynamicVa @ 0x1402A4DF8 (MiObtainDynamicVa.c)
 *     MiBroadcastPeriodicEventToChildPartitions @ 0x1402A6E2C (MiBroadcastPeriodicEventToChildPartitions.c)
 *     MiPartitionPeriodicTick @ 0x1402A703C (MiPartitionPeriodicTick.c)
 *     MiSignalPartitionTrimThreads @ 0x1402A7450 (MiSignalPartitionTrimThreads.c)
 *     MiModifiedWriterPeriodicTick @ 0x1402A7E04 (MiModifiedWriterPeriodicTick.c)
 *     MiWakeMappedPageWriter @ 0x1402A7E8C (MiWakeMappedPageWriter.c)
 *     MiScheduleZeroPageThreads @ 0x1402A8034 (MiScheduleZeroPageThreads.c)
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 *     KiProcessDisconnectList @ 0x1402C3660 (KiProcessDisconnectList.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402C3770 (KiInvokeInterruptServiceRoutine.c)
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     KiInswapAndReadyThread @ 0x1402C6944 (KiInswapAndReadyThread.c)
 *     KiRequestProcessInSwap @ 0x1402C6AEC (KiRequestProcessInSwap.c)
 *     KeUnstackDetachProcess @ 0x1402C7110 (KeUnstackDetachProcess.c)
 *     KiInSwapSingleProcess @ 0x1402C79E4 (KiInSwapSingleProcess.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402C9E90 (MiInsertSecondaryListStandbyPage.c)
 *     MiInsertPagesInList @ 0x1402CD600 (MiInsertPagesInList.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402DD890 (MiUpdateLargePageCandidateValue.c)
 *     CcDecrementVacbActiveCount @ 0x1402DDBF0 (CcDecrementVacbActiveCount.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     IoReleaseRemoveLockEx @ 0x1402DF200 (IoReleaseRemoveLockEx.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402DF350 (ExpPartitionCreateThreadIfNecessary.c)
 *     CcUnpinFileDataEx @ 0x1402DF3C0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     MiHandleTransitionFault @ 0x1402F6550 (MiHandleTransitionFault.c)
 *     MiDecreaseAvailablePages @ 0x1402F8CD0 (MiDecreaseAvailablePages.c)
 *     MiCheckForControlAreaDeletion @ 0x14030BAE0 (MiCheckForControlAreaDeletion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     ExpUnblockPushLock @ 0x1403682A0 (ExpUnblockPushLock.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14036A0D8 (MiUpdateSlabTypeAvailablePages.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiCheckControlArea @ 0x14036DCC0 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x14036E1E8 (MiReturnCrossPartitionCharges.c)
 *     MiInsertUnusedSubsectionInternal @ 0x14036E724 (MiInsertUnusedSubsectionInternal.c)
 *     PopFxActivateComponentWorker @ 0x14037AE70 (PopFxActivateComponentWorker.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     KiReadyOutSwappedThreads @ 0x14037B7C4 (KiReadyOutSwappedThreads.c)
 *     PfpPartitionIterate @ 0x140382630 (PfpPartitionIterate.c)
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     CcDereferencePartition @ 0x1403843F0 (CcDereferencePartition.c)
 *     CcWriteBehindPreProcess @ 0x1403848C4 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcAsyncLazywriteWorker @ 0x140385850 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140387C88 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x140388074 (CcPostWorkQueueAsyncLazywrite.c)
 *     CcReapPrivateVolumeCachemap @ 0x140389DE0 (CcReapPrivateVolumeCachemap.c)
 *     MiIssueHardFaultIo @ 0x14038EA50 (MiIssueHardFaultIo.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14038FB60 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     PopFxReferenceDevice @ 0x1403948D4 (PopFxReferenceDevice.c)
 *     PopFxComponentWork @ 0x140395280 (PopFxComponentWork.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1403957E0 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperWorker @ 0x140395A70 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140396030 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcFlushCacheOneRange @ 0x14039A180 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x14039AA40 (MmFlushSection.c)
 *     CcPostDeferredWrites @ 0x14039B61C (CcPostDeferredWrites.c)
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039C160 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcDeleteBcbs @ 0x14039C3DC (CcDeleteBcbs.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     MiResolveTransitionFault @ 0x1403A6F04 (MiResolveTransitionFault.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1403AB220 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopFxCompleteComponentActivation @ 0x1403AECF4 (PopFxCompleteComponentActivation.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403B20A0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepUpdateConstraints @ 0x1403B37EC (PopPepUpdateConstraints.c)
 *     PopFxReleasePowerIrp @ 0x1403B60D8 (PopFxReleasePowerIrp.c)
 *     PopFxDereferenceDevice @ 0x1403B61F4 (PopFxDereferenceDevice.c)
 *     WmipUnreferenceRegEntry @ 0x1403B7080 (WmipUnreferenceRegEntry.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403B7760 (VfPoolDelayFreeIfPossible.c)
 *     MiQueuePageAccessLog @ 0x1403BA328 (MiQueuePageAccessLog.c)
 *     MiMarkMdlComplete @ 0x1403BB314 (MiMarkMdlComplete.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403C0D08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MiFlushComplete @ 0x1403C12D0 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1403C1BA8 (MiFreeOverlappedFlushEntry.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     WheapProcessWorkQueueItem @ 0x1403DFB60 (WheapProcessWorkQueueItem.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E07DC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E0844 (CcNotifyWriteBehindVolume.c)
 *     MiFlushAllPagesWorker @ 0x1403E0A6C (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E0BBC (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x1403E0E48 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E0ED8 (MiStoreUpdateMemoryConditions.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E3E90 (CcDeletePrivateVolumeCacheMap.c)
 *     MiIncreaseAvailablePages @ 0x1403E59D0 (MiIncreaseAvailablePages.c)
 *     MiUpdateAvailableEventsAtDpc @ 0x1403E5C00 (MiUpdateAvailableEventsAtDpc.c)
 *     MiDecrementZeroEngineThread @ 0x1403E8DCC (MiDecrementZeroEngineThread.c)
 *     SmKmStoreHelperSendCommand @ 0x1403F020C (SmKmStoreHelperSendCommand.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403F0B90 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403F51A0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ExpWorkerThread @ 0x1403F5680 (ExpWorkerThread.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     MiModifiedWriterInitialize @ 0x1404048B8 (MiModifiedWriterInitialize.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x140404A00 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiModifiedWriterWakeStore @ 0x1404068D8 (MiModifiedWriterWakeStore.c)
 *     SmKmUnlockMdl @ 0x14040751C (SmKmUnlockMdl.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404096F8 (MiStoreDecrementOutstandingWrites.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x14040B298 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     IopCopyCompleteReadRequest @ 0x14040FD30 (IopCopyCompleteReadRequest.c)
 *     KiDecrementProcessStackCount @ 0x1404108F0 (KiDecrementProcessStackCount.c)
 *     IopCompleteIoRingEntry @ 0x140411574 (IopCompleteIoRingEntry.c)
 *     IopMcDereferenceMdl @ 0x140411AC8 (IopMcDereferenceMdl.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140423128 (HalpReleaseSecondaryIcEntryShared.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1404231A8 (KiReleaseSecondaryPassiveConnectLock.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14042683C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     PopQueueTargetDpc @ 0x14042883C (PopQueueTargetDpc.c)
 *     ExpWakePushLock @ 0x140433394 (ExpWakePushLock.c)
 *     PopPropogateCoolingChange @ 0x1404357C4 (PopPropogateCoolingChange.c)
 *     PopUserPresentSet @ 0x1404384B4 (PopUserPresentSet.c)
 *     ExNotifyWithProcessing @ 0x140439330 (ExNotifyWithProcessing.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiDecrementVadsBeingDeleted @ 0x140442E60 (MiDecrementVadsBeingDeleted.c)
 *     EtwpApcPoolThunk @ 0x140447400 (EtwpApcPoolThunk.c)
 *     MiRecordLargePageCandidate @ 0x140447EB0 (MiRecordLargePageCandidate.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140448570 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14044F9D0 (ExReleaseRundownProtectionCacheAware.c)
 *     IoAcquireRemoveLockEx @ 0x1404578E0 (IoAcquireRemoveLockEx.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     MiUpdateCommitCounts @ 0x140462BC4 (MiUpdateCommitCounts.c)
 *     ExpReleaseRundownProtection @ 0x140463F50 (ExpReleaseRundownProtection.c)
 *     FsFilterCtrlFree @ 0x140466EF0 (FsFilterCtrlFree.c)
 *     EtwpFinalizePendingApc @ 0x140467800 (EtwpFinalizePendingApc.c)
 *     SmEvictComplete @ 0x14046F594 (SmEvictComplete.c)
 *     MiFreeExcessSegments @ 0x140474D10 (MiFreeExcessSegments.c)
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 *     LZNT1DecompressChunkWorkItem @ 0x14047F5F0 (LZNT1DecompressChunkWorkItem.c)
 *     MiSyncCommitSignals @ 0x14047FAB8 (MiSyncCommitSignals.c)
 *     PnpRemoveDeviceActionRequests @ 0x1404822A4 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 *     PopQueueDirectedDripsWork @ 0x140483414 (PopQueueDirectedDripsWork.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140488DF0 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14048ADF0 (EtwpCovSampCaptureQueueDpc.c)
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 *     MiWakeCommitRequest @ 0x1404A3584 (MiWakeCommitRequest.c)
 *     PopPowerRequestEvaluatePendingRequestStatus @ 0x1404A66E8 (PopPowerRequestEvaluatePendingRequestStatus.c)
 *     PopPowerRequestCallbackWorker @ 0x1404A68A0 (PopPowerRequestCallbackWorker.c)
 *     KeRetryOutswapProcess @ 0x1404AA98C (KeRetryOutswapProcess.c)
 *     PfpEventHandleFullBuffer @ 0x1404AC2D0 (PfpEventHandleFullBuffer.c)
 *     MiDecrementControlAreaCount @ 0x1404AFCD0 (MiDecrementControlAreaCount.c)
 *     MiStoreEvictThread @ 0x1404B0390 (MiStoreEvictThread.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404B21BC (PopCompleteNotifyTransitionCommon.c)
 *     CcPurgeAndClearCacheSection @ 0x1404B3978 (CcPurgeAndClearCacheSection.c)
 *     MiMarkPendingCommitRequests @ 0x1404B4C80 (MiMarkPendingCommitRequests.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiAllocateMappedWriterMdls @ 0x1404B64F0 (MiAllocateMappedWriterMdls.c)
 *     CmpCompleteFlushAndPurgeIrp @ 0x1404B8DF0 (CmpCompleteFlushAndPurgeIrp.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B9DEC (MiPfCompleteCoalescedIo.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404BB630 (CcAsyncLazywriteWorkerMulti.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1404BC6C0 (MiStoreContractVirtualPagefileApc.c)
 *     DifKeSetEventWrapper @ 0x1404C0D40 (DifKeSetEventWrapper.c)
 *     MiPartitionTrimmedEnough @ 0x1404C212C (MiPartitionTrimmedEnough.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1404C6DD0 (KiBalanceSetManagerDeferredRoutine.c)
 *     MiReplenishSlabAllocatorWorker @ 0x1404C9090 (MiReplenishSlabAllocatorWorker.c)
 *     MiPfIssueCoalescedSupport @ 0x1404CB7F0 (MiPfIssueCoalescedSupport.c)
 *     ExpEnumerateCallback @ 0x1404CC2D0 (ExpEnumerateCallback.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1404CE370 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     PopUserPresentSetWorker @ 0x1404CF520 (PopUserPresentSetWorker.c)
 *     EtwpLoggerDpc @ 0x1404D63A0 (EtwpLoggerDpc.c)
 *     PnpUnlockDeviceActionQueue @ 0x1404D77A4 (PnpUnlockDeviceActionQueue.c)
 *     PfpReturnAccessBuffer @ 0x1404D94E0 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1404DCB80 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CmpLazyFlushDpcRoutine @ 0x1404DE470 (CmpLazyFlushDpcRoutine.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x1404E0280 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     PopBatteryIrpComplete @ 0x1404E0B40 (PopBatteryIrpComplete.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404E538C (MmStoreFlushOutstandingEvictions.c)
 *     MiQueuePageFileExtension @ 0x1404E6668 (MiQueuePageFileExtension.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404E8EBC (PopUnregisterPowerSettingCallback.c)
 *     PopPowerAdapterIrpComplete @ 0x1404F7900 (PopPowerAdapterIrpComplete.c)
 *     PopFxCompleteComponentPerfState @ 0x1404F95B8 (PopFxCompleteComponentPerfState.c)
 *     ExpWorkQueueManagerReaperTimer @ 0x1404FB6C0 (ExpWorkQueueManagerReaperTimer.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404FD140 (PopFxFindAndReferenceAcpiDevice.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404FE700 (EtwpCovSampCaptureCleanupLookasides.c)
 *     PnpUnlockMountableDevice @ 0x1404FEFC4 (PnpUnlockMountableDevice.c)
 *     MiIncrementZeroEngineThread @ 0x1405017CC (MiIncrementZeroEngineThread.c)
 *     MiReadFromMemoryPagefile @ 0x1405030C8 (MiReadFromMemoryPagefile.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140503D90 (KiSynchronizePassiveInterruptExecution.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405079A8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiDecrementCloneHeaderCount @ 0x14050D03C (MiDecrementCloneHeaderCount.c)
 *     CcProcessDelayedDeletePVCM @ 0x14050D370 (CcProcessDelayedDeletePVCM.c)
 *     IopFreeReserveIrp @ 0x14050D934 (IopFreeReserveIrp.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14050ED78 (PopFxAcpiForwardPepWorkRequest.c)
 *     MiFinishPageFileExtension @ 0x14050F0CC (MiFinishPageFileExtension.c)
 *     MiStoreExtendVirtualPagefile @ 0x1405117D8 (MiStoreExtendVirtualPagefile.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x140511DAC (CcCancelMmWaitForUninitializeCacheMap.c)
 *     MiPageNotZero @ 0x140515068 (MiPageNotZero.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiWakeFileOnlyReaper @ 0x140522624 (MiWakeFileOnlyReaper.c)
 *     MiHandlePageFileSizeChanges @ 0x140524EAC (MiHandlePageFileSizeChanges.c)
 *     PnpCompleteSystemStartProcess @ 0x1405257B0 (PnpCompleteSystemStartProcess.c)
 *     MiModifiedPageWriterExit @ 0x140528408 (MiModifiedPageWriterExit.c)
 *     MiProcessingPageExtendComplete @ 0x14052E980 (MiProcessingPageExtendComplete.c)
 *     MiObtainFreePages @ 0x140531914 (MiObtainFreePages.c)
 *     MiFlushAllFilesystemPages @ 0x140531F5C (MiFlushAllFilesystemPages.c)
 *     HalpDeleteSecondaryIcEntry @ 0x14058F6D8 (HalpDeleteSecondaryIcEntry.c)
 *     HalpProcessSecondarySignalList @ 0x14058F9F0 (HalpProcessSecondarySignalList.c)
 *     HalpLoadSfsUpdateWorker @ 0x14059ABD0 (HalpLoadSfsUpdateWorker.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x1405B206C (CcDrainDelayDeleteForPartitionExit.c)
 *     CcDeletePartition @ 0x1405B2214 (CcDeletePartition.c)
 *     FsRtlStackOverflowRead @ 0x1405B8010 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1405CA874 (IopFreeBackpocketIrp.c)
 *     PnprQuiesce @ 0x1405DBDC8 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1405DD080 (PnpDiagnosticCompletionRoutine.c)
 *     KiComputeDispatchInterruptCostDpcRoutine @ 0x1405EA950 (KiComputeDispatchInterruptCostDpcRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1405F6240 (KiPassiveIsrWatchdog.c)
 *     KiSignalWaitDisconnectLock @ 0x1405F627C (KiSignalWaitDisconnectLock.c)
 *     KeBalanceSetManager @ 0x1405F79E0 (KeBalanceSetManager.c)
 *     ?KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405F9040 (-KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     ?KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405FD680 (-KeAbCrossThreadDeleteDpcRoutine@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1405FFE04 (PfpScenCtxWaiterTimedOut.c)
 *     PopDeviceIdleCompletion @ 0x140603F30 (PopDeviceIdleCompletion.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 *     PopBatteryWakeDpc @ 0x14060C7A0 (PopBatteryWakeDpc.c)
 *     PopIdleWakeDelayedWakeSourceReferencer @ 0x140610780 (PopIdleWakeDelayedWakeSourceReferencer.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x140611B70 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063C650 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x14064002C (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     EtwSendTraceBuffer @ 0x1406C6570 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x1406C78E0 (EtwpThreadRundownApc.c)
 *     EtwpCovSampCaptureRebalanceDpc @ 0x1406C8910 (EtwpCovSampCaptureRebalanceDpc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1406CD570 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1406CD5C0 (ExRegisterBootDevice.c)
 *     WheapAddErrorSource @ 0x1406D4BB8 (WheapAddErrorSource.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406E2DC0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     CmSiSetEvent @ 0x1406E3094 (CmSiSetEvent.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E4858 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReadPagefilePage @ 0x1406E4AA0 (MiReadPagefilePage.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1406E69A0 (MiZeroPageFile.c)
 *     MiHotAddBootDeferredDescriptors @ 0x1406E73C0 (MiHotAddBootDeferredDescriptors.c)
 *     MiDistributeSystemCacheVaReductions @ 0x1406E764C (MiDistributeSystemCacheVaReductions.c)
 *     MiFinishResume @ 0x1406EF990 (MiFinishResume.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1406F5B60 (MiSignalNonPagedPoolWatchers.c)
 *     MiIrpCompletionApcRoutine @ 0x1406F8D30 (MiIrpCompletionApcRoutine.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406FC1A4 (MiFinishHoldingDirtyFaults.c)
 *     MiIncreaseCommitLimits @ 0x140705868 (MiIncreaseCommitLimits.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14070A140 (MmManagePartitionSetMemoryThresholds.c)
 *     MiStoreDeletePartition @ 0x14070A2E4 (MiStoreDeletePartition.c)
 *     MiStoreRundownWritesApc @ 0x14070AE30 (MiStoreRundownWritesApc.c)
 *     MiAttemptPageFileReductionApc @ 0x14070D510 (MiAttemptPageFileReductionApc.c)
 *     MiWakeAllZeroConductors @ 0x14070EB7C (MiWakeAllZeroConductors.c)
 *     MiWakeBackgroundZeroAffinityConductors @ 0x14070EC60 (MiWakeBackgroundZeroAffinityConductors.c)
 *     MiZeroEngineSetOptimalCount @ 0x14070EE28 (MiZeroEngineSetOptimalCount.c)
 *     MiZeroPageThread @ 0x14070F040 (MiZeroPageThread.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x14070F78C (MiSignalNewAcceleratorsAvailable.c)
 *     PspGetSetContextSpecialApc @ 0x140730B80 (PspGetSetContextSpecialApc.c)
 *     ExpPartitionCreatePool @ 0x14077211C (ExpPartitionCreatePool.c)
 *     HvlQuerySetBootPagesInfo @ 0x140776180 (HvlQuerySetBootPagesInfo.c)
 *     PfGenerateTrace @ 0x1407794E8 (PfGenerateTrace.c)
 *     Phase1Initialization @ 0x14077FEA0 (Phase1Initialization.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140781FB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 *     ArbArbiterHandler @ 0x140787E40 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14078816C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14078BA30 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14078F690 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopConnectLinkTrackingPort @ 0x1407945D0 (IopConnectLinkTrackingPort.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1407B4C50 (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1407C7450 (PfSnTracingStateExWorkerRoutine.c)
 *     PfpParametersWatcher @ 0x1407C7CE0 (PfpParametersWatcher.c)
 *     PopPowerLimitUpdatePendingEvents @ 0x1407CB224 (PopPowerLimitUpdatePendingEvents.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x1407D66B0 (PopPowerAggregatorDozeTimerWorker.c)
 *     TtmiWriteEventToAllQueues @ 0x1407E6BDC (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407ED0EC (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x1407EED20 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x1407EEE3C (PspDeleteServerSiloGlobals.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1407F2F70 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 *     PspCriticalProcessDeathInfoCollectApc @ 0x1407FAD30 (PspCriticalProcessDeathInfoCollectApc.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PsCallEnclave @ 0x1407FE1F0 (PsCallEnclave.c)
 *     PsIsVsmEnclaveTerminated @ 0x1407FEC84 (PsIsVsmEnclaveTerminated.c)
 *     PsTerminateVsmEnclave @ 0x1407FEDC8 (PsTerminateVsmEnclave.c)
 *     RtlpCtSelfSubscribe @ 0x14080926C (RtlpCtSelfSubscribe.c)
 *     EtwInitialize @ 0x140824718 (EtwInitialize.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140830C70 (EtwpCovSampCaptureWorkerThread.c)
 *     ExpPartitionDestroy @ 0x14083FAC8 (ExpPartitionDestroy.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     MUIRegistrySystemRoutine @ 0x140844500 (MUIRegistrySystemRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1408489F0 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     WheapProcessWaitingETWEvents @ 0x140849550 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x140849930 (WheaRegChangeNotifyCallback.c)
 *     CmpInitializeSystemHivesLoad @ 0x14084B198 (CmpInitializeSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpPostApcRunDown @ 0x140850FE0 (CmpPostApcRunDown.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 *     MmStoreRegister @ 0x14087D67C (MmStoreRegister.c)
 *     WdtpBarkWorkerThread @ 0x1408A00C0 (WdtpBarkWorkerThread.c)
 *     SbpVmbusNotificationHandler @ 0x1408A6A60 (SbpVmbusNotificationHandler.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1408B9A4C (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     NtAlpcSendWaitReceivePort @ 0x1408F9100 (NtAlpcSendWaitReceivePort.c)
 *     EtwpQueueNotification @ 0x140938AC0 (EtwpQueueNotification.c)
 *     EtwpCovSampContextAddSamples @ 0x14093E870 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x14093F1FC (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     ExpWnfNotifySubscription @ 0x140947F34 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14094C830 (ExpWnfNotifyNameSubscribers.c)
 *     DbgkpQueueMessage @ 0x140953A1C (DbgkpQueueMessage.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140959B30 (PspEvaluateAndNotifyEmptyJob.c)
 *     DbgkpSetProcessDebugObject @ 0x140985C5C (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140985E88 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140987410 (NtDebugContinue.c)
 *     IopWriteFile @ 0x1409B19A0 (IopWriteFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 *     PiUEventDereferenceEventEntry @ 0x1409D712C (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x1409DCD90 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x1409DE1B4 (PnpCompleteDeviceEvent.c)
 *     PfTLoggingWorker @ 0x140A05840 (PfTLoggingWorker.c)
 *     PfTReplaceCurrentBuffer @ 0x140A06878 (PfTReplaceCurrentBuffer.c)
 *     WmipReleaseCollectionEnabled @ 0x140A0ABC4 (WmipReleaseCollectionEnabled.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140A14884 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A14FC8 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140A1520C (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpDisassociateConsumer @ 0x140A15838 (EtwpDisassociateConsumer.c)
 *     EtwpStopLoggerInstance @ 0x140A15968 (EtwpStopLoggerInstance.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A1DE2C (SPCallServerHandleQueryPolicy.c)
 *     IopLoadUnloadDriver @ 0x140A264F0 (IopLoadUnloadDriver.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140A37360 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopCompleteAction @ 0x140A386C8 (PopCompleteAction.c)
 *     PopSystemIdleWorker @ 0x140A3BBE0 (PopSystemIdleWorker.c)
 *     MiPfExecuteReadList @ 0x140A51868 (MiPfExecuteReadList.c)
 *     NtSetEventEx @ 0x140A52C20 (NtSetEventEx.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     EtwpShutdownConsumers @ 0x140A6D194 (EtwpShutdownConsumers.c)
 *     EtwpSynchronizeWithLogger @ 0x140A6FD00 (EtwpSynchronizeWithLogger.c)
 *     AlpcpTrackPortReferences @ 0x140A7A860 (AlpcpTrackPortReferences.c)
 *     RtlDecompressBufferLZNT1 @ 0x140A7EC00 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A96EC0 (RtlDecompressFragmentLZNT1.c)
 *     IoDisconnectInterrupt @ 0x140A986C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A98890 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140A98D4C (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A98EA4 (IopInitializeActiveConnectBlock.c)
 *     PfSnEndTrace @ 0x140AA3588 (PfSnEndTrace.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140AABB14 (IopAcquireReleaseDispatcherLock.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 *     IopTrackLink @ 0x140ACE24C (IopTrackLink.c)
 *     NtCopyFileChunk @ 0x140AE2060 (NtCopyFileChunk.c)
 *     CmpPostApc @ 0x140AE45C0 (CmpPostApc.c)
 *     MiInSwapStoreWorker @ 0x140AE9FA0 (MiInSwapStoreWorker.c)
 *     CmpWakeWriteQueueWaiters @ 0x140AEAA50 (CmpWakeWriteQueueWaiters.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140AED210 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     WmipQueueNotification @ 0x140AF1184 (WmipQueueNotification.c)
 *     PfTTraceListAdd @ 0x140AF5F5C (PfTTraceListAdd.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x140AF6E90 (CmpGetVolumeClusterSizeCompletion.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFC980 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     DbgkpCloseObject @ 0x140AFF4E0 (DbgkpCloseObject.c)
 *     PopBsdFlush @ 0x140B00AD4 (PopBsdFlush.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B06444 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140B06628 (PopFxUnregisterDevice.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140B140F0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B1EEB0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiUEventHandleVetoEvent @ 0x140B24524 (PiUEventHandleVetoEvent.c)
 *     HalpGetDynamicDevicePointer @ 0x140B26B48 (HalpGetDynamicDevicePointer.c)
 *     SmpFlushStorePages @ 0x140B27010 (SmpFlushStorePages.c)
 *     MiStartZeroEngineThreads @ 0x140B276E4 (MiStartZeroEngineThreads.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2BCBC (PopPowerAggregatorDozeTimerDisarm.c)
 *     PopFanWorker @ 0x140B348C0 (PopFanWorker.c)
 *     PopBatteryReadTag @ 0x140B3D420 (PopBatteryReadTag.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B40080 (PopFxUpdateVetoMaskWork.c)
 *     PsSetSessionObjectIoEvent @ 0x140B4726C (PsSetSessionObjectIoEvent.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 *     PspDereferenceSessionFinal @ 0x140B4AB84 (PspDereferenceSessionFinal.c)
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 *     NtNotifyChangeSession @ 0x140B4CFC0 (NtNotifyChangeSession.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     IopSendMessageToTrackService @ 0x140B4EAA4 (IopSendMessageToTrackService.c)
 *     WmipProcessSynchronousEtw @ 0x140B52BBC (WmipProcessSynchronousEtw.c)
 *     CmpWaitForHiveMount @ 0x140B55FE0 (CmpWaitForHiveMount.c)
 *     DbgkRegisterErrorPort @ 0x140B581C4 (DbgkRegisterErrorPort.c)
 *     PnpShutdownDevices @ 0x140B6BDA8 (PnpShutdownDevices.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 *     PnprInitiateReplaceOperation @ 0x140BF1744 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140BF2BF0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140BF89BC (PfpScenCtxPrefetchStateSet.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140BF952C (PopHandleWakeSources.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140BFD500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140BFD6E0 (PopBuildDeviceNotifyListWatchdog.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140C004A4 (MiZeroAllPageFiles.c)
 *     MiMirrorComplete @ 0x140C00ED4 (MiMirrorComplete.c)
 *     EmpReleasePagingReference @ 0x140C03C8C (EmpReleasePagingReference.c)
 *     PopEndMirroring @ 0x140C03D50 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 *     ExpSetSwappingKernelApc @ 0x140C066E0 (ExpSetSwappingKernelApc.c)
 *     PopFlushVolumeWorker @ 0x140C06A60 (PopFlushVolumeWorker.c)
 *     PfpScenCtxScenarioSet @ 0x140C09F08 (PfpScenCtxScenarioSet.c)
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140C15460 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140C2C920 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140C30470 (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140C3C500 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140C52350 (AnFwpFadeAnimationTimer.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     MiInitializePagedPoolEvents @ 0x140CF9D74 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1402735B4 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
            KiInsertQueueDpc(*(_QWORD *)(v16 + 24), (__int64)Event, v16, 0LL, 0);
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
            KiInsertQueueDpc(*(_QWORD *)(v21 + 24), (__int64)Event, v21, 0LL, 0);
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
