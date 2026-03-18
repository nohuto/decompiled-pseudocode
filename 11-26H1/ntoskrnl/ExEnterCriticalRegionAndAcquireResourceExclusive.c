/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402751C0
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper @ 0x1406511B0 (DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper.c)
 *     AccelpAcquireLockExclusive @ 0x14084ADCC (AccelpAcquireLockExclusive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
