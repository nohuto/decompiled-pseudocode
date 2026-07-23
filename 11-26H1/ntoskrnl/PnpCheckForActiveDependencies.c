/*
 * XREFs of PnpCheckForActiveDependencies @ 0x1409AF220
 * Callers:
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x1409B0470 (PiProcessQueryDeviceState.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1409B10B8 (PipCheckForUnsatisfiedDependencies.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (unsigned int)PipIsDevNodeDNStarted(a1) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  v6 = PipCheckForUnsatisfiedDependencies(a1, a2);
  PnpReleaseDependencyRelationsLock(v8, v7, v9, v10);
  return v6;
}
