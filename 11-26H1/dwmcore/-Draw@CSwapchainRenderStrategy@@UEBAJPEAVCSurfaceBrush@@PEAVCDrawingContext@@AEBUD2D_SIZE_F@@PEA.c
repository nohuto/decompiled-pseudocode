/*
 * XREFs of ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000D420 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18003ED00 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006C3D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C600 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800822E0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180143060 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AllowsOcclusion@CShape@@UEBA_NXZ @ 0x18016DC30 (-AllowsOcclusion@CShape@@UEBA_NXZ.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180184FB0 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x180189550 (-HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?IsCloseRectF@@YA_NAEBUD2D_RECT_F@@0M@Z @ 0x1801BC66C (-IsCloseRectF@@YA_NAEBUD2D_RECT_F@@0M@Z.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801E610C (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     ?GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z @ 0x180205E10 (-GetBorderDrawListCacheForCurrentVisual@CDrawingContext@@QEBAJPEAPEAVCDrawListCache@@@Z.c)
 *     ?GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@@@Z @ 0x1802074FC (-GetPrimitiveShape@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@AEBULayoutData@CContent@@_NPEAPEAVCShape@.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802084C4 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?FillHollowRectangleWithSolidColor@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0AEBU_D3DCOLORVALUE@@PEBUD2D_MATRIX_3X2_F@@PEBV2@PEAVCDrawListEntryBuilder@@@Z @ 0x180235E6C (-FillHollowRectangleWithSolidColor@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     _alloca_probe @ 0x1802B9630 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapchainRenderStrategy::Draw(
        CSwapchainRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  CCompositionSurfaceBitmap *v6; // rbx
  char HasRevealBorder; // r13
  struct IBitmapResource *v10; // rbx
  char v11; // si
  char v12; // r12
  int v13; // eax
  int BorderDrawListCacheForCurrentVisual; // ebx
  int v16; // eax
  bool v17; // al
  bool v18; // r12
  __int64 v19; // rdx
  CCompositionSurfaceBitmap *v20; // rbx
  int v21; // eax
  CSurfaceBrush *v22; // rcx
  unsigned int v23; // r15d
  LONG height_low; // xmm0_4
  int PrimitiveShape; // r14d
  __int64 v26; // rdx
  const struct D2D_MATRIX_3X2_F *v27; // rdx
  int v28; // eax
  CCompositionSurfaceBitmap *v29; // [rsp+40h] [rbp-C0h] BYREF
  CShape *v30; // [rsp+48h] [rbp-B8h] BYREF
  struct _D3DCOLORVALUE v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  _BYTE v36[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v37; // [rsp+E0h] [rbp-20h]
  struct tagRECT v38; // [rsp+F0h] [rbp-10h] BYREF
  struct CShape *v39[2]; // [rsp+100h] [rbp+0h] BYREF
  char v40; // [rsp+110h] [rbp+10h]
  struct D2D_RECT_F v41; // [rsp+118h] [rbp+18h] BYREF
  struct D2D_RECT_F v42; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v43[4496]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1318h] [rbp+1218h]

  v6 = (CCompositionSurfaceBitmap *)*((_QWORD *)a2 + 23);
  v30 = a5;
  v29 = v6;
  *(struct _D3DCOLORVALUE *)&v31.r = 0LL;
  HasRevealBorder = CSwapchainRenderStrategy::HasRevealBorder(this, a2, &v31);
  v10 = (struct IBitmapResource *)(((unsigned __int64)v6 + 72) & -(__int64)(v6 != 0LL));
  v38 = 0LL;
  v11 = 0;
  v12 = CDrawingContext::DrawAsOverlay(a3, v10, &v38);
  if ( v12 && !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(&v38) )
  {
    v13 = CDrawingContext::PushOverlayClip(a3, (__int64 *)v10, &v38.left);
    BorderDrawListCacheForCurrentVisual = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)BorderDrawListCacheForCurrentVisual;
    }
    v11 = 1;
  }
  if ( !v12 || v11 )
  {
    v16 = CBrush::Draw(a2, a3, a4, v30);
    BorderDrawListCacheForCurrentVisual = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E4,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_11;
    }
  }
  v37 = 0;
  v42 = 0LL;
  v41 = 0LL;
  CCompositionSurfaceBitmap::CalcImageTransform(v29, a4, (CMILMatrix *)v36, &v42, &v41);
  v17 = IsCloseRectF(&v42, &v41, 0.0000011920929);
  v18 = v17;
  if ( HasRevealBorder || !v17 )
  {
    v29 = 0LL;
    BorderDrawListCacheForCurrentVisual = CDrawingContext::GetBorderDrawListCacheForCurrentVisual(a3, &v29);
    if ( BorderDrawListCacheForCurrentVisual < 0 )
    {
      v19 = 1272LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
        (const char *)(unsigned int)BorderDrawListCacheForCurrentVisual);
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v29);
LABEL_11:
      if ( v11 )
        CDrawingContext::PopGpuClipRectInternal(a3, 0);
      return (unsigned int)BorderDrawListCacheForCurrentVisual;
    }
    v20 = v29;
    if ( !*((_QWORD *)v29 + 3) )
    {
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v43);
      v35 = 0LL;
      *(_OWORD *)v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      v21 = CSurfaceBrush::ComputeLayout(a2, a4, (struct CContent::LayoutData *)v32);
      v23 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4FF,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
          (const char *)(unsigned int)v21);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v43);
        wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v29);
        if ( v11 )
          CDrawingContext::PopGpuClipRectInternal(a3, 0);
        return v23;
      }
      height_low = LODWORD(a4->height);
      v38.right = LODWORD(a4->width);
      v38.bottom = height_low;
      *(_QWORD *)&v38.left = 0LL;
      if ( HasRevealBorder )
      {
        v30 = 0LL;
        v39[0] = (struct CShape *)&v30;
        v39[1] = 0LL;
        v40 = 1;
        PrimitiveShape = CSurfaceBrush::GetPrimitiveShape(v22, a4, (const struct D2D_MATRIX_3X2_F *)v32, 1u, &v39[1]);
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)v39);
        if ( PrimitiveShape < 0 )
        {
          v26 = 1295LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
            (const char *)(unsigned int)PrimitiveShape);
          std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v30);
LABEL_27:
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v43);
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v29);
          if ( v11 )
            CDrawingContext::PopGpuClipRectInternal(a3, 0);
          return (unsigned int)PrimitiveShape;
        }
        if ( CShape::AllowsOcclusion(v30) )
        {
          *(_OWORD *)v39 = 0LL;
          PrimitiveShape = (*(__int64 (__fastcall **)(CShape *, struct CShape **, _QWORD))(*(_QWORD *)v30 + 48LL))(
                             v30,
                             v39,
                             0LL);
          if ( PrimitiveShape < 0 )
          {
            v26 = 1300LL;
            goto LABEL_26;
          }
          PrimitiveShape = CDrawingContext::FillHollowRectangleWithSolidColor(
                             a3,
                             (float *)&v38.left,
                             (float *)v39,
                             (__int128 *)&v31,
                             0LL,
                             0LL,
                             (struct CDrawListEntryBuilder *)v43);
          if ( PrimitiveShape < 0 )
          {
            v26 = 1308LL;
            goto LABEL_26;
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v30 + 16LL))(v30) )
        {
          if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v32, v27) )
          {
            v39[0] = (struct CShape *)1;
            v39[1] = (struct CShape *)&v38;
            PrimitiveShape = CDrawingContext::FillRectanglesWithSolidColor(
                               a3,
                               (__int64)v39,
                               (__int64)&v31,
                               (struct CDrawListEntryBuilder *)v43);
            if ( PrimitiveShape < 0 )
            {
              v26 = 1317LL;
              goto LABEL_26;
            }
          }
        }
        std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v30);
      }
      if ( !v18 )
      {
        v28 = CDrawingContext::FillHollowRectangleWithSolidColor(
                a3,
                &v42.left,
                &v41.left,
                &`CSwapchainRenderStrategy::Draw'::`83'::sc_black,
                (D2DMatrixHelper *)v32,
                (__int128 *)&v38.left,
                (struct CDrawListEntryBuilder *)v43);
        PrimitiveShape = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x532,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\surfacebrush.cpp",
            (const char *)(unsigned int)v28);
          goto LABEL_27;
        }
      }
      CDrawListCache::Update(v20, a3, (struct CDrawListEntryBuilder *)v43);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v43);
    }
    BorderDrawListCacheForCurrentVisual = CDrawingContext::EmitDrawListCache(a3, v20);
    if ( BorderDrawListCacheForCurrentVisual < 0 )
    {
      v19 = 1336LL;
      goto LABEL_17;
    }
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v29);
  }
  if ( v11 )
    CDrawingContext::PopGpuClipRectInternal(a3, 0);
  return 0LL;
}
