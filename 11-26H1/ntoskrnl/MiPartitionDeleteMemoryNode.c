/*
 * XREFs of MiPartitionDeleteMemoryNode @ 0x14070E194
 * Callers:
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x14070D788 (MiDeletePartitionPageNode.c)
 *     MiUpdatePhysicalPages @ 0x14070EC74 (MiUpdatePhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiPartitionDeleteMemoryNode(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  KIRQL v8; // bp
  volatile LONG *v9; // rcx

  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v5 = *(PVOID **)(a1 + 24);
    if ( v5 )
    {
      v6 = a2 & 0x3FFFFFFFFFFFFFFFLL;
      do
      {
        v7 = (unsigned __int64)v5[3] & 0x3FFFFFFFFFFFFFFFLL;
        if ( v6 < v7 )
        {
          v5 = (PVOID *)*v5;
        }
        else
        {
          if ( v6 < (unsigned __int64)v5[4] + v7 )
            break;
          v5 = (PVOID *)v5[1];
        }
      }
      while ( v5 );
    }
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), (__int64)v5);
    MiUpdatePhysicalPages(a1, -a3, 0LL);
    v9 = (volatile LONG *)(a1 + 272);
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, v8);
    MiMakePartitionMemoryBlock(a1);
    MiDeletePartitionPageNode(v5);
  }
}
