/*
 * XREFs of ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18020FDD0
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801C8FC8 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180212B34 (-QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     cosf_0 @ 0x1802B96D8 (cosf_0.c)
 *     sinf_0 @ 0x1802B9774 (sinf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationAxis(
        struct D2DQuaternion *a1,
        const struct D2DVector3 *a2,
        float a3)
{
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  struct D2DQuaternion *result; // rax
  float v8; // xmm0_4
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  float v10; // [rsp+28h] [rbp-30h]

  v9 = 0LL;
  v10 = 0.0;
  D3DXVec3Normalize((struct D2DVector3 *)&v9, a2);
  v4 = sinf_0(a3 * 0.5);
  v5 = cosf_0(a3 * 0.5);
  v6 = v4 * *(float *)&v9;
  result = a1;
  *((float *)a1 + 3) = v5;
  v8 = v4 * *((float *)&v9 + 1);
  *((float *)a1 + 2) = v4 * v10;
  *((float *)a1 + 1) = v8;
  *(float *)a1 = v6;
  return result;
}
