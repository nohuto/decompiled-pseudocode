/*
 * XREFs of KeWaitForSingleObject @ 0x140278560
 * Callers:
 *     FsRtlAcquireEofLock @ 0x140204D50 (FsRtlAcquireEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x140205058 (FsRtlpWaitForIoAtEof.c)
 *     ExpWaitForResource @ 0x140205F8C (ExpWaitForResource.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024B6A0 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PpmCheckPeriodicStart @ 0x1402568F0 (PpmCheckPeriodicStart.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140264300 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     AlpcpSignalAndWait @ 0x140264830 (AlpcpSignalAndWait.c)
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026EE84 (FsRtlReleaseFileForModWrite.c)
 *     IopAllocateReserveIrp @ 0x14027006C (IopAllocateReserveIrp.c)
 *     ExpWaitForFastResource @ 0x140275FE0 (ExpWaitForFastResource.c)
 *     FsRtlAcquireHeaderMutex @ 0x1402778B0 (FsRtlAcquireHeaderMutex.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027FE20 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     MiAsyncSlabReplenish @ 0x1402A5984 (MiAsyncSlabReplenish.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402C3770 (KiInvokeInterruptServiceRoutine.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     MiRetryNonPagedAllocation @ 0x140366440 (MiRetryNonPagedAllocation.c)
 *     ExpUnblockPushLock @ 0x1403682A0 (ExpUnblockPushLock.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     PopFxActivateComponent @ 0x14037AB40 (PopFxActivateComponent.c)
 *     CcWriteBehind @ 0x14038338C (CcWriteBehind.c)
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcWriteBehindAsync @ 0x140385C44 (CcWriteBehindAsync.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1403957E0 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     SmKmStoreHelperWorker @ 0x140395A70 (SmKmStoreHelperWorker.c)
 *     PopFxProcessWorkPool @ 0x140396268 (PopFxProcessWorkPool.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     PopSetWatchdog @ 0x1403AAE58 (PopSetWatchdog.c)
 *     PopPepUpdateConstraints @ 0x1403B37EC (PopPepUpdateConstraints.c)
 *     WmipDeregisterRegEntry @ 0x1403B6EF0 (WmipDeregisterRegEntry.c)
 *     PopRunMaximumIrpWorkers @ 0x1403B7600 (PopRunMaximumIrpWorkers.c)
 *     WmipReceiveNotifications @ 0x1403DB2FC (WmipReceiveNotifications.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403DBD20 (NtSignalAndWaitForSingleObject.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403DC3A8 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1403DCE10 (LdrpGetFromMUIMemCache.c)
 *     WmipFindRegEntryByProviderId @ 0x1403DD004 (WmipFindRegEntryByProviderId.c)
 *     WheapProcessWorkQueueItem @ 0x1403DFB60 (WheapProcessWorkQueueItem.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     SmKmStoreHelperCleanup @ 0x1403F01B8 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperSendCommand @ 0x1403F020C (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403F0364 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403F0B90 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1403F44D8 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x1403F4EFC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403F5378 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     FsRtlReleaseEofLock @ 0x140421AD0 (FsRtlReleaseEofLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1404231CC (KiAcquireSecondaryPassiveConnectLock.c)
 *     PoGetIdleTimes @ 0x1404280E0 (PoGetIdleTimes.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x140428B10 (PpmCapturePerformanceDistribution.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x140448570 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     EtwpEnableMetaProviderGuid @ 0x1404575EC (EtwpEnableMetaProviderGuid.c)
 *     FsFilterAllocateCompletionStack @ 0x14045B538 (FsFilterAllocateCompletionStack.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140463DCC (ExfWaitForRundownProtectionRelease.c)
 *     AlpcpWaitForSingleObject @ 0x140466280 (AlpcpWaitForSingleObject.c)
 *     IopWaitForSynchronousIoEvent @ 0x140469C58 (IopWaitForSynchronousIoEvent.c)
 *     IopWaitForSynchronousIo @ 0x140469D30 (IopWaitForSynchronousIo.c)
 *     MiZeroPageWrite @ 0x14046D748 (MiZeroPageWrite.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14047ECC0 (ExTimedWaitForUnblockPushLock.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14048B090 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     CcWaitForUninitializeCacheMap @ 0x14048B908 (CcWaitForUninitializeCacheMap.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14048EBAC (SmKmStoreDeleteWhenEmpty.c)
 *     CcSetValidData @ 0x14048FE94 (CcSetValidData.c)
 *     CmpDoFileRead @ 0x140494684 (CmpDoFileRead.c)
 *     WmipFindRegEntryByDevice @ 0x1404961EC (WmipFindRegEntryByDevice.c)
 *     ExpAcquireFastMutexContended @ 0x1404A09B8 (ExpAcquireFastMutexContended.c)
 *     KiSchedulerApc @ 0x1404A1BE0 (KiSchedulerApc.c)
 *     MiIssuePageExtendRequest @ 0x1404A4ED0 (MiIssuePageExtendRequest.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404A7338 (LdrpSetAlternateResourceModuleHandle.c)
 *     IopWaitForLockAlertable @ 0x1404AA8E8 (IopWaitForLockAlertable.c)
 *     MiStoreEvictThread @ 0x1404B0390 (MiStoreEvictThread.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1404B2744 (LdrUnloadAlternateResourceModuleEx.c)
 *     IoSynchronousCallDriver @ 0x1404B2910 (IoSynchronousCallDriver.c)
 *     PopWakeDeviceList @ 0x1404B96A8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B98D0 (PopSleepDeviceList.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B9DEC (MiPfCompleteCoalescedIo.c)
 *     DifKeWaitForSingleObjectWrapper @ 0x1404C0BA0 (DifKeWaitForSingleObjectWrapper.c)
 *     PpmTryAcquireLock @ 0x1404C8FF4 (PpmTryAcquireLock.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404C97C0 (MiCheckHoldFaultForHotPatch.c)
 *     WmipBuildTraceDeviceList @ 0x1404CDEFC (WmipBuildTraceDeviceList.c)
 *     CmSiWaitForSingleEvent @ 0x1404D0228 (CmSiWaitForSingleEvent.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1404D09E0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1404D2AE4 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x1404D5290 (PopFxActivateDevice.c)
 *     PnpLockDeviceActionQueue @ 0x1404D783C (PnpLockDeviceActionQueue.c)
 *     WmiQueryTraceProviderCount @ 0x1404D7CF0 (WmiQueryTraceProviderCount.c)
 *     EtwpStartLoggerThread @ 0x1404E4D30 (EtwpStartLoggerThread.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404E538C (MmStoreFlushOutstandingEvictions.c)
 *     MiStoreAttemptContractPageFile @ 0x1404E5434 (MiStoreAttemptContractPageFile.c)
 *     WmipAllocRegEntry @ 0x1404E79BC (WmipAllocRegEntry.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404E7BC0 (IoReleaseRemoveLockAndWaitEx.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404E84E4 (MiQueueSyncModifiedWriterApc.c)
 *     FsRtlpWaitOnIrp @ 0x1404EC254 (FsRtlpWaitOnIrp.c)
 *     MiZeroThreadEnterWaitState @ 0x1404ECD84 (MiZeroThreadEnterWaitState.c)
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404EFCBC (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     MiApplyCommitDelay @ 0x1404F60B4 (MiApplyCommitDelay.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F97B0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopHaltDeviceIdle @ 0x1404FA45C (PopHaltDeviceIdle.c)
 *     EtwpCovSampCaptureContextStop @ 0x1404FE56C (EtwpCovSampCaptureContextStop.c)
 *     PnpLockMountableDevice @ 0x1404FEF2C (PnpLockMountableDevice.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140503D90 (KiSynchronizePassiveInterruptExecution.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405079A8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     MiWaitForAsynchronousFlushes @ 0x14050D4B0 (MiWaitForAsynchronousFlushes.c)
 *     PopIgnoreBatteryStatusChange @ 0x140514E18 (PopIgnoreBatteryStatusChange.c)
 *     MiModifiedPageWriterExit @ 0x140528408 (MiModifiedPageWriterExit.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405291D8 (EtwpTraceThreadRundownWithStack.c)
 *     IopLoadDriverImage @ 0x14052A428 (IopLoadDriverImage.c)
 *     IopIoRingWaitForCompletionEvent @ 0x14052B580 (IopIoRingWaitForCompletionEvent.c)
 *     IopAllocateBackpocketIrp @ 0x140531A0C (IopAllocateBackpocketIrp.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x14058F4A8 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B0D70 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B1608 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcDeletePartition @ 0x1405B2214 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1405B2470 (CcDeleteSectionsForPartition.c)
 *     FsRtlpPostStackOverflow @ 0x1405B8130 (FsRtlpPostStackOverflow.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405C7D7C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D77E4 (IopMcWaitAndCleanupBufferEntry.c)
 *     PnpSerializeBoot @ 0x1405D875C (PnpSerializeBoot.c)
 *     PnprQuiesce @ 0x1405DBDC8 (PnprQuiesce.c)
 *     PnpProcessRebalance @ 0x1405DD30C (PnpProcessRebalance.c)
 *     KiSignalWaitDisconnectLock @ 0x1405F627C (KiSignalWaitDisconnectLock.c)
 *     KeBalanceSetManager @ 0x1405F79E0 (KeBalanceSetManager.c)
 *     KeSwapProcessOrStack @ 0x1405F7C80 (KeSwapProcessOrStack.c)
 *     ?KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z @ 0x1405F8F20 (-KiFlushScbReferences@@YAXPEAU_KPRCB@@PEAU_KSCB@@@Z.c)
 *     KiStallBugcheckThread @ 0x1405FA6C8 (KiStallBugcheckThread.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 *     PopIrpWorkerControl @ 0x14060C250 (PopIrpWorkerControl.c)
 *     PspIumFreePartitionState @ 0x140616730 (PspIumFreePartitionState.c)
 *     SmTerminateStoreProcess @ 0x14063E81C (SmTerminateStoreProcess.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14063EDA0 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmpFpWaitForResource @ 0x14063F9AC (SmpFpWaitForResource.c)
 *     ExRegisterBootDevice @ 0x1406CD5C0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1406CD7C0 (ExpWaitForBootDevices.c)
 *     WheapAddErrorSource @ 0x1406D4BB8 (WheapAddErrorSource.c)
 *     CmpLazyWriteWorker @ 0x1406E2810 (CmpLazyWriteWorker.c)
 *     MiReadPagefilePage @ 0x1406E4AA0 (MiReadPagefilePage.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406E54FC (MmReleaseCommitForMemResetPages.c)
 *     MiDrainCrossPartitionUsage @ 0x1406F0580 (MiDrainCrossPartitionUsage.c)
 *     MiFileOnlyReaperWorker @ 0x1406F9D60 (MiFileOnlyReaperWorker.c)
 *     MiContractWsSwapPageFileWorker @ 0x140704250 (MiContractWsSwapPageFileWorker.c)
 *     MiStoreDeletePartition @ 0x14070A2E4 (MiStoreDeletePartition.c)
 *     sub_140713090 @ 0x140713090 (sub_140713090.c)
 *     PopFxNotifySxTransitionState @ 0x14077070C (PopFxNotifySxTransitionState.c)
 *     PopReadPagesFromHiberFile @ 0x140775074 (PopReadPagesFromHiberFile.c)
 *     sub_140778138 @ 0x140778138 (sub_140778138.c)
 *     sub_1407783EC @ 0x1407783EC (sub_1407783EC.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140779AF0 (PnpWaitForEmptyDeviceEventQueue.c)
 *     HalpSetAcpiRealTimeClock @ 0x1407802AC (HalpSetAcpiRealTimeClock.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140781FB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1407852F4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpPutAcpiHacksInRegistry @ 0x140785984 (HalpPutAcpiHacksInRegistry.c)
 *     HalpLoadSfsUpdate @ 0x140786170 (HalpLoadSfsUpdate.c)
 *     HalpQueryPccInterface @ 0x1407873C4 (HalpQueryPccInterface.c)
 *     ArbArbiterHandler @ 0x140787E40 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14078816C (ArbBuildAssignmentOrdering.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078B7A4 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlWaitForSmssEvent @ 0x14078D810 (FsRtlWaitForSmssEvent.c)
 *     FsRtlBalanceReads @ 0x14078E080 (FsRtlBalanceReads.c)
 *     FsRtlDeregisterUncProvider @ 0x14078E140 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x14078E43C (FsRtlpRegisterUncProvider.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x140790B50 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopHardErrorThread @ 0x140794C00 (IopHardErrorThread.c)
 *     IopLoadFileSystemDriver @ 0x140795094 (IopLoadFileSystemDriver.c)
 *     IopSetRemoteLink @ 0x140795B5C (IopSetRemoteLink.c)
 *     IoCheckPagefileDisableReservations @ 0x140795E9C (IoCheckPagefileDisableReservations.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140796800 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14079AEA8 (IopIssueSystemEnvironmentRequest.c)
 *     IoReplacePartitionUnit @ 0x1407A0210 (IoReplacePartitionUnit.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407A1E04 (PnpRequestHwProfileChangeNotification.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     IopAllocateBootResources @ 0x1407A5F00 (IopAllocateBootResources.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407ACE4C (PnpWaitForEmptyDeviceActionQueue.c)
 *     PnpWaitForQuiescentDeviceActionQueue @ 0x1407ACE7C (PnpWaitForQuiescentDeviceActionQueue.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1407AD23C (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     PipKsrDeferredHardwareInit @ 0x1407B2E04 (PipKsrDeferredHardwareInit.c)
 *     PnpReallocateResources @ 0x1407B33A8 (PnpReallocateResources.c)
 *     PipSendGuestAssignedNotification @ 0x1407B4B18 (PipSendGuestAssignedNotification.c)
 *     IopWarmEjectDevice @ 0x1407B4C50 (IopWarmEjectDevice.c)
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 *     PopDisablePowerLimitExtension @ 0x1407CAA88 (PopDisablePowerLimitExtension.c)
 *     PopFreePowerLimitRequest @ 0x1407CADDC (PopFreePowerLimitRequest.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1407CBCE4 (PopDisableCoolingExtension.c)
 *     PopDirectedDripsWorkerRoutine @ 0x1407CC5D0 (PopDirectedDripsWorkerRoutine.c)
 *     PopCreateHiberFile @ 0x1407CFB0C (PopCreateHiberFile.c)
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407D6FF0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407D7814 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryRemove @ 0x1407D7E20 (PopBatteryRemove.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopPowerAdapterRemove @ 0x1407D9BD0 (PopPowerAdapterRemove.c)
 *     PopFanRemove @ 0x1407DAFE0 (PopFanRemove.c)
 *     PopEtDeferredInitDxgContext @ 0x1407DBBE0 (PopEtDeferredInitDxgContext.c)
 *     SshSessionManagerFlushBuffers @ 0x1407E3BB0 (SshSessionManagerFlushBuffers.c)
 *     PspQueueDeferredWorkAndWait @ 0x1407EF2D8 (PspQueueDeferredWorkAndWait.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     PsWaitForAllProcesses @ 0x1407FA724 (PsWaitForAllProcesses.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x1407FAD64 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     PspWaitForUsermodeExit @ 0x1407FBA94 (PspWaitForUsermodeExit.c)
 *     PspTeardownPartition @ 0x1407FE050 (PspTeardownPartition.c)
 *     PsCallEnclave @ 0x1407FE1F0 (PsCallEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1407FEDC8 (PsTerminateVsmEnclave.c)
 *     RawPerformDevIoCtrl @ 0x1407FFF34 (RawPerformDevIoCtrl.c)
 *     RawQueryFileSystemInformation @ 0x14080012C (RawQueryFileSystemInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140809290 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     IoWMIAllocateInstanceIds @ 0x140821DC0 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x140822C0C (WmipGetSysIds.c)
 *     WmipEnumerateGuids @ 0x1408233C8 (WmipEnumerateGuids.c)
 *     WmipProcessLegacyEtwRegister @ 0x140823C4C (WmipProcessLegacyEtwRegister.c)
 *     WmipWaitForCollectionEnabled @ 0x140824370 (WmipWaitForCollectionEnabled.c)
 *     EtwpSetPmcProfileSource @ 0x140827FB0 (EtwpSetPmcProfileSource.c)
 *     EtwDereferenceSpinLockCounters @ 0x14082C880 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14082C8E0 (EtwReferenceSpinLockCounters.c)
 *     EtwpKsrCallback @ 0x14082E370 (EtwpKsrCallback.c)
 *     ExpQueryPrmInterface @ 0x14083F118 (ExpQueryPrmInterface.c)
 *     ExpWorkQueueDestroy @ 0x14083FEE0 (ExpWorkQueueDestroy.c)
 *     NtStartProfile @ 0x140842840 (NtStartProfile.c)
 *     NtStopProfile @ 0x140842B10 (NtStopProfile.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     WheaAttemptClearPoison @ 0x140847FF0 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1408480E0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapProcessWaitingETWEvents @ 0x140849550 (WheapProcessWaitingETWEvents.c)
 *     WheaRegChangeNotifyCallback @ 0x140849930 (WheaRegChangeNotifyCallback.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     CmpDummyThreadRoutine @ 0x140856FE0 (CmpDummyThreadRoutine.c)
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 *     MiUpdateExistingPageFile @ 0x14086C380 (MiUpdateExistingPageFile.c)
 *     MiZeroPageFileFirstPage @ 0x14086CA9C (MiZeroPageFileFirstPage.c)
 *     MiInjectThreadForHotPatch @ 0x1408706B4 (MiInjectThreadForHotPatch.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1408A00F4 (CancelTimerCallbacksAndDeleteTimer.c)
 *     VhdVerifyBootDisk @ 0x1408A5FFC (VhdVerifyBootDisk.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     CmpGetVolumeClusterSize @ 0x1408B685C (CmpGetVolumeClusterSize.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     ObWaitForSingleObject @ 0x1408FA300 (ObWaitForSingleObject.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     FsRtlGetSectorSizeInformation @ 0x140906BF0 (FsRtlGetSectorSizeInformation.c)
 *     FsRtlIssueDeviceIoControl @ 0x140907210 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140907BC0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140907FA0 (IoVolumeDeviceNameToGuidPath.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14090AD94 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14090E200 (PnpSynchronizeDeviceEventQueue.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     IopUncacheInterfaceInformation @ 0x1409100B4 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14091ED40 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x14091EE28 (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpDisableTraceProviders @ 0x1409378E0 (EtwpDisableTraceProviders.c)
 *     EtwpGetPmcProfileSource @ 0x14093D960 (EtwpGetPmcProfileSource.c)
 *     EtwpCovSampCaptureFlush @ 0x14093FB64 (EtwpCovSampCaptureFlush.c)
 *     DbgkpQueueMessage @ 0x140953A1C (DbgkpQueueMessage.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     IopCancelIrpsInThreadList @ 0x140956D60 (IopCancelIrpsInThreadList.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140959E60 (EtwpUpdateGlobalGroupMasks.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     IopSynchronousApiServiceTail @ 0x1409B18E4 (IopSynchronousApiServiceTail.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     PnpDeviceEventWorker @ 0x1409DCD90 (PnpDeviceEventWorker.c)
 *     WdtpCancelTimer @ 0x1409DDFE0 (WdtpCancelTimer.c)
 *     PnpWatchdogTimerPause @ 0x1409DE0A8 (PnpWatchdogTimerPause.c)
 *     PspUserThreadStartup @ 0x1409EB210 (PspUserThreadStartup.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     IoVolumeDeviceToDosName @ 0x1409FB9E0 (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1409FC6D0 (IopGetFileInformation.c)
 *     PopInitSystemSleeperThread @ 0x140A03F00 (PopInitSystemSleeperThread.c)
 *     WmipUpdateDataSource @ 0x140A0ABF4 (WmipUpdateDataSource.c)
 *     WmipSendEnableDisableRequest @ 0x140A0B168 (WmipSendEnableDisableRequest.c)
 *     WmipFindISinGEbyName @ 0x140A0B3A0 (WmipFindISinGEbyName.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140A0B588 (WmipDetermineInstanceBaseIndex.c)
 *     WmipRegistrationWorker @ 0x140A0B650 (WmipRegistrationWorker.c)
 *     WmipDereferenceEvent @ 0x140A0B9C4 (WmipDereferenceEvent.c)
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 *     WmipQueryGuidInfo @ 0x140A0C62C (WmipQueryGuidInfo.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0C854 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipIncludeStaticNames @ 0x140A0CE94 (WmipIncludeStaticNames.c)
 *     WmipProcessEvent @ 0x140A0D184 (WmipProcessEvent.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0D350 (WmipEnableCollectionForNewGuid.c)
 *     WmipDeleteMethod @ 0x140A0D4B0 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140A0D5A8 (WmipDisableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140A0D758 (WmipIsQuerySetGuid.c)
 *     WmipEnableCollectOrEvent @ 0x140A0D830 (WmipEnableCollectOrEvent.c)
 *     WmipOpenBlock @ 0x140A0E050 (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x140A0E624 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x140A0EF48 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x140A0F03C (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x140A0F9A0 (WmipPrepareForWnodeAD.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     FsRtlSetKernelEaFile @ 0x140A199F0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140A1A200 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140A1A550 (FsRtlQueryKernelEaFile.c)
 *     SPCallServerHandleQueryPolicy @ 0x140A1DE2C (SPCallServerHandleQueryPolicy.c)
 *     IopDeleteFile @ 0x140A1ECD0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     FsRtlGetFileSize @ 0x140A56DE0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A57278 (FsRtlSetFileSize.c)
 *     MiReadImageHeaders @ 0x140A577D8 (MiReadImageHeaders.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140A6C380 (FsRtlCancellableWaitForMultipleObjects.c)
 *     EtwpUpdatePerProcessTracing @ 0x140A6C4E8 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEnableDisableUMGL @ 0x140A6D758 (EtwpEnableDisableUMGL.c)
 *     EtwpStartTrace @ 0x140A6E138 (EtwpStartTrace.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x140A6FD00 (EtwpSynchronizeWithLogger.c)
 *     PiDrvDbLoadNode @ 0x140A78308 (PiDrvDbLoadNode.c)
 *     RtlDecompressBufferLZNT1 @ 0x140A7EC00 (RtlDecompressBufferLZNT1.c)
 *     WmipProcessLegacyEtwUnregister @ 0x140A84E68 (WmipProcessLegacyEtwUnregister.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x140A87DC4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     IopLegacyResourceAllocation @ 0x140A8B3B4 (IopLegacyResourceAllocation.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140A8C0D0 (FsRtlCancellableWaitForSingleObject.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A96EC0 (RtlDecompressFragmentLZNT1.c)
 *     IoDisconnectInterrupt @ 0x140A986C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A98890 (IopConnectInterrupt.c)
 *     IopDestroyActiveConnectBlock @ 0x140A98D4C (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A98EA4 (IopInitializeActiveConnectBlock.c)
 *     PnpAllocateResources @ 0x140AA525C (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x140AA5C88 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x140AA8480 (PnpQueryInterface.c)
 *     CmpFileFlushAndPurge @ 0x140AAAF1C (CmpFileFlushAndPurge.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140AABB14 (IopAcquireReleaseDispatcherLock.c)
 *     FsRtlQueryInformationFile @ 0x140AB4A90 (FsRtlQueryInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x140AB9390 (FsRtlQueryCachedVdl.c)
 *     PopDirectedDripsAcquireTransitionLock @ 0x140AC5488 (PopDirectedDripsAcquireTransitionLock.c)
 *     IoWMIRegistrationControl @ 0x140ACD740 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 *     WmipUpdateDeviceStackSize @ 0x140ACDA74 (WmipUpdateDeviceStackSize.c)
 *     WmipQueueRegWork @ 0x140ACDAC8 (WmipQueueRegWork.c)
 *     WmipDeregisterDevice @ 0x140ACDBA8 (WmipDeregisterDevice.c)
 *     IopGetSetObjectId @ 0x140ACEC58 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140ACED9C (IopGetVolumeId.c)
 *     EtwpUpdateDisallowedGuids @ 0x140AE39A8 (EtwpUpdateDisallowedGuids.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE3FF4 (PiIrpQueryRemoveDevice.c)
 *     NtGetMUIRegistryInfo @ 0x140AE5010 (NtGetMUIRegistryInfo.c)
 *     IoReportTargetDeviceChange @ 0x140AE6500 (IoReportTargetDeviceChange.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140AE8FF4 (WmipGetGuidObjectInstanceInfo.c)
 *     NtWaitForDebugEvent @ 0x140AE94E0 (NtWaitForDebugEvent.c)
 *     MiInSwapStore @ 0x140AE9990 (MiInSwapStore.c)
 *     SmStoreCompressionStop @ 0x140AE9E34 (SmStoreCompressionStop.c)
 *     WmipDSCleanup @ 0x140AECF50 (WmipDSCleanup.c)
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     PopBsdFlush @ 0x140B00AD4 (PopBsdFlush.c)
 *     PopResizeHiberFile @ 0x140B0143C (PopResizeHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140B018A0 (PopSanityCheckHiberFile.c)
 *     EtwpCrimsonProvEnableCallback @ 0x140B026F0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpSampledProfileRunDown @ 0x140B03A48 (EtwpSampledProfileRunDown.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B03F58 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B06444 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140B06628 (PopFxUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x140B06800 (PopPepUnregisterDevice.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0BA58 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B19570 (PoUnregisterPowerSettingCallback.c)
 *     WmipAddMofResource @ 0x140B19FC8 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140B1A194 (WmipFindMRByNames.c)
 *     WmipEnumerateMofResources @ 0x140B1A378 (WmipEnumerateMofResources.c)
 *     PopClearHiberFileSignature @ 0x140B1AEA0 (PopClearHiberFileSignature.c)
 *     IopCreateArcName @ 0x140B1C9D8 (IopCreateArcName.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     IopCancelAlertedRequest @ 0x140B1F1D4 (IopCancelAlertedRequest.c)
 *     WmipLegacyEtwCallback @ 0x140B20020 (WmipLegacyEtwCallback.c)
 *     WmipLegacyEtwWorker @ 0x140B22A20 (WmipLegacyEtwWorker.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x140B23B64 (SPCallServerHandleWaitForDisplayWindow.c)
 *     RawQueryFsSizeInfo @ 0x140B25EA8 (RawQueryFsSizeInfo.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B26A10 (HalpQueryAcpiRealTimeClock.c)
 *     HalpGetDynamicDevicePointer @ 0x140B26B48 (HalpGetDynamicDevicePointer.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140B284E0 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     NtReleaseKeyedEvent @ 0x140B28E70 (NtReleaseKeyedEvent.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     PopPowerAggregatorDozeTimerDisarm @ 0x140B2BCBC (PopPowerAggregatorDozeTimerDisarm.c)
 *     NtWaitForKeyedEvent @ 0x140B30450 (NtWaitForKeyedEvent.c)
 *     PopGetWakeSource @ 0x140B322A4 (PopGetWakeSource.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B332E8 (CmpWaitOnHiveWriteQueue.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140B39144 (FsRtlIssueFileNotificationFsctl.c)
 *     PopAcquireTransitionLock @ 0x140B39914 (PopAcquireTransitionLock.c)
 *     EmPowerPagingEnabled @ 0x140B3B648 (EmPowerPagingEnabled.c)
 *     HalpCallWakeAlarmDriver @ 0x140B43F28 (HalpCallWakeAlarmDriver.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140B46B2C (PopPowerAggregatorNotifySuspendResume.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 *     WmipSetTraceNotify @ 0x140B49CFC (WmipSetTraceNotify.c)
 *     NtNotifyChangeSession @ 0x140B4CFC0 (NtNotifyChangeSession.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     IopSendMessageToTrackService @ 0x140B4EAA4 (IopSendMessageToTrackService.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B50E94 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     WmipProcessSynchronousEtw @ 0x140B52BBC (WmipProcessSynchronousEtw.c)
 *     AlpcpWaitForPortReferences @ 0x140B532D4 (AlpcpWaitForPortReferences.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140B54250 (FsRtlGetDirectImageOriginalBase.c)
 *     IoWMISetNotificationCallback @ 0x140B54440 (IoWMISetNotificationCallback.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B5EBCC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140B5FEFC (IopInsertLegacyBusDeviceNode.c)
 *     PiQueueDeviceRequest @ 0x140B60570 (PiQueueDeviceRequest.c)
 *     PsSetVmProcessorHostProcess @ 0x140B688F0 (PsSetVmProcessorHostProcess.c)
 *     PnpShutdownDevices @ 0x140B6BDA8 (PnpShutdownDevices.c)
 *     IopFreeBandwidthContract @ 0x140B6E8DC (IopFreeBandwidthContract.c)
 *     IopShutdownBaseFileSystems @ 0x140BF150C (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x140BF1744 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x140BF2BF0 (PnprQuiesceWorker.c)
 *     PfpScenCtxPrefetchWait @ 0x140BF8AD8 (PfpScenCtxPrefetchWait.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140BFD2E0 (NtSetSystemPowerState.c)
 *     MiZeroAllPageFiles @ 0x140C004A4 (MiZeroAllPageFiles.c)
 *     PopEndMirroring @ 0x140C03D50 (PopEndMirroring.c)
 *     PopTransitionToSleep @ 0x140C04000 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x140C04CC8 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140C0CEE0 (MmDuplicateMemory.c)
 *     IovpUnloadDriver @ 0x140C2100C (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x140C2C5F0 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140C301B4 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140C30560 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140C38730 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x140C3C0A0 (ViFilterDispatchPnp.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 *     AnFwFadeCompletion @ 0x140C52980 (AnFwFadeCompletion.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 *     IopFormatBootDevice @ 0x140CBD110 (IopFormatBootDevice.c)
 *     IopStoreBootDriveLetter @ 0x140CBE1A0 (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     EtwpFixBootLoggers @ 0x140CE1DAC (EtwpFixBootLoggers.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140CF4BBC (MiHotAddBootDeferredDescriptorsDiscardable.c)
 *     SbpAddTransportToInstance @ 0x140D0360C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140D037F8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140D03BD0 (SbpWaitForVmbus.c)
 * Callees:
 *     KiCheckWaitNext @ 0x1402200D0 (KiCheckWaitNext.c)
 *     KiCommitThreadWait @ 0x1402229B0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x1402439F0 (KiDeliverApc.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278AE0 (KeAbPreWait.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KiWaitSatisfyOther @ 0x1403DF924 (KiWaitSatisfyOther.c)
 *     KiPerformWaitDeferredWork @ 0x1403F6F20 (KiPerformWaitDeferredWork.c)
 *     KiWaitSatisfyMutant @ 0x1404419C0 (KiWaitSatisfyMutant.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  $21A6EA393ADDDF0D13424531359FF08A *v19; // r14
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
    RtlRaiseStatus(3221225873LL);
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
