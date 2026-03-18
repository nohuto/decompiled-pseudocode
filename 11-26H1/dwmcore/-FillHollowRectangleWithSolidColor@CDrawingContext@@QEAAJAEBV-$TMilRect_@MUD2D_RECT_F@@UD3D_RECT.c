/*
 * XREFs of ?FillHollowRectangleWithSolidColor@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0AEBU_D3DCOLORVALUE@@PEBUD2D_MATRIX_3X2_F@@PEBV2@PEAVCDrawListEntryBuilder@@@Z @ 0x180235E6C
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18000F2D0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18001B6F4 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18003EBEC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18009E84C (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801737C0 (-DoesContain@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18018DF00 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801B7070 (--1-$out_param_t@V-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrus.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::FillHollowRectangleWithSolidColor(
        struct CDrawingContext *a1,
        float *a2,
        float *a3,
        __int128 *a4,
        D2DMatrixHelper *a5,
        __int128 *a6,
        struct CDrawListEntryBuilder *a7)
{
  float m11; // xmm6_4
  float v11; // xmm8_4
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int128 v16; // xmm0
  float *v17; // r9
  unsigned __int64 v18; // r9
  char *v19; // rax
  __int128 v20; // xmm0
  char *v21; // rax
  float v22; // xmm7_4
  float v23; // xmm5_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  char v27; // r9
  __int64 (__fastcall ***v28)(_QWORD, __int64); // rax
  __int128 v29; // xmm0
  int DrawList; // eax
  __int64 (__fastcall ***v32)(_QWORD, __int64); // [rsp+38h] [rbp-D0h] BYREF
  char *v33; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v34; // [rsp+48h] [rbp-C0h] BYREF
  FLOAT *p_dx; // [rsp+60h] [rbp-A8h] BYREF
  struct CGeometryOnlyDrawListBrush *v36; // [rsp+68h] [rbp-A0h] BYREF
  int v37; // [rsp+70h] [rbp-98h]
  float v38[4]; // [rsp+78h] [rbp-90h] BYREF
  FLOAT *p_m21; // [rsp+88h] [rbp-80h] BYREF
  CNineGridDrawListBrush *v40; // [rsp+90h] [rbp-78h] BYREF
  char v41; // [rsp+98h] [rbp-70h]
  __int128 v42; // [rsp+A8h] [rbp-60h] BYREF
  int v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+104h] [rbp-4h]
  char v45; // [rsp+108h] [rbp+0h]
  CDrawingContext *v46[7]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v47; // [rsp+150h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v44 = 257;
  v42 = 0LL;
  v43 = 0;
  v45 = 0;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v46, a1);
  m11 = FLOAT_1_0;
  v34.m11 = FLOAT_1_0;
  *(float *)&v32 = FLOAT_1_0;
  v11 = FLOAT_1_0;
  v33 = 0LL;
  *(_OWORD *)&v34.m[1][0] = 0uLL;
  if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesContain(a3, a2) )
    goto LABEL_21;
  if ( !a6 )
  {
LABEL_6:
    v36 = 0LL;
    p_dx = (FLOAT *)&v33;
    LOBYTE(v37) = 1;
    v13 = CGeometryOnlyDrawListBrush::Create(&v36, v12);
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&p_dx);
    if ( v13 < 0 )
    {
      v14 = 2325LL;
      goto LABEL_8;
    }
    v19 = v33;
    v33[52] = 1;
    v20 = *(_OWORD *)a2;
    *((_DWORD *)v19 + 12) = 50529027;
    *((_OWORD *)v19 + 2) = v20;
    if ( a5 )
    {
      v21 = v33;
      *(_OWORD *)(v33 + 8) = *(_OWORD *)a5;
      *((_QWORD *)v21 + 3) = *((_QWORD *)a5 + 2);
      D2DMatrixHelper::GetScaleDimensions(a5, &v34, (float *)&v32, v17);
      m11 = v34.m11;
      v11 = *(float *)&v32;
    }
    v22 = fmaxf(0.0, a2[3] - a3[3]);
    v23 = fmaxf(0.0, a2[2] - a3[2]);
    v24 = a3[1] - a2[1];
    v36 = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v22), LODWORD(v23));
    v25 = fmaxf(0.0, v24);
    v26 = *a3 - *a2;
    v38[1] = v25 * v11;
    p_dx = (FLOAT *)__PAIR64__(LODWORD(v25), COERCE_UNSIGNED_INT(fmaxf(0.0, v26)));
    v38[3] = v22 * v11;
    v38[0] = *(float *)&p_dx * m11;
    v38[2] = v23 * m11;
    if ( *(float *)&p_dx != 0.0 || v25 != 0.0 || v23 != 0.0 || (v27 = 0, v22 != 0.0) )
      v27 = 1;
    v40 = 0LL;
    p_m21 = &v34.m21;
    v32 = (__int64 (__fastcall ***)(_QWORD, __int64))v33;
    v41 = 1;
    v33 = 0LL;
    v13 = CNineGridDrawListBrush::Create((struct CNineGridDrawListBrush *)&v32, (int)&p_dx, (int)v38, v27, &v40);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v32);
    wil::details::out_param_t<std::unique_ptr<CNineGridDrawListBrush>>::~out_param_t<std::unique_ptr<CNineGridDrawListBrush>>((__int64)&p_m21);
    if ( v13 < 0 )
    {
      v14 = 2361LL;
      goto LABEL_8;
    }
    v28 = *(__int64 (__fastcall ****)(_QWORD, __int64))&v34.m[1][0];
    v29 = *a4;
    *(_QWORD *)&v34.m[1][0] = 0LL;
    v32 = v28;
    v47 = v29;
    CBrushDrawListGenerator::AttachInput((__int64)v46, 0, (__int64 *)&v32);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v32);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v46,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v42,
                 a7);
    v13 = DrawList;
    if ( DrawList < 0 )
    {
      v18 = (unsigned int)DrawList;
      v14 = 2367LL;
      goto LABEL_9;
    }
LABEL_21:
    v13 = 0;
    goto LABEL_22;
  }
  v36 = 0LL;
  p_dx = &v34.dx;
  LOBYTE(v37) = 1;
  v13 = CGeometryOnlyDrawListBrush::Create(&v36, v12);
  wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&p_dx);
  if ( v13 >= 0 )
  {
    v15 = *(_QWORD *)&v34.m[2][0];
    *(_BYTE *)(*(_QWORD *)&v34.m[2][0] + 52LL) = 1;
    v16 = *a6;
    *(_DWORD *)(v15 + 48) = 50529027;
    *(_OWORD *)(v15 + 32) = v16;
    *(_QWORD *)&v42 = *(_QWORD *)&v34.m[2][0];
    goto LABEL_6;
  }
  v14 = 2320LL;
LABEL_8:
  v18 = (unsigned int)v13;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)v18);
LABEL_22:
  std::unique_ptr<CNineGridDrawListBrush>::~unique_ptr<CNineGridDrawListBrush>((CNineGridDrawListBrush **)v34.m[1]);
  std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v33);
  std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)v34.m[2]);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v46);
  return (unsigned int)v13;
}
