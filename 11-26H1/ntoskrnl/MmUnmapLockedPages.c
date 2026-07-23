/*
 * XREFs of MmUnmapLockedPages @ 0x140280C00
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x140280590 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     HalFreeCommonBufferVector @ 0x140345C80 (HalFreeCommonBufferVector.c)
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 *     HalFreeCommonBufferDmarThin @ 0x140346220 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140346320 (HalFreeCommonBufferDmaThin.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14034ACB4 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     MiValidateInPagePrepare @ 0x14038DF70 (MiValidateInPagePrepare.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403CAC08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MiUnlockFlushMdl @ 0x1403CB7C4 (MiUnlockFlushMdl.c)
 *     PspIumFreePhysicalPages @ 0x1403CCB2C (PspIumFreePhysicalPages.c)
 *     SmKmUnlockMdl @ 0x14040060C (SmKmUnlockMdl.c)
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     IopUnlockAndFreeMdl @ 0x14040F3F4 (IopUnlockAndFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     HalPutScatterGatherListV3 @ 0x140437894 (HalPutScatterGatherListV3.c)
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     MiZeroPageWrite @ 0x140466EC8 (MiZeroPageWrite.c)
 *     EtwpFreePartitionMemory @ 0x1404826E8 (EtwpFreePartitionMemory.c)
 *     HalpDmaReleaseBufferMappings @ 0x140488F0C (HalpDmaReleaseBufferMappings.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 *     MiPfCompleteCoalescedIo @ 0x1404B367C (MiPfCompleteCoalescedIo.c)
 *     EtwpAllocatePartitionMemory @ 0x1404B6854 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404CB450 (HalpAllocateCommonBufferVectorInternal.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1404DDEB4 (IopLiveDumpFreeDumpBuffers.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404EB464 (HalpAllocateCommonBufferDmarThin.c)
 *     MiPersistMdl @ 0x140501A38 (MiPersistMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x140509940 (HalpDmaFreeChildAdapter.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     HalFreeCommonBufferV3 @ 0x14058C550 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CFBBC (IopLiveDumpAllocateFromIOSpace.c)
 *     PspIumAllocatePhysicalPages @ 0x1406193C0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1406194E4 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140642BD8 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnmapLockedPagesWrapper @ 0x14066C530 (DifMmUnmapLockedPagesWrapper.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MiZeroPageFile @ 0x1406EB650 (MiZeroPageFile.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140700758 (MiUnlockAndFreeDvPatchImage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 *     IopCleanupFileObjectIosbRange @ 0x140796FF0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     IoFreeKsrPersistentMemory @ 0x14079F170 (IoFreeKsrPersistentMemory.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14079F6D0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x1407A00BC (PipGetPersistentMemory.c)
 *     ExpProfileDelete @ 0x14084B5F0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x14084BBB0 (NtStopProfile.c)
 *     MiZeroPageFileFirstPage @ 0x140872E7C (MiZeroPageFileFirstPage.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     MiDeleteImageCreationMdls @ 0x140A63794 (MiDeleteImageCreationMdls.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140B3305C (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140B65DD0 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140C45E60 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x1402810D0 (MiMappingHasIoTracker.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiRemovePteTracker @ 0x1404E696C (MiRemovePteTracker.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A027C4 (MiUnmapLockedPagesInUserSpace.c)
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
    if ( (dword_140FBF20C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&stru_140E366D8.WaitBlockList, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v8);
  }
}
