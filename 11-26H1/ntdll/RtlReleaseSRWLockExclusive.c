/*
 * XREFs of RtlReleaseSRWLockExclusive @ 0x18003FAA0
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x180006500 (RtlLookupAtomInAtomTable.c)
 *     RtlpHeapTrkTrackStack @ 0x180010860 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800116E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkInterceptor @ 0x1800117C0 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x180011C20 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkFindStack @ 0x180012C10 (RtlpHeapTrkFindStack.c)
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x180012E08 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x180013304 (RtlpHpVsChunkSplit.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180015F38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpSegContextCompact @ 0x180016214 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180016B50 (RtlpHpLfhPrivateSlotListCompact.c)
 *     TpWaitForWait @ 0x18002A2F0 (TpWaitForWait.c)
 *     TppWaitCompletion @ 0x18002BB30 (TppWaitCompletion.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18002D090 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlQueryAtomInAtomTable @ 0x180037300 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180037520 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800375D0 (RtlAddAtomToAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x1800381C0 (RtlEmptyAtomTable.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     TppWorkerFindTask @ 0x18003D370 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x1800406D0 (TppPrepareDirectParams.c)
 *     TppWorkPost @ 0x180041770 (TppWorkPost.c)
 *     RtlpCallVectoredHandlers @ 0x18004CF90 (RtlpCallVectoredHandlers.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004D650 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x18004D8A0 (TppWorkInitialize.c)
 *     TppCleanupGroupMemberInitialize @ 0x18004DA10 (TppCleanupGroupMemberInitialize.c)
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     TppCleanupGroupRemoveMember @ 0x18004E7C0 (TppCleanupGroupRemoveMember.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TppPoolpFree @ 0x18004ED88 (TppPoolpFree.c)
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18004F310 (TpSetDefaultPoolMaxThreads.c)
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x180050650 (RtlpDereferenceWnfNameSubscription.c)
 *     EtwpGetNextRegistration @ 0x180050820 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180050B20 (EtwpFindRegistration.c)
 *     LdrpBuildForwarderLink @ 0x180050D90 (LdrpBuildForwarderLink.c)
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x180054320 (TppAlpcpExecuteCallback.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180055460 (LdrpDecrementModuleLoadCountEx.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     EtwpSetProviderTraits @ 0x1800577F0 (EtwpSetProviderTraits.c)
 *     EtwpFindGuidEntry @ 0x180057C30 (EtwpFindGuidEntry.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180058090 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x180058350 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180059160 (EtwpRegisterGuidsApiCallback.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180064160 (SbUpdateSwitchContextBasedOnDll.c)
 *     TpSetPoolThreadCpuSets @ 0x180065170 (TpSetPoolThreadCpuSets.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 *     TpSetDefaultPoolStackInformation @ 0x180065C20 (TpSetDefaultPoolStackInformation.c)
 *     TppDirectExecuteCallback @ 0x180065EA0 (TppDirectExecuteCallback.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x180066A90 (TpPostTask.c)
 *     RtlCreateTimer @ 0x1800674B0 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800679A0 (TpTimerOutstandingCallbackCount.c)
 *     TpWaitForTimer @ 0x180068120 (TpWaitForTimer.c)
 *     TppTimerQueueExpiration @ 0x180068340 (TppTimerQueueExpiration.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     TppSingleTimerExpiration @ 0x180068DF0 (TppSingleTimerExpiration.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x180069440 (TppSetTimer.c)
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsChunkFree @ 0x18006B040 (RtlpHpVsChunkFree.c)
 *     EtwpInsertRegistration @ 0x18006CFB0 (EtwpInsertRegistration.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 *     ProviderHandleRemove @ 0x18006D270 (ProviderHandleRemove.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18006D348 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18006D3C8 (EtwpDereferenceUmGuidEntry.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18006E314 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x18006E480 (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18006E764 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpFcInsertChangeRegistration @ 0x18006EB64 (RtlpFcInsertChangeRegistration.c)
 *     RtlpCreateSerializationGroup @ 0x18006F2E0 (RtlpCreateSerializationGroup.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18006FE64 (RtlpRemoveUserSubFromNameSub.c)
 *     TpReleaseWait @ 0x1800703F0 (TpReleaseWait.c)
 *     RtlpWalkLFHBlock @ 0x180073AB0 (RtlpWalkLFHBlock.c)
 *     RtlpIsLFHZoneAllocation @ 0x1800743B0 (RtlpIsLFHZoneAllocation.c)
 *     LdrGetDllDirectory @ 0x180075EC0 (LdrGetDllDirectory.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180076830 (EtwProcessPrivateLoggerRequest.c)
 *     RtlDeleteCriticalSection @ 0x180079550 (RtlDeleteCriticalSection.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180079AC0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpEnterCriticalSectionContended @ 0x18007A2D0 (RtlpEnterCriticalSectionContended.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpStdLockRelease @ 0x18007C50C (RtlpStdLockRelease.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x18007DD44 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpRemoveVectoredHandler @ 0x18007E530 (RtlpRemoveVectoredHandler.c)
 *     LdrpReleaseTlsEntry @ 0x18007E780 (LdrpReleaseTlsEntry.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x18007F2F0 (RtlpCallSecureMemoryCallbacks.c)
 *     LdrpQueueDeferredTlsData @ 0x18007F814 (LdrpQueueDeferredTlsData.c)
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800818F4 (RtlInsertInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180082300 (RtlDeleteGrowableFunctionTable.c)
 *     LdrpLoadKnownDll @ 0x180082910 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindExistingModule @ 0x18008528C (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180085350 (LdrpLoadContextReplaceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     RtlpFlsDataCleanup @ 0x180087C90 (RtlpFlsDataCleanup.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180089604 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18008AC80 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18008B350 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18008B7D0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x18008C3AC (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18008C9F4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18008CAE8 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x18008D438 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18008D4B8 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapExtendContext @ 0x18008E320 (RtlpHpHeapExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18008E480 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotFreeList @ 0x18008E93C (RtlpHpVsSlotFreeList.c)
 *     RtlpFlsAlloc @ 0x180092FE8 (RtlpFlsAlloc.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800932F8 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlFlsSetValue @ 0x180093500 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x180093690 (RtlpFlsSetValue.c)
 *     RtlpFlsFree @ 0x1800942B4 (RtlpFlsFree.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800944D0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180094B78 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180094ED0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180095160 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180096160 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800966D8 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegSuballocatorFree @ 0x180096C50 (RtlpHpSegSuballocatorFree.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180096D10 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180096F44 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextLockUnlock @ 0x180097148 (RtlpHpVsContextLockUnlock.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180097204 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800972C4 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800973D0 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180097438 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x180097710 (RtlpHpLfhContextTlsCleanup.c)
 *     LdrpComputeLazyDllPath @ 0x180099A0C (LdrpComputeLazyDllPath.c)
 *     LdrAddDllDirectory @ 0x18009A310 (LdrAddDllDirectory.c)
 *     LdrpGetDllPath @ 0x18009B5E0 (LdrpGetDllPath.c)
 *     RtlpGetCachedPath @ 0x18009BDD0 (RtlpGetCachedPath.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A1BC4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpGetNormalization @ 0x1800AE430 (RtlpGetNormalization.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800B27C0 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlSetIoCompletionCallback @ 0x1800B7310 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1800B74E0 (RtlpTpIoLookup.c)
 *     RtlpTpIoDllLoaded @ 0x1800B7648 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x1800B81F4 (RtlpTpIoDllUnloaded.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpTpWaitCheckReset @ 0x1800C0960 (RtlpTpWaitCheckReset.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800C2C30 (AlpcGetMessageFromCompletionList.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C62D4 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpPinModule @ 0x1800C64AC (LdrpPinModule.c)
 *     TppJobpRundownJob @ 0x1800C9BD0 (TppJobpRundownJob.c)
 *     TpReleasePool @ 0x1800CB610 (TpReleasePool.c)
 *     TppQueueRemoveHead @ 0x1800CB8F0 (TppQueueRemoveHead.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CCB20 (RtlInstallFunctionTableCallback.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpCleanupThreadTlsData @ 0x1800D7360 (LdrpCleanupThreadTlsData.c)
 *     TpStartAsyncIoOperation @ 0x1800D9120 (TpStartAsyncIoOperation.c)
 *     RtlDeleteFunctionTable @ 0x1800DB030 (RtlDeleteFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800DB6CC (RtlRemoveInvertedFunctionTable.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DBCCC (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800DCB60 (RtlpLowFragHeapAllocateFromZone.c)
 *     TpWaitOutstandingCallbackCount @ 0x1800DCD2C (TpWaitOutstandingCallbackCount.c)
 *     RtlReleasePath @ 0x1800E03A0 (RtlReleasePath.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E0500 (LdrUpdatePackageSearchPath.c)
 *     LdrpResetAppPackagesPath @ 0x1800E05FC (LdrpResetAppPackagesPath.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x1800E15A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x1800E1600 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800E169C (RtlpUnregisterLockedMemoryZone.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800E16E0 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x1800E1760 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800E1880 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800E18F4 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800E1950 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x1800E19F0 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800E1AA0 (RtlLockModuleSection.c)
 *     TppPoolAddWorker @ 0x1800E2D68 (TppPoolAddWorker.c)
 *     RtlAddFunctionTable @ 0x1800E56B0 (RtlAddFunctionTable.c)
 *     RtlSetSearchPathMode @ 0x1800E5ED0 (RtlSetSearchPathMode.c)
 *     TppPoolRemoveWorker @ 0x1800E62E8 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800E708C (TppPoolUpdateTrimmedWorker.c)
 *     TpTrimPools @ 0x1800E86D0 (TpTrimPools.c)
 *     EtwpDisableTraceProviders @ 0x1800E8BDC (EtwpDisableTraceProviders.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800EA000 (TpReleaseCleanupGroupMembers.c)
 *     RtlExtendMemoryZone @ 0x1800EC380 (RtlExtendMemoryZone.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800EC488 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlGrowFunctionTable @ 0x1800ED2C0 (RtlGrowFunctionTable.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800ED500 (RtlpFcRemoveChangeRegistration.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F8458 (LdrpAllocateSchedulerSharedData.c)
 *     RtlUpdateTimer @ 0x1800F8740 (RtlUpdateTimer.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8860 (RtlpHpVsSlotCompactChunks.c)
 *     RtlSetProtectedPolicy @ 0x1800F9120 (RtlSetProtectedPolicy.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 *     LdrpInsertModuleToIndex @ 0x1800FBFF4 (LdrpInsertModuleToIndex.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FC1E8 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHpStackTraceHeapEnable @ 0x1800FCAB0 (RtlpHpStackTraceHeapEnable.c)
 *     RtlpFcChangeRegistrationCallback @ 0x1800FF560 (RtlpFcChangeRegistrationCallback.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FFE04 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180101878 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     EtwpInsertGuidEntry @ 0x180102FDC (EtwpInsertGuidEntry.c)
 *     RtlpHeapTrkDumpStacks @ 0x1801084B4 (RtlpHeapTrkDumpStacks.c)
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 *     LdrFlushAlternateResourceModules @ 0x180108900 (LdrFlushAlternateResourceModules.c)
 *     TpDisablePoolCallbackChecks @ 0x180109AA0 (TpDisablePoolCallbackChecks.c)
 *     LdrRemoveDllDirectory @ 0x18010D2F0 (LdrRemoveDllDirectory.c)
 *     TppStopWaitCallbackGeneration @ 0x18010D3F0 (TppStopWaitCallbackGeneration.c)
 *     EtwpRemoveGuidEntryFromTable @ 0x18010D7A0 (EtwpRemoveGuidEntryFromTable.c)
 *     RtlpWnfRetryTimerCallback @ 0x1801115A0 (RtlpWnfRetryTimerCallback.c)
 *     RtlDestroyAtomTable @ 0x180112670 (RtlDestroyAtomTable.c)
 *     RtlDestroyMemoryZone @ 0x180112BE0 (RtlDestroyMemoryZone.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180115EC4 (RtlpHpStackTraceAllocAdd.c)
 *     EtwpTrackProviderBinary @ 0x180117EAC (EtwpTrackProviderBinary.c)
 *     LdrpCondenseGraphRecurse @ 0x1801191F0 (LdrpCondenseGraphRecurse.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 *     RtlpSignalSystemDirsModification @ 0x18011E5CC (RtlpSignalSystemDirsModification.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E9F0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlStackDbStackAdd @ 0x18011FC7C (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180120DAC (RtlStackDbStackRemove.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     TpSetDefaultPoolCpuSets @ 0x180121A24 (TpSetDefaultPoolCpuSets.c)
 *     RtlpHpStackTraceEnable @ 0x180122CF0 (RtlpHpStackTraceEnable.c)
 *     LdrForkMrdata @ 0x18013811C (LdrForkMrdata.c)
 *     RtlPinAtomInAtomTable @ 0x18013F2F0 (RtlPinAtomInAtomTable.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180140440 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlResetMemoryBlockLookaside @ 0x1801404A0 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x180140500 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x180141810 (RtlDeleteBarrier.c)
 *     RtlpUnlockHeapForClone @ 0x18014564C (RtlpUnlockHeapForClone.c)
 *     RtlCompareExchangePointerMapping @ 0x180145910 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180145A60 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x180145DE0 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x180145EC0 (RtlRemovePropertyStore.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180146CA0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180146D60 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlGetFeatureToggleConfiguration @ 0x1801479C0 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_record_impression @ 0x18014814C (__ft_record_impression.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148E30 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlRcuAllocate @ 0x1801497F0 (RtlRcuAllocate.c)
 *     RtlRcuFree @ 0x1801498C0 (RtlRcuFree.c)
 *     RtlpFlsCloneComplete @ 0x18014F270 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014F308 (RtlpFlsClonePrepare.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014F848 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x18014F998 (RtlpHpStackTraceDisable.c)
 *     UcOnUnexpectedCodePath @ 0x180157830 (UcOnUnexpectedCodePath.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157F90 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180158414 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158580 (RtlpHpSegMgrVaCtxInsert.c)
 *     TppDirectUnposted @ 0x1801591F0 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x18015AEA0 (RtlStackDbContextSerialize.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x18015B4DC (RtlpStackDbSegmentRemoveRef.c)
 *     LdrQueryModuleServiceTags @ 0x18015BB30 (LdrQueryModuleServiceTags.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CD9C (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 */

struct _TEB *__fastcall RtlReleaseSRWLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  struct _TEB *result; // rax
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rdi
  char *v7; // rbx
  __int64 v8; // rcx
  signed __int64 v9; // rdx
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt
  volatile signed __int64 *v12; // rsi
  _QWORD *v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rax
  bool v17; // zf
  signed __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  signed __int64 v21; // rax
  _QWORD v22[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( v2 != 1 )
  {
    do
    {
      v8 = 3LL;
      v9 = v2 & 6;
      if ( v9 != 2 )
        v8 = -1LL;
      v10 = v2 + v8;
      v11 = v2;
      v2 = _InterlockedCompareExchange64(a1, v10, v2);
    }
    while ( v11 != v2 );
    if ( v9 == 2 )
    {
      v12 = a1;
      while ( 1 )
      {
        while ( (v10 & 1) != 0 )
        {
          v21 = _InterlockedCompareExchange64(a1, v10 - 4, v10);
          v17 = v10 == v21;
          v10 = v21;
          if ( v17 )
            goto LABEL_2;
        }
        v13 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0uLL);
        v14 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v14 )
        {
          do
          {
            v15 = v13;
            v13 = (_QWORD *)*v13;
            v13[2] = v15;
            v14 = v13[1];
          }
          while ( !v14 );
          if ( v13 != (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v14;
        }
        if ( (*(_DWORD *)(v14 + 36) & 1) != 0 )
        {
          v16 = *(_QWORD *)(v14 + 16);
          if ( v16 )
            break;
        }
        v12 = 0LL;
        v18 = _InterlockedCompareExchange64(a1, 0LL, v10);
        v17 = v10 == v18;
        v10 = v18;
        if ( v17 )
          goto LABEL_27;
      }
      *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v16;
      *(_QWORD *)(v14 + 16) = 0LL;
      _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_27:
        v19 = *(_QWORD *)(v14 + 16);
        v20 = *(_QWORD *)(v14 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v14 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v14 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v20, v12, v13);
        v14 = v19;
      }
      while ( v19 );
    }
  }
LABEL_2:
  result = NtCurrentTeb();
  SchedulerSharedDataSlot = (char *)result->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v5 = 0;
    v6 = (unsigned __int64)a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v5 < 8 )
    {
      v7 = &SchedulerSharedDataSlot[8 * v5];
      result = (struct _TEB *)(*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _TEB *)v6 )
      {
        if ( v7 )
        {
          *v7 |= 2u;
          if ( v7[7] < 0 )
          {
            v22[1] = 0LL;
            v22[0] = (v7 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            result = (struct _TEB *)NtSetInformationThread(-2LL, 56LL, v22, 16LL);
          }
          *(_QWORD *)v7 = 0LL;
        }
        return result;
      }
      ++v5;
    }
  }
  return result;
}
