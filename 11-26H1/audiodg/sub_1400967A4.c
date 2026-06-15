/*
 * XREFs of sub_1400967A4 @ 0x1400967A4
 * Callers:
 *     sub_140096F50 @ 0x140096F50 (sub_140096F50.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400967A4(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = -1073741823;
  *(_QWORD *)a1 = off_1400BFE50;
  *(_QWORD *)(a1 + 8) = off_1400BFE18;
  *(_QWORD *)(a1 + 424) = off_1400BFB50;
  *(_QWORD *)(a1 + 432) = off_1400BF6B8;
  *(_QWORD *)(a1 + 488) = off_1400BFB20;
  *(_QWORD *)(a1 + 512) = off_1400BFB00;
  *(_QWORD *)(a1 + 632) = off_1400BFAD0;
  *(_QWORD *)(a1 + 640) = off_1400BFAA8;
  *(_QWORD *)(a1 + 648) = off_1400BFA88;
  sub_1400B6010(qword_1400E8490);
  return sub_140096C58(a1);
}
