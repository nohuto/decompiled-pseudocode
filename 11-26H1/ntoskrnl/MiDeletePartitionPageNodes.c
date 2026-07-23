/*
 * XREFs of MiDeletePartitionPageNodes @ 0x14070D7B4
 * Callers:
 *     MiReturnAddMemoryResources @ 0x1406EEE10 (MiReturnAddMemoryResources.c)
 *     MiClearPartitionPageBitMap @ 0x14070D4BC (MiClearPartitionPageBitMap.c)
 *     MiDuplicatePartitionNodeTree @ 0x14070D848 (MiDuplicatePartitionNodeTree.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x14070D788 (MiDeletePartitionPageNode.c)
 */

void __fastcall MiDeletePartitionPageNodes(unsigned __int64 *a1)
{
  PVOID *v1; // rax
  PVOID *v3; // rbx
  PVOID **v4; // rcx
  PVOID *v5; // rsi
  PVOID *v6; // rax
  PVOID *i; // rcx

  v1 = (PVOID *)*a1;
  v3 = 0LL;
  while ( v1 )
  {
    v3 = v1;
    v1 = (PVOID *)*v1;
  }
  while ( v3 )
  {
    v4 = (PVOID **)v3[1];
    v5 = v3;
    v6 = v3;
    if ( v4 )
    {
      v3 = (PVOID *)v3[1];
      for ( i = *v4; i; i = (PVOID *)*i )
        v3 = i;
    }
    else
    {
      while ( 1 )
      {
        v3 = (PVOID *)((unsigned __int64)v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || *v3 == v6 )
          break;
        v6 = v3;
      }
    }
    RtlAvlRemoveNode(a1, (__int64)v5);
    MiDeletePartitionPageNode(v5);
  }
}
