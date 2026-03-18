/*
 * XREFs of MiFreeCombineBlock @ 0x1402C67C4
 * Callers:
 *     MiSharePagesCleanup @ 0x1402C65C0 (MiSharePagesCleanup.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiDemoteCombinedPte @ 0x1402FE120 (MiDemoteCombinedPte.c)
 *     MiDecrementCombinedPteEx @ 0x14036A1BC (MiDecrementCombinedPteEx.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall MiFreeCombineBlock(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  volatile LONG *v7; // rcx
  KIRQL v8; // r14
  volatile LONG *v9; // rcx
  volatile LONG *v10; // rcx
  KIRQL v11; // r14
  _QWORD *v13; // rcx
  unsigned int i; // eax
  __int64 v15; // r8
  _QWORD *v16; // rdx
  unsigned __int64 *v17; // rax
  __int64 v18; // rcx
  volatile LONG *v19; // rcx

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v6 = v5 + 16 * ((*(_QWORD *)(a1 + 24) & 0xFLL) + 6);
    v7 = (volatile LONG *)(v6 + 8);
    if ( a2 )
    {
      v8 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v7);
    }
    else
    {
      v8 = ExAcquireSpinLockExclusive(v7);
    }
    RtlAvlRemoveNode(v6, a1);
    v9 = (volatile LONG *)(v6 + 8);
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, v8);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v10 = (volatile LONG *)(v5 + 88);
  *(_QWORD *)(a1 + 48) &= 0xFFFFFFFFFFFFFFE0uLL;
  if ( a2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v10);
  }
  if ( (*(_DWORD *)(v2 + 8))-- == 1 )
  {
    v13 = (_QWORD *)(v2 + 72);
    for ( i = 0; i < 0x37; ++i )
    {
      if ( v13 != (_QWORD *)a1 )
      {
        v15 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 )
          goto LABEL_22;
        v16 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v16 != v13 )
          goto LABEL_22;
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      v13 += 9;
    }
    *(_QWORD *)v2 = *(_QWORD *)(v5 + 24);
    *(_QWORD *)(v5 + 24) = v2;
    if ( !*(_QWORD *)v2 )
    {
      *(_QWORD *)(v5 + 56) = v5;
      *(_QWORD *)(v5 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v5 + 32) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v17 = (unsigned __int64 *)(v5 + 72);
    v18 = *(_QWORD *)(v5 + 72);
    if ( *(_QWORD *)(v18 + 8) != v5 + 72 )
LABEL_22:
      __fastfail(3u);
    *(_QWORD *)a1 = v18;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(v18 + 8) = a1;
    *v17 = a1;
  }
  v19 = (volatile LONG *)(v5 + 88);
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v19);
  else
    ExReleaseSpinLockExclusive(v19, v11);
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 388));
}
