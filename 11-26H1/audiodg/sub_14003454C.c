/*
 * XREFs of sub_14003454C @ 0x14003454C
 * Callers:
 *     sub_140034510 @ 0x140034510 (sub_140034510.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003454C(__int64 a1)
{
  *(_DWORD *)(a1 + 336) = -1073741823;
  *(_QWORD *)a1 = off_1400BA5F0;
  *(_QWORD *)(a1 + 8) = off_1400BA5D8;
  *(_QWORD *)(a1 + 16) = off_1400BA630;
  sub_1400B6010(qword_1400E8490);
  return sub_1400345A8(a1);
}
