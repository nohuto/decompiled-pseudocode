/*
 * XREFs of sub_140095968 @ 0x140095968
 * Callers:
 *     sub_140095220 @ 0x140095220 (sub_140095220.c)
 * Callees:
 *     sub_140095D50 @ 0x140095D50 (sub_140095D50.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140095968(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 528) = 0LL;
  *(_OWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_BYTE *)(a1 + 568) = 0;
  sub_140095D50();
  *(_QWORD *)(a1 + 480) = a1;
  *(_QWORD *)(a1 + 488) = 3LL;
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)a1 = off_1400BFFE8;
  *(_QWORD *)(a1 + 8) = off_1400BFFB0;
  *(_QWORD *)(a1 + 424) = off_1400BFF80;
  *(_QWORD *)(a1 + 432) = off_1400BFF50;
  *(_QWORD *)(a1 + 440) = off_1400C0180;
  *(_QWORD *)(a1 + 472) = off_1400C0150;
  *(_QWORD *)(a1 + 496) = off_1400C0120;
  *(_QWORD *)(a1 + 512) = off_1400C0100;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
