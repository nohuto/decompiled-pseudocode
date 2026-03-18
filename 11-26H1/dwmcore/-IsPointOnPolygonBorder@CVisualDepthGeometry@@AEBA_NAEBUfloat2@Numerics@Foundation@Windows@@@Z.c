/*
 * XREFs of ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D0D38
 * Callers:
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D09D4 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 * Callees:
 *     ?DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x1800D0D94 (-DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z.c)
 */

char __fastcall CVisualDepthGeometry::IsPointOnPolygonBorder(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float2 *a2)
{
  __m128 v2; // xmm0
  const struct Windows::Foundation::Numerics::float2 *v3; // r11
  CVisualDepthGeometry *v4; // r10
  int i; // r9d
  int v6; // r9d
  float v7; // xmm5_4

  v3 = a2;
  v4 = this;
  for ( i = 0; ; i = v6 + 1 )
  {
    if ( i >= 4 )
      return 0;
    v2.m128_f32[0] = DistSquaredToLine(
                       v3,
                       (CVisualDepthGeometry *)((char *)v4 + 16 * i + 84),
                       (CVisualDepthGeometry *)((char *)v4 + 16 * i + 92));
    v2 = _mm_and_ps(v2, (__m128)_xmm);
    if ( v7 > v2.m128_f32[0] )
      break;
  }
  return 1;
}
