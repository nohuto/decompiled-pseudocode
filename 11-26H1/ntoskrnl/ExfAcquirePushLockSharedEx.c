/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x140277CC0
 * Callers:
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024B6A0 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PspLockProcessShared @ 0x140276700 (PspLockProcessShared.c)
 *     ExfAcquireCacheAwarePushLockSharedEx @ 0x1402777C0 (ExfAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140277A10 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140277AD0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x140277C10 (ExAcquirePushLockSharedEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExpSaAllocatorFree @ 0x14027E340 (ExpSaAllocatorFree.c)
 *     MiLockVadShared @ 0x14027E8D0 (MiLockVadShared.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x1402C1350 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402C1430 (FsRtlLookupPerFileObjectContext.c)
 *     CcGetVirtualAddress @ 0x1402E0F50 (CcGetVirtualAddress.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     RtlpHpAcquireLockShared @ 0x140349FDC (RtlpHpAcquireLockShared.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1403513A4 (RtlpCSparseBitmapPageCommit.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14038FB60 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140390550 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     PopFxResidentTimeoutRoutine @ 0x140393C00 (PopFxResidentTimeoutRoutine.c)
 *     PoFxSystemLatencyNotify @ 0x1403940E4 (PoFxSystemLatencyNotify.c)
 *     PopFxPauseDeviceAccounting @ 0x1403949DC (PopFxPauseDeviceAccounting.c)
 *     CcFlushCacheOneRange @ 0x14039A180 (CcFlushCacheOneRange.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14039B7C4 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PopPepWork @ 0x1403AE7D0 (PopPepWork.c)
 *     SepRmReferenceCapTable @ 0x1403BE498 (SepRmReferenceCapTable.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140405820 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     SmpKeyedStoreReference @ 0x140409CFC (SmpKeyedStoreReference.c)
 *     SmpKeyedStoreEntryGet @ 0x140409DF0 (SmpKeyedStoreEntryGet.c)
 *     PoGetIdleTimes @ 0x1404280E0 (PoGetIdleTimes.c)
 *     PopDiagTraceFxRundown @ 0x14042B1A4 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x14042B348 (PopFxStopDeviceAccounting.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PspLockProcessListShared @ 0x14043D700 (PspLockProcessListShared.c)
 *     RtlStackDbStackAdd @ 0x140443078 (RtlStackDbStackAdd.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x140443A24 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     PopFxRegisterDeviceWithPep @ 0x140443B58 (PopFxRegisterDeviceWithPep.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x140443D78 (RtlpStackDbSegmentFindOrCreate.c)
 *     PspLockThreadSecurityShared @ 0x14044ADE0 (PspLockThreadSecurityShared.c)
 *     PspLockProcessThreadListShared @ 0x14044BF00 (PspLockProcessThreadListShared.c)
 *     InsertEventEntryInLookUpTable @ 0x140459DC4 (InsertEventEntryInLookUpTable.c)
 *     MiTrimSection @ 0x1404651E0 (MiTrimSection.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x14046B388 (RtlpLookupDynamicUserFunctionTable.c)
 *     MiTrimViewPrepare @ 0x14046C4BC (MiTrimViewPrepare.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x14046CEE0 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     MiAgeThreadFaultClusterContexts @ 0x14046DE80 (MiAgeThreadFaultClusterContexts.c)
 *     ExfAcquirePushLockShared @ 0x140472960 (ExfAcquirePushLockShared.c)
 *     MI_LOCK_RELOCATIONS_SHARED @ 0x140481564 (MI_LOCK_RELOCATIONS_SHARED.c)
 *     PopPepIdleTimeoutRoutine @ 0x140483A70 (PopPepIdleTimeoutRoutine.c)
 *     ExpSaAllocatorAllocate @ 0x14049943C (ExpSaAllocatorAllocate.c)
 *     PoFxPrepareDevice @ 0x1404A1864 (PoFxPrepareDevice.c)
 *     MiAllocateThreadFaultClusterContext @ 0x1404A582C (MiAllocateThreadFaultClusterContext.c)
 *     MiFreeThreadFaultClusterContext @ 0x1404AB658 (MiFreeThreadFaultClusterContext.c)
 *     PopFxResumeDeviceAccounting @ 0x1404AF898 (PopFxResumeDeviceAccounting.c)
 *     PopFxIdleDevicesFromSx @ 0x1404B2050 (PopFxIdleDevicesFromSx.c)
 *     PfLockSharedAcquire @ 0x1404B2990 (PfLockSharedAcquire.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x1404BD200 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     ExpPoolMgrAcquirePoolListLockShared @ 0x1404C2094 (ExpPoolMgrAcquirePoolListLockShared.c)
 *     MiLockDynamicMemoryShared @ 0x1404CB6E0 (MiLockDynamicMemoryShared.c)
 *     PspLockQuotaListShared @ 0x1404CEF34 (PspLockQuotaListShared.c)
 *     PopFxActivateDevicesForSx @ 0x1404D5164 (PopFxActivateDevicesForSx.c)
 *     PopFxStartDeviceAccounting @ 0x1404D5C74 (PopFxStartDeviceAccounting.c)
 *     PspLockProcessSharedUnsafe @ 0x1404D6B10 (PspLockProcessSharedUnsafe.c)
 *     ExpLockCallbackListShared @ 0x1404DE3FC (ExpLockCallbackListShared.c)
 *     MmCheckProcessShadow @ 0x1404E5E90 (MmCheckProcessShadow.c)
 *     CcGetNumberOfMappedPages @ 0x1404E8370 (CcGetNumberOfMappedPages.c)
 *     PoFxStartDevicePowerManagement @ 0x1404EAC40 (PoFxStartDevicePowerManagement.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404F1718 (ExpQueryLicenseValueFromBlobHelper.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404FA998 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404FD140 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxLowPowerEpochCallback @ 0x1404FF1C0 (PopFxLowPowerEpochCallback.c)
 *     PspAcquirePushLockShared @ 0x140503F58 (PspAcquirePushLockShared.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x140517754 (KeQueryDpcWatchdogConfiguration.c)
 *     MiLockLoaderEntry @ 0x14051E298 (MiLockLoaderEntry.c)
 *     IommuProcessPageRequestQueue @ 0x14059C710 (IommuProcessPageRequestQueue.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     PopFxDisableBasicAccountingWorker @ 0x140604D80 (PopFxDisableBasicAccountingWorker.c)
 *     PopPepIterateDeviceList @ 0x140611714 (PopPepIterateDeviceList.c)
 *     PopPepPlatformStateRegistered @ 0x140611864 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiPrepareDevice @ 0x1406121A4 (PopFxAcpiPrepareDevice.c)
 *     PspLookupSyscallProviderById @ 0x1406146E4 (PspLookupSyscallProviderById.c)
 *     PspLockAffinityUpdateShared @ 0x1406155F0 (PspLockAffinityUpdateShared.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x140617338 (PspSetProcessTimerDelayForWin32.c)
 *     SmGetStoreOwnerProcessId @ 0x14063EE98 (SmGetStoreOwnerProcessId.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14063F6DC (SmKmVirtualLockCtxLockMemory.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x1406554D0 (DifExfAcquirePushLockSharedWrapper.c)
 *     EtwpGetCompressionSettings @ 0x1406C8204 (EtwpGetCompressionSettings.c)
 *     MiMarkHugePfnBad @ 0x1406EC7AC (MiMarkHugePfnBad.c)
 *     MiFinishResume @ 0x1406EF990 (MiFinishResume.c)
 *     MiLogHotPatchRundownForProcess @ 0x1406FC34C (MiLogHotPatchRundownForProcess.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407C08B0 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C0EF8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1407C16E0 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407C3610 (ObIsDosDeviceLocallyMapped.c)
 *     PspGetNextSyscallProviderProcess @ 0x1407ED7B0 (PspGetNextSyscallProviderProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1407F1588 (PspUpdateSingleProcessAffinity.c)
 *     PsTerminateVsmEnclave @ 0x1407FEDC8 (PsTerminateVsmEnclave.c)
 *     SepIsValidProcUniqueLuid @ 0x140816504 (SepIsValidProcUniqueLuid.c)
 *     SepIsParentOfChildAppContainer @ 0x140816B9C (SepIsParentOfChildAppContainer.c)
 *     SmEtwEnableCallback @ 0x14081A460 (SmEtwEnableCallback.c)
 *     VmPinMemoryRanges @ 0x14081D290 (VmPinMemoryRanges.c)
 *     VmUnpinMemoryRanges @ 0x14081D680 (VmUnpinMemoryRanges.c)
 *     EtwCleanupSiloState @ 0x14082455C (EtwCleanupSiloState.c)
 *     ExFetchLicenseData @ 0x140837A90 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x140837D50 (ExGetLicenseTamperState.c)
 *     sub_140838310 @ 0x140838310 (sub_140838310.c)
 *     sub_140838B04 @ 0x140838B04 (sub_140838B04.c)
 *     sub_1408390BC @ 0x1408390BC (sub_1408390BC.c)
 *     SLGetSubscriptionPfn @ 0x140839458 (SLGetSubscriptionPfn.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     ExRegisterExtension @ 0x140840790 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x140845480 (ExpKdPullRemoteFileForUser.c)
 *     ExpPoolMgrRegisterPool @ 0x1408474A0 (ExpPoolMgrRegisterPool.c)
 *     MiLockFileExtentsShared @ 0x14086D43C (MiLockFileExtentsShared.c)
 *     MiGetAllRegisteredPatches @ 0x14086FD1C (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x14087272C (MiLogHotPatchRundown.c)
 *     MiQueryLoadedPatches @ 0x140874040 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140874330 (MiQueryProcessActivePatches.c)
 *     MiOpenSpecialPurposeMemory @ 0x14087E770 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x14087E918 (MiQuerySpecialPurposeMemoryInformation.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1408B6C40 (PsReferenceImpersonationTokenEx.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1408CA800 (CmpCallbackFillObjectContext.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408CE62C (CmpLockHashEntrySharedByKcb.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408D43A0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     NtAlpcOpenSenderProcess @ 0x1408E6510 (NtAlpcOpenSenderProcess.c)
 *     AlpcpDispatchConnectionRequest @ 0x1408E8048 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1408E84E0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpFlushMessagesPort @ 0x1408EAD50 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1408EAF48 (AlpcpDisconnectPort.c)
 *     AlpcpCreateSectionView @ 0x1408EB2B8 (AlpcpCreateSectionView.c)
 *     ObReferenceObjectByName @ 0x1408F2260 (ObReferenceObjectByName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     ExpSnapShotHandleTables @ 0x1408F99A0 (ExpSnapShotHandleTables.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140905024 (ObpReferenceSecurityDescriptorSlow.c)
 *     CmpVolumeManagerLockContextListShared @ 0x140905AD8 (CmpVolumeManagerLockContextListShared.c)
 *     SeCaptureSubjectContextEx @ 0x140920670 (SeCaptureSubjectContextEx.c)
 *     ObLogSecurityDescriptor @ 0x1409211E0 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1409214E0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x140921C40 (SeDefaultObjectMethod.c)
 *     AlpcpImpersonateMessage @ 0x1409281A0 (AlpcpImpersonateMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x140929760 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurity @ 0x140929880 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140929AE0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140929D90 (AlpcpGetEffectiveTokenMessage.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1409348B0 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140935E90 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetNextGuidEntry @ 0x1409366D0 (EtwpGetNextGuidEntry.c)
 *     EtwpGetGuidList @ 0x1409368A0 (EtwpGetGuidList.c)
 *     EtwpFindGuidEntryByGuid @ 0x140939130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x14093B14C (EtwpIsGuidAllowed.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpCovSampContextPruneModules @ 0x14093DA40 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampStackHashCheck @ 0x14093ECA8 (EtwpCovSampStackHashCheck.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampContextGetModule @ 0x140941058 (EtwpCovSampContextGetModule.c)
 *     RtlFindDynamicEnforcedAddressInRanges @ 0x140942B44 (RtlFindDynamicEnforcedAddressInRanges.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140947E0C (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfNotifySubscription @ 0x140947F34 (ExpWnfNotifySubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140948750 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140948918 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x14094A158 (ExpWnfReadStateData.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14094A448 (ExpWnfDeliverThreadNotifications.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14094B9A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14094C014 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14094C3A0 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14094C830 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x14094CDB0 (ExpWnfSubscribeNameInstance.c)
 *     PsReferenceEffectiveToken @ 0x14094F580 (PsReferenceEffectiveToken.c)
 *     PsQueryStatisticsProcess @ 0x140952680 (PsQueryStatisticsProcess.c)
 *     PsGetProcessDeepFreezeStats @ 0x140953FC0 (PsGetProcessDeepFreezeStats.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140956BB4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     PspGetNextJob @ 0x14095A1E0 (PspGetNextJob.c)
 *     MiIsRangeFullyCommitted @ 0x14095DDE4 (MiIsRangeFullyCommitted.c)
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
 *     PspReferenceSystemDll @ 0x140962FE8 (PspReferenceSystemDll.c)
 *     ExpGetNextProcessThread @ 0x140968C70 (ExpGetNextProcessThread.c)
 *     ExpCopyProcessInfo @ 0x140968E30 (ExpCopyProcessInfo.c)
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 *     ExGetNextProcess @ 0x140969F30 (ExGetNextProcess.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 *     VrpTranslatePath @ 0x140976010 (VrpTranslatePath.c)
 *     VrpLockJobContextShared @ 0x140977A28 (VrpLockJobContextShared.c)
 *     VrpLockDiffHiveTableShared @ 0x140979D8C (VrpLockDiffHiveTableShared.c)
 *     SeCreateAccessStateEx @ 0x1409843E0 (SeCreateAccessStateEx.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1409A4440 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1409A6390 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectAcquireSharedLock @ 0x1409A7358 (PiDmObjectAcquireSharedLock.c)
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1409BCF30 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x1409BED80 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1409BEFC0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1409BF430 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1409C0480 (AlpcpReceiveSynchronousReply.c)
 *     NtAlpcDeleteSecurityContext @ 0x1409C0F50 (NtAlpcDeleteSecurityContext.c)
 *     MiRelocateImagePfn @ 0x1409CEA4C (MiRelocateImagePfn.c)
 *     ObpLockDirectoryShared @ 0x1409E1EF0 (ObpLockDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x1409E2630 (ObpLockChildDirectory.c)
 *     CmpGetCallbackObjectContext @ 0x1409E28E0 (CmpGetCallbackObjectContext.c)
 *     sub_1409ECE3C @ 0x1409ECE3C (sub_1409ECE3C.c)
 *     sub_1409ED24C @ 0x1409ED24C (sub_1409ED24C.c)
 *     sub_1409ED5D0 @ 0x1409ED5D0 (sub_1409ED5D0.c)
 *     sub_1409EEEFC @ 0x1409EEEFC (sub_1409EEEFC.c)
 *     sub_1409EF090 @ 0x1409EF090 (sub_1409EF090.c)
 *     sub_1409EF76C @ 0x1409EF76C (sub_1409EF76C.c)
 *     sub_1409EFF2C @ 0x1409EFF2C (sub_1409EFF2C.c)
 *     sub_1409F02EC @ 0x1409F02EC (sub_1409F02EC.c)
 *     NtQueryObject @ 0x1409FC830 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     PsReferenceImpersonationToken @ 0x140A04D20 (PsReferenceImpersonationToken.c)
 *     CmpLockHashEntryShared @ 0x140A04E80 (CmpLockHashEntryShared.c)
 *     CmpLockCallbackListShared @ 0x140A053C0 (CmpLockCallbackListShared.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
 *     ObQueryDeviceMapInformation @ 0x140A181D0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A18420 (ObpReferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x140A18BC0 (ObpReferenceDeviceMapFastRef.c)
 *     CmpLockContextListShared @ 0x140A1EC40 (CmpLockContextListShared.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A23970 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     SepSetTokenLowboxNumber @ 0x140A2C4A4 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A2C9E4 (SepDereferenceLowBoxNumberEntry.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140A2FDF0 (ObAssignObjectSecurityDescriptor.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmSetCallbackObjectContext @ 0x140A31530 (CmSetCallbackObjectContext.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A36CC0 (EtwpGetSidExtendedHeaderItem.c)
 *     DbgkFlushErrorPort @ 0x140A43A48 (DbgkFlushErrorPort.c)
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A49448 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A4992C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpLockBlobShared @ 0x140A4A170 (AlpcpLockBlobShared.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     ObpLockObjectTypeShared @ 0x140A5B380 (ObpLockObjectTypeShared.c)
 *     PsQueryRuntimeProcess @ 0x140A5C9B0 (PsQueryRuntimeProcess.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A662E8 (AlpcpMapLegacyPortRemoteView.c)
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140A6BF08 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A6C0A8 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140A6FBA4 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     NtAlpcDeleteSectionView @ 0x140A74EE0 (NtAlpcDeleteSectionView.c)
 *     AlpcpEnumerateResourcesPort @ 0x140A75050 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A7A138 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     ntoskrnl_21 @ 0x140A7E380 (ntoskrnl_21.c)
 *     PspStorageGetObject @ 0x140A7E904 (PspStorageGetObject.c)
 *     AlpcpLocateSectionView @ 0x140A7EA08 (AlpcpLocateSectionView.c)
 *     AlpcpLockCommunicationInfoForReply @ 0x140A7FCEC (AlpcpLockCommunicationInfoForReply.c)
 *     PspLockJobListShared @ 0x140A80E1C (PspLockJobListShared.c)
 *     RtlpFlsDataCleanup @ 0x140A8B928 (RtlpFlsDataCleanup.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A8BDD0 (ExAcquireTimeRefreshLockShared.c)
 *     NtAlpcSetInformation @ 0x140A8D1F0 (NtAlpcSetInformation.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A90090 (PspLockJobMemoryLimitsShared.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A904B0 (RtlpFindDynamicEHContinuationTarget.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A91FCC (PspSelectVsmEnclaveByNumber.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A99998 (MiFindProcessImageHotPatchRecord.c)
 *     AlpcpQueryRemoteView @ 0x140AA8D08 (AlpcpQueryRemoteView.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140AAD7E4 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     MiGetImageSubsectionBounds @ 0x140AB8908 (MiGetImageSubsectionBounds.c)
 *     CmpVolumeContextLockShared @ 0x140ABEBB0 (CmpVolumeContextLockShared.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140ABF21C (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140ABF658 (CmFcpManagerProcessUsageDataProviders.c)
 *     MiFindHotPatchRecord @ 0x140ABFFE4 (MiFindHotPatchRecord.c)
 *     KeCheckCallbackRegistrationsOnDriverUnload @ 0x140AC7C30 (KeCheckCallbackRegistrationsOnDriverUnload.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACBE7C (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140ACC1E4 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessage @ 0x140ACCE1C (AlpcpCancelMessage.c)
 *     WdipTimeoutCheckRoutine @ 0x140AD8D80 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x140AD9304 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD9550 (WdipSemDisableScenario.c)
 *     PopAcquireUmpoPushLock @ 0x140AE47FC (PopAcquireUmpoPushLock.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140AFA544 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     EtwpGetDisallowList @ 0x140AFDB14 (EtwpGetDisallowList.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B05090 (KiAvailableCpusProcessWorkItemCallback.c)
 *     CmpLockGlobalKeyLockTrackerShared @ 0x140B103FC (CmpLockGlobalKeyLockTrackerShared.c)
 *     VmpTracingEnabledCallback @ 0x140B1FF10 (VmpTracingEnabledCallback.c)
 *     ExpWnfInvalidateDataStores @ 0x140B31D6C (ExpWnfInvalidateDataStores.c)
 *     AlpcpInvokeLogCallbacks @ 0x140B485BC (AlpcpInvokeLogCallbacks.c)
 *     PsReferencePartitionSystemProcess @ 0x140B4BC20 (PsReferencePartitionSystemProcess.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140B56830 (PopQueryPowerButtonBugcheckEnabled.c)
 *     MmEnumerateBadPages @ 0x140B5D81C (MmEnumerateBadPages.c)
 *     ExpGetSystemPlatformBinary @ 0x140B680A0 (ExpGetSystemPlatformBinary.c)
 *     AlpcpDispatchReplyToPort @ 0x140B6F318 (AlpcpDispatchReplyToPort.c)
 *     WheaConfigureErrorSource @ 0x140BFFC80 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140BFFE70 (WheaUnconfigureErrorSource.c)
 *     MmDuplicateMemory @ 0x140C0CEE0 (MmDuplicateMemory.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmLockHiveSecurityShared @ 0x140C58B30 (CmLockHiveSecurityShared.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278AE0 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140335EF0 (RtlBackoff.c)
 *     ExpWakePushLock @ 0x140433394 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(
        signed __int64 *a1,
        char a2,
        LegacyAutoBoost *a3,
        struct _KTHREAD *a4)
{
  unsigned int v4; // esi
  bool v8; // r12
  signed __int64 v9; // rdi
  unsigned __int64 v10; // r8
  signed __int64 v11; // rcx
  signed __int64 result; // rax
  int v13; // ebx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  int v16; // ecx
  unsigned int v17; // eax
  bool v18; // cl
  unsigned __int64 v19; // rdx
  bool v20; // zf
  signed __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  signed __int64 v25; // rax
  int i; // edx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 Object; // [rsp+40h] [rbp-40h] BYREF
  __int128 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+60h] [rbp-20h]
  __int128 v36; // [rsp+70h] [rbp-10h] BYREF

  v4 = 0;
  v32[0] = 0;
  Object = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v8 = ExpPushLockAllowImplicitUpgrade && (a2 & 4) == 0;
  _m_prefetchw(a1);
  v9 = *a1;
  while ( 1 )
  {
    v10 = 0xFFFFF780000002D6uLL;
    if ( (v9 & 2) == 0 && ((v9 & 1) == 0 || (v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0) )
      break;
    if ( v8 && (v9 & 1) == 0 )
      break;
    if ( a3 )
      KeAbPreWait(a3);
    v18 = 0;
    *((_QWORD *)&v36 + 1) = a3;
    DWORD1(v36) = 2;
    *((_QWORD *)&v35 + 1) = 0LL;
    if ( (v9 & 2) != 0 )
    {
      *(_QWORD *)&v35 = 0LL;
      *((_QWORD *)&v34 + 1) = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v19 = (unsigned __int64)&Object | v9 & 9 | 6;
      LODWORD(v36) = -1;
      v18 = (v9 & 4) == 0;
    }
    else
    {
      *(_QWORD *)&v35 = &Object;
      LODWORD(v36) = -2;
      v19 = (unsigned __int64)&Object + 3;
    }
    v21 = _InterlockedCompareExchange64(a1, v19, v9);
    v20 = v9 == v21;
    v9 = v21;
    if ( !v20 )
    {
      RtlBackoff(v32, v19, v10);
      v4 = v32[0];
      goto LABEL_18;
    }
    if ( v18 )
    {
      while ( (v19 & 1) != 0 )
      {
        v22 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0uLL);
        if ( !*(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) )
        {
          do
          {
            v23 = v22;
            v22 = (_QWORD *)v22[3];
            v22[5] = v23;
            v24 = v22[4];
          }
          while ( !v24 );
          if ( v22 != (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v24;
        }
        v25 = _InterlockedCompareExchange64(a1, v19 - 4, v19);
        v20 = v19 == v25;
        v19 = v25;
        if ( v20 )
          goto LABEL_34;
      }
      ExpWakePushLock(a1, v19, v10);
    }
LABEL_34:
    *(_QWORD *)&v34 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v28 = __rdtsc();
        v29 = v28 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (BYTE4(v36) & 2) == 0 )
            break;
          v30 = v28;
          v31 = __rdtsc();
          v28 = v31;
          if ( v31 < v30 || v31 >= v29 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; (BYTE4(v36) & 2) != 0 && i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6]; ++i )
          _mm_pause();
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&v36 + 1, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_19:
    if ( a3 )
      a3 = (LegacyAutoBoost *)KeAbPreAcquire(a4, a3);
  }
  v11 = (v9 | 1) + 16;
  if ( (v9 & 2) != 0 )
    v11 = v9 | 1;
  result = _InterlockedCompareExchange64(a1, v11, v9);
  if ( v9 != result )
  {
    if ( a3 )
      KeAbPreWait(a3);
    v13 = v4;
    if ( v4 )
    {
      if ( v4 < 0x1FFF )
        v13 = 2 * v4;
    }
    else
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
      {
LABEL_18:
        v9 = *a1;
        _m_prefetchw(a1);
        goto LABEL_19;
      }
      v13 = 64;
    }
    v4 = v13;
    v32[0] = v13;
    v14 = __rdtsc();
    v15 = 10 * (v13 + ((v13 - 1) & (unsigned int)v14)) / MEMORY[0xFFFFF780000002D6];
    if ( v15 )
    {
      v16 = 1;
      do
      {
        _mm_pause();
        v17 = v16++;
      }
      while ( v17 < v15 );
    }
    goto LABEL_18;
  }
  return result;
}
