/*
 * XREFs of sub_140095C0C @ 0x140095C0C
 * Callers:
 *     sub_1400956E0 @ 0x1400956E0 (sub_1400956E0.c)
 * Callees:
 *     sub_1400961F4 @ 0x1400961F4 (sub_1400961F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140095C0C(_QWORD *a1)
{
  sub_1400961F4();
  *a1 = off_1400BFD10;
  a1[1] = off_1400BFCD8;
  a1[53] = off_1400BFCA0;
  a1[54] = off_1400BF5E8;
  a1[61] = off_1400BFF20;
  a1[93] = off_1400BFEF0;
  a1[94] = off_1400BFEC8;
  a1[95] = off_1400BFEA8;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
