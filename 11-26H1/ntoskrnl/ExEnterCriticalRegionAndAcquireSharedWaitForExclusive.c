/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14042D7A0
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper @ 0x140655070 (DifExEnterCriticalRegionAndAcquireSharedWaitForExclusiveWrapper.c)
 *     VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140C32BC0 (VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
