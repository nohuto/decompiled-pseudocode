/*
 * XREFs of MiFileOnlyReaperWorker @ 0x1406FEA30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MiReapFileOnlyPfns @ 0x1406FF880 (MiReapFileOnlyPfns.c)
 */

void __fastcall __noreturn MiFileOnlyReaperWorker(__int64 a1, __int64 a2, __int64 a3)
{
  stru_140E2D2D0.StackBase = KeGetCurrentThread();
  KeSetActualBasePriorityThread((__int64)stru_140E2D2D0.StackBase, 15LL, a3);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_140E2D2D0.QuantumTarget, WrKernel, 0, 0, 0LL);
    MiReapFileOnlyPfns(1LL);
  }
}
