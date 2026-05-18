/*
 * XREFs of sub_18008EC0C @ 0x18008EC0C
 * Callers:
 *     sub_18008ECA0 @ 0x18008ECA0 (sub_18008ECA0.c)
 * Callees:
 *     _o_cosf @ 0x18000CE28 (_o_cosf.c)
 *     _o_sinf @ 0x18000CE94 (_o_sinf.c)
 */

__int64 __fastcall sub_18008EC0C(__int64 a1, __int64 a2, float a3)
{
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 result; // rax

  o_cosf();
  o_sinf();
  v7 = *(float *)a2;
  v8 = *(float *)(a2 + 8);
  v9 = *(float *)a2 * a3;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  result = a1;
  *(float *)a1 = v9 - (float)(v8 * a3);
  *(float *)(a1 + 8) = (float)(v7 * a3) + (float)(v8 * a3);
  return result;
}
