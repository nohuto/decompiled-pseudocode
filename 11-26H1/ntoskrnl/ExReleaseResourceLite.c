/*
 * XREFs of ExReleaseResourceLite @ 0x1402FF9C0
 * Callers:
 *     SepQueueWorkItem @ 0x140216B84 (SepQueueWorkItem.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14026D554 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026E3F4 (FsRtlReleaseFileForModWrite.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402FD040 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     SepExamineGlobalSaclEx @ 0x14031070C (SepExamineGlobalSaclEx.c)
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 *     SepTrustLevelCheck @ 0x1403AB8E0 (SepTrustLevelCheck.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403AFC1C (SepInternalSetSecurityAttributesToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1403B2198 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x14047F35C (SeTokenGetNoChildProcessRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x14047F9F8 (SepReleaseOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x14049D38C (IopCreateSecurityCheck.c)
 *     MiReleaseLoadLock @ 0x14049E290 (MiReleaseLoadLock.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404A3AD0 (IoCheckRedirectionTrustLevel.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1404BBBB0 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1404CFBD8 (SeTokenSetRedirectionTrustPolicy.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404EBFC4 (PiDmaGuardQueueRemoveEntry.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404F3CE8 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404F45F0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x1405BA0D0 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x1405BA5F0 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405CA5C8 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x1405CEA0C (IoSetDeferredLiveDumpFileHandle.c)
 *     PiSwIrpCancelStartCreate @ 0x1405DF340 (PiSwIrpCancelStartCreate.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14062045C (RtlpSetupExtendedBlock.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14063EA80 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14063F470 (SeSetSecurityAttributesTokenEx.c)
 *     DifExReleaseResourceLiteWrapper @ 0x140658560 (DifExReleaseResourceLiteWrapper.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1406D28A0 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     ExpQueryLegacyDriverInformation @ 0x14077338C (ExpQueryLegacyDriverInformation.c)
 *     SepAddTokenLogonSession @ 0x140777EB0 (SepAddTokenLogonSession.c)
 *     PpReleaseBootDDB @ 0x140779D38 (PpReleaseBootDDB.c)
 *     FsRtlMdlReadDev @ 0x140790420 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x1407925A0 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x1407927D0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14079305C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14079320C (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x140795BE8 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x140796CF4 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x1407977F0 (IopInitializeBootLogging.c)
 *     IoRegisterFileSystem @ 0x140799160 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140799780 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140799840 (IoUnregisterFsRegistrationChange.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407A15F0 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A2E2C (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A487C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A62F0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x1407AFCB0 (PpDevCfgProcessDevices.c)
 *     PiSwIrpGetAttributes @ 0x1407B3330 (PiSwIrpGetAttributes.c)
 *     PiSwIrpSetAttributes @ 0x1407B33D0 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B350C (PiSwIrpSetLifetime.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B38B4 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x1407B5F5C (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     PipDgqInsertEntry @ 0x1407BBBA8 (PipDgqInsertEntry.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407E2720 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 *     TtmNotifyDeviceArrival @ 0x1407EA680 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407EA970 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1407EAA40 (TtmNotifyDeviceInput.c)
 *     TtmpStartCallout @ 0x1407EBC1C (TtmpStartCallout.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407EBF9C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSessionsRundown @ 0x1407EC33C (TtmiSessionsRundown.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1407ECB94 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpInsertPowerRequestToSession @ 0x1407ECC14 (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionPowerControl @ 0x1407ED02C (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1407ED0C0 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1407ED3B0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1407ED534 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1407ED7E4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1407ED894 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1407ED9E4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407EDAC8 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchOpenTerminal @ 0x1407EDC44 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1407EDCE0 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1407EDDA0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1407EDE54 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1407EDF10 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1407EDFD0 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiResetInactivityTimer @ 0x1407F1B44 (TtmiResetInactivityTimer.c)
 *     TtmpCloseTerminalHandle @ 0x1407F21F0 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407F23C0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407F27F0 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpDeleteQueue @ 0x1407F2E00 (TtmpDeleteQueue.c)
 *     TtmpReleaseQueueLock @ 0x1407F2F00 (TtmpReleaseQueueLock.c)
 *     RtlZeroHeap @ 0x14080B8A0 (RtlZeroHeap.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SeSetPrivateNameSpaceToken @ 0x140817D70 (SeSetPrivateNameSpaceToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140817E20 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x140818078 (SepSetServerSiloToken.c)
 *     SepIdAssignableAsGroup @ 0x1408199E8 (SepIdAssignableAsGroup.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     SepBlockAccessForLogonSession @ 0x14081B5D0 (SepBlockAccessForLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14081B6A4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x14081B844 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x14081BA88 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14081C9E0 (SepRmGlobalSaclSetWrkr.c)
 *     WmipFindSMBiosStructure @ 0x1408289B4 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosEventlog @ 0x140828BC8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140828E1C (WmipGetSysIds.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1408392AC (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x140849A20 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x14089BFF8 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     CmpStartRMLog @ 0x1408B2784 (CmpStartRMLog.c)
 *     CmpStopRMLog @ 0x1408B2FF0 (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x1408B3298 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1408B3328 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x1408B3A74 (CmpTransWriteLog.c)
 *     CmpGetVirtualizationID @ 0x1408B7880 (CmpGetVirtualizationID.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408EF444 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopInvalidateVolumesForDevice @ 0x14091958C (IopInvalidateVolumesForDevice.c)
 *     NtQuerySecurityAttributesToken @ 0x140925540 (NtQuerySecurityAttributesToken.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x1409349E0 (ObCheckObjectAccess.c)
 *     PiGetDeviceDepth @ 0x14094CF54 (PiGetDeviceDepth.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14094DB54 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140966DF0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140967630 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140968650 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1409688BC (PiPnpRtlOperationListReleaseLock.c)
 *     PiGetRelatedDevice @ 0x140969420 (PiGetRelatedDevice.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096EA80 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140977EEC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140977FE0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409786A0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     IoSetDeviceInterfaceState @ 0x1409AA7B0 (IoSetDeviceInterfaceState.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1409ABC40 (PiUpdateDevicePanel.c)
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwPdoPnPDispatch @ 0x1409AE200 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpInterfacePropertySet @ 0x1409AE6BC (PiSwIrpInterfacePropertySet.c)
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     PiSwStopDestroy @ 0x1409B2018 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409B2334 (PiSwProcessParentRemoveIrp.c)
 *     PiQueryResourceRequirements @ 0x1409B2FCC (PiQueryResourceRequirements.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409B317C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PpDeviceRegistration @ 0x1409B4D7C (PpDeviceRegistration.c)
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 *     PnpChainDereferenceComplete @ 0x1409B69F0 (PnpChainDereferenceComplete.c)
 *     PnpDisableDeviceInterfaces @ 0x1409B7A10 (PnpDisableDeviceInterfaces.c)
 *     IopReleaseDeviceResources @ 0x1409B7CB4 (IopReleaseDeviceResources.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     IoGetLegacyVetoList @ 0x1409C05B0 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     SeQueryUserSidToken @ 0x1409C9AA0 (SeQueryUserSidToken.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 *     PfSnCheckActionsNeeded @ 0x1409D21C0 (PfSnCheckActionsNeeded.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409DBF3C (IopQueryInterfaceRecurseUp.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtAdjustGroupsToken @ 0x1409E0F30 (NtAdjustGroupsToken.c)
 *     NtAdjustPrivilegesToken @ 0x1409E1580 (NtAdjustPrivilegesToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409F5A40 (TtmNotifyLowPowerStateExited.c)
 *     TtmCleanupCurrentSession @ 0x1409F5AB8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409F5CD4 (TtmInitCurrentSession.c)
 *     TtmSessionMonitorControl @ 0x1409F6408 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409F6598 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     SeQueryServerSiloToken @ 0x1409F6C30 (SeQueryServerSiloToken.c)
 *     TtmNotifyConsoleUserPresent @ 0x1409F8018 (TtmNotifyConsoleUserPresent.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1409F80B0 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1409F8700 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     IoOpenDeviceRegistryKey @ 0x140A11740 (IoOpenDeviceRegistryKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140A1AA20 (PiDcHandleCustomDeviceEvent.c)
 *     PpCheckInDriverDatabase @ 0x140A391E4 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A4FC60 (EtwpGetSidExtendedHeaderItem.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineGlobalSacl @ 0x140A61298 (SeExamineGlobalSacl.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 *     SeGetTokenControlInformation @ 0x140A6C5B0 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x140A73190 (SeQuerySessionIdTokenEx.c)
 *     PiDrvDbNodeActionCallback @ 0x140A80C80 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140A80DA8 (PiDrvDbLoadNode.c)
 *     SeQuerySecurityAttributesToken @ 0x140A82D30 (SeQuerySecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x140A87F60 (SeQuerySessionIdToken.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 *     PiSwFreePdoAssociationsList @ 0x140A8C918 (PiSwFreePdoAssociationsList.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PiControlGetPropertyData @ 0x140A93360 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140A93DA4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     SepRmGlobalSaclFind @ 0x140A95210 (SepRmGlobalSaclFind.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A9B5C0 (SepGetLogonSessionAccountInfo.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA072C (PiQueryAndAllocateBootResources.c)
 *     IopGetRootDevices @ 0x140AA1748 (IopGetRootDevices.c)
 *     AlpcpQuerySidToken @ 0x140AA3A9C (AlpcpQuerySidToken.c)
 *     SepCreateLogonSessionTrack @ 0x140AACD9C (SepCreateLogonSessionTrack.c)
 *     FsRtlCopyRead @ 0x140AAD560 (FsRtlCopyRead.c)
 *     SepValidOwnerSubjectContext @ 0x140AAE5AC (SepValidOwnerSubjectContext.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB75F8 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB8628 (SepReferenceLogonSessionSilo.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140ABE730 (TtmNotifySessionDisplayRequiredChange.c)
 *     FsRtlCopyWrite @ 0x140AC06C0 (FsRtlCopyWrite.c)
 *     WmipGetSMBiosTableData @ 0x140AC6900 (WmipGetSMBiosTableData.c)
 *     PnpDiagRundownRegisterCallback @ 0x140AC85F0 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 *     PiQueryDeviceRelations @ 0x140ACBF40 (PiQueryDeviceRelations.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140ACC4B4 (PfSnPrefetchCacheEntryUpdate.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADA87C (SeSetMandatoryPolicyToken.c)
 *     NtGetMUIRegistryInfo @ 0x140AE2DD0 (NtGetMUIRegistryInfo.c)
 *     SepUpdateLogonSessionTrack @ 0x140AE46F4 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AFA774 (IopSetDeviceSecurityDescriptor.c)
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     PiSwIrpPropertySet @ 0x140B071FC (PiSwIrpPropertySet.c)
 *     IopDoDeferredSetInterfaceState @ 0x140B0C470 (IopDoDeferredSetInterfaceState.c)
 *     PipGenerateContainerID @ 0x140B10C0C (PipGenerateContainerID.c)
 *     PiSwIrpInterfaceSetState @ 0x140B12678 (PiSwIrpInterfaceSetState.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 *     WmipReleaseSmbiosLockShared @ 0x140B22694 (WmipReleaseSmbiosLockShared.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 *     PiSwProcessParentStartIrp @ 0x140B26E4C (PiSwProcessParentStartIrp.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140B27930 (IoOpenDeviceInterfaceRegistryKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140B33E8C (SeSetVirtualizationToken.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B36034 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140B368A0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiQueryPowerRelations @ 0x140B37868 (PiQueryPowerRelations.c)
 *     PiSwIrpGetLifetime @ 0x140B3B48C (PiSwIrpGetLifetime.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140B3CF40 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140B40870 (IoEnumerateRegisteredFiltersList.c)
 *     PiDmaGuardQueueFlush @ 0x140B40F7C (PiDmaGuardQueueFlush.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B41E58 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140B49768 (IoLockUnlockPnpDeviceTree.c)
 *     PnpDeleteDeviceInterfaces @ 0x140B4C2E4 (PnpDeleteDeviceInterfaces.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B68814 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140B6C74C (TtmNotifySessionTerminalInput.c)
 *     PnpNotifyHwProfileChange @ 0x140B6D3FC (PnpNotifyHwProfileChange.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     PnpShutdownDevices @ 0x140B6EEA4 (PnpShutdownDevices.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     IopInitCrashDumpRegCallback @ 0x140CC3630 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC9240 (PipResetMatchingFilteredDevices.c)
 *     ExpPrmInitialization @ 0x140CEAA14 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140D0B784 (VslRegisterBootDrivers.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140300FE0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceRelease @ 0x1403047A0 (PerfLogExecutiveResourceRelease.c)
 *     ExpFreeOwnerEntry @ 0x140304B10 (ExpFreeOwnerEntry.c)
 *     RtlRemoveEntryCircularList @ 0x140440580 (RtlRemoveEntryCircularList.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceLite(PERESOURCE Resource)
{
  __int64 v1; // r8
  UCHAR ReservedLowFlags; // cl
  ULONG_PTR v4; // rdi
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  struct _KTHREAD *v7; // r8
  bool v8; // r12
  ULONG v9; // edi
  ULONG ContentionCount; // r14d
  ERESOURCE_THREAD v11; // rdi
  UCHAR v12; // dl
  ULONG NumberOfSharedWaiters; // ecx
  unsigned int WaiterPriority; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // esi
  bool v18; // r13
  ULONG v19; // ecx
  OWNER_ENTRY *p_OwnerEntry; // rdx
  unsigned __int64 v21; // r8
  POWNER_ENTRY v22; // rdx
  POWNER_ENTRY OwnerTable; // rdx
  unsigned __int64 v24; // r9
  OWNER_ENTRY *v25; // rcx
  unsigned __int8 v26; // r14
  ULONG *i; // rsi
  char v28; // cl
  __int64 v29; // rdx
  volatile signed __int32 *SharedWaiters; // rax
  unsigned int v31; // edi
  ULONG v32; // r14d
  ERESOURCE_THREAD v33; // rdi
  UCHAR v34; // r10
  ULONG ActiveEntries; // r9d
  ULONG v36; // ecx
  volatile signed __int32 *v37; // rax
  unsigned int v38; // esi
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  PVOID ExclusiveWaiters; // rdx
  __int64 v45; // rdx
  char v46; // al
  char v47; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+90h] [rbp+20h]
  volatile signed __int32 *v50; // [rsp+98h] [rbp+28h] BYREF

  ReservedLowFlags = Resource->ReservedLowFlags;
  if ( (ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v4 = (ULONG_PTR)KeGetCurrentThread();
  if ( (Resource->ReservedLowFlags & 1) == 0 )
  {
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    v5 = KeGetCurrentIrql();
    if ( v5 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
    LockHandle.OldIrql = v5;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&LockHandle);
      if ( v6 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v6, v1);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&Resource->SpinLock);
    }
    v7 = KeGetCurrentThread();
    if ( ((Resource->ReservedLowFlags & 1) != 0 || LODWORD(ExSaPageGroupDescriptorArrayLock.AutoBoostThreadState))
      && (v4 & 3) != 3
      && (struct _KTHREAD *)v4 != v7 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v7, v4, 0LL);
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
    {
      v8 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
      if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource, v6, v7)
        && Resource->OwnerEntry.OwnerThread != v4 )
      {
        KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 1uLL);
      }
      v9 = (Resource->OwnerEntry.TableSize >> 3) - 1;
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | (8 * v9);
      if ( v9 )
      {
        ContentionCount = Resource->ContentionCount;
        v17 = 65586;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        ExpFreeOwnerEntry(&Resource->OwnerEntry);
        ContentionCount = Resource->ContentionCount;
        v11 = 0LL;
        v12 = Resource->ReservedLowFlags;
        NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
        if ( NumberOfSharedWaiters )
        {
          SharedWaiters = (volatile signed __int32 *)Resource->SharedWaiters;
          Resource->SharedWaiters = 0LL;
          Resource->NumberOfSharedWaiters = 0;
          Resource->ReservedLowFlags = v12 & 0x7F;
          v50 = SharedWaiters;
          Resource->ActiveEntries = Resource->ActiveEntries - 1 + NumberOfSharedWaiters;
        }
        else
        {
          v50 = 0LL;
          if ( Resource->NumberOfExclusiveWaiters )
          {
            if ( Resource->ExclusiveWaiters )
            {
              RtlRemoveEntryCircularList(&Resource->ExclusiveWaiters);
              v11 = *(_QWORD *)(v29 + 16);
              RtlInsertHeadCircularList(&v50, v29);
            }
            --Resource->NumberOfExclusiveWaiters;
            Resource->ActiveEntries = Resource->ActiveEntries;
          }
          else
          {
            Resource->ReservedLowFlags = v12 & 0x7F;
            Resource->ActiveEntries = 0;
            Resource->ActiveCount = 0;
          }
        }
        if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
          Resource->ReservedLowFlags &= 0xF9u;
        WaiterPriority = Resource->WaiterPriority;
        if ( v11 )
        {
          Resource->OwnerEntry.OwnerThread = v11;
          Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | 8;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ExpCommitWakeResourceShared(v15, &v50, v16, WaiterPriority, v11 != 0);
        v17 = 65570;
        v9 = 0;
      }
      __incgsdword(0x90ACu);
      if ( v8 )
        PerfLogExecutiveResourceRelease(v17, Resource, v9, ContentionCount);
      return;
    }
    v18 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    v19 = 0;
    if ( (v4 & 3) == 0 )
      v19 = *(unsigned __int8 *)(v4 + 1120);
    p_OwnerEntry = &Resource->OwnerEntry;
    if ( Resource->OwnerEntry.OwnerThread != v4 )
    {
      v21 = Resource->OwnerEntry.OwnerThread != 0;
      if ( !v19
        || (v22 = Resource->OwnerTable) == 0LL
        || v19 >= v22->TableSize
        || (p_OwnerEntry = &v22[v19], p_OwnerEntry->OwnerThread != v4) )
      {
        OwnerTable = Resource->OwnerTable;
        v24 = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
        if ( !OwnerTable || (v25 = &OwnerTable[OwnerTable->TableSize], p_OwnerEntry = OwnerTable + 1, v21 >= v24) )
LABEL_39:
          KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 2uLL);
        while ( p_OwnerEntry->OwnerThread != v4 )
        {
          if ( !p_OwnerEntry->OwnerThread || (++v21, v21 != v24) )
          {
            if ( ++p_OwnerEntry != v25 )
              continue;
          }
          goto LABEL_39;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                    - LODWORD(Resource->OwnerTable)) >> 4;
      }
    }
    if ( !p_OwnerEntry )
      goto LABEL_39;
    v49 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
    v31 = v49 >> 3;
    p_OwnerEntry->TableSize = v49;
    if ( v49 >> 3 )
    {
      v32 = Resource->ContentionCount;
      v41 = 65618;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_79:
      __incgsdword(0x90B0u);
      if ( v18 )
        PerfLogExecutiveResourceRelease(v41, Resource, v31, v32);
      return;
    }
    ExpFreeOwnerEntry(p_OwnerEntry);
    v32 = Resource->ContentionCount;
    v33 = 0LL;
    v34 = Resource->ReservedLowFlags;
    ActiveEntries = Resource->ActiveEntries;
    if ( ActiveEntries > 1 )
      goto LABEL_69;
    if ( Resource->NumberOfExclusiveWaiters )
    {
      ExclusiveWaiters = Resource->ExclusiveWaiters;
      v50 = 0LL;
      if ( ExclusiveWaiters )
      {
        RtlRemoveEntryCircularList(&Resource->ExclusiveWaiters);
        v33 = *(_QWORD *)(v45 + 16);
        RtlInsertHeadCircularList(&v50, v45);
      }
      v36 = 1;
      --Resource->NumberOfExclusiveWaiters;
      Resource->ReservedLowFlags = v34 | 0x80;
      goto LABEL_71;
    }
    v36 = Resource->NumberOfSharedWaiters;
    if ( v36 )
    {
      v37 = (volatile signed __int32 *)Resource->SharedWaiters;
      Resource->SharedWaiters = 0LL;
      Resource->NumberOfSharedWaiters = 0;
    }
    else
    {
LABEL_69:
      v37 = 0LL;
      v36 = 0;
    }
    v50 = v37;
LABEL_71:
    Resource->ActiveEntries = v36 + ActiveEntries - 1;
    if ( !(v36 + ActiveEntries - 1) )
      Resource->ActiveCount = 0;
    if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
      Resource->ReservedLowFlags &= 0xF9u;
    v38 = Resource->WaiterPriority;
    if ( v33 )
    {
      Resource->OwnerEntry.OwnerThread = v33;
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | 8;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExpCommitWakeResourceShared(v39, &v50, v40, v38, v33 != 0);
    v41 = 65602;
    v31 = 0;
    goto LABEL_79;
  }
  v26 = KeGetCurrentIrql();
  if ( v26 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v26, 2);
  if ( ((__int64)Resource->SystemResourcesList.Flink & 1) == 0
    || (i = &Resource->ActiveEntries, Resource->Reserved2 != (PVOID)v4) )
  {
    for ( i = *(ULONG **)(v4 + 1720); i != (ULONG *)(v4 + 1720); i = *(ULONG **)i )
    {
      v28 = *((_BYTE *)i + 37);
      if ( (v28 & 2) == 0 && *((PERESOURCE *)i + 3) == Resource && (v28 & 1) != 0 )
        goto LABEL_48;
    }
LABEL_49:
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, 0LL, 0LL);
  }
LABEL_48:
  if ( !i )
    goto LABEL_49;
  v46 = *((_BYTE *)i + 37);
  if ( (v46 & 2) != 0 )
  {
    v47 = 0;
  }
  else
  {
    v47 = 1;
    *((_BYTE *)i + 37) = v46 & 0xFE;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
  __writecr8(v26);
  ExReleaseFastResource((struct _KTHREAD *)Resource, (ULONG_PTR)i);
  if ( v47 )
    ExFreePoolWithTag(i, 0);
}
