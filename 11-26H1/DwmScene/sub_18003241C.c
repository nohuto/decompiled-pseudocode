/*
 * XREFs of sub_18003241C @ 0x18003241C
 * Callers:
 *     sub_180032040 @ 0x180032040 (sub_180032040.c)
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18003200C @ 0x18003200C (sub_18003200C.c)
 */

void *__fastcall sub_18003241C(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  sub_18003200C(a1 - 152);
  if ( (a2 & 1) != 0 )
    sub_18000C444(v2);
  return v2;
}
