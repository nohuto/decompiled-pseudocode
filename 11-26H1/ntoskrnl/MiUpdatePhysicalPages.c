/*
 * XREFs of MiUpdatePhysicalPages @ 0x14070EC74
 * Callers:
 *     MiPerformMemoryChange @ 0x1406EE614 (MiPerformMemoryChange.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiMergePageNodes @ 0x14070DDA8 (MiMergePageNodes.c)
 *     MiMoveBadPagePartition @ 0x14070E088 (MiMoveBadPagePartition.c)
 *     MiPartitionDeleteMemoryNode @ 0x14070E194 (MiPartitionDeleteMemoryNode.c)
 *     MiRemovePartitionPages @ 0x14070E330 (MiRemovePartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiUpdatePhysicalPages(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rdi
  KIRQL v6; // r8

  v3 = (volatile LONG *)(a1 + 272);
  if ( a3 )
    v6 = ExAcquireSpinLockExclusive(v3);
  else
    v6 = 17;
  *(_QWORD *)(a1 + 22288) += a2;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v6 != 17 )
    ExReleaseSpinLockExclusive(v3, v6);
}
