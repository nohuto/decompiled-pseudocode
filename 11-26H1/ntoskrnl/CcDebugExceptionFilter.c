/*
 * XREFs of CcDebugExceptionFilter @ 0x1405B3524
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x140386E50 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x51555uLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
