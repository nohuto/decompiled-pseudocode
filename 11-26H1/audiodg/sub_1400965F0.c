/*
 * XREFs of sub_1400965F0 @ 0x1400965F0
 * Callers:
 *     sub_140096E60 @ 0x140096E60 (sub_140096E60.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400965F0(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = -1073741823;
  *(_QWORD *)a1 = off_1400BAAC8;
  *(_QWORD *)(a1 + 8) = off_1400BAA60;
  *(_QWORD *)(a1 + 424) = off_1400BAB20;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BAA98;
  *(_QWORD *)(a1 + 512) = off_1400BAA40;
  sub_1400B6010(qword_1400E8490);
  return sub_140096BE0(a1);
}
