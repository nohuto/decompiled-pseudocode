/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140735860
 * Callers:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     EtwpTraceLastBranchRecord @ 0x140263280 (EtwpTraceLastBranchRecord.c)
 *     IopAllocateIrpPrivate @ 0x14026BBF4 (IopAllocateIrpPrivate.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402800C0 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiGetBestPageFromNode @ 0x140287CB0 (MiGetBestPageFromNode.c)
 *     MiRemovePageAnyColor @ 0x140289560 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x14028A870 (MiGetPageSlist.c)
 *     MiPruneCachedStackList @ 0x1402918B8 (MiPruneCachedStackList.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402A5D98 (MiReclaimUnusedUltraMdlMaps.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1402F3EAC (HvlGetSparseGpaPagesAccessState.c)
 *     EtwpCovSampSampleBufferGet @ 0x14030ABE0 (EtwpCovSampSampleBufferGet.c)
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14030B510 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14030B6D0 (FsRtlPrivateInsertSharedLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     EtwpCovSampLookasidePop @ 0x14030CB08 (EtwpCovSampLookasidePop.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14030FF4C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140378250 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x140389900 (CcAllocateWorkQueueEntry.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140390CC0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     MiStoreGetWriteSupport @ 0x140399F8C (MiStoreGetWriteSupport.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     CcAllocateBitmap @ 0x14039FDB0 (CcAllocateBitmap.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D41A0 (MiCreateKernelStackFromNodeCache.c)
 *     KiSaveExtendedAndSupervisorState @ 0x1403D7100 (KiSaveExtendedAndSupervisorState.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     IoMakeAssociatedIrpPriv @ 0x1404578A8 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x14045A320 (MiCreateDecayPfn.c)
 *     EtwpGetStackLookasideListEntry @ 0x140467D30 (EtwpGetStackLookasideListEntry.c)
 *     KeAllocateXStateContext @ 0x140468760 (KeAllocateXStateContext.c)
 *     FsRtlInitializeBaseMcbEx @ 0x140475E10 (FsRtlInitializeBaseMcbEx.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x1404823D4 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x14048259C (EtwpAdjustLastBranchLookasideBuffers.c)
 *     PfFbLogEntryReserve @ 0x1404850D8 (PfFbLogEntryReserve.c)
 *     HvlMapSparseGpaPages @ 0x140488880 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x140489414 (HvlMapGpaPages.c)
 *     PfTFullEventListAdd @ 0x1404A59AC (PfTFullEventListAdd.c)
 *     KeAllocateInterrupt @ 0x1404BBFDC (KeAllocateInterrupt.c)
 *     MiGetUltraMdlContext @ 0x1404DACD8 (MiGetUltraMdlContext.c)
 *     ObpDeferPushRefDerefInfo @ 0x1404EDF50 (ObpDeferPushRefDerefInfo.c)
 *     MiInsertPteTracker @ 0x1404FCC9C (MiInsertPteTracker.c)
 *     EtwpGetCrimsonStackKey @ 0x1404FF248 (EtwpGetCrimsonStackKey.c)
 *     RtlpStdGetSpaceForTrace @ 0x14061C068 (RtlpStdGetSpaceForTrace.c)
 *     IovAiDbNodeAlloc @ 0x140645B00 (IovAiDbNodeAlloc.c)
 *     IovCleanupAiDb @ 0x140645F6C (IovCleanupAiDb.c)
 *     ViGrowPoolAllocation @ 0x140648F70 (ViGrowPoolAllocation.c)
 *     DifFreeChunks @ 0x140650B2C (DifFreeChunks.c)
 *     DifPopSegment @ 0x140650C14 (DifPopSegment.c)
 *     EtwpStackDeleteProcessor @ 0x1406CA700 (EtwpStackDeleteProcessor.c)
 *     MiGetTransitionPageHeatList @ 0x140709A44 (MiGetTransitionPageHeatList.c)
 *     MiLaunchZeroCalibrationProcessor @ 0x1407156E0 (MiLaunchZeroCalibrationProcessor.c)
 *     MiZeroPageCalibrate @ 0x140715C7C (MiZeroPageCalibrate.c)
 *     PspQueryThreadIndexInformation @ 0x14077C7D0 (PspQueryThreadIndexInformation.c)
 *     PfFbBufferListCleanup @ 0x1407CB28C (PfFbBufferListCleanup.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmpComputeComponentHashes @ 0x1408D4670 (CmpComputeComponentHashes.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     ObpCaptureObjectName @ 0x1408F8C70 (ObpCaptureObjectName.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     RtlpGetRegistryHandle @ 0x140A10B38 (RtlpGetRegistryHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x140A893B0 (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x140AD7DB0 (WdipSemFastAllocate.c)
 *     IovFreeIrpStackTracker @ 0x140C30A5C (IovFreeIrpStackTracker.c)
 *     IovFreeIrpTracker @ 0x140C30AA4 (IovFreeIrpTracker.c)
 *     VfBeforeCallDriver @ 0x140C322E8 (VfBeforeCallDriver.c)
 *     VfPoolCheckForLeaks @ 0x140C3E56C (VfPoolCheckForLeaks.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  signed __int32 v6; // [rsp+10h] [rbp+8h] BYREF

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr(&v6, 0);
  return v1;
}
