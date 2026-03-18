/*
 * XREFs of CmpHiveCacheEntryLockRelease @ 0x140861F94
 * Callers:
 *     CmpHiveCacheClaimHiveEntry @ 0x140861BB4 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x140861CAC (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x140861FE0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x140862118 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
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
