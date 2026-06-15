/*
 * XREFs of sub_14000335C @ 0x14000335C
 * Callers:
 *     sub_14000326C @ 0x14000326C (sub_14000326C.c)
 * Callees:
 *     sub_1400033B8 @ 0x1400033B8 (sub_1400033B8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_14000335C(_QWORD *a1)
{
  sub_1400033B8();
  *a1 = off_1400B8060;
  a1[1] = off_1400B8040;
  a1[2] = off_1400B8510;
  a1[3] = off_1400B8418;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
