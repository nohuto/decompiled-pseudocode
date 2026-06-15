/*
 * XREFs of sub_1400262DC @ 0x1400262DC
 * Callers:
 *     sub_140026194 @ 0x140026194 (sub_140026194.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400262DC(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  sub_1400B6010(*(_QWORD *)(a1 + 8));
  sub_1400B6010(*(_QWORD *)(a1 + 16));
  return 0LL;
}
