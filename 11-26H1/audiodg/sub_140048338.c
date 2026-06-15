/*
 * XREFs of sub_140048338 @ 0x140048338
 * Callers:
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140048338(int a1, int a2, _DWORD *a3)
{
  double v3; // xmm1_8

  v3 = (double)a1 * (double)a2 / 10000000.0 + 0.5;
  if ( v3 >= 4294967295.0 )
    return 2147942934LL;
  *a3 = (int)v3;
  return 0LL;
}
