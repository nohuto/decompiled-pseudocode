/*
 * XREFs of VrpLockDiffHiveTableExclusive @ 0x14094B720
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14094B2FC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14094B4B8 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *VrpLockDiffHiveTableExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&gLoadedDiffHivesLock, result, (__int64)&gLoadedDiffHivesLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
