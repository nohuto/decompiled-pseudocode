/*
 * XREFs of ?RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2AEBVCMILMatrix@@AEBVCShapePtr@@@Z @ 0x1802687D8
 * Callers:
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000D8A0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006C3D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800DFBBC (-GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800EA480 (--1CRegionShape@@UEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180184FB0 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180189610 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180189638 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?IsCloseRectF@@YA_NAEBUD2D_RECT_F@@0M@Z @ 0x1801BC66C (-IsCloseRectF@@YA_NAEBUD2D_RECT_F@@0M@Z.c)
 *     ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801CEE3C (--0CRegionShape@@QEAA@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@.c)
 *     ?GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z @ 0x18020284C (-GetDrawListCache@CWindowNode@@AEBAJPEAVCDrawingContext@@IPEAPEAVCDrawListCache@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntryBuilder@@@Z @ 0x180236610 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@PEAVCDrawListEntr.c)
 */

__int64 __fastcall CWindowNode::RenderFlipExBorders(
        struct tagRECT *this,
        CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        struct D2D_RECT_F *a4,
        struct D2D_RECT_F *a5,
        struct CShape *a6,
        __int64 *a7)
{
  double v7; // xmm2_8
  struct CShape *v8; // r15
  int DrawListCache; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  CDrawListCache *v15; // rbx
  CCompositionSurfaceBitmap *CurrentFlip; // r13
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct D2D_RECT_F **v21; // rcx
  __int64 v22; // r8
  const struct CShape *v23; // rdx
  const struct D2D_RECT_F *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  const struct CShape *v29; // rdx
  struct D2D_RECT_F *v31; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v32; // [rsp+38h] [rbp-C8h] BYREF
  const struct CShape *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ****v34)(_QWORD, __int64); // [rsp+48h] [rbp-B8h] BYREF
  CComplexShape *v35; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+58h] [rbp-A8h]
  struct CShape *v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  CDrawListCache *v38; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v39; // [rsp+78h] [rbp-88h] BYREF
  struct D2D_RECT_F *v40[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _D3DCOLORVALUE v41; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v42[96]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v43[96]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v44[96]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v45[96]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v8 = a6;
  v40[0] = a4;
  v31 = a5;
  v32 = a6;
  v38 = 0LL;
  DrawListCache = CWindowNode::GetDrawListCache((CWindowNode *)this, a2, 6LL, &v38);
  v13 = DrawListCache;
  if ( DrawListCache < 0 )
  {
    v14 = 1228LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)DrawListCache);
    goto LABEL_37;
  }
  v15 = v38;
  if ( *((_QWORD *)v38 + 3) )
    goto LABEL_33;
  *(_OWORD *)v37 = 0LL;
  CurrentFlip = CWindowNode::GetCurrentFlipExSurface((CWindowNode *)this);
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)a6, v31, (float *)v37);
  PixelAlign(&v39.left, (unsigned int *)v37, v7);
  if ( !(unsigned int)CCompositionSurfaceBitmap::GetSizePreference((__int64)CurrentFlip) )
  {
LABEL_20:
    if ( !IsCloseRectF(v31, v40[0], 0.0000011920929) )
    {
      *(_OWORD *)v40 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v8, v24, (float *)v40);
      PixelAlign((int *)&v41, (unsigned int *)v40, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_0_0000011920929)));
      v31 = 0LL;
      v32 = 0LL;
      CRegionShape::CRegionShape((__int64)v45, &v39);
      CRegionShape::CRegionShape((__int64)v44, (const struct tagRECT *)&v41);
      v35 = 0LL;
      v34 = (__int64 (__fastcall ****)(_QWORD, __int64))&v31;
      v36 = 1;
      v18 = CShape::Combine((__int64)v45, v25, (__int64)v44, 0LL, 2, &v35);
      wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v34);
      if ( v18 < 0 )
      {
        v27 = 1297LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
          (const char *)(unsigned int)v18);
        CRegionShape::~CRegionShape((CRegionShape *)v44);
        CRegionShape::~CRegionShape((CRegionShape *)v45);
        std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v32);
        v21 = &v31;
        goto LABEL_10;
      }
      v28 = *a7;
      if ( *a7 )
      {
        v34 = (__int64 (__fastcall ****)(_QWORD, __int64))&v32;
        v35 = 0LL;
        v36 = 1;
        v18 = CShape::Combine((__int64)v31, v26, v28, 0LL, 1, &v35);
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v34);
        if ( v18 < 0 )
        {
          v27 = 1305LL;
          goto LABEL_23;
        }
      }
      v29 = (const struct CShape *)v31;
      if ( v32 )
        v29 = v32;
      v18 = CDrawingContext::FillShapeWithSolidColor(a2, v29, &stru_1803A0B28, a3);
      if ( v18 < 0 )
      {
        v27 = 1315LL;
        goto LABEL_23;
      }
      CRegionShape::~CRegionShape((CRegionShape *)v44);
      CRegionShape::~CRegionShape((CRegionShape *)v45);
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v32);
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v31);
    }
    CDrawListCache::Update(v15, a2, a3);
    CDrawListEntryBuilder::Reset(a3);
LABEL_33:
    DrawListCache = CDrawingContext::EmitDrawListCache(a2, v15);
    v13 = DrawListCache;
    if ( DrawListCache >= 0 )
    {
      v13 = 0;
      goto LABEL_37;
    }
    v14 = 1322LL;
    goto LABEL_35;
  }
  if ( this[43].right - this[43].left <= v39.right - v39.left && this[43].bottom - this[43].top <= v39.bottom - v39.top )
  {
    v8 = v32;
    goto LABEL_20;
  }
  CCompositionSurfaceBitmap::GetBorderColor(CurrentFlip, &v41);
  v33 = 0LL;
  v37[0] = 0LL;
  CRegionShape::CRegionShape((__int64)v43, this + 43);
  CRegionShape::CRegionShape((__int64)v42, &v39);
  v35 = 0LL;
  v34 = (__int64 (__fastcall ****)(_QWORD, __int64))&v33;
  v36 = 1;
  v18 = CShape::Combine((__int64)v43, v17, (__int64)v42, 0LL, 2, &v35);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v34);
  if ( v18 >= 0 )
  {
    v22 = *a7;
    if ( *a7 )
    {
      v34 = (__int64 (__fastcall ****)(_QWORD, __int64))v37;
      v35 = 0LL;
      v36 = 1;
      v18 = CShape::Combine((__int64)v33, v19, v22, 0LL, 1, &v35);
      wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v34);
      if ( v18 < 0 )
      {
        v20 = 1268LL;
        goto LABEL_9;
      }
    }
    v23 = v33;
    if ( v37[0] )
      v23 = v37[0];
    v18 = CDrawingContext::FillShapeWithSolidColor(a2, v23, &v41, a3);
    if ( v18 < 0 )
    {
      v20 = 1277LL;
      goto LABEL_9;
    }
    CRegionShape::~CRegionShape((CRegionShape *)v42);
    CRegionShape::~CRegionShape((CRegionShape *)v43);
    std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))v37);
    std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v33);
    v8 = v32;
    goto LABEL_20;
  }
  v20 = 1260LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
    (const char *)(unsigned int)v18);
  CRegionShape::~CRegionShape((CRegionShape *)v42);
  CRegionShape::~CRegionShape((CRegionShape *)v43);
  std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))v37);
  v21 = (struct D2D_RECT_F **)&v33;
LABEL_10:
  std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))v21);
  v13 = v18;
LABEL_37:
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v38);
  return v13;
}
