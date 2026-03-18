/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14035D330
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020BC34 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CDA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140281140 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwAllocateMemory @ 0x140355EBC (BgpFwAllocateMemory.c)
 *     HalpDmaSyncMapBuffers @ 0x14035BE40 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035C1E8 (HalpDmaAcquireBufferMappings.c)
 *     SmFpAllocate @ 0x14035D180 (SmFpAllocate.c)
 *     SmMapPage @ 0x14035D2D0 (SmMapPage.c)
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     MiValidateEntireInPage @ 0x14038A798 (MiValidateEntireInPage.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14038F658 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     CcCompleteAsyncRead @ 0x14039E848 (CcCompleteAsyncRead.c)
 *     PspIumFreePhysicalPages @ 0x1403C2C2C (PspIumFreePhysicalPages.c)
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     MiGetWorkingSetInfo @ 0x14040F210 (MiGetWorkingSetInfo.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043F81C (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushBuffer @ 0x14044011C (HalpDmaFlushBuffer.c)
 *     KeFlushIoBuffers @ 0x140441180 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     EtwpAllocateTraceBuffer @ 0x1404BCFC4 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x1404BD074 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404F1E84 (HalpAllocateCommonBufferDmarThin.c)
 *     MiTransferMemoryPagefileData @ 0x140503118 (MiTransferMemoryPagefileData.c)
 *     MiPersistMdl @ 0x140508064 (MiPersistMdl.c)
 *     CcLockSystemCacheBuffer @ 0x14052625C (CcLockSystemCacheBuffer.c)
 *     HalInitializeBios @ 0x1405784A0 (HalInitializeBios.c)
 *     HalCreateCommonBufferFromMdl @ 0x140589A30 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14058AFC0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14058B4B0 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CD3AC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x1405CD8A4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiOpPatchCode @ 0x1405F8128 (KiOpPatchCode.c)
 *     PspIumAllocatePhysicalPages @ 0x1406163D0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1406164F4 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14063EFF8 (SmRecordDecompressionFailureDumpPayload.c)
 *     MdlInvariantPostProcessing1 @ 0x140642B44 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140642D54 (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x140667720 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     DifMmMapLockedPagesWrapper @ 0x1406678D0 (DifMmMapLockedPagesWrapper.c)
 *     MmMapLockedPages @ 0x1406EADB0 (MmMapLockedPages.c)
 *     MiLockPatchIatForDV @ 0x1406FAF50 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     IopAllocateAndLockMdl @ 0x1407940EC (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14079CB90 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x14079D57C (PipGetPersistentMemory.c)
 *     ExInitializeLeapSecondData @ 0x1408356F4 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x140842840 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409F0C30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C (WbMakeUserDataPagesKernelWritable.c)
 *     MiCopyVmReadBytes @ 0x140A228B0 (MiCopyVmReadBytes.c)
 *     MiCreateMdl @ 0x140A560A8 (MiCreateMdl.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A85820 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A85F54 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x140A8CBD8 (AlpcpInitializeCompletionList.c)
 *     MiQueryPtePrepare @ 0x140A90EB4 (MiQueryPtePrepare.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF6420 (FsRtlNotifyFilterReportChange.c)
 *     HalpDmaAllocateScatterMemory @ 0x140B30EDC (HalpDmaAllocateScatterMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 *     PopAllocatePages @ 0x140C09D28 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140C25F78 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140C270C4 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140C27768 (ViMapDoubleBuffer.c)
 *     VfFillAllocatePagesForMdl @ 0x140C3FE50 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140C50D8C (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CD6EF4 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MiMappingHasIoReferences @ 0x14024DE74 (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiProtectionToCacheAttribute @ 0x140372270 (MiProtectionToCacheAttribute.c)
 *     MiInsertPteTracker @ 0x1405033CC (MiInsertPteTracker.c)
 *     MiIssueNoPtesBugcheck @ 0x140524C34 (MiIssueNoPtesBugcheck.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  __int64 ByteOffset; // rcx
  char *v8; // rcx
  int v9; // r12d
  signed int v10; // esi
  struct _LIST_ENTRY *v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // rax
  unsigned __int64 *v14; // rbp
  unsigned int v15; // ecx
  void *v16; // r14
  int v17; // eax
  unsigned int v18; // esi
  char v19; // di
  unsigned int v20; // edi
  CSHORT MdlFlags; // ax
  unsigned __int64 v23; // r8
  int locked; // eax
  unsigned int v25; // eax
  void *v26; // [rsp+80h] [rbp+8h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF

  ByteOffset = MemoryDescriptorList->ByteOffset;
  v27 = 0;
  v26 = 0LL;
  v8 = (char *)MemoryDescriptorList->StartVa + ByteOffset;
  if ( CacheType == MmHardwareCoherentCached )
    goto LABEL_2;
  if ( CacheType )
  {
    if ( CacheType == MmCached )
    {
LABEL_2:
      v9 = 1;
      goto LABEL_3;
    }
    if ( CacheType == MmWriteCombined )
      goto LABEL_39;
    if ( CacheType != MmNonCachedUnordered )
    {
      if ( CacheType != MmUSWCCached )
        return 0LL;
LABEL_39:
      v9 = 2;
      goto LABEL_3;
    }
  }
  v9 = 0;
LABEL_3:
  if ( AccessMode )
  {
    locked = MiMapLockedPagesInUserSpace(
               (unsigned int)&v26,
               (_DWORD)MemoryDescriptorList,
               (_DWORD)v8,
               CacheType,
               (__int64)RequestedAddress,
               Priority);
    if ( locked < 0 )
      RtlRaiseStatus(locked);
    return v26;
  }
  v10 = Priority;
  if ( (Priority & 0x20000000) == 0 )
  {
    v11 = (struct _LIST_ENTRY *)((((unsigned __int16)v8 & 0xFFF)
                                + (unsigned __int64)MemoryDescriptorList->ByteCount
                                + 4095) >> 12);
    if ( (Priority & 0x20) == 0 )
    {
      v23 = 512LL;
      if ( (Priority & 0x3FFFFFFF) != 0x10 )
        v23 = 2048LL;
      if ( (*(_QWORD *)&stru_140E2D930.Timer.Header.Lock - qword_140E37A08) << 21 < (unsigned __int64)(0x4000000 / ((unsigned int)((Priority & 0x3FFFFFFF) == 16) + 1))
        && ((struct _LIST_ENTRY *)v23 >= stru_140E36558.Timer.TimerListEntry.Blink
         || v11 >= &stru_140E36558.Timer.TimerListEntry.Blink[v23 / 0xFFFFFFFFFFFFFFF0uLL])
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        _InterlockedIncrement(&stru_140E36558.Timer.Header.LockNV);
        return 0LL;
      }
    }
    v12 = (((unsigned __int16)v8 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( MmProtectFreedNonPagedPool )
      v12 = (_DWORD)v11 + 1;
    v13 = MiReservePtes(&stru_140E36558.WaitBlockList, v12);
    v14 = (unsigned __int64 *)v13;
    if ( !v13 )
    {
      if ( !_bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) && BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v11);
      return 0LL;
    }
    v15 = ((v10 >> 31) & 0xFFFFFFFD) + 4;
    v16 = (void *)(MemoryDescriptorList->ByteOffset + (v13 << 25 >> 16));
    v17 = 0x40000000;
    if ( (MiFlags & 0x20000) == 0 )
      v17 = v10;
    v18 = v15 | 2;
    if ( (v17 & 0x40000000) != 0 )
      v18 = v15;
    if ( v9 )
    {
      if ( v9 == 2 )
        v18 |= 0x18u;
    }
    else
    {
      v18 |= 8u;
    }
    if ( (int)MiFillSystemPtes((_DWORD)v14, (_DWORD)v11, (int)MemoryDescriptorList + 48, v18, 0, (__int64)&v27) < 0 )
    {
      if ( !_bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) && BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v11);
      MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, v14, v12);
      return 0LL;
    }
    MemoryDescriptorList->MdlFlags |= 1u;
    v19 = v27;
    MemoryDescriptorList->MappedSystemVa = v16;
    v20 = v19 & 1;
    if ( v20 )
      MiMappingHasIoReferences((unsigned __int64)v16);
    if ( (dword_140FBE20C & 1) != 0 )
    {
      if ( MmProtectFreedNonPagedPool )
        v20 |= 2u;
      v25 = MiProtectionToCacheAttribute(v18);
      MiInsertPteTracker(MemoryDescriptorList, 0LL, v20, v25);
    }
    MdlFlags = MemoryDescriptorList->MdlFlags;
    if ( (MdlFlags & 0x10) != 0 )
      MemoryDescriptorList->MdlFlags = MdlFlags | 0x20;
    return v16;
  }
  return 0LL;
}
