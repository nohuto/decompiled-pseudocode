/*
 * XREFs of IoFreeMdl @ 0x1403A0EF0
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopBuildDeviceIoControlRequest @ 0x14026A720 (IopBuildDeviceIoControlRequest.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     CcMdlWriteComplete2 @ 0x14040EDA0 (CcMdlWriteComplete2.c)
 *     IopUnlockAndFreeMdl @ 0x14040F3F4 (IopUnlockAndFreeMdl.c)
 *     IopMcReleaseMdl @ 0x140410BE8 (IopMcReleaseMdl.c)
 *     HalPutScatterGatherListV3 @ 0x140437894 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140437D70 (HalMapTransferEx.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043832C (HalpDmaCheckMdlAccessibility.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     CcCopyBytesToUserBuffer @ 0x1404653C0 (CcCopyBytesToUserBuffer.c)
 *     MiZeroPageWrite @ 0x140466EC8 (MiZeroPageWrite.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x140476C00 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404B1540 (HalBuildMdlFromScatterGatherListV3.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     HalpDmaFreeChildAdapter @ 0x140509940 (HalpDmaFreeChildAdapter.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1405B47D0 (CcMdlWriteAbort.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x1405D1E14 (IopLiveDumpFreeMappingResources.c)
 *     DifIoFreeMdlWrapper @ 0x14065FBB0 (DifIoFreeMdlWrapper.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140700758 (MiUnlockAndFreeDvPatchImage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     PopReadPagesFromHiberFile @ 0x140778074 (PopReadPagesFromHiberFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1407937C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140793860 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140794978 (HvlpDynamicUpdateMicrocode.c)
 *     IopCleanupFileObjectIosbRange @ 0x140796FF0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     PnprFreeMappingReserve @ 0x1407B2144 (PnprFreeMappingReserve.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140873B54 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140873D10 (MiUnlockEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408791D8 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x14087F7C0 (NtFreeUserPhysicalPages.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_1409ED29C @ 0x1409ED29C (sub_1409ED29C.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409ED50C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlpFreeMdlChain @ 0x140A22BB8 (FsRtlpFreeMdlChain.c)
 *     MiDeleteImageCreationMdls @ 0x140A63794 (MiDeleteImageCreationMdls.c)
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 *     CcMdlReadComplete2 @ 0x140AC6B48 (CcMdlReadComplete2.c)
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 *     AlpcpFreeCompletionList @ 0x140B25D2C (AlpcpFreeCompletionList.c)
 *     MiReleaseHotPatchResources @ 0x140B57DDC (MiReleaseHotPatchResources.c)
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     IovAiRemoveObject @ 0x140534690 (IovAiRemoveObject.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
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
