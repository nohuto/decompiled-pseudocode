/*
 * XREFs of sub_1800D29D0 @ 0x1800D29D0
 * Callers:
 *     sub_1800D2300 @ 0x1800D2300 (sub_1800D2300.c)
 *     sub_1800D2658 @ 0x1800D2658 (sub_1800D2658.c)
 *     sub_1800D40A8 @ 0x1800D40A8 (sub_1800D40A8.c)
 *     sub_1800E50BA @ 0x1800E50BA (sub_1800E50BA.c)
 *     sub_1800E50F4 @ 0x1800E50F4 (sub_1800E50F4.c)
 * Callees:
 *     sub_1800D2B1C @ 0x1800D2B1C (sub_1800D2B1C.c)
 */

__int64 __fastcall sub_1800D29D0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800D2B1C(v2 + 16);
  return sub_1800D292C(a1);
}
