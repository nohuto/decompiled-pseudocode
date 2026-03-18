/*
 * XREFs of PspTerminatePicoProcess @ 0x1407FCB90
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     PspTerminateProcess @ 0x140956EB0 (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(struct _KPROCESS *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3);
  return v2;
}
