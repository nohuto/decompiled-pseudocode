/*
 * XREFs of sub_180026010 @ 0x180026010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 */

void *__fastcall sub_180026010(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000C444(a1);
  return a1;
}
