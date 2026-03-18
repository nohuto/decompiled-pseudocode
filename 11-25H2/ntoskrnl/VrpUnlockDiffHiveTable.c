/*
 * XREFs of VrpUnlockDiffHiveTable @ 0x14094B5B8
 * Callers:
 *     VrpFindDiffHiveEntryForMountPoint @ 0x140947338 (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14094B2FC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14094B4B8 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

void VrpUnlockDiffHiveTable()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&gLoadedDiffHivesLock);
  v0 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v1 = gLoadedDiffHivesLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, v0, gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  KeLeaveCriticalRegion();
}
