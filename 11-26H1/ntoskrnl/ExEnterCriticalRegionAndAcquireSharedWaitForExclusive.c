/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14043AEF0
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper @ 0x140651490 (DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper.c)
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140C2CBB0 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x14043AF30 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
