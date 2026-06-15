/*
 * XREFs of sub_140096294 @ 0x140096294
 * Callers:
 *     sub_140095CA8 @ 0x140095CA8 (sub_140095CA8.c)
 * Callees:
 *     sub_140096170 @ 0x140096170 (sub_140096170.c)
 */

_QWORD *__fastcall sub_140096294(_QWORD *a1)
{
  sub_140096170((__int64)a1);
  a1[82] = 0LL;
  a1[83] = 0LL;
  *a1 = off_1400BF6F8;
  a1[1] = off_1400BF628;
  a1[53] = off_1400BF6C0;
  a1[54] = off_1400BF6B8;
  a1[61] = off_1400BF5B8;
  a1[64] = off_1400BF598;
  a1[79] = off_1400BF568;
  a1[80] = off_1400BF540;
  a1[81] = off_1400BF520;
  return a1;
}
