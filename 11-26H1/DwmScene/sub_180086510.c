/*
 * XREFs of sub_180086510 @ 0x180086510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180086468 @ 0x180086468 (sub_180086468.c)
 */

_QWORD *__fastcall sub_180086510(_QWORD *lpMem, char a2)
{
  sub_180086468(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
