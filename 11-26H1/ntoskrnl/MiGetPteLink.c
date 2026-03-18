/*
 * XREFs of MiGetPteLink @ 0x140369198
 * Callers:
 *     MiChangePageAttributeBatch @ 0x140368E1C (MiChangePageAttributeBatch.c)
 *     MiConvertContiguousPages @ 0x14046B804 (MiConvertContiguousPages.c)
 *     MiPerformFinalZeroing @ 0x140513B9C (MiPerformFinalZeroing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140E2D740 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= qword_140E2D748;
  }
  return (a1 >> 24) & 0x7FFFFFFFFFLL;
}
