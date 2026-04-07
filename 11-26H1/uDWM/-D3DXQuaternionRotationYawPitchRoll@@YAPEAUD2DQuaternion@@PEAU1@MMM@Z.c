/*
 * XREFs of ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800547F4
 * Callers:
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800547C4 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 * Callees:
 *     cosf @ 0x18008EEB8 (cosf.c)
 *     _o_sinf_0 @ 0x18008EEF4 (_o_sinf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationYawPitchRoll(
        struct D2DQuaternion *a1,
        float a2,
        float a3,
        float a4)
{
  float v5; // xmm11_4
  float v6; // xmm10_4
  float v7; // xmm6_4
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm3_4
  struct D2DQuaternion *result; // rax
  float v12; // xmm5_4
  float v13; // xmm3_4

  v5 = o_sinf_0(a4 * 0.5);
  v6 = cosf(a4 * 0.5);
  v7 = o_sinf_0(a3 * 0.5);
  v8 = cosf(a3 * 0.5);
  v9 = o_sinf_0(a2 * 0.5);
  v10 = cosf(a2 * 0.5);
  result = a1;
  v12 = v10 * v8;
  v13 = v10 * v7;
  *(float *)a1 = (float)(v13 * v6) + (float)((float)(v9 * v8) * v5);
  *((float *)a1 + 1) = (float)((float)(v9 * v8) * v6) - (float)(v13 * v5);
  *((float *)a1 + 3) = (float)(v12 * v6) + (float)((float)(v9 * v7) * v5);
  *((float *)a1 + 2) = (float)(v12 * v5) - (float)((float)(v9 * v7) * v6);
  return result;
}
