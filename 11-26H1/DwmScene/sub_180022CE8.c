/*
 * XREFs of sub_180022CE8 @ 0x180022CE8
 * Callers:
 *     sub_180023850 @ 0x180023850 (sub_180023850.c)
 * Callees:
 *     <none>
 */

double __fastcall sub_180022CE8(__int64 a1)
{
  __int64 v1; // rdx
  float v2; // xmm1_4
  __int64 v3; // rax
  double result; // xmm0_8

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    return 0.0;
  if ( v1 < 0 )
  {
    v3 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v2 = (float)(int)v3 + (float)(int)v3;
  }
  else
  {
    v2 = (float)(int)v1;
  }
  *(_QWORD *)&result = *(unsigned int *)(a1 + 8);
  *(float *)&result = *(float *)&result / v2;
  return result;
}
