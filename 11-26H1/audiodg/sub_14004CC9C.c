/*
 * XREFs of sub_14004CC9C @ 0x14004CC9C
 * Callers:
 *     sub_14004D170 @ 0x14004D170 (sub_14004D170.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14004CC9C(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BB720;
  sub_1400B6010(qword_1400E8490);
  sub_140018504(a1 + 24);
}
