/*
 * XREFs of ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180283700
 * Callers:
 *     <none>
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x180173A60 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188540 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

bool __fastcall CSwapchainRenderStrategy::GetDirtyRegion(
        CSwapchainRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct D2D_SIZE_F *a3,
        struct CRectanglesShape *a4)
{
  CCompositionSurfaceBitmap *v4; // rsi
  const struct CMILMatrix *v8; // rbx
  __int64 v9; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  _BYTE v12[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+70h] [rbp-68h]
  __int64 v14[2]; // [rsp+80h] [rbp-58h] BYREF
  struct D2D_RECT_F v15; // [rsp+90h] [rbp-48h] BYREF

  v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)a2 + 23);
  v8 = 0LL;
  if ( CBitmapRenderStrategy::HasRenderingRealization((struct IBitmapResource *)(((unsigned __int64)v4 + 72) & -(__int64)(v4 != 0LL))) )
  {
    v13 = 0;
    v15 = 0LL;
    *(_OWORD *)v14 = 0LL;
    if ( !CCompositionSurfaceBitmap::CalcImageTransform(v4, a3, (CMILMatrix *)v12, &v15, v14) )
      return CSurfaceBrush::CSurfaceRenderStrategy::GetDirtyRegionFromSurface(a2, v8, a3, a4);
    if ( CMILMatrix::Invert((CMILMatrix *)v12, v9, v10) )
    {
      v8 = (const struct CMILMatrix *)v12;
      return CSurfaceBrush::CSurfaceRenderStrategy::GetDirtyRegionFromSurface(a2, v8, a3, a4);
    }
  }
  return 0;
}
