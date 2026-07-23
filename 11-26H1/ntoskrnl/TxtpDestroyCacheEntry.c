/*
 * XREFs of TxtpDestroyCacheEntry @ 0x140C58B30
 * Callers:
 *     TxtpAddCacheEntry @ 0x140C587F0 (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x140C58AD4 (TxtpClearCache.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x140C59414 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
