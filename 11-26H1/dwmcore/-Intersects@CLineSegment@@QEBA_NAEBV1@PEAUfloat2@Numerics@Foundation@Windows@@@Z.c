/*
 * XREFs of ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D0F28
 * Callers:
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D09D4 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLineSegment::Intersects(
        CLineSegment *this,
        const struct CLineSegment *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  float v3; // xmm5_4
  float v4; // xmm6_4
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  float v8; // xmm3_4

  v3 = *((float *)this + 3) * *((float *)a2 + 2);
  v4 = *((float *)this + 2) * *((float *)a2 + 3);
  *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - v3) & _xmm) < 0.0000011920929 )
    return 0;
  v5 = (__m128)*(unsigned int *)a2;
  v5.m128_f32[0] = (float)((float)((float)(v5.m128_f32[0] - *(float *)this) * *((float *)a2 + 3))
                         - (float)((float)(*((float *)a2 + 1) - *((float *)this + 1)) * *((float *)a2 + 2)))
                 / (float)(v4 - v3);
  v6 = v5;
  v6.m128_f32[0] = (float)(v5.m128_f32[0] * *((float *)this + 3)) + *((float *)this + 1);
  v7 = v5;
  v7.m128_f32[0] = (float)(v5.m128_f32[0] * *((float *)this + 2)) + *(float *)this;
  v8 = (float)((float)((float)(*(float *)this - *(float *)a2) * *((float *)this + 3))
             - (float)((float)(*((float *)this + 1) - *((float *)a2 + 1)) * *((float *)this + 2)))
     / (float)(v3 - v4);
  *(_QWORD *)a3 = _mm_unpacklo_ps(v7, v6).m128_u64[0];
  return v8 >= 0.0 && v8 <= 1.0 && v5.m128_f32[0] >= 0.0 && v5.m128_f32[0] <= 1.0;
}
