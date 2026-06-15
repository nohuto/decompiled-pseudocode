/*
 * XREFs of sub_1400748B8 @ 0x1400748B8
 * Callers:
 *     sub_1400749B0 @ 0x1400749B0 (sub_1400749B0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400748B8(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = -1073741823;
  *(_QWORD *)a1 = off_1400BD4E8;
  *(_QWORD *)(a1 + 8) = off_1400BD4A8;
  sub_1400B6010(qword_1400E8490);
  return sub_140074904(a1);
}
