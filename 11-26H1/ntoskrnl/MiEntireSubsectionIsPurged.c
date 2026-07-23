/*
 * XREFs of MiEntireSubsectionIsPurged @ 0x14052C1C0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14050A360 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiDecrementModifiedWriteCount @ 0x140462920 (MiDecrementModifiedWriteCount.c)
 *     MiMarkControlAreaDeleted @ 0x140486A28 (MiMarkControlAreaDeleted.c)
 *     MiDestroySection @ 0x1404E0004 (MiDestroySection.c)
 *     MiTranslateSubsectionState @ 0x14050EA70 (MiTranslateSubsectionState.c)
 *     MiDeleteFileExtentList @ 0x1407735B4 (MiDeleteFileExtentList.c)
 */

__int64 __fastcall MiEntireSubsectionIsPurged(__int64 a1, KIRQL a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  void *v7; // rsi
  void *v8; // r12
  __int64 v9; // r14
  int v10; // r15d
  __int64 *v11; // rdi
  __int64 v12; // rdx
  volatile LONG *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8

  v2 = *(_QWORD *)a1;
  result = MiTranslateSubsectionState((__int64 *)a1, 0);
  if ( (int)result >= 0 )
  {
    MiUpdateSystemProtoPtesTree((_QWORD *)(v6 + 120), 2);
    v7 = 0LL;
    v8 = *(void **)(a1 + 8);
    v9 = 8LL * *(unsigned int *)(a1 + 44);
    if ( *(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 56) & 0x30000000) == 0x20000000 )
    {
      v7 = *(void **)(a1 + 112);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    v10 = 0;
    *(_QWORD *)(a1 + 80) = 0LL;
    v11 = MiDecrementModifiedWriteCount(v2, 1);
    if ( !(*(_QWORD *)(v2 + 24) | *(_QWORD *)(v2 + 32) | *(_QWORD *)(v2 + 40)) && !*(_DWORD *)(v2 + 76) )
    {
      MiRemoveUnusedSegment(v2);
      LOBYTE(v12) = a2;
      MiMarkControlAreaDeleted(v2, v12);
      v10 = 1;
    }
    v13 = (volatile LONG *)(v2 + 72);
    if ( a2 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v13);
    else
      ExReleaseSpinLockExclusive(v13, a2);
    if ( v10 )
      MiDestroySection(v2);
    if ( v11 )
      MiReleaseControlAreaWaiters(v11, v14, v15);
    MiFreeProtoPool(v8, v9);
    if ( v7 )
      MiDeleteFileExtentList(v7);
    return 0LL;
  }
  return result;
}
