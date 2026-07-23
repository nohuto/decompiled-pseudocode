/*
 * XREFs of PfLockSharedRelease @ 0x1404AE4B4
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140987060 (PfSnGetPrefetchInstructions.c)
 *     PfCheckDeprioritizeFile @ 0x1409954E4 (PfCheckDeprioritizeFile.c)
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnIsHostingApplication @ 0x1409D33F0 (PfSnIsHostingApplication.c)
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 *     PfCheckDeprioritizeImage @ 0x140A98DA4 (PfCheckDeprioritizeImage.c)
 *     PfpRpCHashDeleteEntries @ 0x140AA9288 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x140AFA21C (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void __fastcall PfLockSharedRelease(struct _KTHREAD *a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
