/*
 * XREFs of HvlGetApicIdFromLpIndex @ 0x1405B9220
 * Callers:
 *     KiQueryProcessorNode @ 0x1405EFC3C (KiQueryProcessorNode.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1403E6258 (HvlpGetLpcbByLpIndex.c)
 */

_LIST_ENTRY *__fastcall HvlGetApicIdFromLpIndex(unsigned int a1, _DWORD *a2)
{
  _LIST_ENTRY *result; // rax
  _DWORD *v3; // r10

  *a2 = -1;
  result = (_LIST_ENTRY *)HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    result = HvlpGetLpcbByLpIndex(a1);
    if ( result )
    {
      result = (_LIST_ENTRY *)LODWORD(result->Blink);
      *v3 = (_DWORD)result;
    }
  }
  return result;
}
