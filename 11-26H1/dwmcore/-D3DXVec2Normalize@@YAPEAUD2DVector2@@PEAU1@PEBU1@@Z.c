/*
 * XREFs of ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18021644C
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18020F6D8 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1801ABC68 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

struct D2DVector2 *__fastcall D3DXVec2Normalize(struct D2DVector2 *a1, const struct D2DVector2 *a2)
{
  __m128 v4; // xmm6
  float v5; // xmm2_4
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __m128 v8; // xmm1

  v4 = (__m128)LODWORD(FLOAT_1_0);
  v5 = (float)(*((float *)a2 + 1) * *((float *)a2 + 1)) + (float)(*(float *)a2 * *(float *)a2);
  if ( WithinEpsilon_0(v5, 1.0) )
  {
    if ( v7 != v6 )
      *v7 = *v6;
  }
  else if ( v5 <= 1.1754944e-38 )
  {
    *v7 = 0LL;
  }
  else
  {
    v4.m128_f32[0] = 1.0 / sqrtf_0(v5);
    v8 = v4;
    v4.m128_f32[0] = v4.m128_f32[0] * *((float *)a2 + 1);
    v8.m128_f32[0] = v8.m128_f32[0] * *(float *)a2;
    *(_QWORD *)a1 = _mm_unpacklo_ps(v8, v4).m128_u64[0];
  }
  return a1;
}
