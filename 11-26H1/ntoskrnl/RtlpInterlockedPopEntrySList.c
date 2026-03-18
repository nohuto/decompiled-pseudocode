/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140730C90
 * Callers:
 *     EtwpQueueApc @ 0x14020AA10 (EtwpQueueApc.c)
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024B6A0 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     EtwpTraceLastBranchRecord @ 0x140263D10 (EtwpTraceLastBranchRecord.c)
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140280B50 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiGetBestPageFromNode @ 0x140288750 (MiGetBestPageFromNode.c)
 *     MiRemovePageAnyColor @ 0x14028A000 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x14028B310 (MiGetPageSlist.c)
 *     MiPruneCachedStackList @ 0x140292358 (MiPruneCachedStackList.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402A697C (MiReclaimUnusedUltraMdlMaps.c)
 *     EtwpCovSampSampleBufferGet @ 0x1402BFF1C (EtwpCovSampSampleBufferGet.c)
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402C0850 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C0A10 (FsRtlPrivateInsertSharedLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     EtwpCovSampLookasidePop @ 0x1402C1E48 (EtwpCovSampLookasidePop.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402C528C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     EtwpTraceStackKey @ 0x14032C740 (EtwpTraceStackKey.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035C1E8 (HalpDmaAcquireBufferMappings.c)
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x1403764A0 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     PfLogEvent @ 0x1403829A0 (PfLogEvent.c)
 *     CcWriteBehind @ 0x14038338C (CcWriteBehind.c)
 *     CcAllocateWorkQueueEntry @ 0x140387B50 (CcAllocateWorkQueueEntry.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14038EF10 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiGetInPageSupportBlock @ 0x140396FF0 (MiGetInPageSupportBlock.c)
 *     MiStoreGetWriteSupport @ 0x14039822C (MiStoreGetWriteSupport.c)
 *     ExAllocateHeapPool @ 0x1403987D0 (ExAllocateHeapPool.c)
 *     CcAllocateBitmap @ 0x14039E050 (CcAllocateBitmap.c)
 *     IopAllocateMdl @ 0x14039EBE0 (IopAllocateMdl.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D11D4 (MiCreateKernelStackFromNodeCache.c)
 *     KiSaveExtendedAndSupervisorState @ 0x1403D4130 (KiSaveExtendedAndSupervisorState.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E1EE0 (ExAllocateFromLookasideListEx.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1403E6FCC (HvlGetSparseGpaPagesAccessState.c)
 *     IoAllocateMdl @ 0x14040BA40 (IoAllocateMdl.c)
 *     MmDeleteKernelStack @ 0x1404162AC (MmDeleteKernelStack.c)
 *     IoMakeAssociatedIrpPriv @ 0x14045DD08 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x140461360 (MiCreateDecayPfn.c)
 *     EtwpGetStackLookasideListEntry @ 0x14046E5B0 (EtwpGetStackLookasideListEntry.c)
 *     KeAllocateXStateContext @ 0x14046EFE0 (KeAllocateXStateContext.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14047C4A0 (FsRtlInitializeBaseMcbEx.c)
 *     EtwpAdjustStackLookasideBuffers @ 0x140488894 (EtwpAdjustStackLookasideBuffers.c)
 *     EtwpAdjustLastBranchLookasideBuffers @ 0x140488A5C (EtwpAdjustLastBranchLookasideBuffers.c)
 *     PfFbLogEntryReserve @ 0x14048B598 (PfFbLogEntryReserve.c)
 *     HvlMapSparseGpaPages @ 0x14048ED40 (HvlMapSparseGpaPages.c)
 *     HvlMapGpaPages @ 0x14048FA54 (HvlMapGpaPages.c)
 *     PfTFullEventListAdd @ 0x1404AC31C (PfTFullEventListAdd.c)
 *     KeAllocateInterrupt @ 0x1404C278C (KeAllocateInterrupt.c)
 *     MiGetUltraMdlContext @ 0x1404E15F8 (MiGetUltraMdlContext.c)
 *     ObpDeferPushRefDerefInfo @ 0x1404F4970 (ObpDeferPushRefDerefInfo.c)
 *     MiInsertPteTracker @ 0x1405033CC (MiInsertPteTracker.c)
 *     EtwpGetCrimsonStackKey @ 0x140505998 (EtwpGetCrimsonStackKey.c)
 *     RtlpStdGetSpaceForTrace @ 0x140619018 (RtlpStdGetSpaceForTrace.c)
 *     IovAiDbNodeAlloc @ 0x140641F20 (IovAiDbNodeAlloc.c)
 *     IovCleanupAiDb @ 0x14064238C (IovCleanupAiDb.c)
 *     ViGrowPoolAllocation @ 0x140645390 (ViGrowPoolAllocation.c)
 *     DifFreeChunks @ 0x14064CF4C (DifFreeChunks.c)
 *     DifPopSegment @ 0x14064D034 (DifPopSegment.c)
 *     EtwpStackDeleteProcessor @ 0x1406C6A00 (EtwpStackDeleteProcessor.c)
 *     MiGetTransitionPageHeatList @ 0x140704D74 (MiGetTransitionPageHeatList.c)
 *     MiLaunchZeroCalibrationProcessor @ 0x1407109E4 (MiLaunchZeroCalibrationProcessor.c)
 *     MiZeroPageCalibrate @ 0x140710F80 (MiZeroPageCalibrate.c)
 *     PspQueryThreadIndexInformation @ 0x1407798A0 (PspQueryThreadIndexInformation.c)
 *     PfFbBufferListCleanup @ 0x1407C822C (PfFbBufferListCleanup.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpComputeComponentHashes @ 0x1408CE0C0 (CmpComputeComponentHashes.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     ObpCaptureObjectName @ 0x1408F26B0 (ObpCaptureObjectName.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObCreateObject @ 0x140932FB0 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x140A8405C (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x140ADB300 (WdipSemFastAllocate.c)
 *     IovFreeIrpStackTracker @ 0x140C2AA4C (IovFreeIrpStackTracker.c)
 *     IovFreeIrpTracker @ 0x140C2AA94 (IovFreeIrpTracker.c)
 *     VfBeforeCallDriver @ 0x140C2C2D8 (VfBeforeCallDriver.c)
 *     VfPoolCheckForLeaks @ 0x140C3855C (VfPoolCheckForLeaks.c)
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  struct _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
  signed __int32 v6; // [rsp+10h] [rbp+8h] BYREF

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (struct _SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
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
