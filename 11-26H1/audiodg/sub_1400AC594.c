/*
 * XREFs of sub_1400AC594 @ 0x1400AC594
 * Callers:
 *     sub_1400ABE60 @ 0x1400ABE60 (sub_1400ABE60.c)
 * Callees:
 *     _o_sqrt @ 0x14004A670 (_o_sqrt.c)
 */

double __fastcall sub_1400AC594(__int64 a1, int a2)
{
  __int64 v2; // r8
  double v3; // xmm6_8
  double v4; // xmm0_8

  v2 = 32LL * a2;
  v3 = (double)*(int *)(v2 + a1 + 16);
  if ( v3 <= 1.0 )
    return 0.0;
  v4 = v3 * *(double *)(v2 + a1 + 40) - *(double *)(v2 + a1 + 24) * *(double *)(v2 + a1 + 24);
  o_sqrt();
  return v4 / v3;
}
