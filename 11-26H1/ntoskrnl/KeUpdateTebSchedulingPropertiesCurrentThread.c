/*
 * XREFs of KeUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E404
 * Callers:
 *     PspUserThreadStartup @ 0x1409E79E0 (PspUserThreadStartup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E7D8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 */

void KeUpdateTebSchedulingPropertiesCurrentThread()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KiUpdateTebSchedulingPropertiesCurrentThread();
  KeLeaveCriticalRegion();
}
