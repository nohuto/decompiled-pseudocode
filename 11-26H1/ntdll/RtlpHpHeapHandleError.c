/*
 * XREFs of RtlpHpHeapHandleError @ 0x18011FB20
 * Callers:
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180010460 (RtlCaptureStackBackTrace.c)
 *     RtlpHeapHandleError @ 0x1800274C0 (RtlpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x1800710A8 (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     HeapCommitFailAvoidTriageRules @ 0x18014F3C0 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpLocateRelatedBlocks @ 0x180150014 (RtlpLocateRelatedBlocks.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
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
