/*
 * XREFs of sub_140095D50 @ 0x140095D50
 * Callers:
 *     sub_140095894 @ 0x140095894 (sub_140095894.c)
 *     sub_140095968 @ 0x140095968 (sub_140095968.c)
 * Callees:
 *     sub_140095E80 @ 0x140095E80 (sub_140095E80.c)
 */

_QWORD *__fastcall sub_140095D50(_QWORD *a1)
{
  sub_140095E80();
  *a1 = off_1400BF4C8;
  a1[1] = off_1400BF490;
  a1[53] = off_1400BF460;
  a1[54] = off_1400BF430;
  a1[55] = &off_1400B8DE0;
  a1[56] = 0LL;
  a1[57] = 0LL;
  a1[58] = 0LL;
  return a1;
}
