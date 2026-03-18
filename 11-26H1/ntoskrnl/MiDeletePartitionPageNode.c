/*
 * XREFs of MiDeletePartitionPageNode @ 0x140708AD4
 * Callers:
 *     MiClearRangeInPartitionTree @ 0x140708938 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x140708B00 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x140708D7C (MiFreePartitionTree.c)
 *     MiInsertPartitionPageNodes @ 0x140708F28 (MiInsertPartitionPageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x1407094E0 (MiPartitionDeleteMemoryNode.c)
 *     MiReturnPartitionPagesToParent @ 0x1407098B8 (MiReturnPartitionPagesToParent.c)
 *     MiFinishChildPartitionHotAdd @ 0x14087BDA0 (MiFinishChildPartitionHotAdd.c)
 *     MiHotAddPartitionMemory @ 0x14087BE70 (MiHotAddPartitionMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartitionPageNode(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
