/*
 * XREFs of sub_140095894 @ 0x140095894
 * Callers:
 *     sub_140095140 @ 0x140095140 (sub_140095140.c)
 * Callees:
 *     sub_140095D50 @ 0x140095D50 (sub_140095D50.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140095894(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0LL;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_BYTE *)(a1 + 560) = 0;
  sub_140095D50();
  *(_QWORD *)(a1 + 488) = 3LL;
  *(_QWORD *)(a1 + 480) = a1;
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)a1 = off_1400C00A8;
  *(_QWORD *)(a1 + 8) = off_1400C0070;
  *(_QWORD *)(a1 + 424) = off_1400C0040;
  *(_QWORD *)(a1 + 432) = off_1400BFDE8;
  *(_QWORD *)(a1 + 440) = off_1400BFDC8;
  *(_QWORD *)(a1 + 472) = off_1400BFD98;
  *(_QWORD *)(a1 + 496) = off_1400BFD68;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
