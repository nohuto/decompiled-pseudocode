/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140274730
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper @ 0x140654D90 (DifExEnterCriticalRegionAndAcquireResourceExclusiveWrapper.c)
 *     AccelpAcquireLockExclusive @ 0x1408510DC (AccelpAcquireLockExclusive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
