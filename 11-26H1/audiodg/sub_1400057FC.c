/*
 * XREFs of sub_1400057FC @ 0x1400057FC
 * Callers:
 *     sub_1400057C0 @ 0x1400057C0 (sub_1400057C0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400057FC(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = -1073741823;
  *(_QWORD *)a1 = off_1400B8208;
  *(_QWORD *)(a1 + 8) = off_1400B81B8;
  *(_QWORD *)(a1 + 16) = off_1400B8198;
  *(_QWORD *)(a1 + 24) = off_1400B8288;
  sub_1400B6010(qword_1400E8490);
  return sub_140005C38(a1);
}
