/*
 * XREFs of IopAllocateBootResources @ 0x1407A8AB0
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140CCB498 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x140CCB630 (IopReportBootResources.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     IopAllocateBootResourcesInternal @ 0x1407A8B3C (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return BootResourcesInternal;
}
