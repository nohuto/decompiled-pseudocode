/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14035F0D0
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020BD14 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CE80 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14034ACB4 (HalpAllocateCommonBufferDmaThin.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     HalpDmaSyncMapBuffers @ 0x14035DBE0 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     SmFpAllocate @ 0x14035EF20 (SmFpAllocate.c)
 *     SmMapPage @ 0x14035F070 (SmMapPage.c)
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     MiValidateEntireInPage @ 0x14038C548 (MiValidateEntireInPage.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     PspIumFreePhysicalPages @ 0x1403CCB2C (PspIumFreePhysicalPages.c)
 *     FsRtlCancelNotify @ 0x1403FB5E0 (FsRtlCancelNotify.c)
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     MiGetWorkingSetInfo @ 0x14040E930 (MiGetWorkingSetInfo.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043832C (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     KeFlushIoBuffers @ 0x140439C90 (KeFlushIoBuffers.c)
 *     EtwpAllocateTraceBuffer @ 0x1404B67A4 (EtwpAllocateTraceBuffer.c)
 *     EtwpAllocatePartitionMemory @ 0x1404B6854 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404CB450 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404EB464 (HalpAllocateCommonBufferDmarThin.c)
 *     MiTransferMemoryPagefileData @ 0x1404FC9E8 (MiTransferMemoryPagefileData.c)
 *     MiPersistMdl @ 0x140501A38 (MiPersistMdl.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     HalInitializeBios @ 0x14057A9D0 (HalInitializeBios.c)
 *     HalCreateCommonBufferFromMdl @ 0x14058C160 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14058C6F0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14058D740 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14058DC30 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CFBBC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x1405D00B4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiOpPatchCode @ 0x1405FAB48 (KiOpPatchCode.c)
 *     PspIumAllocatePhysicalPages @ 0x1406193C0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1406194E4 (PspIumAllocateSecurePool.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140642BD8 (SmRecordDecompressionFailureDumpPayload.c)
 *     MdlInvariantPostProcessing1 @ 0x140646724 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140646934 (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x14066B300 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     DifMmMapLockedPagesWrapper @ 0x14066B4B0 (DifMmMapLockedPagesWrapper.c)
 *     MmMapLockedPages @ 0x1406EFA50 (MmMapLockedPages.c)
 *     MiLockPatchIatForDV @ 0x1406FFC20 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FFE48 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     IopAllocateAndLockMdl @ 0x140796C1C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x14079F6D0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x1407A00BC (PipGetPersistentMemory.c)
 *     ExInitializeLeapSecondData @ 0x14083B934 (ExInitializeLeapSecondData.c)
 *     NtStartProfile @ 0x14084B8E0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409ED50C (WbMakeUserDataPagesKernelWritable.c)
 *     MiCopyVmReadBytes @ 0x140A2BED0 (MiCopyVmReadBytes.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     MiCreateMdl @ 0x140A63630 (MiCreateMdl.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A8A420 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A8AB54 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 *     MiQueryPtePrepare @ 0x140A95A04 (MiQueryPtePrepare.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 *     HalpDmaAllocateScatterMemory @ 0x140B330DC (HalpDmaAllocateScatterMemory.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 *     PopAllocatePages @ 0x140C0FF38 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140C2BF88 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140C2D0D4 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140C2D778 (ViMapDoubleBuffer.c)
 *     VfFillAllocatePagesForMdl @ 0x140C45E60 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140C56D8C (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CDD248 (PpmHeteroInitializeIntelWpsSupport.c)
 * Callees:
 *     MiMappingHasIoReferences @ 0x14024F7D4 (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiInsertPteTracker @ 0x1404FCC9C (MiInsertPteTracker.c)
 *     MiIssueNoPtesBugcheck @ 0x1405272A4 (MiIssueNoPtesBugcheck.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
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
  NTSTATUS locked; // eax
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
      if ( (*(_QWORD *)&stru_140E2DAB0.Timer.Header.Lock - qword_140E37B88) << 21 < (unsigned __int64)(0x4000000 / ((unsigned int)((Priority & 0x3FFFFFFF) == 16) + 1))
        && ((struct _LIST_ENTRY *)v23 >= stru_140E366D8.Timer.TimerListEntry.Blink
         || v11 >= &stru_140E366D8.Timer.TimerListEntry.Blink[v23 / 0xFFFFFFFFFFFFFFF0uLL])
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        _InterlockedIncrement(&stru_140E366D8.Timer.Header.LockNV);
        return 0LL;
      }
    }
    v12 = (((unsigned __int16)v8 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( MmProtectFreedNonPagedPool )
      v12 = (_DWORD)v11 + 1;
    v13 = MiReservePtes(&stru_140E366D8.WaitBlockList, v12);
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
      MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v14, v12);
      return 0LL;
    }
    MemoryDescriptorList->MdlFlags |= 1u;
    v19 = v27;
    MemoryDescriptorList->MappedSystemVa = v16;
    v20 = v19 & 1;
    if ( v20 )
      MiMappingHasIoReferences((unsigned __int64)v16);
    if ( (dword_140FBF20C & 1) != 0 )
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
