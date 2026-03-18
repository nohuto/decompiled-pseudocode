/*
 * XREFs of CmSiWaitForSingleEvent @ 0x1404D0228
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x140861BB4 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall CmSiWaitForSingleEvent(__int64 a1)
{
  return KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
}
