/*
 * XREFs of MiDeletePartitionPageNode @ 0x14070D788
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x14070D5EC (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14070D7B4 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x14070DA30 (MiFreePartitionTree.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14070E194 (MiPartitionDeleteMemoryNode.c)
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 *     MiFinishChildPartitionHotAdd @ 0x1408821A0 (MiFinishChildPartitionHotAdd.c)
 *     MiHotAddPartitionMemory @ 0x140882270 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
