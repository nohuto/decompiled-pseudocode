/*
 * XREFs of MiIncreaseCommitLimits @ 0x14070A538
 * Callers:
 *     MiEnableNewPfns @ 0x1406ED114 (MiEnableNewPfns.c)
 *     MiInitializeCommitment @ 0x14070A674 (MiInitializeCommitment.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     MiCompleteMemoryAddition @ 0x14086BF6C (MiCompleteMemoryAddition.c)
 *     MiFreePartitionPhysicalPages @ 0x14086F5B8 (MiFreePartitionPhysicalPages.c)
 *     MiInsertPageFileInList @ 0x14087206C (MiInsertPageFileInList.c)
 *     MiUpdateExistingPageFile @ 0x140872760 (MiUpdateExistingPageFile.c)
 *     MiExtendPagingFiles @ 0x140B316B4 (MiExtendPagingFiles.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 *     MiComputeCommitThresholds @ 0x1404F38EC (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x1406FDC54 (MiUpdatePageFileList.c)
 */

void __fastcall MiIncreaseCommitLimits(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6)
{
  volatile LONG *v6; // rsi
  KIRQL v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax

  v6 = (volatile LONG *)(a1 + 17272);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17272));
  if ( a2 )
  {
    if ( a4 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 23104), a4);
      if ( a5 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 23168), a4);
    }
    else if ( *(_QWORD *)(a1 + 17288) )
    {
      v12 = MiRestockOverCommit(a1, a2);
      v13 = a2 - v12;
      if ( a2 != v12 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 23104), v13);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 23168), v13);
      }
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 23448), a2);
  }
  if ( a3 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 17224), a3);
    KeSetEvent((PRKEVENT)(a1 + 1008), 0, 0);
  }
  MiComputeCommitThresholds(a1, 1);
  if ( a6 )
  {
    MiUpdatePageFileList(a6, 3);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 23104), 2uLL);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 23168), 2uLL);
    v14 = *(unsigned int *)(a1 + 22296);
    *(_QWORD *)(a1 + 8 * v14 + 22304) = a6;
    *(_DWORD *)(a1 + 22296) = v14 + 1;
  }
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  else
    ExReleaseSpinLockExclusive(v6, v11);
}
