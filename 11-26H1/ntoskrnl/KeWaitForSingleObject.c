/*
 * XREFs of KeWaitForSingleObject @ 0x140277AD0
 * Callers:
 *     FsRtlAcquireEofLock @ 0x140204E30 (FsRtlAcquireEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     ExpWaitForResource @ 0x14020606C (ExpWaitForResource.c)
 *     PoGetIdleTimes @ 0x14021A3C0 (PoGetIdleTimes.c)
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PpmCheckPeriodicStart @ 0x140258280 (PpmCheckPeriodicStart.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     AlpcpSignalAndWait @ 0x140263DA0 (AlpcpSignalAndWait.c)
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026E3F4 (FsRtlReleaseFileForModWrite.c)
 *     IopAllocateReserveIrp @ 0x14026F5DC (IopAllocateReserveIrp.c)
 *     ExpWaitForFastResource @ 0x140275550 (ExpWaitForFastResource.c)
 *     FsRtlAcquireHeaderMutex @ 0x140276E20 (FsRtlAcquireHeaderMutex.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027F390 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiAsyncSlabReplenish @ 0x1402A4ED4 (MiAsyncSlabReplenish.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     MiRetryNonPagedAllocation @ 0x1403681E0 (MiRetryNonPagedAllocation.c)
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140397560 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperWorker @ 0x1403977F0 (SmKmStoreHelperWorker.c)
 *     PopFxProcessWorkPool @ 0x140397FE8 (PopFxProcessWorkPool.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     PopSetWatchdog @ 0x1403B4B68 (PopSetWatchdog.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     WmipDeregisterRegEntry @ 0x1403C0DF0 (WmipDeregisterRegEntry.c)
 *     PopRunMaximumIrpWorkers @ 0x1403C1500 (PopRunMaximumIrpWorkers.c)
 *     WmipReceiveNotifications @ 0x1403DE4EC (WmipReceiveNotifications.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DEF10 (NtSignalAndWaitForSingleObject.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DF598 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403E0000 (LdrpGetFromMUIMemCache.c)
 *     WmipFindRegEntryByProviderId @ 0x1403E01F4 (WmipFindRegEntryByProviderId.c)
 *     WheapProcessWorkQueueItem @ 0x1403E2D50 (WheapProcessWorkQueueItem.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     SmKmStoreHelperCleanup @ 0x1403E9B88 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperSendCommand @ 0x1403E9BDC (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403E9D34 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403EA560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1403EDE88 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x1403EE8AC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403EED28 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     FsRtlReleaseEofLock @ 0x140419310 (FsRtlReleaseEofLock.c)
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1404302BC (KiAcquireSecondaryPassiveConnectLock.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140441060 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     EtwpEnableMetaProviderGuid @ 0x14044EE5C (EtwpEnableMetaProviderGuid.c)
 *     FsFilterAllocateCompletionStack @ 0x140454D68 (FsFilterAllocateCompletionStack.c)
 *     ExfWaitForRundownProtectionRelease @ 0x14045CD8C (ExfWaitForRundownProtectionRelease.c)
 *     AlpcpWaitForSingleObject @ 0x14045F3E0 (AlpcpWaitForSingleObject.c)
 *     IopWaitForSynchronousIoEvent @ 0x1404633D8 (IopWaitForSynchronousIoEvent.c)
 *     IopWaitForSynchronousIo @ 0x1404634B0 (IopWaitForSynchronousIo.c)
 *     MiZeroPageWrite @ 0x140466EC8 (MiZeroPageWrite.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140478630 (ExTimedWaitForUnblockPushLock.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140484BD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CcWaitForUninitializeCacheMap @ 0x140485448 (CcWaitForUninitializeCacheMap.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1404886EC (SmKmStoreDeleteWhenEmpty.c)
 *     CcSetValidData @ 0x140489944 (CcSetValidData.c)
 *     CmpDoFileRead @ 0x14048E1D4 (CmpDoFileRead.c)
 *     WmipFindRegEntryByDevice @ 0x14048FD3C (WmipFindRegEntryByDevice.c)
 *     ExpAcquireFastMutexContended @ 0x14049A508 (ExpAcquireFastMutexContended.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     MiIssuePageExtendRequest @ 0x14049E560 (MiIssuePageExtendRequest.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A09C8 (LdrpSetAlternateResourceModuleHandle.c)
 *     IopWaitForLockAlertable @ 0x1404A3F78 (IopWaitForLockAlertable.c)
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404ABC54 (LdrUnloadAlternateResourceModuleEx.c)
 *     IoSynchronousCallDriver @ 0x1404ABE20 (IoSynchronousCallDriver.c)
 *     PpmCapturePerformanceDistribution @ 0x1404B01CC (PpmCapturePerformanceDistribution.c)
 *     PopWakeDeviceList @ 0x1404B2F38 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B3160 (PopSleepDeviceList.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B367C (MiPfCompleteCoalescedIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1404BA3F0 (DifKeWaitForSingleObjectWrapper.c)
 *     PpmTryAcquireLock @ 0x1404C2A18 (PpmTryAcquireLock.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404C31E0 (MiCheckHoldFaultForHotPatch.c)
 *     WmipBuildTraceDeviceList @ 0x1404C792C (WmipBuildTraceDeviceList.c)
 *     CmSiWaitForSingleEvent @ 0x1404C9C58 (CmSiWaitForSingleEvent.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1404CA410 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1404CC35C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 *     PnpLockDeviceActionQueue @ 0x1404D1004 (PnpLockDeviceActionQueue.c)
 *     WmiQueryTraceProviderCount @ 0x1404D14C0 (WmiQueryTraceProviderCount.c)
 *     EtwpStartLoggerThread @ 0x1404DE2D0 (EtwpStartLoggerThread.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404DE92C (MmStoreFlushOutstandingEvictions.c)
 *     MiStoreAttemptContractPageFile @ 0x1404DE9D4 (MiStoreAttemptContractPageFile.c)
 *     WmipAllocRegEntry @ 0x1404E0D7C (WmipAllocRegEntry.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404E0F80 (IoReleaseRemoveLockAndWaitEx.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404E18A4 (MiQueueSyncModifiedWriterApc.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     MiZeroThreadEnterWaitState @ 0x1404E6364 (MiZeroThreadEnterWaitState.c)
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404E929C (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     MiApplyCommitDelay @ 0x1404EF674 (MiApplyCommitDelay.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopHaltDeviceIdle @ 0x1404F3A6C (PopHaltDeviceIdle.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404F7B1C (EtwpCovSampCaptureContextStop.c)
 *     PnpLockMountableDevice @ 0x1404F871C (PnpLockMountableDevice.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1404FD660 (KiSynchronizePassiveInterruptExecution.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140501378 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     MiWaitForAsynchronousFlushes @ 0x140506F20 (MiWaitForAsynchronousFlushes.c)
 *     PopIgnoreBatteryStatusChange @ 0x14050E888 (PopIgnoreBatteryStatusChange.c)
 *     MiModifiedPageWriterExit @ 0x14052AA78 (MiModifiedPageWriterExit.c)
 *     IopLoadDriverImage @ 0x14052C948 (IopLoadDriverImage.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14052DAA0 (IopIoRingWaitForCompletionEvent.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140591C28 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B3E18 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeletePartition @ 0x1405B4A24 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 *     FsRtlpPostStackOverflow @ 0x1405BA9A0 (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D9FD4 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnpSerializeBoot @ 0x1405DAF5C (PnpSerializeBoot.c)
 *     PnprQuiesce @ 0x1405DE678 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405DFC7C (PnpProcessRebalance.c)
 *     KiSignalWaitDisconnectLock @ 0x1405F8C3C (KiSignalWaitDisconnectLock.c)
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 *     KeSwapProcessOrStack @ 0x1405FA6A0 (KeSwapProcessOrStack.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405FB940 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     KiStallBugcheckThread @ 0x1405FD0E8 (KiStallBugcheckThread.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     PopIrpWorkerControl @ 0x14060F3B0 (PopIrpWorkerControl.c)
 *     PspIumFreePartitionState @ 0x140619720 (PspIumFreePartitionState.c)
 *     SmTerminateStoreProcess @ 0x1406423FC (SmTerminateStoreProcess.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140642980 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmpFpWaitForResource @ 0x14064358C (SmpFpWaitForResource.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x1406D15F0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1406D17F0 (ExpWaitForBootDevices.c)
 *     WheapAddErrorSource @ 0x1406D8C98 (WheapAddErrorSource.c)
 *     CmpLazyWriteWorker @ 0x1406E6AF0 (CmpLazyWriteWorker.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406EA1AC (MmReleaseCommitForMemResetPages.c)
 *     MiDrainCrossPartitionUsage @ 0x1406F51F0 (MiDrainCrossPartitionUsage.c)
 *     MiFileOnlyReaperWorker @ 0x1406FEA30 (MiFileOnlyReaperWorker.c)
 *     MiContractWsSwapPageFileWorker @ 0x140708F20 (MiContractWsSwapPageFileWorker.c)
 *     MiStoreDeletePartition @ 0x14070EF98 (MiStoreDeletePartition.c)
 *     sub_140717D80 @ 0x140717D80 (sub_140717D80.c)
 *     PopFxNotifySxTransitionState @ 0x14077370C (PopFxNotifySxTransitionState.c)
 *     PopReadPagesFromHiberFile @ 0x140778074 (PopReadPagesFromHiberFile.c)
 *     sub_14077AFD8 @ 0x14077AFD8 (sub_14077AFD8.c)
 *     sub_14077B28C @ 0x14077B28C (sub_14077B28C.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14077CA20 (PnpWaitForEmptyDeviceEventQueue.c)
 *     HalpSetAcpiRealTimeClock @ 0x140782DAC (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140784AB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140787E24 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpPutAcpiHacksInRegistry @ 0x1407884B4 (HalpPutAcpiHacksInRegistry.c)
 *     HalpLoadSfsUpdate @ 0x140788CA0 (HalpLoadSfsUpdate.c)
 *     HalpQueryPccInterface @ 0x140789EF4 (HalpQueryPccInterface.c)
 *     ArbArbiterHandler @ 0x14078A970 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14078AC9C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078E2D4 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlWaitForSmssEvent @ 0x140790340 (FsRtlWaitForSmssEvent.c)
 *     FsRtlBalanceReads @ 0x140790BB0 (FsRtlBalanceReads.c)
 *     FsRtlDeregisterUncProvider @ 0x140790C70 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x140790F6C (FsRtlpRegisterUncProvider.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140793680 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopHardErrorThread @ 0x140797730 (IopHardErrorThread.c)
 *     IopLoadFileSystemDriver @ 0x140797BC4 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x14079868C (IopSetRemoteLink.c)
 *     IoCheckPagefileDisableReservations @ 0x1407989CC (IoCheckPagefileDisableReservations.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14079D9E8 (IopIssueSystemEnvironmentRequest.c)
 *     IoReplacePartitionUnit @ 0x1407A2D50 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407A4944 (PnpRequestHwProfileChangeNotification.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     IopAllocateBootResources @ 0x1407A8AB0 (IopAllocateBootResources.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AFEB0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407AFEE0 (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1407B029C (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     PipKsrDeferredHardwareInit @ 0x1407B5E64 (PipKsrDeferredHardwareInit.c)
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1407B7B78 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1407B7CB0 (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PopDisablePowerLimitExtension @ 0x1407CDB28 (PopDisablePowerLimitExtension.c)
 *     PopFreePowerLimitRequest @ 0x1407CDE7C (PopFreePowerLimitRequest.c)
 *     PopDeactiveThermalRequest @ 0x1407CEB98 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1407CED84 (PopDisableCoolingExtension.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407CF670 (PopDirectedDripsWorkerRoutine.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1407D5000 (PopThermalZoneRemove.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407DA120 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407DAE34 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x1407DB440 (PopBatteryRemove.c)
 *     PopBatteryUpdateTestExempt @ 0x1407DB65C (PopBatteryUpdateTestExempt.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopPowerAdapterRemove @ 0x1407DDB70 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x1407DEED0 (PopFanRemove.c)
 *     PopEtDeferredInitDxgContext @ 0x1407DFE00 (PopEtDeferredInitDxgContext.c)
 *     SshSessionManagerFlushBuffers @ 0x1407E8EFC (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x1407F4E38 (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     PsWaitForAllProcesses @ 0x140800154 (PsWaitForAllProcesses.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x140800794 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     PspWaitForUsermodeExit @ 0x1408014C4 (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x140803A80 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1408047F8 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x140805964 (RawPerformDevIoCtrl.c)
 *     RawQueryFileSystemInformation @ 0x140805BB0 (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14080ED20 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     IoWMIAllocateInstanceIds @ 0x140827FD0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140828E1C (WmipGetSysIds.c)
 *     WmipEnumerateGuids @ 0x1408295D8 (WmipEnumerateGuids.c)
 *     WmipProcessLegacyEtwRegister @ 0x140829E98 (WmipProcessLegacyEtwRegister.c)
 *     WmipWaitForCollectionEnabled @ 0x14082A5BC (WmipWaitForCollectionEnabled.c)
 *     EtwpSetPmcProfileSource @ 0x14082E1F0 (EtwpSetPmcProfileSource.c)
 *     EtwDereferenceSpinLockCounters @ 0x140832AC0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140832B20 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x1408345B0 (EtwpKsrCallback.c)
 *     ExpQueryPrmInterface @ 0x140845358 (ExpQueryPrmInterface.c)
 *     ExpWorkQueueDestroy @ 0x140846120 (ExpWorkQueueDestroy.c)
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 *     NtStartProfile @ 0x14084B8E0 (NtStartProfile.c)
 *     NtStopProfile @ 0x14084BBB0 (NtStopProfile.c)
 *     WheaAttemptClearPoison @ 0x14084E2C0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14084E3B0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapProcessWaitingETWEvents @ 0x14084F860 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x14084FC40 (WheaRegChangeNotifyCallback.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     CmpDummyThreadRoutine @ 0x14085D370 (CmpDummyThreadRoutine.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     MiUpdateExistingPageFile @ 0x140872760 (MiUpdateExistingPageFile.c)
 *     MiZeroPageFileFirstPage @ 0x140872E7C (MiZeroPageFileFirstPage.c)
 *     MiInjectThreadForHotPatch @ 0x140876A14 (MiInjectThreadForHotPatch.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1408A6504 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdVerifyBootDisk @ 0x1408AC46C (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpGetVolumeClusterSize @ 0x1408BCE30 (CmpGetVolumeClusterSize.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     EtwpDisableTraceProviders @ 0x140913480 (EtwpDisableTraceProviders.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     IoVolumeDeviceToDosName @ 0x1409205E0 (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1409212D0 (IopGetFileInformation.c)
 *     ObWaitForSingleObject @ 0x14092A290 (ObWaitForSingleObject.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     IopCancelIrpsInThreadList @ 0x14094A788 (IopCancelIrpsInThreadList.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x140967F20 (PiControlGetSetDeviceStatus.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14096EDFC (IopInsertLegacyBusDeviceNode.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409797A0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     IopSynchronousApiServiceTail @ 0x1409829A4 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1409B0330 (PnpSynchronizeDeviceEventQueue.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     IopUncacheInterfaceInformation @ 0x1409B21E4 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1409B5DE4 (PnpQueueQueryAndRemoveEvent.c)
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     WmipProcessLegacyEtwUnregister @ 0x1409BE4E0 (WmipProcessLegacyEtwUnregister.c)
 *     DbgkpQueueMessage @ 0x1409CF35C (DbgkpQueueMessage.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 *     PspUserThreadStartup @ 0x1409E79E0 (PspUserThreadStartup.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipEnumerateMofResources @ 0x140A0A008 (WmipEnumerateMofResources.c)
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 *     WmipFindISinGEbyName @ 0x140A0A608 (WmipFindISinGEbyName.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140A0A7B4 (WmipDetermineInstanceBaseIndex.c)
 *     WmipRegistrationWorker @ 0x140A0A880 (WmipRegistrationWorker.c)
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 *     WmipQueryGuidInfo @ 0x140A0B5FC (WmipQueryGuidInfo.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0B87C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDSCleanup @ 0x140A0C620 (WmipDSCleanup.c)
 *     WmipIncludeStaticNames @ 0x140A0C8EC (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x140A0CBD4 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0CDA0 (WmipEnableCollectionForNewGuid.c)
 *     WmipDeleteMethod @ 0x140A0CF00 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140A0CFF8 (WmipDisableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140A0D1A8 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140A0D280 (WmipEnableCollectOrEvent.c)
 *     WmipOpenBlock @ 0x140A0D540 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x140A0D800 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x140A0E7D4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x140A0EB90 (WmipPrepareForWnodeAD.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 *     WdtpCancelTimer @ 0x140A1B10C (WdtpCancelTimer.c)
 *     PnpWatchdogTimerPause @ 0x140A1B1D4 (PnpWatchdogTimerPause.c)
 *     FsRtlSetKernelEaFile @ 0x140A23020 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A23830 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A23B80 (FsRtlQueryKernelEaFile.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A27458 (SPCallServerHandleQueryPolicy.c)
 *     IopDeleteFile @ 0x140A282F0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     FsRtlGetSectorSizeInformation @ 0x140A2EE50 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x140A2F470 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140A2FD20 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140A30100 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpCovSampCaptureFlush @ 0x140A32C74 (EtwpCovSampCaptureFlush.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A647F8 (FsRtlSetFileSize.c)
 *     MiReadImageHeaders @ 0x140A64D58 (MiReadImageHeaders.c)
 *     PopInitSystemSleeperThread @ 0x140A77BF0 (PopInitSystemSleeperThread.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140A7D9B0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     RtlDecompressBufferLZNT1 @ 0x140A84A70 (RtlDecompressBufferLZNT1.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x140A8EEF4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A91340 (FsRtlCancellableWaitForSingleObject.c)
 *     EtwpEnableDisableUMGL @ 0x140A99A14 (EtwpEnableDisableUMGL.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A9B040 (RtlDecompressFragmentLZNT1.c)
 *     IoDisconnectInterrupt @ 0x140A9C840 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140A9CECC (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A9D024 (IopInitializeActiveConnectBlock.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA0E80 (IopFilterResourceRequirementsCall.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140AA90C4 (IopAcquireReleaseDispatcherLock.c)
 *     EtwpUpdatePerProcessTracing @ 0x140AB0700 (EtwpUpdatePerProcessTracing.c)
 *     EtwpStartTrace @ 0x140AB0EB0 (EtwpStartTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x140AB31F8 (EtwpSynchronizeWithLogger.c)
 *     FsRtlQueryInformationFile @ 0x140AB5E30 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140ABA7B0 (FsRtlQueryCachedVdl.c)
 *     PopDirectedDripsAcquireTransitionLock @ 0x140AC70F8 (PopDirectedDripsAcquireTransitionLock.c)
 *     IoWMIRegistrationControl @ 0x140ACF980 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 *     WmipUpdateDeviceStackSize @ 0x140ACFCB4 (WmipUpdateDeviceStackSize.c)
 *     WmipQueueRegWork @ 0x140ACFD08 (WmipQueueRegWork.c)
 *     WmipDeregisterDevice @ 0x140ACFDE8 (WmipDeregisterDevice.c)
 *     IopGetSetObjectId @ 0x140AD0E98 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140AD0FDC (IopGetVolumeId.c)
 *     EtwpUpdateDisallowedGuids @ 0x140AE14B0 (EtwpUpdateDisallowedGuids.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE1AFC (PiIrpQueryRemoveDevice.c)
 *     NtGetMUIRegistryInfo @ 0x140AE2DD0 (NtGetMUIRegistryInfo.c)
 *     IoReportTargetDeviceChange @ 0x140AE42C0 (IoReportTargetDeviceChange.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140AEB244 (WmipGetGuidObjectInstanceInfo.c)
 *     NtWaitForDebugEvent @ 0x140AEBFD0 (NtWaitForDebugEvent.c)
 *     MiInSwapStore @ 0x140AEC480 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x140AEC924 (SmStoreCompressionStop.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 *     PopBsdFlush @ 0x140B02804 (PopBsdFlush.c)
 *     PopResizeHiberFile @ 0x140B0316C (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140B035D0 (PopSanityCheckHiberFile.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140B04420 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpSampledProfileRunDown @ 0x140B05658 (EtwpSampledProfileRunDown.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B05B68 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B08574 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140B08930 (PopPepUnregisterDevice.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0D1A8 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B1B9C0 (PoUnregisterPowerSettingCallback.c)
 *     WmipAddMofResource @ 0x140B1C418 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140B1C5E4 (WmipFindMRByNames.c)
 *     PopClearHiberFileSignature @ 0x140B1D150 (PopClearHiberFileSignature.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 *     WmipLegacyEtwCallback @ 0x140B22440 (WmipLegacyEtwCallback.c)
 *     WmipLegacyEtwWorker @ 0x140B24E20 (WmipLegacyEtwWorker.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140B25F64 (SPCallServerHandleWaitForDisplayWindow.c)
 *     RawQueryFsSizeInfo @ 0x140B28108 (RawQueryFsSizeInfo.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B28C70 (HalpQueryAcpiRealTimeClock.c)
 *     HalpGetDynamicDevicePointer @ 0x140B28DA8 (HalpGetDynamicDevicePointer.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B2A9B0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     NtReleaseKeyedEvent @ 0x140B2B3B0 (NtReleaseKeyedEvent.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2DD3C (PopPowerAggregatorDozeTimerDisarm.c)
 *     NtWaitForKeyedEvent @ 0x140B32650 (NtWaitForKeyedEvent.c)
 *     PopGetWakeSource @ 0x140B346F8 (PopGetWakeSource.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B3B354 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 *     EmPowerPagingEnabled @ 0x140B3D8C8 (EmPowerPagingEnabled.c)
 *     HalpCallWakeAlarmDriver @ 0x140B45E18 (HalpCallWakeAlarmDriver.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140B48B5C (PopPowerAggregatorNotifySuspendResume.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 *     WmipSetTraceNotify @ 0x140B4BA8C (WmipSetTraceNotify.c)
 *     NtNotifyChangeSession @ 0x140B4ED50 (NtNotifyChangeSession.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     IopSendMessageToTrackService @ 0x140B51334 (IopSendMessageToTrackService.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B5372C (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     WmipProcessSynchronousEtw @ 0x140B5545C (WmipProcessSynchronousEtw.c)
 *     AlpcpWaitForPortReferences @ 0x140B55B74 (AlpcpWaitForPortReferences.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B56AF0 (FsRtlGetDirectImageOriginalBase.c)
 *     IoWMISetNotificationCallback @ 0x140B56CE0 (IoWMISetNotificationCallback.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 *     WmipDereferenceEvent @ 0x140B5FA28 (WmipDereferenceEvent.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B61D4C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PiQueueDeviceRequest @ 0x140B63610 (PiQueueDeviceRequest.c)
 *     PsSetVmProcessorHostProcess @ 0x140B6B880 (PsSetVmProcessorHostProcess.c)
 *     PnpShutdownDevices @ 0x140B6EEA4 (PnpShutdownDevices.c)
 *     EtwpGetPmcProfileSource @ 0x140B712FC (EtwpGetPmcProfileSource.c)
 *     IopFreeBandwidthContract @ 0x140B71E1C (IopFreeBandwidthContract.c)
 *     IopShutdownBaseFileSystems @ 0x140BF750C (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140BF8BF0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140BFEAD8 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140C032E0 (NtSetSystemPowerState.c)
 *     MiZeroAllPageFiles @ 0x140C066B4 (MiZeroAllPageFiles.c)
 *     PopEndMirroring @ 0x140C09F60 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140C0A210 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 *     IovpUnloadDriver @ 0x140C2701C (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x140C32600 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140C361C4 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140C36570 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140C3E740 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140C420B0 (ViFilterDispatchPnp.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 *     AnFwFadeCompletion @ 0x140C58980 (AnFwFadeCompletion.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     IopFormatBootDevice @ 0x140CC3180 (IopFormatBootDevice.c)
 *     IopStoreBootDriveLetter @ 0x140CC4270 (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140CC4748 (IopGetBootDiskInformation.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140CFAF3C (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     SbpAddTransportToInstance @ 0x140D098DC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140D09AC8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140D09EA0 (SbpWaitForVmbus.c)
 * Callees:
 *     KiCheckWaitNext @ 0x140221A60 (KiCheckWaitNext.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiWaitSatisfyOther @ 0x1403E2B14 (KiWaitSatisfyOther.c)
 *     KiPerformWaitDeferredWork @ 0x1403F08D0 (KiPerformWaitDeferredWork.c)
 *     KiWaitSatisfyMutant @ 0x14043A4D0 (KiWaitSatisfyMutant.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  unsigned int v5; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rdx
  __int64 CurrentIrql; // rcx
  unsigned __int64 WaitIrql; // r15
  char v10; // r12
  BOOLEAN v11; // si
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  LegacyAutoBoost *v14; // r13
  NTSTATUS v15; // r14d
  int v16; // eax
  __int64 v17; // r8
  int Alerted; // ecx
  $08E725EC6134F01F525383E5528526A8 *v19; // r14
  struct _KPRCB *CurrentPrcb; // r15
  struct _KLOCK_ENTRIES *v21; // r9
  NTSTATUS v22; // r10d
  int v23; // ecx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  PVOID *v26; // rcx
  __int64 ThreadTimerDelay; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  unsigned __int64 v30; // r9
  unsigned __int8 v31; // r14
  _BYTE *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // [rsp+30h] [rbp-38h]
  int v36; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-30h]
  unsigned int v38; // [rsp+3Ch] [rbp-2Ch]
  LegacyAutoBoost *v39; // [rsp+40h] [rbp-28h]
  unsigned __int64 v40; // [rsp+48h] [rbp-20h] BYREF
  __int64 v41; // [rsp+50h] [rbp-18h] BYREF
  __int64 v42; // [rsp+58h] [rbp-10h] BYREF
  unsigned __int8 v44; // [rsp+B8h] [rbp+50h]
  int v45; // [rsp+C0h] [rbp+58h] BYREF
  BOOLEAN v46; // [rsp+C8h] [rbp+60h]

  v46 = Alertable;
  LOBYTE(v45) = WaitMode;
  v44 = WaitReason;
  v5 = WaitMode;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v40 = 0LL;
  v36 = 0;
  v35 = 0;
  v39 = 0LL;
  v37 = KiCheckWaitNext((__int64)CurrentThread, (__int64)Timeout, 0, &v40, &v36);
  v38 = v5;
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v10 = v45;
    v11 = v46;
    v41 = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v10;
      if ( v11 )
        CurrentThread->MiscFlags |= 0x10u;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, v7, 0LL) )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      v10 = v45;
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      }
      CurrentThread->WaitIrql = 0;
    }
    v13 = v37;
    v14 = v39;
    if ( v11 )
    {
      Alerted = CurrentThread->Alerted;
      v7 = v38;
      if ( _bittest(&Alerted, v38) )
      {
        Alerted &= ~(1 << v38);
      }
      else
      {
        if ( (_BYTE)v45
          && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
        {
          CurrentThread->ApcState.UserApcPendingAll |= 2u;
          v15 = 192;
LABEL_31:
          if ( v15 )
            goto LABEL_25;
          goto LABEL_32;
        }
        if ( (Alerted & 1) == 0 )
        {
          v15 = 0;
          goto LABEL_31;
        }
        LOBYTE(Alerted) = Alerted & 0xFE;
      }
      CurrentThread->Alerted = Alerted;
      v15 = 257;
      goto LABEL_31;
    }
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && (_BYTE)v45 )
    {
      v15 = 192;
LABEL_25:
      v16 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
      CurrentThread->ThreadLock = 0LL;
      if ( v16 )
      {
        LOBYTE(v17) = WaitIrql;
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v41, v17);
      }
      else
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), WaitIrql);
        __writecr8(WaitIrql);
      }
      return v15;
    }
LABEL_32:
    v19 = &CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = v44;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)Object, v7, 0LL);
    v22 = 0;
    v23 = *((_DWORD *)Object + 1);
    if ( (*(_BYTE *)Object & 0x7F) != 2 )
    {
      if ( v23 <= 0 )
      {
        LOBYTE(v21) = v35;
        goto LABEL_35;
      }
      KiWaitSatisfyOther(Object);
LABEL_49:
      v15 = v22;
LABEL_50:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v13, (__int64)v21);
      return v15;
    }
    LOBYTE(v21) = (*((_BYTE *)Object + 48) & 2) != 0;
    v35 = (char)v21;
    if ( v23 > 0
      || CurrentThread == *((struct _KTHREAD **)Object + 5) && *((_BYTE *)Object + 2) == CurrentPrcb->DpcRoutineActive )
    {
      break;
    }
LABEL_35:
    v24 = v40;
    if ( v36 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v25 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v24 = v40 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v36 )
        goto LABEL_40;
      if ( !v40 )
        goto LABEL_61;
      v25 = MEMORY[0xFFFFF78000000014];
    }
    if ( v25 > v24 )
    {
LABEL_61:
      v15 = 258;
      goto LABEL_50;
    }
LABEL_40:
    v26 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v26 != (char *)Object + 8 )
      __fastfail(3u);
    v19->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v26;
    *v26 = v19;
    *((_QWORD *)Object + 2) = v19;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    if ( (_BYTE)v21 )
    {
      v14 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)Object, 0LL, 0LL, v21);
      v39 = v14;
    }
    if ( v14 )
      KeAbPreWait(v14);
    v15 = KiCommitThreadWait((LegacyAutoBoost *)CurrentThread, (__int64 *)&CurrentThread->320, v36, v40, v13, &v42);
    v37 = 0;
    if ( !v14 )
      goto LABEL_75;
    v32 = (_BYTE *)KeAbPreAcquire((__int64)Object, (unsigned __int64)v14, 0LL, v29);
    if ( (v15 & 0xFFFFFF7F) != 0 )
    {
      KeAbPostReleaseEx((struct _KTHREAD *)Object, (unsigned __int64)v32, v33, v34);
      v39 = 0LL;
LABEL_75:
      v30 = 2LL;
      goto LABEL_76;
    }
    v39 = (LegacyAutoBoost *)v32;
    v30 = 2LL;
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v7) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v32 + 33), (volatile unsigned __int8 *)v7, 1u, 2u);
    }
    else
    {
      v32[10] = 1;
    }
LABEL_76:
    CurrentThread->AbWaitObject = 0LL;
    if ( v15 != 256 )
      return v15;
    v31 = KeGetCurrentIrql();
    if ( v31 != (_BYTE)v30 )
      __writecr8(v30);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v30;
      LOBYTE(CurrentIrql) = v31;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
    }
    CurrentThread->WaitIrql = v31;
  }
  if ( v23 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v13, (__int64)v21);
    RtlRaiseStatus(-1073741423);
  }
  *((_DWORD *)Object + 1) = v23 - 1;
  if ( v23 != 1 )
    goto LABEL_49;
  CurrentThread->WaitStatus = 0LL;
  v45 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v45);
    while ( CurrentThread->ThreadLock );
  }
  KiWaitSatisfyMutant(Object, CurrentThread, CurrentPrcb);
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  return KiSatisfyThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v13, (__int64)&CurrentThread->320, 0);
}
