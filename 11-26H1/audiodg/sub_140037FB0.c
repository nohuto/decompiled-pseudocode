/*
 * XREFs of sub_140037FB0 @ 0x140037FB0
 * Callers:
 *     sub_140068234 @ 0x140068234 (sub_140068234.c)
 *     sub_140068AA8 @ 0x140068AA8 (sub_140068AA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140037FB0(int a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  double v4; // xmm1_8

  v4 = (double)(int)(a2 / a3) * (double)a1 / 10000000.0 + 0.5;
  if ( v4 >= 4294967295.0 )
    return 2147942934LL;
  *a4 = (int)v4;
  return 0LL;
}
