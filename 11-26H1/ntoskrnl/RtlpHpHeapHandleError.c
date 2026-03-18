/*
 * XREFs of RtlpHpHeapHandleError @ 0x140526918
 * Callers:
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapHandleError @ 0x140526988 (RtlpHeapHandleError.c)
 *     RtlpHeapExceptionFilter @ 0x140625734 (RtlpHeapExceptionFilter.c)
 *     RtlpLocateRelatedBlocks @ 0x140625B40 (RtlpLocateRelatedBlocks.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_0(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
