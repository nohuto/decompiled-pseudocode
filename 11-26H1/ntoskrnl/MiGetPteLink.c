/*
 * XREFs of MiGetPteLink @ 0x14036AF38
 * Callers:
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiConvertContiguousPages @ 0x140464F84 (MiConvertContiguousPages.c)
 *     MiPerformFinalZeroing @ 0x14050D60C (MiPerformFinalZeroing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPteLink(unsigned __int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( qword_140E2D8C0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= qword_140E2D8C8;
  }
  return (a1 >> 24) & 0x7FFFFFFFFFLL;
}
