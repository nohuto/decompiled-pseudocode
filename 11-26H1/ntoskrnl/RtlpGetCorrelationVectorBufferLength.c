/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140B2E754
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1404EA848 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x14061DFE4 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x140806430 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x140806480 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140B2E670 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140B2E6E0 (RtlpGetLastContiguosBase64Position.c)
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
