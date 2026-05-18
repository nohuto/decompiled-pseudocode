/*
 * XREFs of sub_1800CA010 @ 0x1800CA010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800C9FCC @ 0x1800C9FCC (sub_1800C9FCC.c)
 */

__int64 *__fastcall sub_1800CA010(__int64 *lpMem, char a2)
{
  sub_1800C9FCC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
