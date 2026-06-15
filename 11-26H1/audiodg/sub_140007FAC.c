/*
 * XREFs of sub_140007FAC @ 0x140007FAC
 * Callers:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_14001191C @ 0x14001191C (sub_14001191C.c)
 *     sub_1400119BC @ 0x1400119BC (sub_1400119BC.c)
 *     sub_140011E48 @ 0x140011E48 (sub_140011E48.c)
 *     sub_140012C9C @ 0x140012C9C (sub_140012C9C.c)
 *     sub_140024E3C @ 0x140024E3C (sub_140024E3C.c)
 *     sub_14005BDD0 @ 0x14005BDD0 (sub_14005BDD0.c)
 *     sub_14005C130 @ 0x14005C130 (sub_14005C130.c)
 *     sub_140062380 @ 0x140062380 (sub_140062380.c)
 *     sub_1400624AC @ 0x1400624AC (sub_1400624AC.c)
 *     sub_1400625D8 @ 0x1400625D8 (sub_1400625D8.c)
 *     sub_1400640E8 @ 0x1400640E8 (sub_1400640E8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140007FAC(__int64 a1)
{
  unsigned __int64 v1; // rdx
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax

  v1 = 0LL;
  v2 = (float)*(int *)(a1 + 16);
  v3 = v2 * *(float *)(a1 + 28);
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v1 = 0x8000000000000000uLL;
  }
  v4 = v2 * *(float *)(a1 + 24);
  v5 = v1 + (unsigned int)(int)v3;
  v6 = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  result = v6 + (unsigned int)(int)v4;
  *(_QWORD *)(a1 + 40) = result;
  if ( result < 0x11 )
    *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
