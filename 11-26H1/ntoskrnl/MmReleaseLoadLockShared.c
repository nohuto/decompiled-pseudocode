/*
 * XREFs of MmReleaseLoadLockShared @ 0x1404A4BD8
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x1404A4B98 (MiUnlockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1404E5184 (MiEnumerateSystemImages.c)
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 *     FsRtlSetDriverBacking @ 0x14078FF20 (FsRtlSetDriverBacking.c)
 *     MmFreeDriverInitialization @ 0x1408646A4 (MmFreeDriverInitialization.c)
 *     MiSplitDriverPage @ 0x140B47A14 (MiSplitDriverPage.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x1404A4C00 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLockShared(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 0LL);
}
