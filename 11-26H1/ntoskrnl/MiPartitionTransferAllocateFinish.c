/*
 * XREFs of MiPartitionTransferAllocateFinish @ 0x140882BEC
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140B632C4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiFreePartitionTree @ 0x14070DA30 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14088314C (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiPartitionTransferAllocateFinish(__int64 a1, int a2)
{
  int v2; // r14d
  int updated; // edi
  ULONG *v4; // rsi
  ULONG *v6; // r12
  unsigned __int64 *v7; // r15
  int v8; // r9d
  unsigned __int64 *v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 28);
  updated = a2;
  v4 = *(ULONG **)a1;
  v6 = *(ULONG **)(a1 + 8);
  v7 = (unsigned __int64 *)(a1 + 40);
  v12 = 0LL;
  if ( a2 >= 0 && ((v2 & 0x200) != 0 || (updated = MiUpdatePartitionLargePfnBitMap(v6, a1 + 40), updated >= 0)) )
  {
    v8 = 1;
    v10 = v7;
    v11 = 0LL;
    if ( (v2 & 0x400) != 0 )
      v8 = 17;
    LODWORD(v12) = v8;
    if ( v4 != v6 )
    {
      v8 |= 2u;
      LODWORD(v12) = v8;
    }
    if ( (v2 & 8) != 0 )
    {
      v8 |= 4u;
      LODWORD(v12) = v8;
    }
    if ( (v2 & 0x200) != 0 )
    {
      v8 |= 8u;
      LODWORD(v12) = v8;
    }
    if ( (v4[1] & 0x20) != 0 )
      LODWORD(v12) = v8 | 0x100;
    return MiInsertPartitionPages(v4, v6, (__int64)&v10, *(_QWORD *)(a1 + 64));
  }
  else
  {
    MiFreePartitionTree((__int64)v4, v7, 0x401u, 1);
    return (unsigned int)updated;
  }
}
