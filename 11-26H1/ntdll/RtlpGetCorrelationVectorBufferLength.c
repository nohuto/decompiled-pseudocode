/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800E85C4
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800E82E0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1800E8330 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800E8420 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800E850C (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800E8550 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800E85E8 (RtlpGetCorrelationVectorLastDotPosition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCorrelationVectorBufferLength(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
