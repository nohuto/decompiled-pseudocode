/*
 * XREFs of sub_140005654 @ 0x140005654
 * Callers:
 *     sub_140005514 @ 0x140005514 (sub_140005514.c)
 * Callees:
 *     sub_1400056B0 @ 0x1400056B0 (sub_1400056B0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_140005654(_QWORD *a1)
{
  sub_1400056B0();
  *a1 = off_1400B8208;
  a1[1] = off_1400B81B8;
  a1[2] = off_1400B8198;
  a1[3] = off_1400B8288;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
