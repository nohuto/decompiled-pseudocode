/*
 * XREFs of RtlFlsFree @ 0x1800942A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsFree(unsigned int a1)
{
  return RtlpFlsFree(&RtlpFlsContext, a1);
}
