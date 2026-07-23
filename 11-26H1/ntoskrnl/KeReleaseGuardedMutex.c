/*
 * XREFs of KeReleaseGuardedMutex @ 0x1402782B0
 * Callers:
 *     FsRtlAcquireEofLock @ 0x140204E30 (FsRtlAcquireEofLock.c)
 *     FsRtlInsertPerStreamContext @ 0x14021B420 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14021B5C0 (FsRtlRemovePerStreamContext.c)
 *     RawCompletionRoutine @ 0x140258EB0 (RawCompletionRoutine.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402C2CE0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14030BEF0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14030C878 (FsRtlPrivateInitializeFileLock.c)
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     HalMatchAcpiOemTableId @ 0x140344890 (HalMatchAcpiOemTableId.c)
 *     HalMatchAcpiOemId @ 0x140344990 (HalMatchAcpiOemId.c)
 *     HalAcpiGetTableDispatch @ 0x140344B10 (HalAcpiGetTableDispatch.c)
 *     HalpAcpiGetTable @ 0x140344B6C (HalpAcpiGetTable.c)
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcGetDirtyPagesHelper @ 0x14039D5E0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteMbcb @ 0x14039DF64 (CcDeleteMbcb.c)
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     CcGetFlushedValidData @ 0x14039FE80 (CcGetFlushedValidData.c)
 *     FsRtlAddLargeMcbEntry @ 0x1403BE810 (FsRtlAddLargeMcbEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x1403C03AC (PopCreateDynamicIrpWorker.c)
 *     PopRunMaximumIrpWorkers @ 0x1403C1500 (PopRunMaximumIrpWorkers.c)
 *     CcAcquireByteRangeForWrite @ 0x1403E5550 (CcAcquireByteRangeForWrite.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     FsRtlTruncateLargeMcb @ 0x140414570 (FsRtlTruncateLargeMcb.c)
 *     FsRtlLookupLargeMcbEntry @ 0x140414B90 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlReleaseEofLock @ 0x140419310 (FsRtlReleaseEofLock.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x14041C100 (FsRtlGetNextLargeMcbEntry.c)
 *     PoRunDownDeviceObject @ 0x140426C2C (PoRunDownDeviceObject.c)
 *     PopInitilizeAcDcSettings @ 0x140427138 (PopInitilizeAcDcSettings.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1404A8D60 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404AD290 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     RawInitiateDeleteVolume @ 0x1404B6C14 (RawInitiateDeleteVolume.c)
 *     PopScanIdleList @ 0x1404BFF50 (PopScanIdleList.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     PopGetPowerSettingValue @ 0x1404C91BC (PopGetPowerSettingValue.c)
 *     CcRepinBcb @ 0x1404D0090 (CcRepinBcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D1580 (FsRtlpCancelOplockRHIrp.c)
 *     PpDevNodeRemoveFromTree @ 0x1404D43C8 (PpDevNodeRemoveFromTree.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1404E2060 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404E5E38 (FsRtlpCancelWaitingIrp.c)
 *     IoInvalidateBusRelationsWorker @ 0x1404E84A0 (IoInvalidateBusRelationsWorker.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404ED618 (PnpReleasePowerRelationsQueueLock.c)
 *     RawCheckForDeleteVolume @ 0x1404F6FE8 (RawCheckForDeleteVolume.c)
 *     FsRtlResetLargeMcb @ 0x1404FA2E0 (FsRtlResetLargeMcb.c)
 *     HalpAcpiGetAllTables @ 0x140504F10 (HalpAcpiGetAllTables.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140509BE4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     PopRunNormalIrpWorkers @ 0x14052B664 (PopRunNormalIrpWorkers.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 *     HalpAcpiGetFacsMapping @ 0x14057BCBC (HalpAcpiGetFacsMapping.c)
 *     CcGetLsnForFileObject @ 0x1405B4330 (CcGetLsnForFileObject.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1405B7C90 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlSplitLargeMcb @ 0x1405B7FA0 (FsRtlSplitLargeMcb.c)
 *     PnpDisableUserModeNotifications @ 0x1405DD5CC (PnpDisableUserModeNotifications.c)
 *     KeConfigureDynamicMemory @ 0x1405EE72C (KeConfigureDynamicMemory.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405F2F8C (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiOpPatchCode @ 0x1405FAB48 (KiOpPatchCode.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     PopIrpWorkerControl @ 0x14060F3B0 (PopIrpWorkerControl.c)
 *     RawVerifyVolume @ 0x14061A588 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140623148 (RtlpTraceDatabaseReleaseLock.c)
 *     DifExReleaseFastMutexWrapper @ 0x140657B80 (DifExReleaseFastMutexWrapper.c)
 *     DifKeReleaseGuardedMutexWrapper @ 0x140666830 (DifKeReleaseGuardedMutexWrapper.c)
 *     PopDeferDoze @ 0x1407748E0 (PopDeferDoze.c)
 *     PiUpdateDeviceResourceLists @ 0x140774DA4 (PiUpdateDeviceResourceLists.c)
 *     DbgkpMarkProcessPeb @ 0x14077895C (DbgkpMarkProcessPeb.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140786FF8 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtAllocateIndex @ 0x140787148 (HalpIrtAllocateIndex.c)
 *     HalpIrtExtendApertureRange @ 0x1407873B4 (HalpIrtExtendApertureRange.c)
 *     HalpIrtExtendRemappingRange @ 0x1407874BC (HalpIrtExtendRemappingRange.c)
 *     HalpIrtFreeIndex @ 0x1407875AC (HalpIrtFreeIndex.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140787670 (HalpIrtReleaseDeviceAperture.c)
 *     NtSetInformationDebugObject @ 0x14078D310 (NtSetInformationDebugObject.c)
 *     IopCleanupFileObjectIosbRange @ 0x140796FF0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 *     IopReleaseResources @ 0x1407A7E40 (IopReleaseResources.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1407AB624 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1407B00DC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1407B02D0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1407B0358 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1407B0404 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407B0558 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407B061C (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x1407B094C (PnpRemoveEventFromQueue.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1407B5C44 (PiRegisterKernelSoftRestartNotification.c)
 *     PipKsrNotifyDrivers @ 0x1407B5F5C (PipKsrNotifyDrivers.c)
 *     PnpBuildCmResourceLists @ 0x1407B6158 (PnpBuildCmResourceLists.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BD330 (KeRegisterProcessorChangeCallback.c)
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfTInitialize @ 0x1407C9604 (PfTInitialize.c)
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1407CA4B0 (PfSnTracingStateExWorkerRoutine.c)
 *     PoDisableSleepStates @ 0x1407CF760 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x1407CF820 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x1407D2210 (PoQueueShutdownWorkItem.c)
 *     WheaCrashDumpInitializationComplete @ 0x14084F960 (WheaCrashDumpInitializationComplete.c)
 *     WheapReportDeferredLiveDumps @ 0x14084F9C4 (WheapReportDeferredLiveDumps.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1408BE49C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRemoveFromDelayedClose @ 0x1408CCAC4 (CmpRemoveFromDelayedClose.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayCloseWorker @ 0x1408D4CD0 (CmpDelayCloseWorker.c)
 *     CmpGetMappingHiveForString @ 0x1408D77A4 (CmpGetMappingHiveForString.c)
 *     ExpUpdateDebugInfo @ 0x140908210 (ExpUpdateDebugInfo.c)
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 *     FsRtlTeardownPerStreamContexts @ 0x140919AA0 (FsRtlTeardownPerStreamContexts.c)
 *     RawUserFsCtrl @ 0x140919C34 (RawUserFsCtrl.c)
 *     RawDispatch @ 0x140919E90 (RawDispatch.c)
 *     RawCleanup @ 0x14091A0A4 (RawCleanup.c)
 *     RawClose @ 0x14091A23C (RawClose.c)
 *     RawReadWriteDeviceControl @ 0x14091A2C4 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x14091A3DC (RawCreate.c)
 *     RawScanDeletedList @ 0x14091B194 (RawScanDeletedList.c)
 *     RawMountVolume @ 0x14091B1FC (RawMountVolume.c)
 *     DbgkpSetProcessDebugObject @ 0x14091D490 (DbgkpSetProcessDebugObject.c)
 *     DbgkCopyProcessDebugPort @ 0x1409465C8 (DbgkCopyProcessDebugPort.c)
 *     DbgkOpenProcessDebugPort @ 0x140948E50 (DbgkOpenProcessDebugPort.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     DbgkClearProcessDebugObject @ 0x14094B8B8 (DbgkClearProcessDebugObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140950DB8 (PiDqObjectManagerUnregisterQuery.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14095AFAC (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14095B248 (PiUEventNotifyClient.c)
 *     PiUEventReferenceEventEntry @ 0x14095CFF4 (PiUEventReferenceEventEntry.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14095D030 (PiUEventNotifyClientPendingEvent.c)
 *     PiControlGetSetDeviceStatus @ 0x140967F20 (PiControlGetSetDeviceStatus.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1409690F8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiGetRelatedDevice @ 0x140969420 (PiGetRelatedDevice.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1409A6AA8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventHandleUnregisterClient @ 0x1409A70C8 (PiUEventHandleUnregisterClient.c)
 *     PiUEventProcessEventWorker @ 0x1409A7450 (PiUEventProcessEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x1409A7900 (PiUEventHandleGetEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x1409A801C (PiUEventDereferenceEventEntry.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409A8FAC (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409AA6B8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1409AAF28 (PnpDeferNotification.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 *     PnpProcessAssignResources @ 0x1409AD81C (PnpProcessAssignResources.c)
 *     IopDestroyDeviceNode @ 0x1409B0BD8 (IopDestroyDeviceNode.c)
 *     PiQueryResourceRequirements @ 0x1409B2FCC (PiQueryResourceRequirements.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409B4D20 (PnpCleanupDeviceRegistryValues.c)
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     DbgkpCloseObject @ 0x1409BA900 (DbgkpCloseObject.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1409BE87C (EtwpReleaseProviderTraitsReference.c)
 *     PopLogDisabledSleepReason @ 0x1409C0A9C (PopLogDisabledSleepReason.c)
 *     DbgkpQueueMessage @ 0x1409CF35C (DbgkpQueueMessage.c)
 *     PnpFreeDeviceInstancePath @ 0x1409DB0F4 (PnpFreeDeviceInstancePath.c)
 *     PnpBusTypeGuidGetIndex @ 0x1409DBC34 (PnpBusTypeGuidGetIndex.c)
 *     ExpGetNextProcessThread @ 0x1409DD7B0 (ExpGetNextProcessThread.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1409DE060 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1409DE220 (FsRtlAddToTunnelCacheEx.c)
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 *     PopFreeSessionState @ 0x1409F74CC (PopFreeSessionState.c)
 *     PopDispatchNotificationsToList @ 0x1409F8328 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1409F8A4C (PopGetSettingValue.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1409FBC00 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x1409FBD3C (PopCallPowerSettingCallback.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x140A1A398 (PnpProcessDeferredRegistrations.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A8F720 (KeSynchronizeWithDynamicProcessors.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140ABDC80 (FsRtlDeleteKeyFromTunnelCache.c)
 *     PopRundownPowerSettings @ 0x140AC30C0 (PopRundownPowerSettings.c)
 *     NtWaitForDebugEvent @ 0x140AEBFD0 (NtWaitForDebugEvent.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AED174 (PiUEventNotifyDeviceInstanceChange.c)
 *     PopRequestShutdownWait @ 0x140AF3CB8 (PopRequestShutdownWait.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 *     PfSnGetCompletedTrace @ 0x140AFA330 (PfSnGetCompletedTrace.c)
 *     PiUEventBroadcastEventWorker @ 0x140AFDDA0 (PiUEventBroadcastEventWorker.c)
 *     CmpAddStringToMapping @ 0x140AFEF8C (CmpAddStringToMapping.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140B058DC (PiUEventQueueBroadcastEventEntry.c)
 *     NtDebugContinue @ 0x140B077A0 (NtDebugContinue.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 *     PnpBusTypeGuidGet @ 0x140B0F65C (PnpBusTypeGuidGet.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B1B9C0 (PoUnregisterPowerSettingCallback.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 *     PiUEventHandleVetoEvent @ 0x140B269C4 (PiUEventHandleVetoEvent.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B2BAF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpOrphanNotification @ 0x140B3030C (PnpOrphanNotification.c)
 *     PopQueryPowerSettingUlong @ 0x140B43720 (PopQueryPowerSettingUlong.c)
 *     CmpDelayFreeRMWorker @ 0x140B45480 (CmpDelayFreeRMWorker.c)
 *     CmpDelayFreeCmRm @ 0x140B49FE0 (CmpDelayFreeCmRm.c)
 *     PoVolumeDevice @ 0x140B55568 (PoVolumeDevice.c)
 *     PnpNotifyHwProfileChange @ 0x140B6D3FC (PnpNotifyHwProfileChange.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140C061E0 (WheapCreateLiveDumpFromPreviousSession.c)
 *     WheapSaveRecordForLiveDump @ 0x140C06280 (WheapSaveRecordForLiveDump.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x140C0CC70 (PopFlushVolumeWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeAbPreWakeupThread @ 0x140269824 (KeAbPreWakeupThread.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiWaitSatisfyMutant @ 0x14043A4D0 (KiWaitSatisfyMutant.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
