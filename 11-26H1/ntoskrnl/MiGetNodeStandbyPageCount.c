/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x1402AAAA8
 * Callers:
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiRebuildLargePages @ 0x1402AA1C0 (MiRebuildLargePages.c)
 *     MiFreeZeroPagesNeeded @ 0x1402AAA2C (MiFreeZeroPagesNeeded.c)
 *     MiCheckZeroFreeRebalance @ 0x14049AF4C (MiCheckZeroFreeRebalance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0LL;
  v4 = (__int64 *)(704 * (a3 + 80LL * a2) + *(_QWORD *)(a1 + 16) + 4176LL);
  v5 = 8LL;
  do
  {
    v6 = *v4;
    v4 += 11;
    v3 += v6;
    --v5;
  }
  while ( v5 );
  return v3;
}
