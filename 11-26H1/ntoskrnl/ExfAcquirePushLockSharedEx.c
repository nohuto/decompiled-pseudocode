/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x140277230
 * Callers:
 *     PoGetIdleTimes @ 0x14021A3C0 (PoGetIdleTimes.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     ExfAcquireCacheAwarePushLockSharedEx @ 0x140276D30 (ExfAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140276F80 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140277040 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x140277180 (ExAcquirePushLockSharedEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExpSaAllocatorFree @ 0x14027D8B0 (ExpSaAllocatorFree.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x14030C010 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14030C0F0 (FsRtlLookupPerFileObjectContext.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     RtlpHpAcquireLockShared @ 0x14034C05C (RtlpHpAcquireLockShared.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140353424 (RtlpCSparseBitmapPageCommit.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     PopFxResidentTimeoutRoutine @ 0x140395980 (PopFxResidentTimeoutRoutine.c)
 *     PoFxSystemLatencyNotify @ 0x140395E64 (PoFxSystemLatencyNotify.c)
 *     PopFxPauseDeviceAccounting @ 0x14039675C (PopFxPauseDeviceAccounting.c)
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14039D524 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PopPepWork @ 0x1403B84E0 (PopPepWork.c)
 *     SepRmReferenceCapTable @ 0x1403C8398 (SepRmReferenceCapTable.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     SmpKeyedStoreReference @ 0x140402DEC (SmpKeyedStoreReference.c)
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
 *     PopDiagTraceFxRundown @ 0x140422618 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x1404227BC (PopFxStopDeviceAccounting.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PspLockProcessListShared @ 0x14042FFB0 (PspLockProcessListShared.c)
 *     RtlStackDbStackAdd @ 0x14043BB88 (RtlStackDbStackAdd.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     PopFxRegisterDeviceWithPep @ 0x14043C668 (PopFxRegisterDeviceWithPep.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x14043C888 (RtlpStackDbSegmentFindOrCreate.c)
 *     PspLockThreadSecurityShared @ 0x140442F10 (PspLockThreadSecurityShared.c)
 *     PspLockProcessThreadListShared @ 0x140444020 (PspLockProcessThreadListShared.c)
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x140464B08 (RtlpLookupDynamicUserFunctionTable.c)
 *     MiTrimViewPrepare @ 0x140465C3C (MiTrimViewPrepare.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140466660 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     MiAgeThreadFaultClusterContexts @ 0x140467600 (MiAgeThreadFaultClusterContexts.c)
 *     ExfAcquirePushLockShared @ 0x14046C0E0 (ExfAcquirePushLockShared.c)
 *     MI_LOCK_RELOCATIONS_SHARED @ 0x14047AED4 (MI_LOCK_RELOCATIONS_SHARED.c)
 *     PopPepIdleTimeoutRoutine @ 0x14047D3E0 (PopPepIdleTimeoutRoutine.c)
 *     ExpSaAllocatorAllocate @ 0x140492F8C (ExpSaAllocatorAllocate.c)
 *     PoFxPrepareDevice @ 0x14049B394 (PoFxPrepareDevice.c)
 *     MiAllocateThreadFaultClusterContext @ 0x14049EEBC (MiAllocateThreadFaultClusterContext.c)
 *     MiFreeThreadFaultClusterContext @ 0x1404A4CE8 (MiFreeThreadFaultClusterContext.c)
 *     PopFxResumeDeviceAccounting @ 0x1404A8F28 (PopFxResumeDeviceAccounting.c)
 *     PopFxIdleDevicesFromSx @ 0x1404AB55C (PopFxIdleDevicesFromSx.c)
 *     PfLockSharedAcquire @ 0x1404ABEA0 (PfLockSharedAcquire.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x1404B69E0 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     ExpPoolMgrAcquirePoolListLockShared @ 0x1404BB8E4 (ExpPoolMgrAcquirePoolListLockShared.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     PspLockQuotaListShared @ 0x1404C8964 (PspLockQuotaListShared.c)
 *     PopFxActivateDevicesForSx @ 0x1404CE9D4 (PopFxActivateDevicesForSx.c)
 *     PopFxStartDeviceAccounting @ 0x1404CF438 (PopFxStartDeviceAccounting.c)
 *     PspLockProcessSharedUnsafe @ 0x1404D02E0 (PspLockProcessSharedUnsafe.c)
 *     ExpLockCallbackListShared @ 0x1404D7ADC (ExpLockCallbackListShared.c)
 *     MmCheckProcessShadow @ 0x1404DF430 (MmCheckProcessShadow.c)
 *     CcGetNumberOfMappedPages @ 0x1404E1730 (CcGetNumberOfMappedPages.c)
 *     PoFxStartDevicePowerManagement @ 0x1404E3FF0 (PoFxStartDevicePowerManagement.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404EACF8 (ExpQueryLicenseValueFromBlobHelper.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404F3FA8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404F6680 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxLowPowerEpochCallback @ 0x1404F89B0 (PopFxLowPowerEpochCallback.c)
 *     PspAcquirePushLockShared @ 0x1404FD828 (PspAcquirePushLockShared.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405111C4 (KeQueryDpcWatchdogConfiguration.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
 *     IommuProcessPageRequestQueue @ 0x14059EE90 (IommuProcessPageRequestQueue.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E83B0 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     PopFxDisableBasicAccountingWorker @ 0x140607880 (PopFxDisableBasicAccountingWorker.c)
 *     PopPepIterateDeviceList @ 0x140614554 (PopPepIterateDeviceList.c)
 *     PopPepPlatformStateRegistered @ 0x1406146A4 (PopPepPlatformStateRegistered.c)
 *     PopFxAcpiPrepareDevice @ 0x140614FE4 (PopFxAcpiPrepareDevice.c)
 *     PspLookupSyscallProviderById @ 0x140617524 (PspLookupSyscallProviderById.c)
 *     PspLockAffinityUpdateShared @ 0x140618560 (PspLockAffinityUpdateShared.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14061A328 (PspSetProcessTimerDelayForWin32.c)
 *     SmGetStoreOwnerProcessId @ 0x140642A78 (SmGetStoreOwnerProcessId.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1406432BC (SmKmVirtualLockCtxLockMemory.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x1406590B0 (DifExfAcquirePushLockSharedWrapper.c)
 *     EtwpGetCompressionSettings @ 0x1406CC1E4 (EtwpGetCompressionSettings.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiFinishResume @ 0x1406F4600 (MiFinishResume.c)
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407C3910 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1407C4154 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1407C448C (AlpcpPortQueryServerInfo.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407C6670 (ObIsDosDeviceLocallyMapped.c)
 *     PspGetNextSyscallProviderProcess @ 0x1407F3310 (PspGetNextSyscallProviderProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1407F70E8 (PspUpdateSingleProcessAffinity.c)
 *     PsTerminateVsmEnclave @ 0x1408047F8 (PsTerminateVsmEnclave.c)
 *     SepIsValidProcUniqueLuid @ 0x14081C714 (SepIsValidProcUniqueLuid.c)
 *     SepIsParentOfChildAppContainer @ 0x14081CDAC (SepIsParentOfChildAppContainer.c)
 *     SmEtwEnableCallback @ 0x140820670 (SmEtwEnableCallback.c)
 *     VmPinMemoryRanges @ 0x1408234A0 (VmPinMemoryRanges.c)
 *     VmUnpinMemoryRanges @ 0x140823890 (VmUnpinMemoryRanges.c)
 *     EtwCleanupSiloState @ 0x14082A79C (EtwCleanupSiloState.c)
 *     ExFetchLicenseData @ 0x14083DCD0 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x14083DF90 (ExGetLicenseTamperState.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 *     sub_14083ED44 @ 0x14083ED44 (sub_14083ED44.c)
 *     sub_14083F2FC @ 0x14083F2FC (sub_14083F2FC.c)
 *     SLGetSubscriptionPfn @ 0x14083F698 (SLGetSubscriptionPfn.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     ExRegisterExtension @ 0x1408469D0 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084A4C4 (ExpKdPullRemoteFileForUser.c)
 *     ExpPoolMgrRegisterPool @ 0x14084D700 (ExpPoolMgrRegisterPool.c)
 *     MiLockFileExtentsShared @ 0x14087380C (MiLockFileExtentsShared.c)
 *     MiGetAllRegisteredPatches @ 0x14087607C (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 *     MiQueryLoadedPatches @ 0x14087A3A0 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 *     MiOpenSpecialPurposeMemory @ 0x140884B70 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x140884D18 (MiQuerySpecialPurposeMemoryInformation.c)
 *     CmpLockHiveListShared @ 0x1408B9780 (CmpLockHiveListShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1408BD210 (PsReferenceImpersonationTokenEx.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmpCallbackFillObjectContext @ 0x1408D0DB0 (CmpCallbackFillObjectContext.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1408D4BDC (CmpLockHashEntrySharedByKcb.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408DA960 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     NtAlpcOpenSenderProcess @ 0x1408ECAD0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1408EEAA0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     AlpcpFlushMessagesPort @ 0x1408F1310 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1408F1508 (AlpcpDisconnectPort.c)
 *     AlpcpCreateSectionView @ 0x1408F1878 (AlpcpCreateSectionView.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     AlpcpImpersonateMessage @ 0x140903CB0 (AlpcpImpersonateMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x140905270 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpGetTraceGuidInfo @ 0x140911A40 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetNextGuidEntry @ 0x140912280 (EtwpGetNextGuidEntry.c)
 *     EtwpGetGuidList @ 0x140912440 (EtwpGetGuidList.c)
 *     EtwpFindGuidEntryByGuid @ 0x140914CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x140916CEC (EtwpIsGuidAllowed.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     ExGetNextProcess @ 0x14091E590 (ExGetNextProcess.c)
 *     ExpCopyProcessInfo @ 0x14091E820 (ExpCopyProcessInfo.c)
 *     NtQueryObject @ 0x140921430 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     ExpSnapShotHandleTables @ 0x140929930 (ExpSnapShotHandleTables.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 *     VrpTranslatePath @ 0x140938020 (VrpTranslatePath.c)
 *     VrpLockJobContextShared @ 0x140939A38 (VrpLockJobContextShared.c)
 *     VrpLockDiffHiveTableShared @ 0x14093BD9C (VrpLockDiffHiveTableShared.c)
 *     SeCreateAccessStateEx @ 0x1409463F0 (SeCreateAccessStateEx.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A5DC (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     RtlpFlsDataCleanup @ 0x14094C22C (RtlpFlsDataCleanup.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140964EA0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140966DF0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmObjectAcquireSharedLock @ 0x140967DB8 (PiDmObjectAcquireSharedLock.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14097A538 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14098D004 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14098FFA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140990410 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140991460 (AlpcpReceiveSynchronousReply.c)
 *     NtAlpcDeleteSecurityContext @ 0x140991F30 (NtAlpcDeleteSecurityContext.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1409C377C (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfNotifySubscription @ 0x1409C38A8 (ExpWnfNotifySubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1409C40C0 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1409C4288 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1409C5DB8 (ExpWnfDeliverThreadNotifications.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1409C7310 (ExpWnfLookupNameInstance.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1409C7984 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1409C7D10 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409C8720 (ExpWnfSubscribeNameInstance.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     PsQueryStatisticsProcess @ 0x1409CDFC0 (PsQueryStatisticsProcess.c)
 *     PsGetProcessDeepFreezeStats @ 0x1409CF900 (PsGetProcessDeepFreezeStats.c)
 *     ExpGetNextProcessThread @ 0x1409DD7B0 (ExpGetNextProcessThread.c)
 *     ObpLockDirectoryShared @ 0x1409DEF00 (ObpLockDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x1409DF640 (ObpLockChildDirectory.c)
 *     CmpGetCallbackObjectContext @ 0x1409DF8F0 (CmpGetCallbackObjectContext.c)
 *     PsReferenceImpersonationToken @ 0x1409E4930 (PsReferenceImpersonationToken.c)
 *     CmpLockHashEntryShared @ 0x1409E4A90 (CmpLockHashEntryShared.c)
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 *     sub_1409E9A1C @ 0x1409E9A1C (sub_1409E9A1C.c)
 *     sub_1409E9DA0 @ 0x1409E9DA0 (sub_1409E9DA0.c)
 *     sub_1409EB6CC @ 0x1409EB6CC (sub_1409EB6CC.c)
 *     sub_1409EB860 @ 0x1409EB860 (sub_1409EB860.c)
 *     sub_1409EBF3C @ 0x1409EBF3C (sub_1409EBF3C.c)
 *     sub_1409EC6FC @ 0x1409EC6FC (sub_1409EC6FC.c)
 *     sub_1409ECABC @ 0x1409ECABC (sub_1409ECABC.c)
 *     CmpLockCallbackListShared @ 0x1409F0BB0 (CmpLockCallbackListShared.c)
 *     PspGetNextJob @ 0x1409FFAA0 (PspGetNextJob.c)
 *     MiIsRangeFullyCommitted @ 0x140A036A4 (MiIsRangeFullyCommitted.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 *     PspReferenceSystemDll @ 0x140A08E70 (PspReferenceSystemDll.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     ObQueryDeviceMapInformation @ 0x140A21800 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x140A221F0 (ObpReferenceDeviceMapFastRef.c)
 *     CmpLockContextListShared @ 0x140A28260 (CmpLockContextListShared.c)
 *     EtwpCovSampContextPruneModules @ 0x140A30B58 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampStackHashCheck @ 0x140A31DB8 (EtwpCovSampStackHashCheck.c)
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 *     RtlFindDynamicEnforcedAddressInRanges @ 0x140A35C54 (RtlFindDynamicEnforcedAddressInRanges.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A36480 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     SepSetTokenLowboxNumber @ 0x140A3E100 (SepSetTokenLowboxNumber.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140A41C70 (ObAssignObjectSecurityDescriptor.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmSetCallbackObjectContext @ 0x140A4C490 (CmSetCallbackObjectContext.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140A4FC60 (EtwpGetSidExtendedHeaderItem.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpLockBlobShared @ 0x140A53460 (AlpcpLockBlobShared.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     ObpLockObjectTypeShared @ 0x140A682F0 (ObpLockObjectTypeShared.c)
 *     PsQueryRuntimeProcess @ 0x140A69970 (PsQueryRuntimeProcess.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A732B8 (AlpcpMapLegacyPortRemoteView.c)
 *     SLQueryLicenseValueInternal @ 0x140A770F8 (SLQueryLicenseValueInternal.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140A7D538 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140A7D6D8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtAlpcDeleteSectionView @ 0x140A7DC00 (NtAlpcDeleteSectionView.c)
 *     AlpcpEnumerateResourcesPort @ 0x140A7DD70 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A82078 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     ntoskrnl_21 @ 0x140A841F0 (ntoskrnl_21.c)
 *     PspStorageGetObject @ 0x140A84774 (PspStorageGetObject.c)
 *     AlpcpLocateSectionView @ 0x140A84878 (AlpcpLocateSectionView.c)
 *     AlpcpLockCommunicationInfoForReply @ 0x140A85B5C (AlpcpLockCommunicationInfoForReply.c)
 *     PspLockJobListShared @ 0x140A86C8C (PspLockJobListShared.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A910A0 (ExAcquireTimeRefreshLockShared.c)
 *     NtAlpcSetInformation @ 0x140A91EC0 (NtAlpcSetInformation.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A94BE0 (PspLockJobMemoryLimitsShared.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A95000 (RtlpFindDynamicEHContinuationTarget.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A96B1C (PspSelectVsmEnclaveByNumber.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 *     AlpcpQueryRemoteView @ 0x140AA4FC8 (AlpcpQueryRemoteView.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140AAB8A4 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     MiGetImageSubsectionBounds @ 0x140AB9F48 (MiGetImageSubsectionBounds.c)
 *     CmpVolumeContextLockShared @ 0x140AC0C50 (CmpVolumeContextLockShared.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140AC12BC (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140AC16F8 (CmFcpManagerProcessUsageDataProviders.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 *     KeCheckCallbackRegistrationsOnDriverUnload @ 0x140AC9820 (KeCheckCallbackRegistrationsOnDriverUnload.c)
 *     AlpcpReceiveLegacyMessage @ 0x140ACE0BC (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 *     WdipTimeoutCheckRoutine @ 0x140AD5830 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x140AD5DB4 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 *     PopAcquireUmpoPushLock @ 0x140AE230C (PopAcquireUmpoPushLock.c)
 *     CmpVolumeManagerLockContextListShared @ 0x140AF3660 (CmpVolumeManagerLockContextListShared.c)
 *     DbgkFlushErrorPort @ 0x140AF614C (DbgkFlushErrorPort.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140AFC7AC (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     EtwpGetDisallowList @ 0x140AFFB84 (EtwpGetDisallowList.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140B06CA0 (KiAvailableCpusProcessWorkItemCallback.c)
 *     CmpLockGlobalKeyLockTrackerShared @ 0x140B11E3C (CmpLockGlobalKeyLockTrackerShared.c)
 *     VmpTracingEnabledCallback @ 0x140B22330 (VmpTracingEnabledCallback.c)
 *     ExpWnfInvalidateDataStores @ 0x140B341C0 (ExpWnfInvalidateDataStores.c)
 *     AlpcpInvokeLogCallbacks @ 0x140B4A34C (AlpcpInvokeLogCallbacks.c)
 *     PsReferencePartitionSystemProcess @ 0x140B4D9B0 (PsReferencePartitionSystemProcess.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140B59530 (PopQueryPowerButtonBugcheckEnabled.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 *     MmEnumerateBadPages @ 0x140B6099C (MmEnumerateBadPages.c)
 *     ExpGetSystemPlatformBinary @ 0x140B6B030 (ExpGetSystemPlatformBinary.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 *     WheaConfigureErrorSource @ 0x140C05E90 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140C06080 (WheaUnconfigureErrorSource.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmLockHiveSecurityShared @ 0x140C5EB30 (CmLockHiveSecurityShared.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140337F20 (RtlBackoff.c)
 *     ExpWakePushLock @ 0x140428464 (ExpWakePushLock.c)
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
