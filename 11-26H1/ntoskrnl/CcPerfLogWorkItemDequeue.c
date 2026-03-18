/*
 * XREFs of CcPerfLogWorkItemDequeue @ 0x1404BF4EC
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x1403850A0 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140385850 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall CcPerfLogWorkItemDequeue(__int64 a1)
{
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  v2[0] = &v3;
  v2[1] = 8LL;
  return EtwTraceKernelEvent((int)v2, 1, 0x80020000, 5633, 5249282);
}
