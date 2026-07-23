/*
 * XREFs of RtlReleaseSRWLockExclusive @ 0x18002A010
 * Callers:
 *     RtlEmptyAtomTable @ 0x180001060 (RtlEmptyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800011F0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800012A0 (RtlAddAtomToAtomTableEx.c)
 *     TpWaitForWait @ 0x1800153F0 (TpWaitForWait.c)
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180018190 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     TppWorkerFindTask @ 0x1800278E0 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     TppPrepareDirectParams @ 0x18002AC40 (TppPrepareDirectParams.c)
 *     TppWorkPost @ 0x18002BCE0 (TppWorkPost.c)
 *     RtlpCallVectoredHandlers @ 0x180037510 (RtlpCallVectoredHandlers.c)
 *     TppCleanupGroupMemberDestroy @ 0x180037BD0 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037F90 (TppCleanupGroupMemberInitialize.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     TppCleanupGroupRemoveMember @ 0x180038D40 (TppCleanupGroupRemoveMember.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180039890 (TpSetDefaultPoolMaxThreads.c)
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18003A200 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x18003ABD0 (RtlpDereferenceWnfNameSubscription.c)
 *     EtwpGetNextRegistration @ 0x18003ADA0 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18003B0A0 (EtwpFindRegistration.c)
 *     LdrpBuildForwarderLink @ 0x18003B310 (LdrpBuildForwarderLink.c)
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     LdrpFastpthReloadedDll @ 0x18003D2C0 (LdrpFastpthReloadedDll.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18003E8A0 (TppAlpcpExecuteCallback.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18003F9E0 (LdrpDecrementModuleLoadCountEx.c)
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 *     EtwpSetProviderTraits @ 0x180041D70 (EtwpSetProviderTraits.c)
 *     EtwpFindGuidEntry @ 0x1800421B0 (EtwpFindGuidEntry.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180042610 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpEventApiCallback @ 0x1800428D0 (EtwpEventApiCallback.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800436E0 (EtwpRegisterGuidsApiCallback.c)
 *     RtlLookupAtomInAtomTable @ 0x180051C30 (RtlLookupAtomInAtomTable.c)
 *     RtlpHeapTrkTrackStack @ 0x18005BF90 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18005CE10 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18005D350 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkFindStack @ 0x18005E340 (RtlpHeapTrkFindStack.c)
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x18005E538 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x18005EA34 (RtlpHpVsChunkSplit.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180061668 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpSegContextCompact @ 0x180061944 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180062280 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x180062870 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180062B00 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180063B00 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180064078 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800645D0 (RtlpHpLfhContextTlsCleanup.c)
 *     LdrGetDllDirectory @ 0x1800646E0 (LdrGetDllDirectory.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180065050 (EtwProcessPrivateLoggerRequest.c)
 *     RtlDeleteCriticalSection @ 0x180067D70 (RtlDeleteCriticalSection.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1800682E0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpEnterCriticalSectionContended @ 0x180068AF0 (RtlpEnterCriticalSectionContended.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpStdLockRelease @ 0x18006AD2C (RtlpStdLockRelease.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x18006D630 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x18006D9A8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18006E0B8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18006E788 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18006EC08 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x18006F7E8 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18006FE30 (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180070444 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180071028 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegSuballocatorFree @ 0x180071530 (RtlpHpSegSuballocatorFree.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1800715F0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180071824 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextLockUnlock @ 0x180071A28 (RtlpHpVsContextLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x180071AE4 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180071B68 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180071C28 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x18007225C (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpFlsAlloc @ 0x180072548 (RtlpFlsAlloc.c)
 *     RtlFlsSetValue @ 0x1800727C0 (RtlFlsSetValue.c)
 *     RtlpFlsSetValue @ 0x180072950 (RtlpFlsSetValue.c)
 *     RtlpFlsFree @ 0x180073484 (RtlpFlsFree.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800736A0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     LdrpQueueDeferredTlsData @ 0x180076BB4 (LdrpQueueDeferredTlsData.c)
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x180078C94 (RtlInsertInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800796A0 (RtlDeleteGrowableFunctionTable.c)
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindExistingModule @ 0x18007C62C (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18007CFA0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpFlsDataCleanup @ 0x18007F010 (RtlpFlsDataCleanup.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180082330 (RtlpHpVsContextGrowInPlace.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800845B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     TpSetPoolThreadCpuSets @ 0x1800855C0 (TpSetPoolThreadCpuSets.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     TpSetDefaultPoolStackInformation @ 0x180086070 (TpSetDefaultPoolStackInformation.c)
 *     TppDirectExecuteCallback @ 0x1800862F0 (TppDirectExecuteCallback.c)
 *     TppGetCurrentThreadNumaNode @ 0x180086D00 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x180086EE0 (TpPostTask.c)
 *     RtlCreateTimer @ 0x180087900 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x180087DF0 (TpTimerOutstandingCallbackCount.c)
 *     TpWaitForTimer @ 0x180088570 (TpWaitForTimer.c)
 *     TppTimerQueueExpiration @ 0x180088790 (TppTimerQueueExpiration.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     TppSingleTimerExpiration @ 0x180089240 (TppSingleTimerExpiration.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     TppSetTimer @ 0x180089890 (TppSetTimer.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18008ADB0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 *     EtwpInsertRegistration @ 0x18008D400 (EtwpInsertRegistration.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 *     ProviderHandleRemove @ 0x18008D6C0 (ProviderHandleRemove.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18008D798 (EtwpRemoveRegistrationFromTable.c)
 *     EtwpDereferenceUmGuidEntry @ 0x18008D818 (EtwpDereferenceUmGuidEntry.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18008E764 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x18008E8D0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18008EBB4 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpFcInsertChangeRegistration @ 0x18008EFB4 (RtlpFcInsertChangeRegistration.c)
 *     RtlpCreateSerializationGroup @ 0x18008F730 (RtlpCreateSerializationGroup.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x1800902B4 (RtlpRemoveUserSubFromNameSub.c)
 *     TpReleaseWait @ 0x180090840 (TpReleaseWait.c)
 *     RtlpWalkLFHBlock @ 0x1800940A0 (RtlpWalkLFHBlock.c)
 *     RtlpIsLFHZoneAllocation @ 0x1800949A0 (RtlpIsLFHZoneAllocation.c)
 *     LdrpComputeLazyDllPath @ 0x180098B3C (LdrpComputeLazyDllPath.c)
 *     LdrAddDllDirectory @ 0x180099440 (LdrAddDllDirectory.c)
 *     LdrpGetDllPath @ 0x18009A710 (LdrpGetDllPath.c)
 *     RtlpGetCachedPath @ 0x18009AF00 (RtlpGetCachedPath.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A0CF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpGetNormalization @ 0x1800AD560 (RtlpGetNormalization.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlSetIoCompletionCallback @ 0x1800B4830 (RtlSetIoCompletionCallback.c)
 *     RtlpTpIoLookup @ 0x1800B4A00 (RtlpTpIoLookup.c)
 *     RtlpTpIoDllLoaded @ 0x1800B4B68 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoDllUnloaded @ 0x1800B5714 (RtlpTpIoDllUnloaded.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     RtlpTpWaitCheckReset @ 0x1800BE0F0 (RtlpTpWaitCheckReset.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800C0300 (AlpcGetMessageFromCompletionList.c)
 *     LdrpReleaseTlsEntry @ 0x1800C1840 (LdrpReleaseTlsEntry.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800C3A94 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpPinModule @ 0x1800C3C6C (LdrpPinModule.c)
 *     TppJobpRundownJob @ 0x1800C7350 (TppJobpRundownJob.c)
 *     TpReleasePool @ 0x1800C8D80 (TpReleasePool.c)
 *     TppQueueRemoveHead @ 0x1800C9060 (TppQueueRemoveHead.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CA290 (RtlInstallFunctionTableCallback.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpCleanupThreadTlsData @ 0x1800D4320 (LdrpCleanupThreadTlsData.c)
 *     TpStartAsyncIoOperation @ 0x1800D60E0 (TpStartAsyncIoOperation.c)
 *     RtlDeleteFunctionTable @ 0x1800D7FF0 (RtlDeleteFunctionTable.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800D868C (RtlRemoveInvertedFunctionTable.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D8C3C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x1800D9AD0 (RtlpLowFragHeapAllocateFromZone.c)
 *     TpWaitOutstandingCallbackCount @ 0x1800D9C9C (TpWaitOutstandingCallbackCount.c)
 *     RtlReleasePath @ 0x1800DDC40 (RtlReleasePath.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDDA0 (LdrUpdatePackageSearchPath.c)
 *     LdrpResetAppPackagesPath @ 0x1800DDE9C (LdrpResetAppPackagesPath.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x1800DEE40 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x1800DEEA0 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800DEF3C (RtlpUnregisterLockedMemoryZone.c)
 *     RtlLockMemoryBlockLookaside @ 0x1800DEF80 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x1800DF000 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryZone @ 0x1800DF120 (RtlpRegisterLockedMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800DF194 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800DF1F0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockModuleSection @ 0x1800DF290 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800DF340 (RtlLockModuleSection.c)
 *     RtlpRemoveVectoredHandler @ 0x1800DFA80 (RtlpRemoveVectoredHandler.c)
 *     RtlpHpVsSlotFreeList @ 0x1800E0364 (RtlpHpVsSlotFreeList.c)
 *     TppPoolAddWorker @ 0x1800E15C8 (TppPoolAddWorker.c)
 *     RtlAddFunctionTable @ 0x1800E3560 (RtlAddFunctionTable.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800E387C (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlSetSearchPathMode @ 0x1800E40E0 (RtlSetSearchPathMode.c)
 *     TppPoolRemoveWorker @ 0x1800E44F8 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800E5AEC (TppPoolUpdateTrimmedWorker.c)
 *     RtlpHpHeapExtendContext @ 0x1800E6C10 (RtlpHpHeapExtendContext.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800E6D70 (RtlAcquireReleaseSRWLockExclusive.c)
 *     TpTrimPools @ 0x1800E78E0 (TpTrimPools.c)
 *     EtwpDisableTraceProviders @ 0x1800E7DEC (EtwpDisableTraceProviders.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800E9210 (TpReleaseCleanupGroupMembers.c)
 *     RtlExtendMemoryZone @ 0x1800EB550 (RtlExtendMemoryZone.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800EB658 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlGrowFunctionTable @ 0x1800EC760 (RtlGrowFunctionTable.c)
 *     RtlpFcRemoveChangeRegistration @ 0x1800EC9A0 (RtlpFcRemoveChangeRegistration.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F7C28 (LdrpAllocateSchedulerSharedData.c)
 *     RtlUpdateTimer @ 0x1800F7F10 (RtlUpdateTimer.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8030 (RtlpHpVsSlotCompactChunks.c)
 *     RtlSetProtectedPolicy @ 0x1800F8890 (RtlSetProtectedPolicy.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 *     LdrpInsertModuleToIndex @ 0x1800FB744 (LdrpInsertModuleToIndex.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FB938 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHpStackTraceHeapEnable @ 0x1800FC200 (RtlpHpStackTraceHeapEnable.c)
 *     RtlpFcChangeRegistrationCallback @ 0x1800FECB0 (RtlpFcChangeRegistrationCallback.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FF554 (RtlpStackDbSegmentFindOrCreate.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180100FC8 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     EtwpInsertGuidEntry @ 0x18010235C (EtwpInsertGuidEntry.c)
 *     RtlpHeapTrkDumpStacks @ 0x180107EB4 (RtlpHeapTrkDumpStacks.c)
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 *     LdrFlushAlternateResourceModules @ 0x1801082A0 (LdrFlushAlternateResourceModules.c)
 *     TpDisablePoolCallbackChecks @ 0x180109440 (TpDisablePoolCallbackChecks.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x18010B444 (RtlpHpLfhPrivateSlotCreate.c)
 *     LdrRemoveDllDirectory @ 0x18010CE40 (LdrRemoveDllDirectory.c)
 *     TppStopWaitCallbackGeneration @ 0x18010CF40 (TppStopWaitCallbackGeneration.c)
 *     EtwpRemoveGuidEntryFromTable @ 0x18010D2F0 (EtwpRemoveGuidEntryFromTable.c)
 *     RtlpWnfRetryTimerCallback @ 0x180111120 (RtlpWnfRetryTimerCallback.c)
 *     RtlDestroyAtomTable @ 0x180112120 (RtlDestroyAtomTable.c)
 *     RtlDestroyMemoryZone @ 0x180112690 (RtlDestroyMemoryZone.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801156A4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlQueryAtomInAtomTable @ 0x180117380 (RtlQueryAtomInAtomTable.c)
 *     EtwpTrackProviderBinary @ 0x180117C5C (EtwpTrackProviderBinary.c)
 *     LdrpCondenseGraphRecurse @ 0x180118FA0 (LdrpCondenseGraphRecurse.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 *     RtlpSignalSystemDirsModification @ 0x18011E37C (RtlpSignalSystemDirsModification.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E7A0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 *     RtlStackDbStackAdd @ 0x18011FA2C (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180120B5C (RtlStackDbStackRemove.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     TpSetDefaultPoolCpuSets @ 0x1801217C0 (TpSetDefaultPoolCpuSets.c)
 *     RtlpHpStackTraceEnable @ 0x180122A60 (RtlpHpStackTraceEnable.c)
 *     LdrForkMrdata @ 0x180137E8C (LdrForkMrdata.c)
 *     RtlPinAtomInAtomTable @ 0x18013F1F0 (RtlPinAtomInAtomTable.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180140340 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlResetMemoryBlockLookaside @ 0x1801403A0 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x180140400 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x180141710 (RtlDeleteBarrier.c)
 *     RtlpUnlockHeapForClone @ 0x1801454FC (RtlpUnlockHeapForClone.c)
 *     RtlCompareExchangePointerMapping @ 0x1801457C0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x180145910 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x180145C90 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x180145D70 (RtlRemovePropertyStore.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x180146B50 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180146C10 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180147870 (RtlGetFeatureToggleConfiguration.c)
 *     __ft_record_impression @ 0x180147FFC (__ft_record_impression.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148CE0 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlRcuAllocate @ 0x1801496A0 (RtlRcuAllocate.c)
 *     RtlRcuFree @ 0x180149770 (RtlRcuFree.c)
 *     RtlpFlsCloneComplete @ 0x18014F120 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014F1B8 (RtlpFlsClonePrepare.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014F6F8 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceDisable @ 0x18014F848 (RtlpHpStackTraceDisable.c)
 *     UcOnUnexpectedCodePath @ 0x180157700 (UcOnUnexpectedCodePath.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157E60 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1801582E4 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158450 (RtlpHpSegMgrVaCtxInsert.c)
 *     TppDirectUnposted @ 0x1801590C0 (TppDirectUnposted.c)
 *     RtlStackDbContextSerialize @ 0x18015AD70 (RtlStackDbContextSerialize.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x18015B3A8 (RtlpStackDbSegmentRemoveRef.c)
 *     LdrQueryModuleServiceTags @ 0x18015B9F0 (LdrQueryModuleServiceTags.c)
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CC5C (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

void __cdecl RtlReleaseSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v2; // rax
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdi
  char *v6; // rbx
  __int64 v7; // rcx
  signed __int64 v8; // rdx
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt
  PRTL_SRWLOCK v11; // rsi
  _QWORD *v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  signed __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rcx
  signed __int64 v20; // rax
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
  if ( v2 != 1 )
  {
    do
    {
      v7 = 3LL;
      v8 = v2 & 6;
      if ( v8 != 2 )
        v7 = -1LL;
      v9 = v2 + v7;
      v10 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v9, v2);
    }
    while ( v10 != v2 );
    if ( v8 == 2 )
    {
      v11 = SRWLock;
      while ( 1 )
      {
        while ( (v9 & 1) != 0 )
        {
          v20 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v9 - 4, v9);
          v16 = v9 == v20;
          v9 = v20;
          if ( v16 )
            goto LABEL_2;
        }
        v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL);
        v13 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v13 )
        {
          do
          {
            v14 = v12;
            v12 = (_QWORD *)*v12;
            v12[2] = v14;
            v13 = v12[1];
          }
          while ( !v13 );
          if ( v12 != (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v13;
        }
        if ( (*(_DWORD *)(v13 + 36) & 1) != 0 )
        {
          v15 = *(_QWORD *)(v13 + 16);
          if ( v15 )
            break;
        }
        v11 = 0LL;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, v9);
        v16 = v9 == v17;
        v9 = v17;
        if ( v16 )
          goto LABEL_27;
      }
      *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v15;
      *(_QWORD *)(v13 + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)SRWLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_27:
        v18 = *(_QWORD *)(v13 + 16);
        v19 = *(_QWORD *)(v13 + 24);
        _interlockedbittestandset((volatile signed __int32 *)(v13 + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(v13 + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v19, v11, v12);
        v13 = v18;
      }
      while ( v18 );
    }
  }
LABEL_2:
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v4 = 0;
    v5 = (unsigned __int64)SRWLock & 0x7FFFFFFFFFFFFFFCLL;
    while ( v4 < 8 )
    {
      v6 = &SchedulerSharedDataSlot[8 * v4];
      if ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) == v5 )
      {
        if ( v6 )
        {
          *v6 |= 2u;
          if ( v6[7] < 0 )
          {
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (v6 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
          }
          *(_QWORD *)v6 = 0LL;
        }
        return;
      }
      ++v4;
    }
  }
}
