/*
 * XREFs of RtlpHpHeapHandleError @ 0x140528F88
 * Callers:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapHandleError @ 0x140528FF8 (RtlpHeapHandleError.c)
 *     RtlpHeapExceptionFilter @ 0x140628784 (RtlpHeapExceptionFilter.c)
 *     RtlpLocateRelatedBlocks @ 0x140628B90 (RtlpLocateRelatedBlocks.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_0(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
