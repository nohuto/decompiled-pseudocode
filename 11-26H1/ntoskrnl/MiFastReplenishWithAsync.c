/*
 * XREFs of MiFastReplenishWithAsync @ 0x1402A5938
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020607C (MiReplenishSlabAllocator.c)
 *     MiAsyncSlabReplenish @ 0x1402A5984 (MiAsyncSlabReplenish.c)
 */

__int64 __fastcall MiFastReplenishWithAsync(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // ebx

  v6 = MiReplenishSlabAllocator(a1, a2, 0x40u, a4);
  if ( !v6 )
    MiAsyncSlabReplenish(a1, 0LL, a3);
  return v6;
}
