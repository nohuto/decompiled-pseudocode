/*
 * XREFs of sub_18000E7C0 @ 0x18000E7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

_DWORD *__fastcall sub_18000E7C0(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
