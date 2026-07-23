/*
 * XREFs of CmpHiveCacheEntryLockRelease @ 0x140868374
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x140867F94 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x14086808C (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1408683C0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1408684F8 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall CmpHiveCacheEntryLockRelease(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 304;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 304), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 304));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
