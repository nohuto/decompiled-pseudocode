/*
 * XREFs of sub_1400A554C @ 0x1400A554C
 * Callers:
 *     sub_1400A52A4 @ 0x1400A52A4 (sub_1400A52A4.c)
 * Callees:
 *     sub_1400A5B04 @ 0x1400A5B04 (sub_1400A5B04.c)
 */

_QWORD *__fastcall sub_1400A554C(_QWORD *a1)
{
  sub_1400A5B04();
  a1[198] = 0LL;
  a1[199] = 0LL;
  *a1 = off_1400C0340;
  a1[1] = off_1400C0308;
  a1[2] = off_1400C04C0;
  a1[3] = off_1400C0488;
  a1[168] = off_1400C0450;
  a1[169] = off_1400C0430;
  a1[170] = off_1400C03D8;
  a1[183] = off_1400C0400;
  a1[195] = off_1400BF568;
  a1[196] = off_1400BF540;
  a1[197] = off_1400BF520;
  return a1;
}
