/*
 * XREFs of MiFreePartitionNodePages @ 0x14070D8F4
 * Callers:
 *     MiFreePartitionTree @ 0x14070DA30 (MiFreePartitionTree.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 * Callees:
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFreePartitionNodePages(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edx
  _QWORD v8[2]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+34h] [rbp-44h]
  unsigned int v10; // [rsp+38h] [rbp-40h]

  memset_0(v8, 0, 0x48uLL);
  v6 = 4;
  v8[0] = a1;
  if ( (a3 & 4) != 0 )
  {
    v6 = (a3 & 0x10 | 8) >> 3;
  }
  else if ( (a3 & 1) != 0 )
  {
    v6 = 2;
    v9 = 2;
    if ( (a3 & 0x18) != 0x18 )
      v6 = 0;
  }
  MiActOnPartitionNodePages(a2, v6, a3, v8);
  return v10;
}
