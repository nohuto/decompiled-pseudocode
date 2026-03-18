/*
 * XREFs of MI_FLUSH_ENTIRE_TB @ 0x140250014
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiConvertHiberPhasePages @ 0x140C00AE4 (MiConvertHiberPhasePages.c)
 * Callees:
 *     KeFlushCurrentTbOnly @ 0x140250688 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
 */

__int64 __fastcall MI_FLUSH_ENTIRE_TB(__int64 a1, int a2)
{
  if ( a2 == -1 )
    return KeFlushCurrentTbOnly();
  else
    return KeFlushTb();
}
