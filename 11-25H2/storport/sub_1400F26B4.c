/*
 * XREFs of sub_1400F26B4 @ 0x1400F26B4
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 */

__int64 __fastcall sub_1400F26B4(__int64 a1)
{
  sub_1400F24C8(a1, 0x30u, 8LL, 0);
  sub_1400F24C8(a1, 0x80000000, 40LL, 1);
  sub_1400F24C8(a1, 0x28u, 8LL, 0);
  sub_1400F24C8(a1, 0x80000000, 40LL, 1);
  sub_1400F24C8(a1, 0x80000001, 40LL, 1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 712) + 40LL) )
    sub_1400F24C8(a1, 0x80000003, 40LL, 1);
  return 0LL;
}
