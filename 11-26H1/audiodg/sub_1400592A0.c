/*
 * XREFs of sub_1400592A0 @ 0x1400592A0
 * Callers:
 *     sub_140059760 @ 0x140059760 (sub_140059760.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400592A0(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BBCD0;
  sub_1400B6010(qword_1400E8490);
  sub_1400344E0(a1 + 24);
}
