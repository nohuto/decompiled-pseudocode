/*
 * XREFs of MiDeleteSubsectionPages @ 0x1404919FC
 * Callers:
 *     MiDeleteSegmentPages @ 0x140478E6C (MiDeleteSegmentPages.c)
 *     MiDeleteExtendSubsections @ 0x140778B40 (MiDeleteExtendSubsections.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x14036E5D0 (MiDecrementSubsectionViewCount.c)
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiFreeProtoPool @ 0x140458808 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140458D20 (MiUpdateSystemProtoPtesTree.c)
 *     MiGetCommittedPages @ 0x14045C518 (MiGetCommittedPages.c)
 */

__int64 __fastcall MiDeleteSubsectionPages(struct _KTHREAD *a1, int a2)
{
  __int64 v2; // rsi
  int v3; // r9d
  struct _LIST_ENTRY *Flink; // rdi
  volatile LONG *v6; // rsi
  __int64 v7; // r14
  KIRQL v8; // bp
  __int64 v10[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_QWORD *)&a1->Header.Lock;
  v12 = 0LL;
  *(_OWORD *)v10 = 0LL;
  v3 = a2;
  v11 = 0LL;
  if ( _bittest16((const signed __int16 *)(*(_QWORD *)v2 + 12LL), 0xAu) )
    MiGetCommittedPages((_QWORD *)v2);
  Flink = a1->Header.WaitListHead.Flink;
  if ( Flink )
    MiPurgeSubsection(
      a1,
      (ULONG_PTR)a1->Header.WaitListHead.Flink,
      (unsigned __int64)Flink + 8 * HIDWORD(a1->InitialStack),
      v3 | 2,
      v10);
  if ( (*(_DWORD *)(v2 + 56) & 0xA0) == 0x80 )
  {
    v6 = (volatile LONG *)(v2 + 72);
    v7 = 0LL;
    v8 = ExAcquireSpinLockExclusive(v6);
    MiDecrementSubsectionViewCount((ULONG_PTR)a1, 0);
    v13 = 0;
    while ( LODWORD(a1->SchedulingGroup) )
    {
      if ( v8 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      else
        ExReleaseSpinLockExclusive(v6, v8);
      KeYieldProcessorEx(&v13);
      ExAcquireSpinLockExclusive(v6);
    }
    if ( Flink )
    {
      MiUpdateSystemProtoPtesTree(($353D57E818BB6F967B4B818D974CF463 *)((char *)&a1->116 + 4), 2);
      a1->Header.WaitListHead.Flink = 0LL;
      v7 = 8LL * HIDWORD(a1->InitialStack);
    }
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    else
      ExReleaseSpinLockExclusive(v6, v8);
    if ( Flink )
      MiFreeProtoPool(Flink, v7);
  }
  return v12;
}
