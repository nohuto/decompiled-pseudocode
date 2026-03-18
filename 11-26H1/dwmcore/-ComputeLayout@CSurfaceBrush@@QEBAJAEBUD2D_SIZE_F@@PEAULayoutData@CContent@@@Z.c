/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C
 * Callers:
 *     ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18009CDF0 (-GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGen.c)
 *     ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800D38D0 (-GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGene.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801583F0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x1801886DC (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801E2790 (-HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180282ED0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180283AE0 (-GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV-.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180283C30 (-GetTextureMemoryLayoutData@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180283F00 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180284020 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x180187AB0 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        struct CContent::LayoutData *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  struct D2D_RECT_F v9; // xmm3
  __int64 v10; // rcx
  const struct D2D1::Matrix3x2F *v11; // rcx
  __int64 v12; // xmm4_8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  D2D_SIZE_F v16; // [rsp+40h] [rbp-49h] BYREF
  struct D2D_RECT_F v17; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+58h] [rbp-31h]
  struct D2D_RECT_F v19; // [rsp+60h] [rbp-29h] BYREF
  __int64 v20; // [rsp+70h] [rbp-19h]
  struct D2D_RECT_F v21; // [rsp+78h] [rbp-11h] BYREF
  __int64 v22; // [rsp+88h] [rbp-1h]
  __int128 v23; // [rsp+90h] [rbp+7h] BYREF
  __int128 v24; // [rsp+A0h] [rbp+17h] BYREF

  if ( a2->width > 0.0 && a2->height > 0.0 && *((_QWORD *)this + 23) )
  {
    v6 = *((_QWORD *)this + 24);
    v16 = 0LL;
    v22 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    v21 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, CSurfaceBrush *, const struct D2D_SIZE_F *, D2D_SIZE_F *, __int128 *, __int128 *, struct D2D_RECT_F *))(*(_QWORD *)v6 + 72LL))(
           v6,
           this,
           a2,
           &v16,
           &v24,
           &v23,
           &v21);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F2850, 2u, v7, 0x261u, 0LL);
    }
    else
    {
      v19 = 0LL;
      StretchAlign::Arrange((CSurfaceBrush *)((char *)this + 168), &v17, &v16, a2, &v19);
      v18 = *(_QWORD *)&v19.left;
      *(_QWORD *)&v17.top = 0LL;
      v17.left = (float)(v19.right - v19.left) / v16.width;
      v17.bottom = (float)(v19.bottom - v19.top) / v16.height;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v19,
        (const struct D2D1::Matrix3x2F *)&v21,
        (const struct D2D1::Matrix3x2F *)&v17);
      v9 = v19;
      v10 = *((_QWORD *)this + 19);
      v18 = v20;
      v17 = v19;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v10 + 216LL))(
          v10,
          a2,
          &v19);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v21,
          (const struct D2D1::Matrix3x2F *)&v17,
          (const struct D2D1::Matrix3x2F *)&v19);
        v9 = v21;
        v17 = v21;
        v18 = v22;
      }
      if ( !D2D1::Matrix3x2F::IsIdentity((CSurfaceBrush *)((char *)this + 216)) )
      {
        D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v21, (const struct D2D1::Matrix3x2F *)&v17, v11);
        v9 = v21;
        v12 = v22;
      }
      v13 = v23;
      v14 = v24;
      *(struct D2D_RECT_F *)a3 = v9;
      *(_OWORD *)((char *)a3 + 24) = v13;
      *(_OWORD *)((char *)a3 + 40) = v14;
      *((_QWORD *)a3 + 2) = v12;
    }
  }
  else
  {
    v8 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F2850, 2u, -2003304441, 0x24Fu, 0LL);
  }
  return v8;
}
