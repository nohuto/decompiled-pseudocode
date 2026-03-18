/*
 * XREFs of PfLockSharedRelease @ 0x1404B5064
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x1409B5FA0 (PfSnGetPrefetchInstructions.c)
 *     PfCheckDeprioritizeFile @ 0x1409C4504 (PfCheckDeprioritizeFile.c)
 *     PfSnIsHostingApplication @ 0x1409E9178 (PfSnIsHostingApplication.c)
 *     PfSnBeginAppLaunch @ 0x1409E9DD0 (PfSnBeginAppLaunch.c)
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 *     PfCheckDeprioritizeImage @ 0x140A94254 (PfCheckDeprioritizeImage.c)
 *     PfpRpCHashDeleteEntries @ 0x140AABCD8 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140AF7B7C (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void __fastcall PfLockSharedRelease(struct _KTHREAD *a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
