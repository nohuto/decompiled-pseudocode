/*
 * XREFs of ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC
 * Callers:
 *     ?RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180202650 (-RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800BA820 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1800C0C88 (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB760 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180184FB0 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC (-GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1802021A4 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NPEAVCDrawListEntryBuilder@@@Z @ 0x18023642C (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NPE.c)
 *     ?GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAV2@@Z @ 0x180268354 (-GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZ.c)
 */

__int64 __fastcall CWindowNode::RenderSpriteBitmap(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        struct IBitmapResource *a4)
{
  char v4; // r14
  __int64 *v5; // r13
  bool v10; // r14
  int EffectiveBounds; // ebx
  __int64 v12; // rdx
  __int64 i; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  const struct CShape *v17; // rbx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  int v21; // edi
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  struct D2D_RECT_F v27; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v28; // [rsp+40h] [rbp-C0h] BYREF
  char v29; // [rsp+50h] [rbp-B0h]
  const struct CShape *v30; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+70h] [rbp-90h]
  _BYTE v33[64]; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+C0h] [rbp-40h]
  _BYTE v35[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v36[64]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v4 = *((_BYTE *)this + 764);
  v5 = (__int64 *)((char *)this + 880);
  v34 = 0;
  v10 = v4 & 1;
  v31 = 0LL;
  v28 = 0LL;
  EffectiveBounds = CWindowNode::GetEffectiveBounds(this, 0LL, (char *)this + 880, &v31, 0LL);
  if ( EffectiveBounds < 0 )
  {
    v12 = 1337LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)(unsigned int)EffectiveBounds);
    return (unsigned int)EffectiveBounds;
  }
  EffectiveBounds = CWindowNode::ApplyTextureToLocalTransform(this, 0LL);
  if ( EffectiveBounds < 0 )
  {
    v12 = 1341LL;
    goto LABEL_3;
  }
  if ( !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(&v31) && !IsEmpty(&v28) )
  {
    v27 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v33, &v28, &v27.left);
    for ( i = 0LL; i < 16; i += 4LL )
      *(float *)((char *)&v28.left + i) = (float)*(int *)((char *)&v31 + i);
    if ( v28.left > v27.left )
      v27.left = v28.left;
    if ( v28.top > v27.top )
      v27.top = v28.top;
    if ( v27.right > v28.right )
      v27.right = v28.right;
    if ( v27.bottom > v28.bottom )
      v27.bottom = v28.bottom;
    if ( IsEmpty(&v27) )
    {
      *(_QWORD *)&v27.right = 0LL;
      *(_QWORD *)&v27.left = 0LL;
    }
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v36, &v27);
    v16 = *v5;
    v30 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)&v28.right = 0LL;
      *(_QWORD *)&v28.left = &v30;
      v29 = 1;
      EffectiveBounds = CShape::Combine((__int64)v36, v15, v16, 0LL, 1, (CComplexShape **)&v28.right);
      wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v28);
      if ( EffectiveBounds < 0 )
      {
        v18 = (unsigned int)EffectiveBounds;
        v19 = 1365LL;
        goto LABEL_41;
      }
      v17 = v30;
    }
    else
    {
      v17 = (const struct CShape *)v36;
    }
    v28 = 0LL;
    if ( (unsigned __int8)CWindowNode::GetAlphaMarginsRect(this, &v31, &v28) && v10 )
    {
      v20 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v33, v17, 0, a3);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x575,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
          (const char *)(unsigned int)v20);
        EffectiveBounds = v21;
LABEL_42:
        std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v30);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v36);
        return (unsigned int)EffectiveBounds;
      }
      if ( !TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(&v28) )
      {
        *(_QWORD *)&v27.left = 0LL;
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)v35, (const __m128i *)&v28);
        *((_QWORD *)&v31 + 1) = 0LL;
        *(_QWORD *)&v31 = &v27;
        v32 = 1;
        EffectiveBounds = CShape::Combine((__int64)v35, v22, (__int64)v17, 0LL, 1, (CComplexShape **)&v31 + 1);
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v31);
        if ( EffectiveBounds < 0 )
        {
          v23 = (unsigned int)EffectiveBounds;
          v24 = 1408LL;
LABEL_33:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
            (const char *)v23);
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
          std::unique_ptr<CShape>::~unique_ptr<CShape>(&v27);
          goto LABEL_42;
        }
        v25 = CDrawingContext::FillShapeWithBitmap(
                a2,
                a4,
                (const struct CMILMatrix *)v33,
                *(const struct CShape **)&v27.left,
                v10,
                a3);
        EffectiveBounds = v25;
        if ( v25 < 0 )
        {
          v23 = (unsigned int)v25;
          v24 = 1416LL;
          goto LABEL_33;
        }
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
        std::unique_ptr<CShape>::~unique_ptr<CShape>(&v27);
      }
      goto LABEL_37;
    }
    v26 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v33, v17, v10, a3);
    EffectiveBounds = v26;
    if ( v26 >= 0 )
    {
LABEL_37:
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v30);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v36);
      return 0LL;
    }
    v18 = (unsigned int)v26;
    v19 = 1380LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windownode.cpp",
      (const char *)v18);
    goto LABEL_42;
  }
  return 0LL;
}
