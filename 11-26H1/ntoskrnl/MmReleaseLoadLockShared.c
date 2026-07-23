/*
 * XREFs of MmReleaseLoadLockShared @ 0x14049E268
 * Callers:
 *     MiUnlockLoadedDataTableEntry @ 0x14049E228 (MiUnlockLoadedDataTableEntry.c)
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 *     MiLockLoadedDataTableEntry @ 0x140701E40 (MiLockLoadedDataTableEntry.c)
 *     FsRtlSetDriverBacking @ 0x140792A50 (FsRtlSetDriverBacking.c)
 *     MmFreeDriverInitialization @ 0x14086AA84 (MmFreeDriverInitialization.c)
 *     MiSplitDriverPage @ 0x140B497A8 (MiSplitDriverPage.c)
 * Callees:
 *     MiReleaseLoadLock @ 0x14049E290 (MiReleaseLoadLock.c)
 */

__int64 __fastcall MmReleaseLoadLockShared(struct _KTHREAD *CurrentThread)
{
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  return MiReleaseLoadLock(CurrentThread, 0LL);
}
