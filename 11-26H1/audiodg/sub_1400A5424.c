/*
 * XREFs of sub_1400A5424 @ 0x1400A5424
 * Callers:
 *     sub_1400A50F0 @ 0x1400A50F0 (sub_1400A50F0.c)
 * Callees:
 *     sub_1400A5B04 @ 0x1400A5B04 (sub_1400A5B04.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400A5424(_QWORD *a1)
{
  sub_1400A5B04();
  *a1 = off_1400C0678;
  a1[1] = off_1400C0640;
  a1[2] = off_1400C05C8;
  a1[3] = off_1400C0590;
  a1[168] = off_1400C0558;
  a1[169] = off_1400C0538;
  a1[170] = off_1400C0890;
  a1[183] = off_1400C0860;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
