/*
 * XREFs of MiPartitionTransferAllocateHugeRange @ 0x14087C900
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140B60228 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x14044ADA0 (MiGetNextPageColor.c)
 *     MiGetHugeBadRangeFromNode @ 0x1406EB6AC (MiGetHugeBadRangeFromNode.c)
 *     MiGetHugeRange @ 0x1406EB880 (MiGetHugeRange.c)
 *     MiHugeRangeIsZeroed @ 0x1406EC42C (MiHugeRangeIsZeroed.c)
 *     MiAddRangeToPartitionTree @ 0x14070821C (MiAddRangeToPartitionTree.c)
 *     MiInsertHugeRangeInPartition @ 0x140708E54 (MiInsertHugeRangeInPartition.c)
 */

__int64 __fastcall MiPartitionTransferAllocateHugeRange(__int64 a1)
{
  __int64 v1; // r14
  int v3; // r15d
  int v4; // ebp
  unsigned int *v5; // rax
  unsigned int v6; // eax
  int HugeBadRangeFromNode; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int NextPageColor; // eax
  __int64 v12; // rbx
  char IsZeroed; // di
  unsigned __int64 v15; // rbx
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 28) & 0x800;
  v16[0] = 0LL;
  v5 = *(unsigned int **)(a1 + 48);
  while ( 1 )
  {
    v6 = *v5;
    if ( v4 )
    {
      HugeBadRangeFromNode = MiGetHugeBadRangeFromNode((unsigned __int16 *)v1, v6);
    }
    else
    {
      v9 = *(_QWORD *)(v1 + 16);
      v10 = 56320LL * v6;
      MiInitializePageColorBase(0LL, 0, v6 + 1, (__int64)v16);
      *(_QWORD *)&v16[0] = v10 + v9 + 14128;
      NextPageColor = MiGetNextPageColor((__int64)v16);
      HugeBadRangeFromNode = MiGetHugeRange(v1, NextPageColor, (v3 & 1) != 0 ? 4096 : 4144);
    }
    v12 = HugeBadRangeFromNode & 0x3FFFFF;
    if ( (HugeBadRangeFromNode & 0x3FFFFF) != 0 )
      break;
    v5 = (unsigned int *)(*(_QWORD *)(a1 + 48) + 4LL);
    *(_QWORD *)(a1 + 48) = v5;
    if ( v5 == *(unsigned int **)(a1 + 56) )
      return 3221225495LL;
  }
  IsZeroed = MiHugeRangeIsZeroed(v8, HugeBadRangeFromNode);
  v15 = v12 << 18;
  if ( (unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)(a1 + 40), v15, 0x40000uLL, IsZeroed) )
  {
    *(_QWORD *)(a1 + 64) += 0x40000LL;
    return 0LL;
  }
  else
  {
    MiInsertHugeRangeInPartition(v15, IsZeroed);
    return 3221225626LL;
  }
}
