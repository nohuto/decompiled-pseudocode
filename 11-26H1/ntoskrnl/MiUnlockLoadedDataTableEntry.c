/*
 * XREFs of MiUnlockLoadedDataTableEntry @ 0x14049E228
 * Callers:
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x140701EA0 (MmUnlockLoadedDataTableEntryShared.c)
 * Callees:
 *     MmReleaseLoadLockShared @ 0x14049E268 (MmReleaseLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 */

__int64 __fastcall MiUnlockLoadedDataTableEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)&stru_140E2D2D0.SavedApcStateFill[40] != CurrentThread )
    MiUnlockLoaderEntry(a1, a2 == 0 ? 2 : 0);
  return MmReleaseLoadLockShared(CurrentThread);
}
