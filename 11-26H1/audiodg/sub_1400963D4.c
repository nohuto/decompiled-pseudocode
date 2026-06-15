/*
 * XREFs of sub_1400963D4 @ 0x1400963D4
 * Callers:
 *     sub_140096D20 @ 0x140096D20 (sub_140096D20.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400963D4(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = -1073741823;
  *(_QWORD *)a1 = off_1400BFFE8;
  *(_QWORD *)(a1 + 8) = off_1400BFFB0;
  *(_QWORD *)(a1 + 424) = off_1400BFF80;
  *(_QWORD *)(a1 + 432) = off_1400BFF50;
  *(_QWORD *)(a1 + 440) = off_1400C0180;
  *(_QWORD *)(a1 + 472) = off_1400C0150;
  *(_QWORD *)(a1 + 496) = off_1400C0120;
  *(_QWORD *)(a1 + 512) = off_1400C0100;
  sub_1400B6010(qword_1400E8490);
  return sub_140096B40(a1);
}
