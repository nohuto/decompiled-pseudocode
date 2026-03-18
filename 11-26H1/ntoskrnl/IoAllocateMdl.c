/*
 * XREFs of IoAllocateMdl @ 0x14040BA40
 * Callers:
 *     PopReadPagesFromHiberFile @ 0x140775074 (PopReadPagesFromHiberFile.c)
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140791E48 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x1407940EC (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140795248 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     PnprInitializeMappingReserve @ 0x1407AF578 (PnprInitializeMappingReserve.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x14082E080 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x14082E8E4 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x14086D784 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140872E78 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x1408793E0 (NtFreeUserPhysicalPages.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409F0C30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlKernelFsControlFile @ 0x140A1A200 (FsRtlKernelFsControlFile.c)
 *     MiCreateMdl @ 0x140A560A8 (MiCreateMdl.c)
 *     AlpcpInitializeCompletionList @ 0x140A8CBD8 (AlpcpInitializeCompletionList.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140AACCA0 (NtNotifyChangeDirectoryFileEx.c)
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 *     IopWriteFileGather @ 0x140B01CE0 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0D3D8 (IopReadFileScatter.c)
 *     IovAllocateMdl @ 0x140C20A60 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140C238B0 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140C25F78 (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140C28DD0 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     IovAiIrpHasUnlockedMdl @ 0x1405305F0 (IovAiIrpHasUnlockedMdl.c)
 *     IovLogIrpMdlEvent @ 0x140530E84 (IovLogIrpMdlEvent.c)
 *     IovAiInsertObject @ 0x14053207C (IovAiInsertObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4505C (ViPtLogPoolTraceWrapper.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  unsigned int v5; // esi
  ULONG v6; // ebp
  __int16 v7; // r15
  __int16 v9; // r12
  unsigned __int64 v10; // rdi
  struct _KPRCB *v11; // rbp
  _GENERAL_LOOKASIDE *v12; // rsi
  __int64 Pool2; // rbx
  unsigned int Number; // eax
  char v15; // bp
  PMDL MdlAddress; // rcx
  _GENERAL_LOOKASIDE *v18; // rsi
  struct _MDL *i; // rdx
  struct _KPRCB *CurrentPrcb; // [rsp+20h] [rbp-48h]
  _GENERAL_LOOKASIDE *P; // [rsp+28h] [rbp-40h]
  _GENERAL_LOOKASIDE *L; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v24; // [rsp+70h] [rbp+8h]

  v5 = 0;
  v6 = Length;
  v7 = (__int16)VirtualAddress;
  v24 = 0;
  v9 = 0;
  v10 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)(8 * v10 + 48) > 0xB8 )
    goto LABEL_22;
  v9 = 8;
  if ( ViAptInitialized && KernelVerifier == 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 1;
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalAllocates;
    Pool2 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( Pool2
      || (++P->AllocateMisses,
          L = CurrentPrcb->PPLookasideList[3].L,
          ++L->TotalAllocates,
          (Pool2 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
      || (v24 = 0, ++L->AllocateMisses, (Pool2 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
    {
      *(_DWORD *)Pool2 = CurrentPrcb->Number;
    }
  }
  else
  {
    v11 = KeGetCurrentPrcb();
    v12 = v11->PPLookasideList[3].P;
    ++v12->TotalAllocates;
    Pool2 = (__int64)RtlpInterlockedPopEntrySList(&v12->ListHead);
    if ( Pool2
      || (++v12->AllocateMisses,
          v18 = v11->PPLookasideList[3].L,
          ++v18->TotalAllocates,
          (Pool2 = (__int64)RtlpInterlockedPopEntrySList(&v18->ListHead)) != 0)
      || (++v18->AllocateMisses, (Pool2 = guard_dispatch_icall_no_overrides((unsigned int)v18->Type, v18->Size)) != 0) )
    {
      *(_DWORD *)Pool2 = v11->Number;
    }
    v6 = Length;
    v5 = 0;
  }
  if ( Pool2 )
  {
    LOWORD(Number) = *(_WORD *)Pool2;
  }
  else
  {
LABEL_22:
    Pool2 = ExAllocatePool2(0x42uLL);
    if ( !Pool2 )
      return 0LL;
    Number = KeGetPcr()->Prcb.Number;
  }
  *(_WORD *)(Pool2 + 12) = Number;
  *(_WORD *)(Pool2 + 8) = 8 * (v10 + 6);
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 32) = (unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(Pool2 + 44) = v7 & 0xFFF;
  *(_DWORD *)(Pool2 + 40) = v6;
  *(_WORD *)(Pool2 + 10) = v9;
  if ( Irp )
  {
    MdlAddress = Irp->MdlAddress;
    if ( !SecondaryBuffer )
    {
      if ( MdlAddress
        && KernelVerifier == 1
        && (VfRuleClasses & 0x20000000000000LL) != 0
        && (unsigned __int8)IovAiIrpHasUnlockedMdl() )
      {
        IovLogIrpMdlEvent(Irp->MdlAddress, Irp, retaddr);
      }
      Irp->MdlAddress = (PMDL)Pool2;
      v15 = 1;
      goto LABEL_10;
    }
    for ( i = MdlAddress->Next; i; i = i->Next )
      MdlAddress = i;
    MdlAddress->Next = (struct _MDL *)Pool2;
  }
  v15 = 0;
LABEL_10:
  if ( KernelVerifier == 1 )
  {
    if ( v24 )
    {
      if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
      {
        while ( v5 < DifpPoolTagsSize )
        {
          if ( *((_DWORD *)&DifpPoolTags + v5) == 543974477 )
            goto LABEL_31;
          ++v5;
        }
      }
      else
      {
LABEL_31:
        ViPtLogPoolTraceWrapper(Pool2, 543974477LL, *(__int16 *)(Pool2 + 8), 2LL);
      }
    }
    if ( Irp && v15 && (VfRuleClasses & 0x20000000000000LL) != 0 )
      IovAiInsertObject(Pool2);
  }
  return (PMDL)Pool2;
}
