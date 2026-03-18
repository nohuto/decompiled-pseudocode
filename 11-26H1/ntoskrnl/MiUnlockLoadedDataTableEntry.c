/*
 * XREFs of MiUnlockLoadedDataTableEntry @ 0x1404A4B98
 * Callers:
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1406FD1D0 (MmUnlockLoadedDataTableEntryShared.c)
 * Callees:
 *     MmReleaseLoadLockShared @ 0x1404A4BD8 (MmReleaseLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1404A4C7C (MiUnlockLoaderEntry.c)
 */

__int64 __fastcall MiUnlockLoadedDataTableEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)&stru_140E2D150.SavedApcStateFill[40] != CurrentThread )
    MiUnlockLoaderEntry(a1, a2 == 0 ? 2 : 0);
  return MmReleaseLoadLockShared(CurrentThread);
}
