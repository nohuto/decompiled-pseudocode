/*
 * XREFs of ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D09D4
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1800D0530 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D0D38 (-IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x1800D0E08 (-ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z.c)
 *     ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D0F28 (-Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

bool __fastcall CVisualDepthGeometry::FindOverlappingPoint(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  unsigned int v3; // xmm4_4
  float *v4; // rdi
  unsigned int v5; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  bool v10; // r8
  float v11; // xmm4_4
  float v12; // xmm5_4
  bool result; // al
  int v14; // xmm5_4
  const struct CLineSegment *v15; // rcx
  float *v16; // r14
  CLineSegment *v17; // r12
  __int64 v18; // r15
  __int64 v19; // r13
  const struct CLineSegment *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  int v23; // r9d
  __int64 v24; // r10
  _QWORD *v25; // r11
  float v26; // xmm2_4
  char v27; // cl
  float v28; // xmm3_4
  char v29; // al
  float *v30; // rdx
  __int64 i; // r8
  float v32; // xmm1_4
  float v33; // xmm2_4
  float *v34; // rdx
  float v35; // xmm3_4
  char v36; // cl
  char v37; // al
  __int64 j; // r8
  float v39; // xmm1_4
  __int64 k; // rax
  float v41; // [rsp+20h] [rbp-E0h] BYREF
  float v42; // [rsp+24h] [rbp-DCh]
  float *v43; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+30h] [rbp-D0h] BYREF
  struct Windows::Foundation::Numerics::float2 *v45; // [rsp+40h] [rbp-C0h]
  _DWORD v46[48]; // [rsp+50h] [rbp-B0h]

  v3 = *((_DWORD *)a2 + 37);
  v4 = (float *)a3;
  v5 = *((_DWORD *)a2 + 38);
  v45 = a3;
  v7 = 0.0;
  v43 = (float *)__PAIR64__(v5, v3);
  v8 = 0.0;
  v41 = 0.0;
  v42 = 0.0;
  if ( CVisualDepthGeometry::ContainsPoint(this, (const struct Windows::Foundation::Numerics::float2 *)&v43, 0)
    || (v14 = *((_DWORD *)this + 38),
        LODWORD(v43) = *((_DWORD *)this + 37),
        HIDWORD(v43) = v14,
        CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v43, v10)) )
  {
    v42 = v12;
    v41 = v11;
    v8 = v12;
    v7 = v11;
    if ( !CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v41)
      && !CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v41) )
    {
      goto LABEL_4;
    }
  }
  v15 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
  v43 = (float *)((char *)a2 + 84);
  v16 = (float *)((char *)this + 40);
  v17 = (CVisualDepthGeometry *)((char *)this + 84);
  v18 = a2 - this;
  v19 = 4LL;
  do
  {
    v20 = v15;
    v21 = 4LL;
    do
    {
      if ( CLineSegment::Intersects(v17, v20, (struct Windows::Foundation::Numerics::float2 *)&v44) )
      {
        ++v23;
        ++v24;
        *v25 = v44;
      }
      v20 = (const struct CLineSegment *)(v22 + 16);
      --v21;
    }
    while ( v21 );
    v26 = *(v16 - 1);
    v27 = 1;
    v28 = *v16;
    v29 = 1;
    v30 = v43;
    for ( i = 0LL; i < 4; ++i )
    {
      if ( !v27 && !v29 )
        goto LABEL_23;
      v32 = (float)((float)(v28 - v30[1]) * v30[2]) - (float)((float)(v26 - *v30) * v30[3]);
      if ( v27 && v32 < 0.0 )
        v27 = 0;
      if ( v29 )
      {
        if ( v32 > 0.0 )
          v29 = 0;
      }
      v30 += 4;
    }
    if ( v29 || v27 )
    {
      ++v23;
      *(float *)&v46[2 * v24] = v26;
      *(float *)&v46[2 * v24++ + 1] = v28;
    }
LABEL_23:
    v33 = *(float *)((char *)v16 + v18 - 4);
    v34 = (float *)((char *)this + 84);
    v35 = *(float *)((char *)v16 + v18);
    v36 = 1;
    v37 = 1;
    for ( j = 0LL; j < 4; ++j )
    {
      if ( !v36 && !v37 )
        goto LABEL_38;
      v39 = (float)((float)(v35 - v34[1]) * v34[2]) - (float)((float)(v33 - *v34) * v34[3]);
      if ( v36 && v39 < 0.0 )
        v36 = 0;
      if ( v37 && v39 > 0.0 )
        v37 = 0;
      v34 += 4;
    }
    if ( v37 || v36 )
    {
      ++v23;
      *(float *)&v46[2 * v24] = v33;
      *(float *)&v46[2 * v24 + 1] = v35;
    }
LABEL_38:
    v15 = (const struct CLineSegment *)v43;
    v17 = (CLineSegment *)((char *)v17 + 16);
    v16 += 3;
    --v19;
  }
  while ( v19 );
  if ( v23 <= 0 )
  {
    if ( !v23 )
      return 0;
  }
  else
  {
    for ( k = 0LL; k < v23; v8 = v8 + *(float *)&v46[2 * k++ + 1] )
      v7 = v7 + *(float *)&v46[2 * k];
    v7 = v7 * (float)(1.0 / (float)v23);
    v8 = v8 * (float)(1.0 / (float)v23);
    v41 = v7;
    v42 = v8;
  }
  if ( !CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v41)
    && !CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v41) )
  {
    v4 = (float *)v45;
LABEL_4:
    *v4 = v7;
    result = 1;
    v4[1] = v8;
    return result;
  }
  return 0;
}
