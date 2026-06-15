/*
 * XREFs of sub_1400961F4 @ 0x1400961F4
 * Callers:
 *     sub_140095C0C @ 0x140095C0C (sub_140095C0C.c)
 * Callees:
 *     sub_14009604C @ 0x14009604C (sub_14009604C.c)
 */

_QWORD *__fastcall sub_1400961F4(_QWORD *a1)
{
  sub_14009604C((__int64)a1);
  a1[96] = 0LL;
  a1[97] = 0LL;
  *a1 = off_1400BF660;
  a1[1] = off_1400BF628;
  a1[53] = off_1400BF5F0;
  a1[54] = off_1400BF5E8;
  a1[61] = off_1400BF750;
  a1[93] = off_1400BF568;
  a1[94] = off_1400BF540;
  a1[95] = off_1400BF520;
  return a1;
}
