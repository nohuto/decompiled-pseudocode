/*
 * XREFs of VrpUnlockDiffHiveTable @ 0x140979A98
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14097991C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140979CB0 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x140979D3C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
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
