/*
 * XREFs of MI_FLUSH_ENTIRE_TB @ 0x140251974
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiConvertHiberPhasePages @ 0x140C06CF4 (MiConvertHiberPhasePages.c)
 * Callees:
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 */

__int64 __fastcall MI_FLUSH_ENTIRE_TB(__int64 a1, int a2)
{
  if ( a2 == -1 )
    return KeFlushCurrentTbOnly();
  else
    return KeFlushTb();
}
