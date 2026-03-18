/*
 * XREFs of ExReleaseResourceLite @ 0x1402B4CF0
 * Callers:
 *     SepQueueWorkItem @ 0x140216854 (SepQueueWorkItem.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026EE84 (FsRtlReleaseFileForModWrite.c)
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     SepTrustLevelCheck @ 0x1402AC1C0 (SepTrustLevelCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402B2370 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     SepExamineGlobalSaclEx @ 0x1402C5A70 (SepExamineGlobalSaclEx.c)
 *     CcUnpinFileDataEx @ 0x1402DF3C0 (CcUnpinFileDataEx.c)
 *     KeCapturePersistentThreadState @ 0x14034F2C0 (KeCapturePersistentThreadState.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403CB048 (SepInternalSetSecurityAttributesToken.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1404859EC (SeTokenGetNoChildProcessRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x140486088 (SepReleaseOrderedReadLocks.c)
 *     IopCreateSecurityCheck @ 0x1404A387C (IopCreateSecurityCheck.c)
 *     MiReleaseLoadLock @ 0x1404A4C00 (MiReleaseLoadLock.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404AA440 (IoCheckRedirectionTrustLevel.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404ABEF8 (PnpUnregisterPlugPlayNotification.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1404BADAC (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x1404C2360 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1404D6408 (SeTokenSetRedirectionTrustPolicy.c)
 *     PiDmaGuardQueueRemoveEntry @ 0x1404F29E4 (PiDmaGuardQueueRemoveEntry.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x1404FA6D8 (SeTokenSetNoChildProcessRestricted.c)
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1404FAFE0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 *     RtlpAllocateHeap @ 0x14052125C (RtlpAllocateHeap.c)
 *     FsRtlpDedupChangeEventsControlCallbackV2 @ 0x1405B7860 (FsRtlpDedupChangeEventsControlCallbackV2.c)
 *     FsRtlpTieringHeatEventsControlCallbackV2 @ 0x1405B7D80 (FsRtlpTieringHeatEventsControlCallbackV2.c)
 *     IoConfigureCrashDump @ 0x1405C63E0 (IoConfigureCrashDump.c)
 *     IoFillTriageDumpBuffer @ 0x1405C6994 (IoFillTriageDumpBuffer.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405C7CF8 (IoUpdateDumpPhysicalRanges.c)
 *     IoSetDeferredLiveDumpFileHandle @ 0x1405CC1F8 (IoSetDeferredLiveDumpFileHandle.c)
 *     PiSwIrpCancelStartCreate @ 0x1405DCA90 (PiSwIrpCancelStartCreate.c)
 *     RtlpFreeHeap @ 0x14061C6E0 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14061D40C (RtlpSetupExtendedBlock.c)
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14063B910 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14063B970 (SeSetSecurityAttributesTokenEx.c)
 *     DifExReleaseResourceLiteWrapper @ 0x140654980 (DifExReleaseResourceLiteWrapper.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1406CE870 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     ExpQueryLegacyDriverInformation @ 0x14077038C (ExpQueryLegacyDriverInformation.c)
 *     SepAddTokenLogonSession @ 0x140774EB0 (SepAddTokenLogonSession.c)
 *     PpReleaseBootDDB @ 0x140776E90 (PpReleaseBootDDB.c)
 *     FsRtlMdlReadDev @ 0x14078D8F0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14078DB20 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlDedupChangeUninit @ 0x14078FA70 (FsRtlDedupChangeUninit.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14078FCA0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14079052C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1407906DC (FsRtlpHeatUnregisterVolume.c)
 *     IoInitializeCrashDump @ 0x1407930B8 (IoInitializeCrashDump.c)
 *     IopBootLogToFile @ 0x1407941C4 (IopBootLogToFile.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140794CC0 (IopInitializeBootLogging.c)
 *     IoRegisterFileSystem @ 0x140796630 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140796800 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoUnregisterFileSystem @ 0x140796C50 (IoUnregisterFileSystem.c)
 *     IoUnregisterFsRegistrationChange @ 0x140796D10 (IoUnregisterFsRegistrationChange.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14079EAB0 (IoReportRootDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1407A02EC (PiGetDeviceRegistryProperty.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A1D3C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1407A37B0 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407A71F8 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x1407ACC4C (PpDevCfgProcessDevices.c)
 *     PiSwIrpGetAttributes @ 0x1407B02D0 (PiSwIrpGetAttributes.c)
 *     PiSwIrpSetAttributes @ 0x1407B0370 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B04AC (PiSwIrpSetLifetime.c)
 *     PiCMDeleteDeviceWorker @ 0x1407B0854 (PiCMDeleteDeviceWorker.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B0AD8 (PiCMGenerateDeviceInstance.c)
 *     PipKsrNotifyDrivers @ 0x1407B2EFC (PipKsrNotifyDrivers.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PipDgqInsertEntry @ 0x1407B8B48 (PipDgqInsertEntry.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1407DE0A0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407DE3A0 (PopDripsWatchdogDiagnosticWorker.c)
 *     TtmNotifyDeviceArrival @ 0x1407E4B20 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407E4E10 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1407E4EE0 (TtmNotifyDeviceInput.c)
 *     TtmpStartCallout @ 0x1407E60BC (TtmpStartCallout.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1407E643C (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSessionsRundown @ 0x1407E67DC (TtmiSessionsRundown.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1407E703C (TtmpInitiateModernStandbyTransition.c)
 *     TtmpInsertPowerRequestToSession @ 0x1407E70BC (TtmpInsertPowerRequestToSession.c)
 *     TtmpSessionPowerControl @ 0x1407E74D4 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1407E7560 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1407E7850 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1407E79D4 (TtmpUpdatePowerRequestAttribute.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407E7B48 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1407E7C84 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1407E7D34 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1407E7E84 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407E7F68 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchOpenTerminal @ 0x1407E80E4 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1407E8180 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x1407E8240 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x1407E82F4 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x1407E83B0 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x1407E8470 (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiResetInactivityTimer @ 0x1407EBFE0 (TtmiResetInactivityTimer.c)
 *     TtmpCloseTerminalHandle @ 0x1407EC690 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407EC860 (TtmpScheduledEvaluationWorker.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1407ECC90 (TtmpWnfInactivityTimeoutCallback.c)
 *     TtmpDeleteQueue @ 0x1407ED2A0 (TtmpDeleteQueue.c)
 *     TtmpReleaseQueueLock @ 0x1407ED3A0 (TtmpReleaseQueueLock.c)
 *     RtlZeroHeap @ 0x140805E00 (RtlZeroHeap.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     SeSetPrivateNameSpaceToken @ 0x140811FE0 (SeSetPrivateNameSpaceToken.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140812090 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14081221C (SepSetServerSiloToken.c)
 *     SepIdAssignableAsGroup @ 0x140813B88 (SepIdAssignableAsGroup.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     SepBlockAccessForLogonSession @ 0x140815420 (SepBlockAccessForLogonSession.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408154F4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepMakeLogonSessionsSiblings @ 0x140815694 (SepMakeLogonSessionsSiblings.c)
 *     SepRemoveTokenLogonSession @ 0x1408158D8 (SepRemoveTokenLogonSession.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1408167D0 (SepRmGlobalSaclSetWrkr.c)
 *     WmipFindSMBiosStructure @ 0x1408227A4 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosEventlog @ 0x1408229B8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140822C0C (WmipGetSysIds.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14083306C (ExpRegisterFirmwareTableInformationHandler.c)
 *     NtFlushInstallUILanguage @ 0x140844590 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     _PnpCtxCloseMachine @ 0x140895BF8 (_PnpCtxCloseMachine.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14089E93C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     CmpStartRMLog @ 0x1408AC340 (CmpStartRMLog.c)
 *     CmpStopRMLog @ 0x1408ACBAC (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x1408ACE58 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x1408AD634 (CmpTransWriteLog.c)
 *     CmpGetVirtualizationID @ 0x1408B1274 (CmpGetVirtualizationID.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408E8E84 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     SeUnlockSubjectContext @ 0x1408EE780 (SeUnlockSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     NtQuerySecurityAttributesToken @ 0x1408F55B0 (NtQuerySecurityAttributesToken.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140908BF0 (PiUpdateDevicePanel.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwPdoPnPDispatch @ 0x14090C0D0 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpInterfacePropertySet @ 0x14090C58C (PiSwIrpInterfacePropertySet.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14090ECA0 (PnpReleaseDependencyRelationsLock.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 *     PiSwStopDestroy @ 0x14090FEE8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140910204 (PiSwProcessParentRemoveIrp.c)
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14091109C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14091129C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PpDeviceRegistration @ 0x140912C9C (PpDeviceRegistration.c)
 *     PnpDelayedRemoveWorker @ 0x140913AC0 (PnpDelayedRemoveWorker.c)
 *     PnpChainDereferenceComplete @ 0x140914380 (PnpChainDereferenceComplete.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x14091D48C (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     IoGetLegacyVetoList @ 0x140944C40 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     SeQueryUserSidToken @ 0x14094E160 (SeQueryUserSidToken.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     AdtpBuildAccessesString @ 0x14096A1B4 (AdtpBuildAccessesString.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     PfSnCheckActionsNeeded @ 0x14096FED8 (PfSnCheckActionsNeeded.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14098D0F4 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14098EA84 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140995E20 (_CmGetDeviceSoftwareKeyPath.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140998C60 (PiCMGetRelatedDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     PiDmGetObject @ 0x1409A2D70 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1409A6390 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1409A6BD0 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1409A7BF0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1409A7E68 (PiPnpRtlOperationListReleaseLock.c)
 *     PiGetRelatedDevice @ 0x1409A8A10 (PiGetRelatedDevice.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409D5658 (ExpGetSystemFirmwareTableInformation.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409D90A4 (PiDmObjectManagerReleaseLock.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409DD768 (PiDcHandleCustomDeviceEvent.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineGlobalSacl @ 0x1409F8758 (SeExamineGlobalSacl.c)
 *     IoOpenDeviceRegistryKey @ 0x140A12550 (IoOpenDeviceRegistryKey.c)
 *     PpCheckInDriverDatabase @ 0x140A26144 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A36CC0 (EtwpGetSidExtendedHeaderItem.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A39E40 (TtmNotifyLowPowerStateExited.c)
 *     TtmCleanupCurrentSession @ 0x140A39EB8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140A3A0D4 (TtmInitCurrentSession.c)
 *     TtmSessionMonitorControl @ 0x140A3A808 (TtmSessionMonitorControl.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A3A998 (TtmNotifySessionDisplayBurst.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     SeQueryServerSiloToken @ 0x140A3B0D0 (SeQueryServerSiloToken.c)
 *     TtmNotifyConsoleUserPresent @ 0x140A3C5F8 (TtmNotifyConsoleUserPresent.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140A3C690 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A3CCE0 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 *     NtAdjustPrivilegesToken @ 0x140A42610 (NtAdjustPrivilegesToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     NtAdjustGroupsToken @ 0x140A46440 (NtAdjustGroupsToken.c)
 *     FsRtlReleaseFile @ 0x140A56BA0 (FsRtlReleaseFile.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A5D5D0 (FsRtlReleaseFileForCcFlush.c)
 *     SeGetTokenControlInformation @ 0x140A5F5F0 (SeGetTokenControlInformation.c)
 *     SeQuerySessionIdTokenEx @ 0x140A661C0 (SeQuerySessionIdTokenEx.c)
 *     PiDrvDbNodeActionCallback @ 0x140A781E0 (PiDrvDbNodeActionCallback.c)
 *     PiDrvDbLoadNode @ 0x140A78308 (PiDrvDbLoadNode.c)
 *     PiSwIrpCleanup @ 0x140A7AF04 (PiSwIrpCleanup.c)
 *     PiSwFreePdoAssociationsList @ 0x140A7B7D8 (PiSwFreePdoAssociationsList.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     SeQuerySecurityAttributesToken @ 0x140A7CEC0 (SeQuerySecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x140A820F0 (SeQuerySessionIdToken.c)
 *     PpDevNodeLockTree @ 0x140A88424 (PpDevNodeLockTree.c)
 *     PnpDisableDeviceInterfaces @ 0x140A8ABF0 (PnpDisableDeviceInterfaces.c)
 *     IopReleaseDeviceResources @ 0x140A8AE94 (IopReleaseDeviceResources.c)
 *     PiControlGetPropertyData @ 0x140A8E690 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140A8F0D4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     SepRmGlobalSaclFind @ 0x140A906C0 (SepRmGlobalSaclFind.c)
 *     PpDevNodeUnlockTree @ 0x140A921A4 (PpDevNodeUnlockTree.c)
 *     SepGetLogonSessionAccountInfo @ 0x140A97440 (SepGetLogonSessionAccountInfo.c)
 *     IopGetRootDevices @ 0x140A9FDB8 (IopGetRootDevices.c)
 *     AlpcpQuerySidToken @ 0x140AA1FCC (AlpcpQuerySidToken.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA5534 (PiQueryAndAllocateBootResources.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     IopQueryInterfaceRecurseUp @ 0x140AA8A08 (IopQueryInterfaceRecurseUp.c)
 *     SepCreateLogonSessionTrack @ 0x140AAF14C (SepCreateLogonSessionTrack.c)
 *     FsRtlCopyRead @ 0x140AAF910 (FsRtlCopyRead.c)
 *     SepValidOwnerSubjectContext @ 0x140AB05C8 (SepValidOwnerSubjectContext.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB6258 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB6FE8 (SepReferenceLogonSessionSilo.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB7984 (SeIsTokenAssignableToProcess.c)
 *     PspAssignProcessQuotaBlock @ 0x140AB8F60 (PspAssignProcessQuotaBlock.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140ABC910 (TtmNotifySessionDisplayRequiredChange.c)
 *     FsRtlCopyWrite @ 0x140ABE620 (FsRtlCopyWrite.c)
 *     WmipGetSMBiosTableData @ 0x140AC4C90 (WmipGetSMBiosTableData.c)
 *     PnpDiagRundownRegisterCallback @ 0x140AC6A00 (PnpDiagRundownRegisterCallback.c)
 *     PipForDeviceNodeSubtree @ 0x140AC6C80 (PipForDeviceNodeSubtree.c)
 *     PiQueryDeviceRelations @ 0x140AC9E30 (PiQueryDeviceRelations.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140ACA3A4 (PfSnPrefetchCacheEntryUpdate.c)
 *     PiGetDeviceDepth @ 0x140AD6F94 (PiGetDeviceDepth.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADDB0C (SeSetMandatoryPolicyToken.c)
 *     NtGetMUIRegistryInfo @ 0x140AE5010 (NtGetMUIRegistryInfo.c)
 *     SepUpdateLogonSessionTrack @ 0x140AE6934 (SepUpdateLogonSessionTrack.c)
 *     SeSetSessionIdToken @ 0x140AE7F2C (SeSetSessionIdToken.c)
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140AF80D4 (IopSetDeviceSecurityDescriptor.c)
 *     PiSwIrpInterfaceSetState @ 0x140AF9430 (PiSwIrpInterfaceSetState.c)
 *     IoSetDeviceInterfaceState @ 0x140AF9840 (IoSetDeviceInterfaceState.c)
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 *     PiSwIrpPropertySet @ 0x140B055EC (PiSwIrpPropertySet.c)
 *     IopDoDeferredSetInterfaceState @ 0x140B0AD24 (IopDoDeferredSetInterfaceState.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 *     WmipReleaseSmbiosLockShared @ 0x140B20274 (WmipReleaseSmbiosLockShared.c)
 *     PnpRestartDeviceNode @ 0x140B218FC (PnpRestartDeviceNode.c)
 *     PiSwProcessParentStartIrp @ 0x140B249AC (PiSwProcessParentStartIrp.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140B256D0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140B29ACC (DrvDbOpenDriverDatabaseRegKey.c)
 *     SeSetVirtualizationToken @ 0x140B31C8C (SeSetVirtualizationToken.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B33BE4 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140B34450 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     PiQueryPowerRelations @ 0x140B35658 (PiQueryPowerRelations.c)
 *     PiSwIrpGetLifetime @ 0x140B3927C (PiSwIrpGetLifetime.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x140B3ACC0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     IoEnumerateRegisteredFiltersList @ 0x140B3E840 (IoEnumerateRegisteredFiltersList.c)
 *     PiDmaGuardQueueFlush @ 0x140B3EF4C (PiDmaGuardQueueFlush.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140B3FE28 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140B479D4 (IoLockUnlockPnpDeviceTree.c)
 *     PnpDeleteDeviceInterfaces @ 0x140B4A554 (PnpDeleteDeviceInterfaces.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B65774 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140B697BC (TtmNotifySessionTerminalInput.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6B110 (PiCMUnregisterDeviceInterface.c)
 *     PnpShutdownDevices @ 0x140B6BDA8 (PnpShutdownDevices.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     IopInitCrashDumpRegCallback @ 0x140CBD560 (IopInitCrashDumpRegCallback.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC3170 (PipResetMatchingFilteredDevices.c)
 *     ExpPrmInitialization @ 0x140CE4674 (ExpPrmInitialization.c)
 *     VslRegisterBootDrivers @ 0x140D054B4 (VslRegisterBootDrivers.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpCommitWakeResourceShared @ 0x140273EB0 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastResource @ 0x14027B310 (ExReleaseFastResource.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402B6320 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceRelease @ 0x1402B9AE0 (PerfLogExecutiveResourceRelease.c)
 *     ExpFreeOwnerEntry @ 0x1402B9E50 (ExpFreeOwnerEntry.c)
 *     RtlRemoveEntryCircularList @ 0x140447A90 (RtlRemoveEntryCircularList.c)
 *     RtlInsertHeadCircularList @ 0x140447AE0 (RtlInsertHeadCircularList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    if ( ((Resource->ReservedLowFlags & 1) != 0 || LODWORD(ExSaPageGroupDescriptorArrayLock.Spare35[1]))
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
