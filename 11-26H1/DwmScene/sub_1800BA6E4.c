/*
 * XREFs of sub_1800BA6E4 @ 0x1800BA6E4
 * Callers:
 *     sub_1800BEDF0 @ 0x1800BEDF0 (sub_1800BEDF0.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1800BA6E4(_WORD *a1, unsigned int a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
