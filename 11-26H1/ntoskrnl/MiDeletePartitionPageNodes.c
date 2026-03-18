/*
 * XREFs of MiDeletePartitionPageNodes @ 0x140708B00
 * Callers:
 *     MiReturnAddMemoryResources @ 0x1406EA170 (MiReturnAddMemoryResources.c)
 *     MiClearPartitionPageBitMap @ 0x140708808 (MiClearPartitionPageBitMap.c)
 *     MiDuplicatePartitionNodeTree @ 0x140708B94 (MiDuplicatePartitionNodeTree.c)
 *     MmRemovePhysicalMemory @ 0x140867460 (MmRemovePhysicalMemory.c)
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x140708AD4 (MiDeletePartitionPageNode.c)
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
