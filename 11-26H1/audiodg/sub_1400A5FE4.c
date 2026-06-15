/*
 * XREFs of sub_1400A5FE4 @ 0x1400A5FE4
 * Callers:
 *     sub_1400A6690 @ 0x1400A6690 (sub_1400A6690.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A5FE4(__int64 a1)
{
  *(_DWORD *)(a1 + 1504) = -1073741823;
  *(_QWORD *)a1 = off_1400C0B10;
  *(_QWORD *)(a1 + 8) = off_1400C0AD8;
  *(_QWORD *)(a1 + 16) = off_1400C0A60;
  *(_QWORD *)(a1 + 24) = off_1400C0A28;
  *(_QWORD *)(a1 + 1376) = off_1400C09F0;
  *(_QWORD *)(a1 + 1384) = off_1400C09D0;
  *(_QWORD *)(a1 + 1392) = off_1400C0890;
  *(_QWORD *)(a1 + 1496) = off_1400C06E0;
  sub_1400B6010(qword_1400E8490);
  return sub_1400A64E0(a1);
}
