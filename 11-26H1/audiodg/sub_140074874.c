/*
 * XREFs of sub_140074874 @ 0x140074874
 * Callers:
 *     sub_140074970 @ 0x140074970 (sub_140074970.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140074874(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BD488;
  sub_1400B6010(qword_1400E8490);
  return sub_140074904(a1 + 24);
}
