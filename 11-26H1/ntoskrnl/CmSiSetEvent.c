/*
 * XREFs of CmSiSetEvent @ 0x1406E3094
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x140862118 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

__int64 __fastcall CmSiSetEvent(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  return 0LL;
}
