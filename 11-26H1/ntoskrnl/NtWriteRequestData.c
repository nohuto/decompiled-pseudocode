/*
 * XREFs of NtWriteRequestData @ 0x1407BFDB0
 * Callers:
 *     DifNtReadRequestDataWrapper @ 0x140687CC0 (DifNtReadRequestDataWrapper.c)
 *     DifNtWriteRequestDataWrapper @ 0x140691D60 (DifNtWriteRequestDataWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

__int64 NtWriteRequestData()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeLeaveCriticalRegion();
  return 3221225659LL;
}
