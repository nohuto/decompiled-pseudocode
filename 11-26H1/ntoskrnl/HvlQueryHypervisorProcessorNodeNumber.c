/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x1405BBDC0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(unsigned int a1)
{
  _LIST_ENTRY *LpcbByLpIndex; // rax
  _WORD *v2; // r10

  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  if ( a1 >= 0x800 )
    return 3221225473LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  if ( !LpcbByLpIndex )
    return 3221225473LL;
  *v2 = LpcbByLpIndex[6].Flink;
  return 0LL;
}
