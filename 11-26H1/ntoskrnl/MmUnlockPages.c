/*
 * XREFs of MmUnlockPages @ 0x140410330
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     MiProbeAndLockComplete @ 0x1403A1DB0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     MiGetWorkingSetInfo @ 0x14040E930 (MiGetWorkingSetInfo.c)
 *     CcMdlWriteComplete2 @ 0x14040EDA0 (CcMdlWriteComplete2.c)
 *     IopUnlockAndFreeMdl @ 0x14040F3F4 (IopUnlockAndFreeMdl.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     KeSwappablePageDereference @ 0x14040FC5C (KeSwappablePageDereference.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x140411260 (VslFinalizeSecureImageHash.c)
 *     CcCopyBytesToUserBuffer @ 0x1404653C0 (CcCopyBytesToUserBuffer.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1405B47D0 (CcMdlWriteAbort.c)
 *     KiOpPatchCode @ 0x1405FAB48 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x14061920C (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x140619720 (PspIumFreePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x140642BD8 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnlockPagesWrapper @ 0x14066C260 (DifMmUnlockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x1406C44C0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1406C4560 (VmUnlockPages.c)
 *     PopReadPagesFromHiberFile @ 0x140778074 (PopReadPagesFromHiberFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1407937C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140793860 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslObtainHotPatchUndoTable @ 0x14079504C (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x140796FF0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1407981C0 (IopSetFileObjectIosbRange.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x14084B5F0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x14084B8E0 (NtStartProfile.c)
 *     NtStopProfile @ 0x14084BBB0 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14084BEC0 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x14085F780 (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14087C968 (MiLoadDataIntoVsmEnclave.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_1409ED29C @ 0x1409ED29C (sub_1409ED29C.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409ED50C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlpFreeMdlChain @ 0x140A22BB8 (FsRtlpFreeMdlChain.c)
 *     MiCopyVirtualMemory @ 0x140A2B990 (MiCopyVirtualMemory.c)
 *     MiCopyVmReadBytes @ 0x140A2BED0 (MiCopyVmReadBytes.c)
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 *     MiQueryPtePrepare @ 0x140A95A04 (MiQueryPtePrepare.c)
 *     CcMdlReadComplete2 @ 0x140AC6B48 (CcMdlReadComplete2.c)
 *     VslValidateDynamicCodePages @ 0x140AD2F54 (VslValidateDynamicCodePages.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     VslCallEnclave @ 0x140B1C25C (VslCallEnclave.c)
 *     AlpcpFreeCompletionList @ 0x140B25D2C (AlpcpFreeCompletionList.c)
 *     PspCreateSecureThread @ 0x140B36748 (PspCreateSecureThread.c)
 *     PspDeleteSecureThread @ 0x140B439D4 (PspDeleteSecureThread.c)
 *     MiReleaseHotPatchResources @ 0x140B57DDC (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B672B8 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     MiValidateMdlTracker @ 0x1404E901C (MiValidateMdlTracker.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  __int16 v1; // r12
  __int64 *v2; // r13
  PMDL v3; // rsi
  _RTL_BALANCED_LINKS *v4; // r15
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  PEPROCESS p_Pcb; // rdi
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v9; // r12
  volatile LONG *p_Blink; // rcx
  KIRQL v11; // bp
  struct _LIST_ENTRY *v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rax
  __int64 *v16; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v18; // rax
  ULONG_PTR v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r10
  unsigned __int64 *v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  struct _EPROCESS *Process; // [rsp+30h] [rbp-58h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  int v29; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp+18h]
  __int64 v31; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (__int64 *)&MemoryDescriptorList[1];
  v3 = MemoryDescriptorList;
  Process = MemoryDescriptorList->Process;
  LOWORD(v29) = MemoryDescriptorList->MdlFlags;
  v1 = v29;
  if ( (v29 & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (_RTL_BALANCED_LINKS *)((char *)v3->StartVa + v3->ByteOffset);
  v5 = (((LOWORD(v3->StartVa) + (unsigned __int16)v3->ByteOffset) & 0xFFF) + (unsigned __int64)v3->ByteCount + 4095) >> 12;
  v30 = v5;
  if ( (v1 & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v6 = 0LL;
  if ( (MmTrackLockedPages & 1) == 0 )
    goto LABEL_40;
  p_Pcb = &v3->Process->Pcb;
  if ( !p_Pcb )
  {
    p_Pcb = PsInitialSystemProcess;
    if ( !PsInitialSystemProcess )
      goto LABEL_40;
  }
  Flink = p_Pcb[2].Header.WaitListHead.Flink;
  if ( !Flink )
    goto LABEL_40;
  v9 = 0LL;
  p_Blink = (volatile LONG *)&Flink[1].Blink;
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(p_Blink);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(p_Blink);
  }
  v12 = Flink->Flink;
  if ( !Flink->Flink )
  {
LABEL_18:
    v5 = v30;
    goto LABEL_19;
  }
  while ( 1 )
  {
    if ( (struct _LIST_ENTRY *)MemoryDescriptorList < v12[1].Blink )
    {
      v12 = v12->Flink;
      goto LABEL_17;
    }
    if ( (struct _LIST_ENTRY *)MemoryDescriptorList <= v12[1].Blink )
      break;
    v12 = v12->Blink;
LABEL_17:
    if ( !v12 )
      goto LABEL_18;
  }
  v9 = v12;
  MiValidateMdlTracker((ULONG_PTR)v12);
  RtlAvlRemoveNode((unsigned __int64 *)Flink, (__int64)v12);
  v5 = v30;
  Flink[1].Flink = (struct _LIST_ENTRY *)((char *)Flink[1].Flink - v30);
LABEL_19:
  if ( v11 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&Flink[1].Blink, retaddr);
      goto LABEL_32;
    }
    v6 = 0LL;
    LODWORD(Flink[1].Blink) = 0;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      LODWORD(Flink[1].Blink) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&Flink[1].Blink, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
LABEL_32:
    v6 = 0LL;
  }
  if ( v9 )
  {
    ExFreeToNPagedLookasideList(&Lookaside, v9);
  }
  else if ( HIDWORD(Flink[1].Blink) )
  {
    v13 = 4LL;
    v14 = &p_Pcb[2].ActiveProcessors[2].StaticBitmap[5];
    do
    {
      v15 = *v14;
      v14 += 8;
      v6 += v15;
      --v13;
    }
    while ( v13 );
    KeBugCheckEx(0x76u, 1uLL, (ULONG_PTR)MemoryDescriptorList, v6, (ULONG_PTR)p_Pcb[2].Header.WaitListHead.Flink);
  }
  v1 = v29;
  v3 = MemoryDescriptorList;
LABEL_40:
  if ( (unsigned __int64)v4 >= 0xFFFF800000000000uLL
    && byte_140E37BF0[(((unsigned __int64)v4 >> 39) & 0x1FF) - 256] == 4
    && DifObjTrkIsKvEnabledForPlugin(56LL) )
  {
    DifObjTrkRemoveItem(56LL, v4, v3->ByteCount);
  }
  v29 = 1;
  v16 = &v2[v5];
  v31 = 0x3FFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  while ( 1 )
  {
    v18 = *v2;
    if ( *v2 == -1 )
      break;
    v19 = 1LL;
    if ( v18 <= qword_140E2D920 && ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      MiProbeUnlockPage(48 * *v2 - 0x220000000000LL, v1, &v31, &v29);
    }
    else
    {
      v20 = *v2;
      v21 = 512 - (*v2 & 0x1FF);
      if ( v21 > 1 )
      {
        v22 = (unsigned __int64 *)(v2 + 1);
        do
        {
          if ( v22 == (unsigned __int64 *)v16 )
            break;
          v23 = *v22;
          if ( *v22 == -1LL
            || v23 != v20 + 1
            || v23 <= qword_140E2D920 && ((*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            break;
          }
          ++v19;
          ++v22;
          v20 = v23;
        }
        while ( v19 < v21 );
      }
      MiDereferenceIoPages(0LL, *v2, v19);
    }
    ++v6;
    v2 += v19;
    if ( (v6 & 0x3F) != 0 || CurrentIrql >= 2u )
    {
      if ( v2 >= v16 )
        break;
    }
    else
    {
      if ( v2 >= v16 )
        break;
      if ( KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v24 = KeGetCurrentIrql();
        if ( (_BYTE)v24 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v24, 2LL);
      }
    }
  }
  if ( v31 != 0x3FFFFFFFFFLL )
    MiUnlockPageTableCharges(48 * v31 - 0x220000000000LL, v29);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  v25 = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( Process )
  {
    LODWORD(v25) = KeGetPcr()->Prcb.Number;
    _InterlockedAdd64(
      (volatile signed __int64 *)&Process->Vm.Instance.VmWorkingSetList[2] + 8 * ((v25 >> 1) & 3) + 4,
      -(__int64)v30);
  }
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
