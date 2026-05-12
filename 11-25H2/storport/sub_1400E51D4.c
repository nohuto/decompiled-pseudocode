/*
 * XREFs of sub_1400E51D4 @ 0x1400E51D4
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 */

__int64 __fastcall sub_1400E51D4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al

  v4 = 7;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 592) + 72LL) < 7u )
    v4 = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 72LL);
  return sub_1400E5218(a1, 0, 1, a4, v4 & 7);
}
