/*
 * XREFs of sub_180038B00 @ 0x180038B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_180038A68 @ 0x180038A68 (sub_180038A68.c)
 */

_QWORD *__fastcall sub_180038B00(_QWORD *lpMem, char a2)
{
  sub_180038A68(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
