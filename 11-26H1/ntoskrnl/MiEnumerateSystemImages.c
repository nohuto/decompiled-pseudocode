/*
 * XREFs of MiEnumerateSystemImages @ 0x1404DE724
 * Callers:
 *     MmEnumerateSystemImages @ 0x1404DE6F0 (MmEnumerateSystemImages.c)
 *     MmEnumerateSystemImagesShared @ 0x1404DE708 (MmEnumerateSystemImagesShared.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 *     MiInitializeKernelCfg @ 0x140D04D10 (MiInitializeKernelCfg.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MmReleaseLoadLockShared @ 0x14049E268 (MmReleaseLoadLockShared.c)
 *     MiUnlockLoaderEntry @ 0x14049E30C (MiUnlockLoaderEntry.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     MiLockLoaderEntry @ 0x1405208A8 (MiLockLoaderEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateSystemImages(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  PVOID *i; // rdi
  int Lock; // eax
  PVOID *v8; // rdi
  int v9; // r14d

  v3 = 0;
  if ( *(struct _KTHREAD **)&stru_140E2D2D0.SavedApcStateFill[40] == KeGetCurrentThread() )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v3 = guard_dispatch_icall_no_overrides(i, a2);
      if ( v3 < 0 )
        break;
    }
  }
  else
  {
    Lock = MiAcquireLoadLock(0);
    v8 = (PVOID *)PsLoadedModuleList;
    v9 = Lock;
    while ( v8 != &PsLoadedModuleList )
    {
      if ( !v9 )
        MiLockLoaderEntry(v8, a3);
      v3 = guard_dispatch_icall_no_overrides(v8, a2);
      if ( !v9 )
        MiUnlockLoaderEntry((__int64)v8, a3);
      if ( v3 < 0 )
        break;
      v8 = (PVOID *)*v8;
    }
    MmReleaseLoadLockShared(0LL);
  }
  return (unsigned int)v3;
}
