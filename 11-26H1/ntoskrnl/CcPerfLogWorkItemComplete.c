/*
 * XREFs of CcPerfLogWorkItemComplete @ 0x1404BBC30
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x140386E50 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall CcPerfLogWorkItemComplete(__int64 a1)
{
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  v2[0] = &v3;
  v2[1] = 8LL;
  return EtwTraceKernelEvent((int)v2, 1, 0x80020000, 5634, 5249282);
}
