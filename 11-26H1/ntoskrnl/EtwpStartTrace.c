/*
 * XREFs of EtwpStartTrace @ 0x140AB0EB0
 * Callers:
 *     EtwWmitraceWorker @ 0x1408324F8 (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KMUTANT *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (struct _KMUTANT *)(a1 + 4880);
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(a1 + 4880), Executive, 0, 0, 0LL);
  LODWORD(a2) = EtwpStartLogger(a1, a2);
  KeReleaseMutex(v3, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)a2;
}
