/*
 * XREFs of RaspDestroyCachedBitmap @ 0x140C5AEA4
 * Callers:
 *     BgpRasPrintGlyph @ 0x1404A69C8 (BgpRasPrintGlyph.c)
 *     RaspAddCacheEntry @ 0x140C5820C (RaspAddCacheEntry.c)
 *     RaspClearCache @ 0x140C5AE48 (RaspClearCache.c)
 * Callees:
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 *     RaspRectangleDestroy @ 0x140534220 (RaspRectangleDestroy.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  v5 = 0LL;
  RaspRectangleDestroy(v2, &v4);
  return RaspFreeMemory(a1, &v4);
}
