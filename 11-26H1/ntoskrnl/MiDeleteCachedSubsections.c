/*
 * XREFs of MiDeleteCachedSubsections @ 0x1404A6F5C
 * Callers:
 *     MiPruneUnusedList @ 0x14048F610 (MiPruneUnusedList.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406E74F0 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiProcessDeleteOnClose @ 0x1406E7900 (MiProcessDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveListSentinel @ 0x14030C498 (MiRemoveListSentinel.c)
 *     MiFreeProtoPool @ 0x140458808 (MiFreeProtoPool.c)
 *     MiWakeCommitRequest @ 0x1404A3584 (MiWakeCommitRequest.c)
 *     MiDestroySection @ 0x1404E6B64 (MiDestroySection.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 *     MiDeleteFileExtentList @ 0x1407705B4 (MiDeleteFileExtentList.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 */

unsigned __int64 __fastcall MiDeleteCachedSubsections(__int64 a1, KIRQL a2)
{
  volatile LONG *v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  int v7; // r14d
  int *v8; // rsi
  __int64 i; // r12
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  void *v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rax

  v3 = (volatile LONG *)(*(_QWORD *)(a1 + 64) + 2112LL);
  if ( a2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, a2);
  v4 = *(unsigned int *)(a1 + 1504);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    v8 = (int *)(a1 + 104);
    for ( i = (unsigned int)v4; i; --i )
    {
      v10 = *v8;
      if ( *((_BYTE *)v8 + 4) )
      {
        v11 = *((_QWORD *)v8 - 1);
        if ( v10 == 1 )
          MiDestroySection(v11);
        else
          MiSegmentDelete(v11);
      }
      else if ( v10 == 1 )
      {
        v12 = MiDeleteCachedSubsection(a1, v8 - 2);
        if ( v12 < 0 )
        {
          if ( v12 != -1073741792 && v12 != -1073741245 && v12 != -1073741688 && v12 != -1073741431 && !v7 )
            v7 = 1;
          goto LABEL_22;
        }
      }
      else
      {
        MiFreeProtoPool(*((PVOID *)v8 + 7), *((_QWORD *)v8 + 8));
        v13 = (void *)*((_QWORD *)v8 + 9);
        if ( v13 )
          MiDeleteFileExtentList(v13);
      }
      if ( *(_DWORD *)(a1 + 56) == 2 )
        MiWakeCommitRequest(v6, 1);
LABEL_22:
      v8 += 22;
    }
  }
  *(_DWORD *)(a1 + 1504) = 0;
  v14 = v4;
  if ( v7 )
  {
    ++*(_DWORD *)(a1 + 60);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 2112));
  if ( (_DWORD)v4 )
  {
    v15 = (_QWORD *)(a1 + 112);
    do
    {
      v16 = MiRemoveListSentinel((_QWORD *)(v6 + 2352), v15);
      v15 += 11;
      v5 = v16;
      --v14;
    }
    while ( v14 );
  }
  return v5;
}
