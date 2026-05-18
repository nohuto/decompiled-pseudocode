/*
 * XREFs of sub_1800D61B0 @ 0x1800D61B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

void *__fastcall sub_1800D61B0(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
