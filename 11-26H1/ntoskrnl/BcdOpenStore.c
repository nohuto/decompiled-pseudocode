/*
 * XREFs of BcdOpenStore @ 0x1407763EC
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D9F4C (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 */

NTSTATUS __cdecl BcdOpenStore(UNICODE_STRING *BcdFilePath, BCD_OPEN_FLAGS BcdOpenFlags, PHANDLE BcdStoreHandle)
{
  return BiOpenStoreWithHash(BcdFilePath, BcdOpenFlags, BcdStoreHandle, BcdStoreHandle);
}
