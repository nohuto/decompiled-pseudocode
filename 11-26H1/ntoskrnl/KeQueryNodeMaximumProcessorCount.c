/*
 * XREFs of KeQueryNodeMaximumProcessorCount @ 0x1405F13A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall KeQueryNodeMaximumProcessorCount(USHORT NodeNumber)
{
  if ( NodeNumber >= (unsigned __int16)KeNumberNodes )
    return 0;
  _mm_lfence();
  return *(_WORD *)(KeNodeBlock[NodeNumber] + 8);
}
