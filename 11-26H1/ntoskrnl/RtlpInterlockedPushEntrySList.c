/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1407358A0
 * Callers:
 *     MiStoreFreeWriteSupport @ 0x14020A1E8 (MiStoreFreeWriteSupport.c)
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14020C9A0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CC1C (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020D410 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402107C8 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140260DB8 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpTraceLastBranchRecord @ 0x140263280 (EtwpTraceLastBranchRecord.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     IopFreeIrp @ 0x140267B00 (IopFreeIrp.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiPruneCachedStackList @ 0x1402918B8 (MiPruneCachedStackList.c)
 *     MiRepurposeDecayNode @ 0x1402ACAE0 (MiRepurposeDecayNode.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     FsRtlFastUnlockSingle @ 0x140308CE0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14030A210 (FsRtlFastUnlockSingleShared.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14030A994 (EtwpCovSampCaptureBufferQueue.c)
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14030B510 (FsRtlPrivateInsertLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14030C590 (FsRtlFastUnlockSingleExclusive.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInPageBlock @ 0x14031E654 (MiInsertInPageBlock.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x14032ECD0 (EtwpDereferenceStackEntry.c)
 *     RtlpHpVsContextFree @ 0x140354D90 (RtlpHpVsContextFree.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140378250 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x14039DE34 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcDeleteMbcb @ 0x14039DF64 (CcDeleteMbcb.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1403BFF10 (FsRtlUninitializeBaseMcb.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403C1660 (VfPoolDelayFreeIfPossible.c)
 *     MiQueuePageAccessLog @ 0x1403C4198 (MiQueuePageAccessLog.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D41A0 (MiCreateKernelStackFromNodeCache.c)
 *     KeFreeXStateContext @ 0x1403D6324 (KeFreeXStateContext.c)
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     EtwpApcPoolThunk @ 0x14043FEF0 (EtwpApcPoolThunk.c)
 *     EtwpCancelPendingApcs @ 0x140460E00 (EtwpCancelPendingApcs.c)
 *     EtwpFinalizePendingApc @ 0x140460F50 (EtwpFinalizePendingApc.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140461760 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140470B28 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14047397C (EtwpReleaseStackLookasideListEntry.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140478F60 (LZNT1DecompressChunkWorkItem.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140482930 (EtwpCovSampCaptureQueueBuffer.c)
 *     PfFbLogEntryReserve @ 0x1404850D8 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1404851D0 (PfFbLogEntryComplete.c)
 *     HalpDmaReleaseBufferMappings @ 0x140488F0C (HalpDmaReleaseBufferMappings.c)
 *     MiDecayPfnFullyInitialized @ 0x140491EA8 (MiDecayPfnFullyInitialized.c)
 *     PfTFullEventListAdd @ 0x1404A59AC (PfTFullEventListAdd.c)
 *     PfFbBufferListInsertInFree @ 0x1404A5B6C (PfFbBufferListInsertInFree.c)
 *     MiDeleteCloneDescriptor @ 0x1404A92D8 (MiDeleteCloneDescriptor.c)
 *     KeAllocateInterrupt @ 0x1404BBFDC (KeAllocateInterrupt.c)
 *     KeFreeInterrupt @ 0x1404CE3A4 (KeFreeInterrupt.c)
 *     PfpReturnAccessBuffer @ 0x1404D2BC0 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1404D6260 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiFreeUltraMdlContext @ 0x1404DAC8C (MiFreeUltraMdlContext.c)
 *     MiRemovePteTracker @ 0x1404E696C (MiRemovePteTracker.c)
 *     EtwpGetCrimsonStackKey @ 0x1404FF248 (EtwpGetCrimsonStackKey.c)
 *     MiReplenishTransitionPageHeatList @ 0x14050BF40 (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x14050CEC0 (MiFreeTransitionPageHeatList.c)
 *     ExpTrackRaiseLimitNotification @ 0x140534998 (ExpTrackRaiseLimitNotification.c)
 *     PfFbBufferListAllocate @ 0x140602E6C (PfFbBufferListAllocate.c)
 *     IovAiDbNodeFree @ 0x140645B90 (IovAiDbNodeFree.c)
 *     IovExpandAiDbRawEntries @ 0x140646050 (IovExpandAiDbRawEntries.c)
 *     ViGrowPoolAllocation @ 0x140648F70 (ViGrowPoolAllocation.c)
 *     DifAllocSegments @ 0x140650A10 (DifAllocSegments.c)
 *     DifPushSegment @ 0x140650CFC (DifPushSegment.c)
 *     EtwpStackInitializeProcessor @ 0x1406CA748 (EtwpStackInitializeProcessor.c)
 *     EtwpCovSampLookasideGrow @ 0x1406CCACC (EtwpCovSampLookasideGrow.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1407040A4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140704108 (MiRemoveNonIdealCachedStacks.c)
 *     MiZeroPageCalibrateDpc @ 0x140716060 (MiZeroPageCalibrateDpc.c)
 *     ObpPushRefDerefInfoNoLock @ 0x1407732BC (ObpPushRefDerefInfoNoLock.c)
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 *     ObpProcessPushStackInfoList @ 0x1407C7FB8 (ObpProcessPushStackInfoList.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmpCleanupPathInfo @ 0x1408D4B60 (CmpCleanupPathInfo.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F7DB0 (ObpFreeObjectNameBuffer.c)
 *     ObpFreeObject @ 0x1408FF7D0 (ObpFreeObject.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14091ABD0 (IoCreateStreamFileObjectEx2.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x14093D2D0 (ObDeleteCapturedInsertInfo.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 *     IopFreeMiniCompletionPacket @ 0x140A82540 (IopFreeMiniCompletionPacket.c)
 *     EtwpPreallocateApcPool @ 0x140AB3AF8 (EtwpPreallocateApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x140AB3B84 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x140AC00AC (EtwpEnableStackCaching.c)
 *     WdipSemFastFree @ 0x140AD7F00 (WdipSemFastFree.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140B4132C (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140C08E20 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopInvokeSystemStateHandler @ 0x140C0A314 (PopInvokeSystemStateHandler.c)
 *     IovExpandIrpStackTracker @ 0x140C3098C (IovExpandIrpStackTracker.c)
 *     IovExpandIrpTracker @ 0x140C309F4 (IovExpandIrpTracker.c)
 *     VfAfterCallDriver @ 0x140C320AC (VfAfterCallDriver.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140C4C9BC (ViFreeTrackedPool.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB6464 (HalpDmaAllocateReservedMappingArray.c)
 *     WheapInitializeEventing @ 0x140CEE860 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140D07C7C (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  signed __int64 v7; // rbx
  _SLIST_HEADER v8; // rt0
  unsigned __int8 v9; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5.Alignment + 0x20000;
    LOWORD(v7) = LOWORD(v5.Alignment) + 1;
    v8 = v5;
    v9 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v7,
           (signed __int64 *)&v8);
    v5 = v8;
  }
  while ( !v9 );
  return Region;
}
