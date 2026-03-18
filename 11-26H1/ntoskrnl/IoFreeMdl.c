/*
 * XREFs of IoFreeMdl @ 0x14039F190
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026B1B0 (IopBuildDeviceIoControlRequest.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     HalPutScatterGatherListV2 @ 0x14035B580 (HalPutScatterGatherListV2.c)
 *     CcZeroDataInCache @ 0x14039EF58 (CcZeroDataInCache.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     CcMdlWriteComplete2 @ 0x14040F680 (CcMdlWriteComplete2.c)
 *     IopUnlockAndFreeMdl @ 0x14040FCD4 (IopUnlockAndFreeMdl.c)
 *     IopMcReleaseMdl @ 0x1404114C8 (IopMcReleaseMdl.c)
 *     HalPutScatterGatherListV3 @ 0x14043ED84 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x14043EEB0 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x14043F260 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043F81C (HalpDmaCheckMdlAccessibility.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x14046BC40 (CcCopyBytesToUserBuffer.c)
 *     MiZeroPageWrite @ 0x14046D748 (MiZeroPageWrite.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x14047D290 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404B7D10 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     HalpDmaFreeChildAdapter @ 0x14050FED0 (HalpDmaFreeChildAdapter.c)
 *     CcLockSystemCacheBuffer @ 0x14052625C (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1405B1FC0 (CcMdlWriteAbort.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405C7D7C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x1405CF604 (IopLiveDumpFreeMappingResources.c)
 *     DifIoFreeMdlWrapper @ 0x14065BFD0 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1406FBA88 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     PopReadPagesFromHiberFile @ 0x140775074 (PopReadPagesFromHiberFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790C90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790D30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140791E48 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407944C0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     PnprFreeMappingReserve @ 0x1407AF0E4 (PnprFreeMappingReserve.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x14086D784 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x14086D940 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140872E78 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     IopExceptionCleanupEx @ 0x1409B6D64 (IopExceptionCleanupEx.c)
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     sub_1409F0ACC @ 0x1409F0ACC (sub_1409F0ACC.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409F0C30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlpFreeMdlChain @ 0x140A19588 (FsRtlpFreeMdlChain.c)
 *     MiDeleteImageCreationMdls @ 0x140A5620C (MiDeleteImageCreationMdls.c)
 *     AlpcpInitializeCompletionList @ 0x140A8CBD8 (AlpcpInitializeCompletionList.c)
 *     CcMdlReadComplete2 @ 0x140AC4ED8 (CcMdlReadComplete2.c)
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 *     AlpcpFreeCompletionList @ 0x140B2392C (AlpcpFreeCompletionList.c)
 *     MiReleaseHotPatchResources @ 0x140B55540 (MiReleaseHotPatchResources.c)
 *     ViAllocateMapRegisterFile @ 0x140C25F78 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140C26C90 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     IovAiRemoveObject @ 0x1405321F0 (IovAiRemoveObject.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4505C (ViPtLogPoolTraceWrapper.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  __int64 Size; // r8
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 v6; // rcx

  if ( Mdl && KernelVerifier == 1 )
  {
    if ( (VfOptionFlags & 0x1000) != 0 )
    {
      Size = Mdl->Size;
      v6 = 0LL;
      if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
      {
        while ( (unsigned int)v6 < DifpPoolTagsSize )
        {
          if ( *((_DWORD *)&DifpPoolTags + v6) == 543974477 )
            goto LABEL_16;
          v6 = (unsigned int)(v6 + 1);
        }
      }
      else
      {
LABEL_16:
        ViPtLogPoolTraceWrapper(Mdl, 543974477LL, Size, 3LL);
      }
    }
    if ( (VfRuleClasses & 0x20000000000000LL) != 0 )
      IovAiRemoveObject(Mdl);
  }
  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    v3 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0
      || (_mm_lfence(), (CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v3]) == 0LL) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[3].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++P->FreeMisses;
      guard_dispatch_icall_no_overrides(Mdl, CurrentPrcb, Size);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
