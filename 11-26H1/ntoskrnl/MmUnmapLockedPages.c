/*
 * XREFs of MmUnmapLockedPages @ 0x140281690
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CDA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x140281020 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140281140 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     HalFreeCommonBufferVector @ 0x140343C00 (HalFreeCommonBufferVector.c)
 *     IopLiveDumpWriteDumpFile @ 0x140343D08 (IopLiveDumpWriteDumpFile.c)
 *     HalFreeCommonBufferDmarThin @ 0x1403441A0 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403442A0 (HalFreeCommonBufferDmaThin.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalPutScatterGatherListV2 @ 0x14035B580 (HalPutScatterGatherListV2.c)
 *     HalpDmaSyncMapBuffers @ 0x14035BE40 (HalpDmaSyncMapBuffers.c)
 *     MiValidateInPagePrepare @ 0x14038C1C0 (MiValidateInPagePrepare.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403C0D08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MiUnlockFlushMdl @ 0x1403C18C4 (MiUnlockFlushMdl.c)
 *     PspIumFreePhysicalPages @ 0x1403C2C2C (PspIumFreePhysicalPages.c)
 *     SmKmUnlockMdl @ 0x14040751C (SmKmUnlockMdl.c)
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     IopUnlockAndFreeMdl @ 0x14040FCD4 (IopUnlockAndFreeMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     HalPutScatterGatherListV3 @ 0x14043ED84 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x14043EEB0 (HalFlushAdapterBuffersEx.c)
 *     MiZeroPageWrite @ 0x14046D748 (MiZeroPageWrite.c)
 *     EtwpFreePartitionMemory @ 0x140488BA8 (EtwpFreePartitionMemory.c)
 *     HalpDmaReleaseBufferMappings @ 0x14048F54C (HalpDmaReleaseBufferMappings.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404AE73C (MiInitializeNewImageSectionProtos.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B9DEC (MiPfCompleteCoalescedIo.c)
 *     EtwpAllocatePartitionMemory @ 0x1404BD074 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1404E4914 (IopLiveDumpFreeDumpBuffers.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404F1E84 (HalpAllocateCommonBufferDmarThin.c)
 *     MiPersistMdl @ 0x140508064 (MiPersistMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x14050FED0 (HalpDmaFreeChildAdapter.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     HalFreeCommonBufferV3 @ 0x140589E20 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CD3AC (IopLiveDumpAllocateFromIOSpace.c)
 *     PspIumAllocatePhysicalPages @ 0x1406163D0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1406164F4 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14063EFF8 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnmapLockedPagesWrapper @ 0x140668950 (DifMmUnmapLockedPagesWrapper.c)
 *     MiReadPagefilePage @ 0x1406E4AA0 (MiReadPagefilePage.c)
 *     MiZeroPageFile @ 0x1406E69A0 (MiZeroPageFile.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1406FBA88 (MiUnlockAndFreeDvPatchImage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140782CB0 (HalpDmaAllocateLocalScatterPool.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407944C0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x14079C630 (IoFreeKsrPersistentMemory.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14079CB90 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x14079D57C (PipGetPersistentMemory.c)
 *     ExpProfileDelete @ 0x140842550 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140842B10 (NtStopProfile.c)
 *     MiZeroPageFileFirstPage @ 0x14086CA9C (MiZeroPageFileFirstPage.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     MiDeleteImageCreationMdls @ 0x140A5620C (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x140B1AB90 (PopFreeHiberContext.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B30E5C (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140B62D30 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViFreeMapRegisterFile @ 0x140C26C90 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140C3FE50 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x140281B60 (MiMappingHasIoTracker.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiRemovePteTracker @ 0x1404ED38C (MiRemovePteTracker.c)
 *     MiRetardMdl @ 0x140504688 (MiRetardMdl.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14095CF04 (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v2; // r10d
  __int64 ByteOffset; // r8
  char *StartVa; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx

  v2 = 0;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v2 = MiRetardMdl(MemoryDescriptorList);
  ByteOffset = MemoryDescriptorList->ByteOffset;
  StartVa = (char *)MemoryDescriptorList->StartVa;
  v7 = ((_WORD)ByteOffset + (_WORD)StartVa) & 0xFFF;
  v8 = (v7 + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
  {
    MiUnmapLockedPagesInUserSpace(
      (ULONG_PTR)BaseAddress,
      (v7 + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  }
  else
  {
    v9 = (unsigned __int64)BaseAddress - v2;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = &StartVa[ByteOffset];
    if ( (unsigned int)MiMappingHasIoTracker(v9) )
      MiClearMappingAndDereferenceIoSpace(v9, v8);
    if ( MmProtectFreedNonPagedPool )
      LODWORD(v8) = v8 + 1;
    if ( (dword_140FBE20C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&stru_140E36558.WaitBlockList, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v8);
  }
}
