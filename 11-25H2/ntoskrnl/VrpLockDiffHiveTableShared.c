/*
 * XREFs of VrpLockDiffHiveTableShared @ 0x14094B61C
 * Callers:
 *     VrpFindDiffHiveEntryForMountPoint @ 0x140947338 (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14094B2FC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 VrpLockDiffHiveTableShared()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(
               (signed __int64 *)&gLoadedDiffHivesLock,
               0,
               v1,
               (unsigned __int64)&gLoadedDiffHivesLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
