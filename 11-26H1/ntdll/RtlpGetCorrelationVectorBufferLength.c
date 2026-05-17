/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1800E93B4
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800E90D0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1800E9120 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800E9210 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x1800E92FC (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800E9340 (RtlpGetLastContiguosBase64Position.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800E93D8 (RtlpGetCorrelationVectorLastDotPosition.c)
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
