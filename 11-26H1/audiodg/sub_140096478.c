/*
 * XREFs of sub_140096478 @ 0x140096478
 * Callers:
 *     sub_140096D70 @ 0x140096D70 (sub_140096D70.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140096478(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = -1073741823;
  *(_QWORD *)a1 = off_1400BF850;
  *(_QWORD *)(a1 + 8) = off_1400BF818;
  *(_QWORD *)(a1 + 424) = off_1400BF7E0;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BF7B0;
  sub_1400B6010(qword_1400E8490);
  return sub_140096B68(a1);
}
