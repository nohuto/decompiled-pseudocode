/*
 * XREFs of MmUnlockPages @ 0x140410C10
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcZeroDataInCache @ 0x14039EF58 (CcZeroDataInCache.c)
 *     MiProbeAndLockComplete @ 0x1403A0050 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     MiGetWorkingSetInfo @ 0x14040F210 (MiGetWorkingSetInfo.c)
 *     CcMdlWriteComplete2 @ 0x14040F680 (CcMdlWriteComplete2.c)
 *     IopUnlockAndFreeMdl @ 0x14040FCD4 (IopUnlockAndFreeMdl.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     VslpLockPagesForTransfer @ 0x14040FF88 (VslpLockPagesForTransfer.c)
 *     MiQueryPteCleanup @ 0x1404101DC (MiQueryPteCleanup.c)
 *     KeSwappablePageDereference @ 0x14041053C (KeSwappablePageDereference.c)
 *     VslpUnlockPagesForTransfer @ 0x140410B74 (VslpUnlockPagesForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x140411C60 (VslFinalizeSecureImageHash.c)
 *     CcCopyBytesToUserBuffer @ 0x14046BC40 (CcCopyBytesToUserBuffer.c)
 *     CcPrepareMdlWrite @ 0x1404CDA40 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x14052625C (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x1405B1FC0 (CcMdlWriteAbort.c)
 *     KiOpPatchCode @ 0x1405F8128 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x14061621C (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x140616730 (PspIumFreePartitionState.c)
 *     SmRecordDecompressionFailureDumpPayload @ 0x14063EFF8 (SmRecordDecompressionFailureDumpPayload.c)
 *     DifMmUnlockPagesWrapper @ 0x140668680 (DifMmUnlockPagesWrapper.c)
 *     VmProbeAndLockPages @ 0x1406C08E0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1406C0980 (VmUnlockPages.c)
 *     PopReadPagesFromHiberFile @ 0x140775074 (PopReadPagesFromHiberFile.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790C90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790D30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslObtainHotPatchUndoTable @ 0x14079251C (VslObtainHotPatchUndoTable.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407944C0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140795690 (IopSetFileObjectIosbRange.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140842550 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140842840 (NtStartProfile.c)
 *     NtStopProfile @ 0x140842B10 (NtStopProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140845040 (NtPssCaptureVaSpaceBulk.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1408593F0 (CmpLockKeyBodyIntoMemory.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140876584 (MiLoadDataIntoVsmEnclave.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     sub_1409F0ACC @ 0x1409F0ACC (sub_1409F0ACC.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409F0C30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409F0D3C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlpFreeMdlChain @ 0x140A19588 (FsRtlpFreeMdlChain.c)
 *     MiCopyVirtualMemory @ 0x140A22370 (MiCopyVirtualMemory.c)
 *     MiCopyVmReadBytes @ 0x140A228B0 (MiCopyVmReadBytes.c)
 *     AlpcpInitializeCompletionList @ 0x140A8CBD8 (AlpcpInitializeCompletionList.c)
 *     MiQueryPtePrepare @ 0x140A90EB4 (MiQueryPtePrepare.c)
 *     CcMdlReadComplete2 @ 0x140AC4ED8 (CcMdlReadComplete2.c)
 *     VslValidateDynamicCodePages @ 0x140AD5FA4 (VslValidateDynamicCodePages.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140AECA38 (MiReplaceRotateWithDemandZero.c)
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     VslCallEnclave @ 0x140B19E0C (VslCallEnclave.c)
 *     AlpcpFreeCompletionList @ 0x140B2392C (AlpcpFreeCompletionList.c)
 *     PspCreateSecureThread @ 0x140B342F8 (PspCreateSecureThread.c)
 *     PspDeleteSecureThread @ 0x140B41AE4 (PspDeleteSecureThread.c)
 *     MiReleaseHotPatchResources @ 0x140B55540 (MiReleaseHotPatchResources.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140B64218 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     MiDereferenceIoPages @ 0x1403132CC (MiDereferenceIoPages.c)
 *     MiUnlockPageTableCharges @ 0x140318F40 (MiUnlockPageTableCharges.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     MiValidateMdlTracker @ 0x1404EFA3C (MiValidateMdlTracker.c)
 *     MiRetardMdl @ 0x140504688 (MiRetardMdl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&Flink[1].Blink, retaddr);
      goto LABEL_32;
    }
    v6 = 0LL;
    LODWORD(Flink[1].Blink) = 0;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
    && byte_140E37A70[(((unsigned __int64)v4 >> 39) & 0x1FF) - 256] == 4
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
    if ( v18 <= qword_140E2D7A0 && ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
            || v23 <= qword_140E2D7A0 && ((*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
