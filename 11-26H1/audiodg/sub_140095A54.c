/*
 * XREFs of sub_140095A54 @ 0x140095A54
 * Callers:
 *     sub_140095300 @ 0x140095300 (sub_140095300.c)
 * Callees:
 *     sub_140044778 @ 0x140044778 (sub_140044778.c)
 *     sub_14004479C @ 0x14004479C (sub_14004479C.c)
 *     sub_140095F3C @ 0x140095F3C (sub_140095F3C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140095A54(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0LL;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_BYTE *)(a1 + 560) = 0;
  sub_140095F3C(a1, 0LL);
  sub_140044778((_QWORD *)(a1 + 488), a1);
  sub_14004479C(a1 + 568);
  *(_QWORD *)a1 = off_1400BF850;
  *(_QWORD *)(a1 + 8) = off_1400BF818;
  *(_QWORD *)(a1 + 424) = off_1400BF7E0;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BF7B0;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
