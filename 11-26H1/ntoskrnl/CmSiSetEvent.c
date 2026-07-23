/*
 * XREFs of CmSiSetEvent @ 0x1406E7D40
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1408684F8 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

__int64 __fastcall CmSiSetEvent(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  return 0LL;
}
