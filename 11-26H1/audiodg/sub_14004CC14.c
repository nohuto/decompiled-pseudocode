/*
 * XREFs of sub_14004CC14 @ 0x14004CC14
 * Callers:
 *     sub_14004D0F0 @ 0x14004D0F0 (sub_14004D0F0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004CC14(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BB510;
  sub_1400B6010(qword_1400E8490);
  return sub_140005C38((__int64 *)(a1 + 24));
}
