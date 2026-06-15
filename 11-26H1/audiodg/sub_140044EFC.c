/*
 * XREFs of sub_140044EFC @ 0x140044EFC
 * Callers:
 *     sub_140044EB0 @ 0x140044EB0 (sub_140044EB0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140044EFC(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = -1073741823;
  *(_QWORD *)a1 = off_1400BA900;
  *(_QWORD *)(a1 + 8) = off_1400BA8C8;
  *(_QWORD *)(a1 + 424) = off_1400BA990;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BA958;
  sub_1400B6010(qword_1400E8490);
  return sub_140044F9C(a1);
}
