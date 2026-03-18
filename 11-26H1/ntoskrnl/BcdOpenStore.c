/*
 * XREFs of BcdOpenStore @ 0x1407733EC
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1406D5E6C (WheaPersistBadPageToBcd.c)
 * Callees:
 *     BiOpenStoreWithHash @ 0x140773404 (BiOpenStoreWithHash.c)
 */

__int64 __fastcall BcdOpenStore(__int64 a1, __int64 a2, __int64 a3)
{
  return BiOpenStoreWithHash(a1, a2, a3, a3);
}
