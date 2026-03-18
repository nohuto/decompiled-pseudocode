/*
 * XREFs of CcDebugExceptionFilter @ 0x1405B0D14
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x1403850A0 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140385850 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CcDebugExceptionFilter(ULONG_PTR *a1)
{
  KeBugCheckEx(0x34u, 0x51555uLL, *a1, a1[1], *(_QWORD *)(*a1 + 16));
}
