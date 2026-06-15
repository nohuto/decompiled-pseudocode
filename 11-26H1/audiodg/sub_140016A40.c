/*
 * XREFs of sub_140016A40 @ 0x140016A40
 * Callers:
 *     sub_14007FF28 @ 0x14007FF28 (sub_14007FF28.c)
 *     sub_1400ADA90 @ 0x1400ADA90 (sub_1400ADA90.c)
 * Callees:
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 */

void **__fastcall sub_140016A40(void **a1, void **a2)
{
  if ( a1 != a2 )
  {
    sub_140016858(a1, *a2);
    *a2 = 0LL;
  }
  return a1;
}
