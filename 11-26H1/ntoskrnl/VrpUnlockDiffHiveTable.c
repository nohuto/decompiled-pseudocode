/*
 * XREFs of VrpUnlockDiffHiveTable @ 0x14093BAA8
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14093B92C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14093BCC0 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14093BD4C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void VrpUnlockDiffHiveTable()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt

  _m_prefetchw(&gLoadedDiffHivesLock);
  v0 = *(_QWORD *)&gLoadedDiffHivesLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&gLoadedDiffHivesLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (gLoadedDiffHivesLock.Header.Type & 2) != 0
    || (v1 = *(_QWORD *)&gLoadedDiffHivesLock.Header.Lock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&gLoadedDiffHivesLock,
                v0,
                *(signed __int64 *)&gLoadedDiffHivesLock.Header.Lock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((unsigned __int64)&gLoadedDiffHivesLock);
  KeLeaveCriticalRegion();
}
