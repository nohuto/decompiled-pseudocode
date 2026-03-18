/*
 * XREFs of TxtpDestroyCacheEntry @ 0x140C52B30
 * Callers:
 *     TxtpAddCacheEntry @ 0x140C527F0 (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x140C52AD4 (TxtpClearCache.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x140C53414 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
