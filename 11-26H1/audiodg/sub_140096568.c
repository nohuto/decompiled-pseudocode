/*
 * XREFs of sub_140096568 @ 0x140096568
 * Callers:
 *     sub_140096E10 @ 0x140096E10 (sub_140096E10.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140096568(__int64 a1)
{
  *(_DWORD *)(a1 + 520) = -1073741823;
  *(_QWORD *)a1 = off_1400BF8E0;
  *(_QWORD *)(a1 + 8) = off_1400BF8A8;
  *(_QWORD *)(a1 + 424) = off_1400BFA50;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BFA20;
  *(_QWORD *)(a1 + 512) = off_1400BFA00;
  sub_1400B6010(qword_1400E8490);
  return sub_140096BB8(a1);
}
