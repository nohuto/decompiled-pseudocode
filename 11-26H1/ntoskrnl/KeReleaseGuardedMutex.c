/*
 * XREFs of KeReleaseGuardedMutex @ 0x140278D40
 * Callers:
 *     FsRtlAcquireEofLock @ 0x140204D50 (FsRtlAcquireEofLock.c)
 *     RawCompletionRoutine @ 0x1402576D0 (RawCompletionRoutine.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402C1230 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402C1BB8 (FsRtlPrivateInitializeFileLock.c)
 *     CcZeroEndOfLastPage @ 0x1402C6408 (CcZeroEndOfLastPage.c)
 *     CcUnpinFileDataEx @ 0x1402DF3C0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402E0ED0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     HalMatchAcpiOemTableId @ 0x140342810 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiOemId @ 0x140342910 (HalMatchAcpiOemId.c)
 *     HalAcpiGetTableDispatch @ 0x140342A90 (HalAcpiGetTableDispatch.c)
 *     HalpAcpiGetTable @ 0x140342AEC (HalpAcpiGetTable.c)
 *     CcWriteBehindPreProcess @ 0x1403848C4 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     CcGetDirtyPagesHelper @ 0x14039B880 (CcGetDirtyPagesHelper.c)
 *     CcDeleteMbcb @ 0x14039C204 (CcDeleteMbcb.c)
 *     CcSetDirtyPinnedData @ 0x14039D2A0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14039D5F0 (CcSetDirtyInMask.c)
 *     CcGetFlushedValidData @ 0x14039E120 (CcGetFlushedValidData.c)
 *     FsRtlAddLargeMcbEntry @ 0x1403B4910 (FsRtlAddLargeMcbEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x1403B64AC (PopCreateDynamicIrpWorker.c)
 *     PopRunMaximumIrpWorkers @ 0x1403B7600 (PopRunMaximumIrpWorkers.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E2360 (CcAcquireByteRangeForWrite.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlTruncateLargeMcb @ 0x14041CD20 (FsRtlTruncateLargeMcb.c)
 *     FsRtlLookupLargeMcbEntry @ 0x14041D340 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlReleaseEofLock @ 0x140421AD0 (FsRtlReleaseEofLock.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x14042F1F0 (FsRtlGetNextLargeMcbEntry.c)
 *     PoRunDownDeviceObject @ 0x140437D0C (PoRunDownDeviceObject.c)
 *     PopInitilizeAcDcSettings @ 0x140438218 (PopInitilizeAcDcSettings.c)
 *     FsRtlRemovePerStreamContext @ 0x140449180 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1404492B0 (FsRtlInsertPerStreamContext.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404ABEF8 (PnpUnregisterPlugPlayNotification.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1404AF6D0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404B3CC0 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     RawInitiateDeleteVolume @ 0x1404BD434 (RawInitiateDeleteVolume.c)
 *     PopScanIdleList @ 0x1404C65A0 (PopScanIdleList.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     PopGetPowerSettingValue @ 0x1404CF78C (PopGetPowerSettingValue.c)
 *     CcRepinBcb @ 0x1404D68C0 (CcRepinBcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D7DB0 (FsRtlpCancelOplockRHIrp.c)
 *     PpDevNodeRemoveFromTree @ 0x1404DACE8 (PpDevNodeRemoveFromTree.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1404E8CA0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlpWaitOnIrp @ 0x1404EC254 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EC858 (FsRtlpCancelWaitingIrp.c)
 *     IoInvalidateBusRelationsWorker @ 0x1404EEEC0 (IoInvalidateBusRelationsWorker.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404F4038 (PnpReleasePowerRelationsQueueLock.c)
 *     RawCheckForDeleteVolume @ 0x1404FDAA8 (RawCheckForDeleteVolume.c)
 *     FsRtlResetLargeMcb @ 0x140500AF0 (FsRtlResetLargeMcb.c)
 *     HalpAcpiGetAllTables @ 0x14050B4A0 (HalpAcpiGetAllTables.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140510174 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     PopRunNormalIrpWorkers @ 0x140529074 (PopRunNormalIrpWorkers.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052A77C (FsRtlpCancelExclusiveIrp.c)
 *     HalpAcpiGetFacsMapping @ 0x14057978C (HalpAcpiGetFacsMapping.c)
 *     CcGetLsnForFileObject @ 0x1405B1B20 (CcGetLsnForFileObject.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1405B5480 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlSplitLargeMcb @ 0x1405B5790 (FsRtlSplitLargeMcb.c)
 *     PnpDisableUserModeNotifications @ 0x1405DADCC (PnpDisableUserModeNotifications.c)
 *     KeConfigureDynamicMemory @ 0x1405EBDBC (KeConfigureDynamicMemory.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405F061C (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiOpPatchCode @ 0x1405F8128 (KiOpPatchCode.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 *     PopIrpWorkerControl @ 0x14060C250 (PopIrpWorkerControl.c)
 *     RawVerifyVolume @ 0x14061753C (RawVerifyVolume.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1406200F8 (RtlpTraceDatabaseReleaseLock.c)
 *     DifExReleaseFastMutexWrapper @ 0x140653FA0 (DifExReleaseFastMutexWrapper.c)
 *     DifKeReleaseGuardedMutexWrapper @ 0x140662C50 (DifKeReleaseGuardedMutexWrapper.c)
 *     PopDeferDoze @ 0x1407718E0 (PopDeferDoze.c)
 *     PiUpdateDeviceResourceLists @ 0x140771DA4 (PiUpdateDeviceResourceLists.c)
 *     DbgkpMarkProcessPeb @ 0x140775AB4 (DbgkpMarkProcessPeb.c)
 *     HalpIrtAllocateDeviceAperture @ 0x1407844C4 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x140784614 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x140784880 (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x140784988 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x140784A78 (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140784B3C (HalpIrtReleaseDeviceAperture.c)
 *     NtSetInformationDebugObject @ 0x14078A7E0 (NtSetInformationDebugObject.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407944C0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     PnpProcessCompletedEject @ 0x1407A4D50 (PnpProcessCompletedEject.c)
 *     IopReleaseResources @ 0x1407A5300 (IopReleaseResources.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1407A8A74 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1407AD07C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1407AD270 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1407AD2F8 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1407AD3A4 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407AD4F8 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407AD5BC (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1407AD8EC (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1407B2BE4 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x1407B2EFC (PipKsrNotifyDrivers.c)
 *     PnpBuildCmResourceLists @ 0x1407B30F8 (PnpBuildCmResourceLists.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BA2D0 (KeRegisterProcessorChangeCallback.c)
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 *     PfTInitialize @ 0x1407C65A4 (PfTInitialize.c)
 *     PfTStart @ 0x1407C67E4 (PfTStart.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1407C7450 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x1407CC6C0 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1407CC780 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1407CF170 (PoQueueShutdownWorkItem.c)
 *     WheaCrashDumpInitializationComplete @ 0x140849650 (WheaCrashDumpInitializationComplete.c)
 *     WheapReportDeferredLiveDumps @ 0x1408496B4 (WheapReportDeferredLiveDumps.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1408B7ECC (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x1408C64F4 (CmpRemoveFromDelayedClose.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayCloseWorker @ 0x1408CE720 (CmpDelayCloseWorker.c)
 *     CmpGetMappingHiveForString @ 0x1408D11E4 (CmpGetMappingHiveForString.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x140909368 (PnpDeferNotification.c)
 *     PnpInsertEventInQueue @ 0x14090965C (PnpInsertEventInQueue.c)
 *     PnpProcessAssignResources @ 0x14090B6F8 (PnpProcessAssignResources.c)
 *     IopDestroyDeviceNode @ 0x14090EAA8 (IopDestroyDeviceNode.c)
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140912C40 (PnpCleanupDeviceRegistryValues.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     EtwpSetProviderTraitsCommon @ 0x14093D5E4 (EtwpSetProviderTraitsCommon.c)
 *     PopLogDisabledSleepReason @ 0x14094512C (PopLogDisabledSleepReason.c)
 *     DbgkpQueueMessage @ 0x140953A1C (DbgkpQueueMessage.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     DbgkClearProcessDebugObject @ 0x140957E88 (DbgkClearProcessDebugObject.c)
 *     ExpGetNextProcessThread @ 0x140968C70 (ExpGetNextProcessThread.c)
 *     DbgkCopyProcessDebugPort @ 0x1409845B8 (DbgkCopyProcessDebugPort.c)
 *     DbgkpSetProcessDebugObject @ 0x140985C5C (DbgkpSetProcessDebugObject.c)
 *     DbgkOpenProcessDebugPort @ 0x140987150 (DbgkOpenProcessDebugPort.c)
 *     NtDebugContinue @ 0x140987410 (NtDebugContinue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140990358 (PiDqObjectManagerUnregisterQuery.c)
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140998C60 (PiCMGetRelatedDeviceInstance.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14099A54C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14099A7E8 (PiUEventNotifyClient.c)
 *     PiUEventReferenceEventEntry @ 0x14099C594 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14099C5D0 (PiUEventNotifyClientPendingEvent.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1409A86E8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiGetRelatedDevice @ 0x1409A8A10 (PiGetRelatedDevice.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1409D5AC8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409D60E8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventHandleUnregisterClient @ 0x1409D61D8 (PiUEventHandleUnregisterClient.c)
 *     PiUEventProcessEventWorker @ 0x1409D6560 (PiUEventProcessEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x1409D6A10 (PiUEventHandleGetEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x1409D712C (PiUEventDereferenceEventEntry.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409D80BC (PiUEventFreeClientRegistrationContext.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpDeviceEventWorker @ 0x1409DCD90 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x1409DD0E8 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1409E1060 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1409E1210 (FsRtlAddToTunnelCacheEx.c)
 *     RawDispatch @ 0x140A35180 (RawDispatch.c)
 *     RawCleanup @ 0x140A35394 (RawCleanup.c)
 *     RawClose @ 0x140A3552C (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x140A355B4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x140A356CC (RawCreate.c)
 *     RawMountVolume @ 0x140A35E6C (RawMountVolume.c)
 *     RawScanDeletedList @ 0x140A36128 (RawScanDeletedList.c)
 *     RawUserFsCtrl @ 0x140A367BC (RawUserFsCtrl.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140A36AA0 (FsRtlTeardownPerStreamContexts.c)
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 *     PopFreeSessionState @ 0x140A3BAAC (PopFreeSessionState.c)
 *     PopDispatchNotificationsToList @ 0x140A3C908 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x140A3D02C (PopGetSettingValue.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140A401E0 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x140A4031C (PopCallPowerSettingCallback.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A851FC (EtwpReleaseProviderTraitsReference.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A885F0 (KeSynchronizeWithDynamicProcessors.c)
 *     IopLegacyResourceAllocation @ 0x140A8B3B4 (IopLegacyResourceAllocation.c)
 *     PfSnEndTrace @ 0x140AA3588 (PfSnEndTrace.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA534C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpFreeDeviceInstancePath @ 0x140AA7BC0 (PnpFreeDeviceInstancePath.c)
 *     PnpBusTypeGuidGetIndex @ 0x140AA8700 (PnpBusTypeGuidGetIndex.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140ABBF80 (FsRtlDeleteKeyFromTunnelCache.c)
 *     PopRundownPowerSettings @ 0x140AC1020 (PopRundownPowerSettings.c)
 *     NtWaitForDebugEvent @ 0x140AE94E0 (NtWaitForDebugEvent.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AEA684 (PiUEventNotifyDeviceInstanceChange.c)
 *     PopRequestShutdownWait @ 0x140AF1078 (PopRequestShutdownWait.c)
 *     PfTTraceListAdd @ 0x140AF5F5C (PfTTraceListAdd.c)
 *     PfSnGetCompletedTrace @ 0x140AF7C90 (PfSnGetCompletedTrace.c)
 *     PiUEventBroadcastEventWorker @ 0x140AFC1A0 (PiUEventBroadcastEventWorker.c)
 *     CmpAddStringToMapping @ 0x140AFD41C (CmpAddStringToMapping.c)
 *     DbgkpCloseObject @ 0x140AFF4E0 (DbgkpCloseObject.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140B03CCC (PiUEventQueueBroadcastEventEntry.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 *     PnpBusTypeGuidGet @ 0x140B0DF0C (PnpBusTypeGuidGet.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B19570 (PoUnregisterPowerSettingCallback.c)
 *     PnpRestartDeviceNode @ 0x140B218FC (PnpRestartDeviceNode.c)
 *     PiUEventHandleVetoEvent @ 0x140B24524 (PiUEventHandleVetoEvent.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B29A70 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpOrphanNotification @ 0x140B2E3C0 (PnpOrphanNotification.c)
 *     PopQueryPowerSettingUlong @ 0x140B41710 (PopQueryPowerSettingUlong.c)
 *     CmpDelayFreeRMWorker @ 0x140B43590 (CmpDelayFreeRMWorker.c)
 *     CmpDelayFreeCmRm @ 0x140B48250 (CmpDelayFreeCmRm.c)
 *     PoVolumeDevice @ 0x140B52CC8 (PoVolumeDevice.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140BFFFD0 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140C00070 (WheapSaveRecordForLiveDump.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140C06A60 (PopFlushVolumeWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KeAbPreWakeupThread @ 0x14026A2B4 (KeAbPreWakeupThread.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140272190 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KiTryUnwaitThread @ 0x1402735B4 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027AAF0 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027C800 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiSignalThread @ 0x14027C940 (KiSignalThread.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiWaitSatisfyMutant @ 0x1404419C0 (KiWaitSatisfyMutant.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall KeReleaseGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v1; // r8
  unsigned __int8 OldIrql; // bl
  __int64 v3; // rdi
  ULONG_PTR v4; // r15
  int v5; // r12d
  signed __int32 v6; // eax
  int v7; // ecx
  __int64 v8; // rdx
  signed __int32 v9; // ett
  ULONG_PTR v10; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r13
  void *v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  _QWORD *v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  char v19; // al
  char v20; // r15
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbp
  unsigned __int8 v24; // r14
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v26; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v28; // r9
  unsigned int v29; // r11d
  __int64 *v30; // rsi
  char v31; // al
  __int64 v32; // rcx
  char v33; // r8
  struct _KPRCB *v34; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v36; // al
  signed __int8 v37; // tt
  signed __int8 v38; // al
  signed __int8 v39; // tt
  char v40; // dl
  __int64 v41; // rbx
  struct _KPRCB *v42; // rcx
  unsigned __int32 *v43; // r8
  _BYTE *v44; // rcx
  struct _KLOCK_ENTRY *v45; // rdx
  _KLOCK_ENTRY_BOOST_BITMAP v46; // r10
  unsigned int v47; // r8d
  __int64 v48; // r9
  LegacyAutoBoost *v49; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int32 v51; // eax
  unsigned __int32 v52; // ett
  unsigned __int32 v53; // eax
  __int64 v54; // rdx
  unsigned __int32 v55; // ett
  struct _KPRCB *v56; // rcx
  unsigned __int32 *v57; // r8
  unsigned __int32 v58; // eax
  __int64 v59; // rdx
  unsigned __int32 v60; // ett
  __int64 v61; // [rsp+30h] [rbp-58h]
  char Priority; // [rsp+98h] [rbp+10h]
  unsigned __int8 v64; // [rsp+A0h] [rbp+18h]
  int v65; // [rsp+A8h] [rbp+20h] BYREF

  OldIrql = Mutex->OldIrql;
  v3 = 0LL;
  Mutex->Owner = 0LL;
  v64 = OldIrql;
  v4 = (ULONG_PTR)Mutex;
  v5 = 1;
  v6 = _InterlockedCompareExchange(&Mutex->Count, 1, 0);
  if ( v6 )
  {
    do
    {
      v7 = -1;
      v8 = v6 & 2;
      if ( (v6 & 2) != 0 )
        v7 = 1;
      v9 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v6 + v7, v6);
    }
    while ( v9 != v6 );
    if ( !(_DWORD)v8 )
    {
      v10 = v4 + 24;
      Priority = KeGetCurrentThread()->Priority;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      KiAcquireKobjectLockSafe((volatile signed __int32 *)(v4 + 24), v8, v1);
      v14 = (_QWORD *)(v4 + 32);
      *(_DWORD *)(v4 + 28) = 1;
      v15 = *(_QWORD **)(v4 + 32);
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v15 == v14 )
          {
LABEL_20:
            _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
            v4 = (ULONG_PTR)Mutex;
            if ( Priority )
            {
              Next = CurrentPrcb->DeferredReadyListHead.Next;
              if ( Next )
                KeAbPreWakeupThread((AutoBoost *)&Next[-27], (struct _KTHREAD *)Mutex, v13);
            }
            v5 = 1;
            KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
            OldIrql = v64;
            goto LABEL_22;
          }
          v16 = (_QWORD *)*v15;
          v17 = (__int64)v15;
          v15 = v16;
          v18 = *(_QWORD **)(v17 + 8);
          if ( v16[1] != v17 || *v18 != v17 )
            __fastfail(3u);
          *v18 = v16;
          v16[1] = v18;
          v19 = *(_BYTE *)(v17 + 16);
          if ( v19 != 1 )
            break;
          v20 = 0;
          v21 = *(_QWORD *)(v17 + 24);
          v61 = *(unsigned __int16 *)(v17 + 18);
          v65 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v65);
            while ( *(_QWORD *)(v21 + 64) );
          }
          if ( *(_BYTE *)(v21 + 388) == 5 )
          {
            v20 = KiSignalThread(CurrentPrcb, v21, v61, v17);
            if ( v20 )
            {
              v44 = *(_BYTE **)(v17 + 32);
              if ( (*v44 & 0x7F) == 2 )
                KiWaitSatisfyMutant(v44, v21, CurrentPrcb);
            }
          }
          *(_QWORD *)(v21 + 64) = 0LL;
          ++*(_BYTE *)(v17 + 17);
          v14 = (_QWORD *)(v10 + 8);
          if ( v20 )
          {
LABEL_19:
            v22 = *(_DWORD *)(v10 + 4) - 1;
            *(_DWORD *)(v10 + 4) = v22;
            if ( !v22 )
              goto LABEL_20;
            v14 = (_QWORD *)(v10 + 8);
          }
        }
        if ( v19 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v17 + 24), (_QWORD *)v17, (__int64)v13);
          goto LABEL_19;
        }
        if ( v19 == 4 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          *(_DWORD *)(v10 + 4) = 0;
          KiInsertQueueDpc(*(_QWORD *)(v17 + 24), 0);
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
        }
        v14 = (_QWORD *)(v10 + 8);
      }
    }
  }
LABEL_22:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), OldIrql);
  __writecr8(OldIrql);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v23 = 0LL;
    v24 = -1;
    _disable();
    CurrentThread = KeGetCurrentThread();
    v26 = 0LL;
    AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
    v28 = *AutoBoostThreadState;
    v29 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
    while ( 1 )
    {
      if ( (unsigned int)v26 >= v29 )
      {
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, 0LL, 0LL);
        goto LABEL_50;
      }
      v30 = (__int64 *)(v28 + 48LL * (unsigned int)v26 + 16);
      v31 = *((_BYTE *)v30 + 33);
      if ( (v31 & 0x10) == 0 )
      {
        v32 = *v30;
        v33 = v30[4] & 2;
        if ( v33 )
          v32 = *(_QWORD *)(v32 + 24);
        if ( v32 == v4 && (v31 & 2) != 0 )
          break;
      }
      v26 = (unsigned int)(v26 + 1);
    }
    v23 = v28 + 48LL * (unsigned int)v26 + 16;
    *((_BYTE *)v30 + 33) = v31 & 0xFC | 1;
    if ( v33 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v26) = 2;
        KiRaiseIrqlProcessIrqlFlags(v24, v26);
      }
      v34 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v34->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v51 = *SchedulerAssist;
        do
        {
          v26 = v51;
          LODWORD(v26) = v51 & 0xFFDFFFFF;
          v52 = v51;
          v51 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v51 & 0xFFDFFFFF, v51);
        }
        while ( v52 != v51 );
        if ( (v51 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v34, v26, SchedulerAssist, v28);
      }
      _enable();
      v5 = 0;
      _m_prefetchw((char *)v30 + 35);
      v36 = *((_BYTE *)v30 + 35);
      do
      {
        v37 = v36;
        v36 = _InterlockedCompareExchange8((volatile signed __int8 *)v30 + 35, v36 | 1, v36);
      }
      while ( v37 != v36 );
      if ( (v36 & 1) != 0 )
      {
        do
        {
          while ( (*((_BYTE *)v30 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((char *)v30 + 35);
          v38 = *((_BYTE *)v30 + 35);
          do
          {
            v39 = v38;
            v38 = _InterlockedCompareExchange8((volatile signed __int8 *)v30 + 35, v38 | 1, v38);
          }
          while ( v39 != v38 );
        }
        while ( (v38 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v30, (struct AutoBoost::_AB_THREAD_ENTRY *)v26);
      _InterlockedAnd8((volatile signed __int8 *)v30 + 35, 0xFEu);
    }
    v40 = *((_BYTE *)v30 + 36);
    v41 = v30[5];
    *((_DWORD *)v30 + 10) = 0;
    *v30 = 0LL;
    *((_WORD *)v30 + 16) = 0;
    LOWORD(v30[-6 * (v40 & 0x7F) - 1]) |= 1 << (v40 & 0xF);
    v3 = v41;
    if ( v5 )
    {
LABEL_50:
      v42 = KeGetCurrentPrcb();
      v43 = (unsigned __int32 *)v42->SchedulerAssist;
      if ( v43 )
      {
        _m_prefetchw(v43);
        v53 = *v43;
        do
        {
          v54 = v53;
          LODWORD(v54) = v53 & 0xFFDFFFFF;
          v55 = v53;
          v53 = _InterlockedCompareExchange((volatile signed __int32 *)v43, v53 & 0xFFDFFFFF, v53);
        }
        while ( v55 != v53 );
        if ( (v53 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v42, v54, v43, v28);
      }
      _enable();
      goto LABEL_57;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    __writecr8(v24);
LABEL_57:
    if ( (_DWORD)v3 )
      AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v23 - 48LL * (*(_BYTE *)(v23 + 36) & 0x7F) - 16), v4, v3, 0LL);
  }
  else
  {
    v45 = (struct _KLOCK_ENTRY *)KeGetCurrentThread();
    _disable();
    v46.AllFields = (unsigned __int64)v45[12].BoostBitmap;
    v47 = 0;
    v48 = v4 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v47 < *(unsigned __int8 *)(v46.AllFields + 12) )
    {
      v49 = (LegacyAutoBoost *)(v46.AllFields + 88LL * v47 + 16);
      if ( (*(_QWORD *)v49 & 0x7FFFFFFFFFFFFFFCLL) == v48 && *((_BYTE *)v49 + 10) && (*(_QWORD *)v49 & 1) == 0 )
      {
        *((_BYTE *)v49 + 10) = 0;
        if ( v49 )
        {
          LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(v49, v45, (struct _KTHREAD *)v4, (void *)1, 0LL);
          return;
        }
        break;
      }
      ++v47;
    }
    if ( (*(_DWORD *)&v45[1].TreeNode.0 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v45, v4, 0LL, 0LL);
    v56 = KeGetCurrentPrcb();
    v57 = (unsigned __int32 *)v56->SchedulerAssist;
    if ( v57 )
    {
      _m_prefetchw(v57);
      v58 = *v57;
      do
      {
        v59 = v58;
        LODWORD(v59) = v58 & 0xFFDFFFFF;
        v60 = v58;
        v58 = _InterlockedCompareExchange((volatile signed __int32 *)v57, v58 & 0xFFDFFFFF, v58);
      }
      while ( v60 != v58 );
      if ( (v58 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v56, v59, v57, v48);
    }
    _enable();
  }
}
