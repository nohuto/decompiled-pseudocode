/*
 * XREFs of EtwpStartTrace @ 0x140A6E138
 * Callers:
 *     EtwWmitraceWorker @ 0x14082C2B8 (EtwWmitraceWorker.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
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
