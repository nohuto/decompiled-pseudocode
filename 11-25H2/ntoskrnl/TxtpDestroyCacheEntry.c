/*
 * XREFs of TxtpDestroyCacheEntry @ 0x140BA43D4
 * Callers:
 *     TxtpAddCacheEntry @ 0x140BA33FC (TxtpAddCacheEntry.c)
 *     TxtpClearCache @ 0x140BA437C (TxtpClearCache.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpGxRectangleDestroy @ 0x140BA3F04 (BgpGxRectangleDestroy.c)
 */

void __fastcall TxtpDestroyCacheEntry(__int64 a1)
{
  BgpGxRectangleDestroy(*(_QWORD *)(a1 + 48));
  BgpFwFreeMemory(a1);
}
