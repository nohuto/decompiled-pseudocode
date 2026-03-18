/*
 * XREFs of MiIncreaseCommitLimits @ 0x140705868
 * Callers:
 *     MiEnableNewPfns @ 0x1406E8478 (MiEnableNewPfns.c)
 *     MiInitializeCommitment @ 0x1407059A4 (MiInitializeCommitment.c)
 *     MiInsertPartitionPageNodes @ 0x140708F28 (MiInsertPartitionPageNodes.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 *     MiCompleteMemoryAddition @ 0x140865B8C (MiCompleteMemoryAddition.c)
 *     MiFreePartitionPhysicalPages @ 0x1408691D8 (MiFreePartitionPhysicalPages.c)
 *     MiInsertPageFileInList @ 0x14086BC8C (MiInsertPageFileInList.c)
 *     MiUpdateExistingPageFile @ 0x14086C380 (MiUpdateExistingPageFile.c)
 *     MiExtendPagingFiles @ 0x140B2F8D4 (MiExtendPagingFiles.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
 *     MiComputeCommitThresholds @ 0x1404FA2DC (MiComputeCommitThresholds.c)
 *     MiUpdatePageFileList @ 0x1406F8F84 (MiUpdatePageFileList.c)
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
