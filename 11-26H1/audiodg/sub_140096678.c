/*
 * XREFs of sub_140096678 @ 0x140096678
 * Callers:
 *     sub_140096EB0 @ 0x140096EB0 (sub_140096EB0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140096678(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = -1073741823;
  *(_QWORD *)a1 = off_1400BFC48;
  *(_QWORD *)(a1 + 8) = off_1400BFC10;
  *(_QWORD *)(a1 + 424) = off_1400BFBD8;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BFBA8;
  *(_QWORD *)(a1 + 512) = off_1400BFB88;
  sub_1400B6010(qword_1400E8490);
  return sub_140096C08(a1);
}
