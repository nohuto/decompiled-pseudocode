/*
 * XREFs of MiSplitDriverPage @ 0x140B497A8
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MmReleaseLoadLockShared @ 0x14049E268 (MmReleaseLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 *     MiAcquireLoadLockShared @ 0x1404A5064 (MiAcquireLoadLockShared.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, __int64 a2)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v5; // r8

  if ( *(struct _KTHREAD **)&stru_140E2D2D0.SavedApcStateFill[40] != KeGetCurrentThread() )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    if ( *(_QWORD *)(BaseLoaderPortion + 240) != v5 )
      MiAcquireLoadLockShared();
  }
  return (unsigned int)MiMakeDriverPagesPrivate(a1, a2, a2, 0);
}
