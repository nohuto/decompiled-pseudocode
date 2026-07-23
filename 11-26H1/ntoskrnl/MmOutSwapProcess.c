/*
 * XREFs of MmOutSwapProcess @ 0x140494118
 * Callers:
 *     KiOutSwapProcesses @ 0x140493F34 (KiOutSwapProcesses.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeFlushProcessTb @ 0x14047DA1C (KeFlushProcessTb.c)
 *     KeWaitForAllContextSwaps @ 0x140530818 (KeWaitForAllContextSwaps.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MiOutSwapFreeSoftWslePxe @ 0x140714A24 (MiOutSwapFreeSoftWslePxe.c)
 */

void __fastcall MmOutSwapProcess(struct _EPROCESS *a1)
{
  void **p_CommitReleaseContext; // rdx
  volatile unsigned __int64 *p_ActualWslePages; // r12
  void **p_AccessLog; // r15
  __int64 PartitionId; // rcx
  _MMWSL_INSTANCE *VmWorkingSetList; // rbx
  volatile LONG *v7; // r14
  KIRQL v8; // al
  unsigned int AttachedThreads; // ecx
  KIRQL v10; // si
  volatile LONG *v11; // rcx
  KIRQL v12; // dl
  __int64 v13; // rcx
  _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  ULONG *v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r14
  unsigned __int64 TransitionPte; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rbx
  KIRQL v28; // r14
  __int64 v29; // rax
  _QWORD v30[3]; // [rsp+28h] [rbp-18h] BYREF
  unsigned int EntireFlags; // [rsp+70h] [rbp+30h] BYREF

  if ( (a1->Vm.Instance.Flags.EntireFlags & 0xF) == 1 )
  {
    p_CommitReleaseContext = (void **)&unk_140E379A0;
    p_ActualWslePages = (volatile unsigned __int64 *)&unk_140E379B8;
    p_AccessLog = (void **)&unk_140E379A8;
  }
  else
  {
    p_CommitReleaseContext = &a1->Vm.Shared.CommitReleaseContext;
    p_ActualWslePages = &a1->Vm.Shared.ActualWslePages;
    p_AccessLog = &a1->Vm.Shared.AccessLog;
  }
  _InterlockedOr((volatile signed __int32 *)&a1->500, 0x40u);
  EntireFlags = a1->Vm.Instance.Flags.EntireFlags;
  if ( (HIBYTE(EntireFlags) & 0x30) == 0x10 )
  {
    MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (HIBYTE(EntireFlags) & 0x30) == 0x20 && *((_QWORD *)*p_CommitReleaseContext + 5) )
  {
    MiReleaseCommitForResetPages(a1);
  }
  if ( a1->Vm.Instance.WorkingSetSize == 1 && (EntireFlags & 0x2000000) == 0 )
  {
    PartitionId = a1->Vm.Instance.PartitionId;
    VmWorkingSetList = a1->Vm.Instance.VmWorkingSetList;
    v30[1] = v30;
    v30[0] = v30;
    v7 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * PartitionId) + 21384LL);
    v8 = ExAcquireSpinLockExclusive(v7);
    AttachedThreads = VmWorkingSetList->AttachedThreads;
    v10 = v8;
    LOBYTE(EntireFlags) = v8;
    if ( AttachedThreads )
    {
      v11 = v7;
      if ( v8 != 17 )
      {
        v12 = v8;
LABEL_14:
        ExReleaseSpinLockExclusive(v11, v12);
        return;
      }
    }
    else
    {
      v13 = 0LL;
      while ( 1 )
      {
        v14 = &a1->Vm.Instance.WorkingSetExpansionLinks[v13];
        if ( v13 == 1 )
          break;
        if ( ++v13 > 1 )
          goto LABEL_23;
      }
      Flink = v14->Flink;
      if ( v14->Flink->Blink != v14 || (Blink = v14->Blink, Blink->Flink != v14) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      v14->Flink = 0LL;
LABEL_23:
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36200);
      _InterlockedOr((volatile signed __int32 *)&a1->500, 0x80u);
      if ( v10 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36200);
      else
        ExReleaseSpinLockExclusive(&dword_140E36200, v10);
      if ( *p_AccessLog )
      {
        if ( (a1->Vm.Instance.Flags.EntireFlags & 0xF) == 1 )
          v17 = &MiSystemPartition;
        else
          v17 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * a1->Vm.Instance.PartitionId);
        MiEmptyPageAccessLog((__int64)v17, *p_AccessLog);
        *p_AccessLog = 0LL;
      }
      KeWaitForAllContextSwaps(a1);
      KeFlushProcessTb(a1->Pcb.DirectoryTableBase);
      if ( a1->Vm.Shared.ShadowMapping )
        KeFlushProcessTb(a1->Pcb.UserDirectoryTableBase);
      v18 = a1->Pcb.DirectoryTableBase >> 12;
      v19 = 48 * v18 - 0x220000000000LL;
      v20 = -1LL;
      v21 = MiMapPageInHyperSpaceWorker(v18, (unsigned __int8 *)&EntireFlags, 0x80000000);
      if ( *p_ActualWslePages )
      {
        v22 = ((unsigned __int64)(8 * (unsigned int)((unsigned __int64)(qword_140E37DB0 + 0x8000000000LL) >> 39)
                                + 2109657088) >> 3) & 0x1FF;
        v23 = *(_QWORD *)(v21 + 8 * v22);
        *(_QWORD *)(v21 + 8 * v22) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v20 = (v23 >> 12) & 0xFFFFFFFFFFLL;
      }
      TransitionPte = MiMakeTransitionPte(v18, 4);
      *(_QWORD *)(v26 + 8 * v25) = TransitionPte;
      v27 = TransitionPte;
      MiUnmapPageInHyperSpaceWorker(v26, 0x11u, 0x80000000);
      if ( v20 != -1 )
      {
        MiOutSwapFreeSoftWslePxe(a1, v20);
        MiLockAndDecrementShareCount(v19, 2LL);
      }
      MiLockAndDecrementShareCount(v19, 2LL);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), EntireFlags);
      __writecr8((unsigned __int8)EntireFlags);
      v28 = ExAcquireSpinLockExclusive(&dword_140E36200);
      EntireFlags = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&EntireFlags);
        while ( *(__int64 *)(v19 + 24) < 0 );
      }
      *(_QWORD *)(v19 + 8) = &a1->PageDirectoryPte;
      a1->PageDirectoryPte = v27;
      a1->Vm.Instance.WorkingSetLeafSize = 0LL;
      a1->Vm.Instance.WorkingSetLeafPrivateSize = 0LL;
      a1->Vm.Instance.WorkingSetSize = 0LL;
      a1->Vm.Instance.WorkingSetPrivateSize = 0LL;
      if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
        MiBadShareCount(v19);
      v29 = *(_QWORD *)(v19 + 24);
      *(_QWORD *)(v19 + 24) = ((v29 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v29 ^ ((v29 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
      if ( (v29 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v19, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v11 = &dword_140E36200;
      if ( v28 != 17 )
      {
        v12 = v28;
        goto LABEL_14;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  }
}
