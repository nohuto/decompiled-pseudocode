/*
 * XREFs of sub_18002098C @ 0x18002098C
 * Callers:
 *     sub_180020930 @ 0x180020930 (sub_180020930.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_1800208F4 @ 0x1800208F4 (sub_1800208F4.c)
 */

void *__fastcall sub_18002098C(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_1800208F4(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000C444(v2);
  return v2;
}
