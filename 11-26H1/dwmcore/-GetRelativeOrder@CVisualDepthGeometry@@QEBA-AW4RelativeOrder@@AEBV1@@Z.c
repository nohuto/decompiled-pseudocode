/*
 * XREFs of ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1800D0530
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1800CF6B0 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 * Callees:
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x1800D0730 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 *     ?PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x1800D08B4 (-PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z.c)
 *     ?IsBoundingBoxOverlappingXY@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x1800D0998 (-IsBoundingBoxOverlappingXY@CVisualDepthGeometry@@AEBA_NAEBV1@@Z.c)
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1800D09D4 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 *     ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x1800D0EA8 (-IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z.c)
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x18020E438 (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@.c)
 *     ?TreeOrder@CVisualDepthGeometry@@AEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x18021E9DC (-TreeOrder@CVisualDepthGeometry@@AEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisualDepthGeometry::GetRelativeOrder(__int64 a1, __int64 a2)
{
  const struct CVisualDepthGeometry *v4; // rdx
  CVisualDepthGeometry *v5; // rcx
  const struct CVisualDepthGeometry *v6; // rdx
  CVisualDepthGeometry *v7; // rcx
  int v8; // xmm6_4
  unsigned int v9; // xmm7_4
  int v11[2]; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE v12[12]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+60h] [rbp-A8h] BYREF
  float v17; // [rsp+68h] [rbp-A0h]
  int v18; // [rsp+70h] [rbp-98h] BYREF
  float v19; // [rsp+78h] [rbp-90h]
  _BYTE v20[96]; // [rsp+88h] [rbp-80h] BYREF

  if ( !CVisualDepthGeometry::IsBoundingBoxOverlappingXY(
          (CVisualDepthGeometry *)a1,
          (const struct CVisualDepthGeometry *)a2) )
    return 2LL;
  v15 = 0LL;
  if ( !CVisualDepthGeometry::FindOverlappingPoint(v5, v4, (struct Windows::Foundation::Numerics::float2 *)&v15) )
    return 2LL;
  if ( *(float *)(a2 + 16) > *(float *)(a1 + 28) )
    return 1LL;
  if ( *(float *)(a1 + 16) > *(float *)(a2 + 28) )
    return 0LL;
  if ( CVisualDepthGeometry::IsCoplanar((CVisualDepthGeometry *)a1, (const struct CVisualDepthGeometry *)a2) )
    return CVisualDepthGeometry::TreeOrder(v7, v6);
  v11[1] = 0;
  CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
    v7,
    v6,
    (struct Windows::Foundation::Numerics::float3 *)v20,
    &v11[1]);
  CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
    (CVisualDepthGeometry *)a2,
    (const struct CVisualDepthGeometry *)a1,
    (struct Windows::Foundation::Numerics::float3 *)v20,
    &v11[1]);
  if ( v11[1] > 0
    && !CVisualDepthGeometry::AreVisualsAbutting(
          (CVisualDepthGeometry *)a1,
          (const struct CVisualDepthGeometry *)a2,
          (const struct Windows::Foundation::Numerics::float3 *)v20,
          v11[1]) )
  {
LABEL_13:
    v6 = (const struct CVisualDepthGeometry *)a2;
    v7 = (CVisualDepthGeometry *)a1;
    return CVisualDepthGeometry::TreeOrder(v7, v6);
  }
  v8 = v15;
  v9 = HIDWORD(v15);
  v13 = v15;
  v17 = 0.0;
  v19 = 0.0;
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)&v12[8] = 1065353216;
  LODWORD(v14) = 0;
  if ( !PlaneLineIntersection(
          (const struct Windows::Foundation::Numerics::float3 *)(a1 + 148),
          (const struct Windows::Foundation::Numerics::float3 *)(a1 + 160),
          (const struct Windows::Foundation::Numerics::float3 *)&v13,
          (const struct Windows::Foundation::Numerics::float3 *)v12,
          (struct Windows::Foundation::Numerics::float3 *)&v16) )
    return 2LL;
  *(_DWORD *)v12 = v8;
  *(_QWORD *)&v12[4] = v9;
  v13 = 0LL;
  LODWORD(v14) = 1065353216;
  if ( !PlaneLineIntersection(
          (const struct Windows::Foundation::Numerics::float3 *)(a2 + 148),
          (const struct Windows::Foundation::Numerics::float3 *)(a2 + 160),
          (const struct Windows::Foundation::Numerics::float3 *)v12,
          (const struct Windows::Foundation::Numerics::float3 *)&v13,
          (struct Windows::Foundation::Numerics::float3 *)&v18) )
    return 2LL;
  if ( v17 > v19 )
    return 0LL;
  if ( v19 <= v17 )
    goto LABEL_13;
  return 1LL;
}
