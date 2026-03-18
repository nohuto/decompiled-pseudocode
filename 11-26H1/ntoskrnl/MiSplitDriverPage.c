/*
 * XREFs of MiSplitDriverPage @ 0x140B47A14
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MmReleaseLoadLockShared @ 0x1404A4BD8 (MmReleaseLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1404A4C7C (MiUnlockLoaderEntry.c)
 *     MiAcquireLoadLockShared @ 0x1404AB9D4 (MiAcquireLoadLockShared.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     MiLockLoaderEntry @ 0x14051E298 (MiLockLoaderEntry.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, __int64 a2)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v5; // r8

  if ( *(struct _KTHREAD **)&stru_140E2D150.SavedApcStateFill[40] != KeGetCurrentThread() )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    if ( *(_QWORD *)(BaseLoaderPortion + 240) != v5 )
      MiAcquireLoadLockShared();
  }
  return (unsigned int)MiMakeDriverPagesPrivate(a1, a2, a2, 0);
}
