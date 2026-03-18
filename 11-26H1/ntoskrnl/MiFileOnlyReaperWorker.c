/*
 * XREFs of MiFileOnlyReaperWorker @ 0x1406F9D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     MiReapFileOnlyPfns @ 0x1406FABB0 (MiReapFileOnlyPfns.c)
 */

void __fastcall __noreturn MiFileOnlyReaperWorker(__int64 a1, __int64 a2, __int64 a3)
{
  stru_140E2D150.StackBase = KeGetCurrentThread();
  KeSetActualBasePriorityThread((__int64)stru_140E2D150.StackBase, 15LL, a3);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_140E2D150.QuantumTarget, WrKernel, 0, 0, 0LL);
    MiReapFileOnlyPfns(1LL);
  }
}
