/*
 * XREFs of ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801ABB68
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18020F6D8 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1801ABC68 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

struct D2DVector4 *__fastcall D3DXVec4Normalize(struct D2DVector4 *a1, const struct D2DVector4 *a2)
{
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm2_4
  _OWORD *v8; // rdx
  float v10; // xmm6_4

  v4 = *((float *)a2 + 3);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 1);
  v7 = (float)((float)((float)(v6 * v6) + (float)(*(float *)a2 * *(float *)a2)) + (float)(v5 * v5)) + (float)(v4 * v4);
  if ( (unsigned int)WithinEpsilon_0() )
  {
    if ( a1 != a2 )
      *(_OWORD *)a1 = *v8;
  }
  else if ( v7 > 1.1754944e-38 )
  {
    v10 = 1.0 / sqrtf_0(v7);
    *(float *)a1 = v10 * *(float *)a2;
    *((float *)a1 + 1) = v10 * v6;
    *((float *)a1 + 2) = v10 * v5;
    *((float *)a1 + 3) = v10 * v4;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return a1;
}
