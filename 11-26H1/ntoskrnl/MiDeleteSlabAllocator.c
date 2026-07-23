/*
 * XREFs of MiDeleteSlabAllocator @ 0x14070B460
 * Callers:
 *     <none>
 * Callees:
 *     MiAsyncSlabReplenish @ 0x1402A4ED4 (MiAsyncSlabReplenish.c)
 *     MiFreeSlabEntries @ 0x1402A6AEC (MiFreeSlabEntries.c)
 */

__int64 __fastcall MiDeleteSlabAllocator(__int64 a1, __int64 a2)
{
  MiAsyncSlabReplenish(a2, 0LL, 2);
  MiFreeSlabEntries(a1, a2, 1);
  return 0LL;
}
