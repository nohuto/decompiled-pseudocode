/*
 * XREFs of ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x1801886DC
 * Callers:
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188540 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 *     ?GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188670 (-GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1801888BC (-AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 */

bool __fastcall CSurfaceBrush::TransformDirtyRegion(
        CSurfaceBrush *this,
        const struct CMILMatrix *a2,
        const struct D2D_SIZE_F *a3,
        const struct CRectanglesShape *a4,
        struct CRectanglesShape *a5)
{
  int v8; // eax
  float width; // xmm7_4
  float height; // xmm8_4
  const struct D2D_RECT_F *v11; // rbx
  const struct D2D_RECT_F *v12; // rdi
  float left; // xmm0_4
  float top; // xmm3_4
  float right; // xmm2_4
  float bottom; // xmm1_4
  struct D2D_RECT_F v18; // [rsp+28h] [rbp-81h] BYREF
  __m128 v19; // [rsp+38h] [rbp-71h] BYREF
  __int64 v20; // [rsp+48h] [rbp-61h]
  __int64 v21; // [rsp+50h] [rbp-59h]
  __m128i si128; // [rsp+58h] [rbp-51h]
  __int64 v23; // [rsp+68h] [rbp-41h]
  int v24; // [rsp+70h] [rbp-39h]
  __int64 v25; // [rsp+74h] [rbp-35h]
  __int128 v26; // [rsp+88h] [rbp-21h] BYREF
  __int128 v27; // [rsp+98h] [rbp-11h]
  __int128 v28; // [rsp+A8h] [rbp-1h]
  __int64 v29; // [rsp+B8h] [rbp+Fh]

  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v8 = CSurfaceBrush::ComputeLayout(this, a3, (struct CContent::LayoutData *)&v26);
  if ( v8 >= 0 )
  {
    v19 = (__m128)(unsigned __int64)v26;
    v25 = 0x28083F800000LL;
    v20 = *((_QWORD *)&v26 + 1);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v23 = v27;
    v21 = 0LL;
    v24 = 0;
    if ( a2 )
      CMILMatrix::Multiply(a2, &v19, (struct CMILMatrix *)&v19);
    width = a3->width;
    height = a3->height;
    v11 = (const struct D2D_RECT_F *)*((_QWORD *)a4 + 2);
    v12 = (const struct D2D_RECT_F *)*((_QWORD *)a4 + 3);
    v18 = 0LL;
    while ( v11 != v12 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v19, v11, &v18.left);
      left = v18.left;
      if ( v18.left < 0.0 )
      {
        v18.left = 0.0;
        left = 0.0;
      }
      top = v18.top;
      if ( v18.top < 0.0 )
      {
        v18.top = 0.0;
        top = 0.0;
      }
      right = v18.right;
      if ( v18.right > width )
      {
        v18.right = width;
        right = width;
      }
      bottom = v18.bottom;
      if ( v18.bottom > height )
      {
        v18.bottom = height;
        bottom = height;
      }
      if ( right <= left || bottom <= top )
      {
        *(_QWORD *)&v18.right = 0LL;
        *(_QWORD *)&v18.left = 0LL;
      }
      else
      {
        CRectanglesShape::AddRect(a5, &v18);
      }
      ++v11;
    }
    return 1;
  }
  return v8 == -2003304441;
}
