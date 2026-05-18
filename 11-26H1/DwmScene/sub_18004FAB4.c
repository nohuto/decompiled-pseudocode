/*
 * XREFs of sub_18004FAB4 @ 0x18004FAB4
 * Callers:
 *     sub_18004FA60 @ 0x18004FA60 (sub_18004FA60.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18004FA2C @ 0x18004FA2C (sub_18004FA2C.c)
 */

void *__fastcall sub_18004FAB4(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 144);
  sub_18004FA2C(a1 - 144);
  if ( (a2 & 1) != 0 )
    sub_18000C444(v2);
  return v2;
}
