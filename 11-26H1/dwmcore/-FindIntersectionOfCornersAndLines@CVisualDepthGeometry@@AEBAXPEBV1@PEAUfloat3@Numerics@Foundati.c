/*
 * XREFs of ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x1800D0730
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1800D0530 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x1800D08B4 (-PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z.c)
 *     ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x1800D0E08 (-ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z.c)
 */

void __fastcall CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float3 *a3,
        int *a4)
{
  float *v4; // rbx
  const struct Windows::Foundation::Numerics::float3 *v5; // r10
  const struct Windows::Foundation::Numerics::float3 *v6; // r11
  int v7; // esi
  __int64 v12; // r14
  __int64 v13; // rax
  __m128 v14; // xmm6
  float v15; // xmm8_4
  float v16; // xmm4_4
  bool v17; // al
  __m128 v18; // xmm5
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+38h] [rbp-29h] BYREF
  float v22; // [rsp+40h] [rbp-21h] BYREF
  float v23; // [rsp+44h] [rbp-1Dh]
  float v24; // [rsp+48h] [rbp-19h]
  unsigned __int64 v25; // [rsp+50h] [rbp-11h] BYREF
  float v26; // [rsp+58h] [rbp-9h]

  v4 = (float *)((char *)this + 36);
  v5 = (const struct CVisualDepthGeometry *)((char *)a2 + 160);
  v6 = (const struct CVisualDepthGeometry *)((char *)a2 + 36);
  v7 = 1;
  v12 = 4LL;
  do
  {
    v13 = v7 % 4;
    v22 = *((float *)this + 3 * v13 + 9) - *v4;
    v23 = *((float *)this + 3 * v13 + 10) - v4[1];
    v24 = *((float *)this + 3 * v13 + 11) - v4[2];
    if ( PlaneLineIntersection(
           v6,
           v5,
           (const struct Windows::Foundation::Numerics::float3 *)v4,
           (const struct Windows::Foundation::Numerics::float3 *)&v22,
           (struct Windows::Foundation::Numerics::float3 *)&v25) )
    {
      v14 = (__m128)(unsigned int)v25;
      v15 = v26;
      v16 = (float)((float)((float)((float)(*((float *)&v25 + 1) - v4[1]) * v23)
                          + (float)((float)(*(float *)&v25 - *v4) * v22))
                  + (float)((float)(v26 - v4[2]) * v24))
          / (float)((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
      if ( v16 >= 0.0 && v16 <= 1.0 )
      {
        v21 = v25;
        v17 = CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v21, 1);
        v5 = (const struct CVisualDepthGeometry *)((char *)a2 + 160);
        v6 = (const struct CVisualDepthGeometry *)((char *)a2 + 36);
        if ( v17 )
        {
          v19 = *a4;
          v25 = _mm_unpacklo_ps(v14, v18).m128_u64[0];
          v20 = 3 * v19;
          *(_QWORD *)((char *)a3 + 4 * v20) = v25;
          *((float *)a3 + v20 + 2) = v15;
          *a4 = v19 + 1;
        }
      }
    }
    ++v7;
    v4 += 3;
    --v12;
  }
  while ( v12 );
}
