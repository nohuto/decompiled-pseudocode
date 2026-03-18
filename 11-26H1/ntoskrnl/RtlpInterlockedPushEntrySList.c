/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140730CD0
 * Callers:
 *     MiStoreFreeWriteSupport @ 0x14020A108 (MiStoreFreeWriteSupport.c)
 *     EtwpQueueApc @ 0x14020AA10 (EtwpQueueApc.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BDCC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14020C8C0 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020CB3C (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020D330 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402106E8 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140261848 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpTraceLastBranchRecord @ 0x140263D10 (EtwpTraceLastBranchRecord.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140264300 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     IopFreeIrp @ 0x140268590 (IopFreeIrp.c)
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027AAF0 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     MiPruneCachedStackList @ 0x140292358 (MiPruneCachedStackList.c)
 *     FsRtlFastUnlockSingle @ 0x1402BE020 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402BF550 (FsRtlFastUnlockSingleShared.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402C0850 (FsRtlPrivateInsertLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402C18D0 (FsRtlFastUnlockSingleExclusive.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402C2B40 (ExpWorkerFactoryCheckCreate.c)
 *     MiRepurposeDecayNode @ 0x1402CAD20 (MiRepurposeDecayNode.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MiInsertInPageBlock @ 0x14031C624 (MiInsertInPageBlock.c)
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     EtwpTraceStackKey @ 0x14032C740 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x14032CCA0 (EtwpDereferenceStackEntry.c)
 *     RtlpHpVsContextFree @ 0x140352D10 (RtlpHpVsContextFree.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffers @ 0x14035BE40 (HalpDmaSyncMapBuffers.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x1403764A0 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     PfLogEvent @ 0x1403829A0 (PfLogEvent.c)
 *     CcFreeWorkQueueEntry @ 0x14038364C (CcFreeWorkQueueEntry.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x14039C0D4 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcDeleteMbcb @ 0x14039C204 (CcDeleteMbcb.c)
 *     CcSetDirtyInMask @ 0x14039D5F0 (CcSetDirtyInMask.c)
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1403B6010 (FsRtlUninitializeBaseMcb.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403B7760 (VfPoolDelayFreeIfPossible.c)
 *     MiQueuePageAccessLog @ 0x1403BA328 (MiQueuePageAccessLog.c)
 *     MiDereferencePageRuns @ 0x1403C9634 (MiDereferencePageRuns.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D11D4 (MiCreateKernelStackFromNodeCache.c)
 *     KeFreeXStateContext @ 0x1403D3354 (KeFreeXStateContext.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x140443A24 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     EtwpApcPoolThunk @ 0x140447400 (EtwpApcPoolThunk.c)
 *     EtwpCancelPendingApcs @ 0x1404676B0 (EtwpCancelPendingApcs.c)
 *     EtwpFinalizePendingApc @ 0x140467800 (EtwpFinalizePendingApc.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140468120 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x1404773A8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14047A00C (EtwpReleaseStackLookasideListEntry.c)
 *     LZNT1DecompressChunkWorkItem @ 0x14047F5F0 (LZNT1DecompressChunkWorkItem.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140488DF0 (EtwpCovSampCaptureQueueBuffer.c)
 *     PfFbLogEntryReserve @ 0x14048B598 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14048B690 (PfFbLogEntryComplete.c)
 *     HalpDmaReleaseBufferMappings @ 0x14048F54C (HalpDmaReleaseBufferMappings.c)
 *     MiDecayPfnFullyInitialized @ 0x140498358 (MiDecayPfnFullyInitialized.c)
 *     PfTFullEventListAdd @ 0x1404AC31C (PfTFullEventListAdd.c)
 *     PfFbBufferListInsertInFree @ 0x1404AC4DC (PfFbBufferListInsertInFree.c)
 *     MiDeleteCloneDescriptor @ 0x1404AFC48 (MiDeleteCloneDescriptor.c)
 *     KeAllocateInterrupt @ 0x1404C278C (KeAllocateInterrupt.c)
 *     KeFreeInterrupt @ 0x1404D4B34 (KeFreeInterrupt.c)
 *     PfpReturnAccessBuffer @ 0x1404D94E0 (PfpReturnAccessBuffer.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1404DCB80 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiFreeUltraMdlContext @ 0x1404E15AC (MiFreeUltraMdlContext.c)
 *     MiRemovePteTracker @ 0x1404ED38C (MiRemovePteTracker.c)
 *     EtwpGetCrimsonStackKey @ 0x140505998 (EtwpGetCrimsonStackKey.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405124D0 (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x140513450 (MiFreeTransitionPageHeatList.c)
 *     ExpTrackRaiseLimitNotification @ 0x1405324F8 (ExpTrackRaiseLimitNotification.c)
 *     PfFbBufferListAllocate @ 0x1406003BC (PfFbBufferListAllocate.c)
 *     IovAiDbNodeFree @ 0x140641FB0 (IovAiDbNodeFree.c)
 *     IovExpandAiDbRawEntries @ 0x140642470 (IovExpandAiDbRawEntries.c)
 *     ViGrowPoolAllocation @ 0x140645390 (ViGrowPoolAllocation.c)
 *     DifAllocSegments @ 0x14064CE30 (DifAllocSegments.c)
 *     DifPushSegment @ 0x14064D11C (DifPushSegment.c)
 *     EtwpStackInitializeProcessor @ 0x1406C6A48 (EtwpStackInitializeProcessor.c)
 *     EtwpCovSampLookasideGrow @ 0x1406C8AEC (EtwpCovSampLookasideGrow.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1406FF3D4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406FF438 (MiRemoveNonIdealCachedStacks.c)
 *     MiZeroPageCalibrateDpc @ 0x140711360 (MiZeroPageCalibrateDpc.c)
 *     ObpPushRefDerefInfoNoLock @ 0x1407702BC (ObpPushRefDerefInfoNoLock.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 *     ObpProcessPushStackInfoList @ 0x1407C4F58 (ObpProcessPushStackInfoList.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpCleanupPathInfo @ 0x1408CE5B0 (CmpCleanupPathInfo.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F17F0 (ObpFreeObjectNameBuffer.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObpFreeObject @ 0x140923CC0 (ObpFreeObject.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ObCreateObject @ 0x140932FB0 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     ObDeleteCapturedInsertInfo @ 0x14097B2C0 (ObDeleteCapturedInsertInfo.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 *     IopFreeMiniCompletionPacket @ 0x140A7A600 (IopFreeMiniCompletionPacket.c)
 *     EtwpEnableStackCaching @ 0x140ABDABC (EtwpEnableStackCaching.c)
 *     WdipSemFastFree @ 0x140ADB450 (WdipSemFastFree.c)
 *     EtwpPreallocateApcPool @ 0x140AFAC58 (EtwpPreallocateApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x140AFACE4 (EtwpReferenceStackLookasideList.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140B3F2FC (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140C02C10 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopInvokeSystemStateHandler @ 0x140C04104 (PopInvokeSystemStateHandler.c)
 *     IovExpandIrpStackTracker @ 0x140C2A97C (IovExpandIrpStackTracker.c)
 *     IovExpandIrpTracker @ 0x140C2A9E4 (IovExpandIrpTracker.c)
 *     VfAfterCallDriver @ 0x140C2C09C (VfAfterCallDriver.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140C469AC (ViFreeTrackedPool.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140CB0424 (HalpDmaAllocateReservedMappingArray.c)
 *     WheapInitializeEventing @ 0x140CE84C0 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140D018DC (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  union _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  signed __int64 v7; // rbx
  union _SLIST_HEADER v8; // rt0
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
