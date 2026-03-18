/*
 * XREFs of KeEnterCriticalRegion @ 0x14045D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
