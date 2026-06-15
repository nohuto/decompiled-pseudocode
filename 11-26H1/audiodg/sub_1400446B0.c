/*
 * XREFs of sub_1400446B0 @ 0x1400446B0
 * Callers:
 *     sub_1400445B0 @ 0x1400445B0 (sub_1400445B0.c)
 * Callees:
 *     sub_140044778 @ 0x140044778 (sub_140044778.c)
 *     sub_14004479C @ 0x14004479C (sub_14004479C.c)
 *     sub_1400447DC @ 0x1400447DC (sub_1400447DC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400446B0(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0LL;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_BYTE *)(a1 + 560) = 0;
  sub_1400447DC(a1, 0LL);
  sub_140044778(a1 + 488, a1);
  sub_14004479C(a1 + 568);
  *(_QWORD *)a1 = off_1400BA900;
  *(_QWORD *)(a1 + 8) = off_1400BA8C8;
  *(_QWORD *)(a1 + 424) = off_1400BA990;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BA958;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
