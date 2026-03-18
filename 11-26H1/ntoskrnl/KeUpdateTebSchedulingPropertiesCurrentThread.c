/*
 * XREFs of KeUpdateTebSchedulingPropertiesCurrentThread @ 0x1402C3744
 * Callers:
 *     PspUserThreadStartup @ 0x1409EB210 (PspUserThreadStartup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x1402C3B18 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

void KeUpdateTebSchedulingPropertiesCurrentThread()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiUpdateTebSchedulingPropertiesCurrentThread();
  KeLeaveCriticalRegion();
}
