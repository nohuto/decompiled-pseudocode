/*
 * XREFs of MiUpdatePhysicalPages @ 0x140709FC0
 * Callers:
 *     MiPerformMemoryChange @ 0x1406E9974 (MiPerformMemoryChange.c)
 *     MiInsertPartitionPageNodes @ 0x140708F28 (MiInsertPartitionPageNodes.c)
 *     MiMergePageNodes @ 0x1407090F4 (MiMergePageNodes.c)
 *     MiMoveBadPagePartition @ 0x1407093D4 (MiMoveBadPagePartition.c)
 *     MiPartitionDeleteMemoryNode @ 0x1407094E0 (MiPartitionDeleteMemoryNode.c)
 *     MiRemovePartitionPages @ 0x14070967C (MiRemovePartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x140709A80 (MiTransferPartitionPageRun.c)
 *     MiCreateDynamicPfns @ 0x140865E98 (MiCreateDynamicPfns.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
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
