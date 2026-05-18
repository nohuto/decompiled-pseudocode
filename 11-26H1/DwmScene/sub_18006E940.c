/*
 * XREFs of sub_18006E940 @ 0x18006E940
 * Callers:
 *     sub_18006E9F0 @ 0x18006E9F0 (sub_18006E9F0.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 * Callees:
 *     _o_ceilf @ 0x18000CE1C (_o_ceilf.c)
 */

int *__fastcall sub_18006E940(int *a1, __int64 a2)
{
  float v3; // xmm0_4
  int v4; // ebx
  int v5; // eax
  float v7; // [rsp+24h] [rbp-14h]

  v7 = *((float *)&a2 + 1);
  v3 = *(float *)&a2;
  o_ceilf();
  v4 = (int)v3;
  o_ceilf();
  v5 = (int)v7;
  if ( (int)v3 < 1 )
    v4 = 1;
  *a1 = v4;
  if ( v5 < 1 )
    v5 = 1;
  a1[1] = v5;
  return a1;
}
