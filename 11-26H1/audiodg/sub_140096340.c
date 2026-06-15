/*
 * XREFs of sub_140096340 @ 0x140096340
 * Callers:
 *     sub_140096CD0 @ 0x140096CD0 (sub_140096CD0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140096340(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = -1073741823;
  *(_QWORD *)a1 = off_1400C00A8;
  *(_QWORD *)(a1 + 8) = off_1400C0070;
  *(_QWORD *)(a1 + 424) = off_1400C0040;
  *(_QWORD *)(a1 + 432) = off_1400BFDE8;
  *(_QWORD *)(a1 + 440) = off_1400BFDC8;
  *(_QWORD *)(a1 + 472) = off_1400BFD98;
  *(_QWORD *)(a1 + 496) = off_1400BFD68;
  sub_1400B6010(qword_1400E8490);
  return sub_140096B18(a1);
}
