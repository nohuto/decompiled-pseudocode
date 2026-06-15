/*
 * XREFs of sub_1400964F0 @ 0x1400964F0
 * Callers:
 *     sub_140096DC0 @ 0x140096DC0 (sub_140096DC0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400964F0(__int64 a1)
{
  *(_DWORD *)(a1 + 512) = -1073741823;
  *(_QWORD *)a1 = off_1400BF9A8;
  *(_QWORD *)(a1 + 8) = off_1400BF970;
  *(_QWORD *)(a1 + 424) = off_1400BF938;
  *(_QWORD *)(a1 + 432) = off_1400BA988;
  *(_QWORD *)(a1 + 488) = off_1400BF780;
  sub_1400B6010(qword_1400E8490);
  return sub_140096B90(a1);
}
