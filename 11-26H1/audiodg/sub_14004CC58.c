/*
 * XREFs of sub_14004CC58 @ 0x14004CC58
 * Callers:
 *     sub_14004D130 @ 0x14004D130 (sub_14004D130.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14004CC58(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BB530;
  sub_1400B6010(qword_1400E8490);
  sub_14001D774(a1 + 24);
}
