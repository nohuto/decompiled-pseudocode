/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x14049AF4C
 * Callers:
 *     MiGetBestPageFromNode @ 0x140287CB0 (MiGetBestPageFromNode.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     MiNodeFreeZeroPages @ 0x14028E530 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1402AAAA8 (MiGetNodeStandbyPageCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 */

void __fastcall MiCheckZeroFreeRebalance(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // di
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // esi
  KIRQL v7; // r8

  v3 = 0;
  v4 = ((unsigned int)a2 >> 9) & 0x3F;
  v5 = *(_QWORD *)(a1 + 16) + 56320 * v4;
  if ( (unsigned __int8)byte_140E2D898 > 1u )
    v3 = BYTE1(a2) & 1;
  LOBYTE(a2) = v3;
  if ( (unsigned __int64)MiNodeFreeZeroPages(v5, a2, 0x80000) < 0x200
    && (unsigned __int64)MiGetNodeStandbyPageCount(a1, v4, v3) >= 0x1000
    && !*(_QWORD *)(a1 + 17320)
    && (*(_DWORD *)(a1 + 4) & 1) == 0 )
  {
    v6 = 0;
    v7 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
    if ( !*(_QWORD *)(a1 + 17320) && (*(_DWORD *)(a1 + 4) & 1) == 0 && PsReferencePartitionSafe(*(_QWORD *)(a1 + 256)) )
    {
      *(_QWORD *)(a1 + 17304) = 0LL;
      *(_QWORD *)(a1 + 17320) = MiRebalanceZeroFreeLists;
      v6 = 1;
      *(_QWORD *)(a1 + 17328) = a1;
    }
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
    else
      ExReleaseSpinLockExclusive(&dword_140E2ED00, v7);
    if ( v6 )
      ExQueueWorkItemToPartition((_QWORD *)(a1 + 17304), 1, 0xFFFFFFFF);
  }
}
