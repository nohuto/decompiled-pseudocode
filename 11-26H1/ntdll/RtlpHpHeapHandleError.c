/*
 * XREFs of RtlpHpHeapHandleError @ 0x18011F8D0
 * Callers:
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpHeapHandleError @ 0x180012590 (RtlpHeapHandleError.c)
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1800914F8 (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     HeapCommitFailAvoidTriageRules @ 0x18014F270 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpLocateRelatedBlocks @ 0x18014FEC4 (RtlpLocateRelatedBlocks.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset_thunk_772440563353939046(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 20 )
  {
    RtlpHpRaiseFatalLimitError(RtlpHpHeapHandleError);
  }
  else if ( a1 == 21 )
  {
    HeapCommitFailAvoidTriageRules();
  }
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  return RtlpHeapHandleError();
}
