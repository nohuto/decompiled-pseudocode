/*
 * XREFs of ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D2750
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801CB150 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008B750 (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18009E24C (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18009E84C (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800D711C (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::GetCasterShadowInputBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  int v4; // ecx
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  int v8; // ecx
  struct IBitmapResource *v9; // rdx
  float *v10; // r14
  int v11; // esi
  __int64 v12; // rcx
  CSurfaceDrawListBrush *v13; // rdx
  CSurfaceDrawListBrush *v14; // rbx
  struct D2D_MATRIX_3X2_F *v15; // r9
  __int64 v16; // xmm1_8
  __m128 v18; // xmm1
  float v19; // xmm3_4
  float v20; // xmm2_4
  __int64 v21; // rcx
  CNineGridDrawListBrush *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  FLOAT v26; // xmm1_4
  struct D2D_RECT_F v27; // [rsp+30h] [rbp-40h] BYREF
  CSurfaceDrawListBrush **v28; // [rsp+40h] [rbp-30h] BYREF
  CSurfaceDrawListBrush *v29; // [rsp+48h] [rbp-28h] BYREF
  char v30; // [rsp+50h] [rbp-20h]
  struct D2D_RECT_F v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+68h] [rbp-8h]
  void (__fastcall ***v33)(_QWORD, __int64); // [rsp+B0h] [rbp+40h] BYREF
  CSurfaceDrawListBrush *v34; // [rsp+C8h] [rbp+58h] BYREF

  v4 = *((_DWORD *)this + 63);
  v7 = 0LL;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( v8 )
    {
      if ( v8 != 4 )
      {
        v11 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x1EAu, 0LL);
        return (unsigned int)v11;
      }
      v9 = (struct IBitmapResource *)CProjectedShadow::s_cp2xBlurAsset;
      v10 = (float *)&CProjectedShadow::s_rc2xBlur;
    }
    else
    {
      v9 = ShadowHelpers::s_cpFastShadowBlur;
      v10 = (float *)&ShadowHelpers::s_rcFastShadowBlur;
    }
  }
  else
  {
    v9 = (struct IBitmapResource *)*((_QWORD *)this + 43);
    v10 = (float *)((char *)this + 352);
  }
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v31, v9);
  v34 = 0LL;
  v28 = &v34;
  LOWORD(v33) = SamplerMode::k_ClampClampLinear;
  BYTE2(v33) = 1;
  v29 = 0LL;
  v30 = 1;
  v11 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v31, (__int16 *)&v33, v10, (__int64)&v29);
  if ( v30 )
  {
    v12 = (__int64)v29;
    v13 = *v28;
    *v28 = v29;
    if ( v13 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v12, v13);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1F5u, 0LL);
    std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v34);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v31);
LABEL_9:
    if ( v7 )
      (**v7)(v7, 1LL);
    return (unsigned int)v11;
  }
  v14 = v34;
  v33 = (void (__fastcall ***)(_QWORD, __int64))v34;
  v34 = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31.right);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v31);
  if ( *((_DWORD *)this + 63) )
  {
    v27 = *(struct D2D_RECT_F *)CProjectedShadowCaster::GetCasterBounds(*((_QWORD *)this + 10), *((_QWORD *)a2 + 993));
  }
  else
  {
    v24 = *((_QWORD *)this + 10);
    *(_QWORD *)&v27.left = 0LL;
    v25 = *(_QWORD *)(v24 + 72);
    v26 = *(float *)(v25 + 144);
    v27.right = *(FLOAT *)(v25 + 140);
    v27.bottom = v26;
  }
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(
    &v27.left,
    *((float *)this + 24),
    *((float *)this + 24));
  v32 = 0LL;
  v31 = 0LL;
  D2DMatrixHelper::ComputeRectangleTransform((CSurfaceDrawListBrush *)((char *)v14 + 32), &v27, &v31, v15);
  v16 = v32;
  *(struct D2D_RECT_F *)((char *)v14 + 8) = v31;
  *((_QWORD *)v14 + 3) = v16;
  if ( *((_DWORD *)this + 63) == 1 )
  {
    v18 = (__m128)*((unsigned int *)this + 24);
    v18.m128_f32[0] = v18.m128_f32[0] + v18.m128_f32[0];
    v19 = v10[2] - *v10;
    v20 = v10[3] - v10[1];
    *(_QWORD *)&v31.left = &v34;
    v34 = 0LL;
    *(_QWORD *)&v31.right = 0LL;
    LOBYTE(v32) = 1;
    *(float *)&v28 = v19 * 0.5;
    *(float *)&v29 = v19 * 0.5;
    *((float *)&v28 + 1) = v20 * 0.5;
    *((float *)&v29 + 1) = v20 * 0.5;
    v27 = (struct D2D_RECT_F)_mm_shuffle_ps(v18, v18, 0);
    v11 = CNineGridDrawListBrush::Create(
            (struct CNineGridDrawListBrush *)&v33,
            (int)&v28,
            (int)&v27,
            0,
            (CNineGridDrawListBrush **)&v31.right);
    if ( (_BYTE)v32 )
    {
      v21 = *(_QWORD *)&v31.left;
      v22 = **(CNineGridDrawListBrush ***)&v31.left;
      **(_QWORD **)&v31.left = *(_QWORD *)&v31.right;
      if ( v22 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v21, v22);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x226u, 0LL);
      if ( v34 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v23, v34);
      v7 = v33;
      goto LABEL_9;
    }
    std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(&v33, &v34);
    std::unique_ptr<CNineGridDrawListBrush>::~unique_ptr<CNineGridDrawListBrush>(&v34);
    v14 = (CSurfaceDrawListBrush *)v33;
  }
  if ( *((float *)this + 24) > 0.0 )
  {
    *((_BYTE *)v14 + 52) = 1;
    *((_DWORD *)v14 + 12) = 0;
  }
  *a3 = v14;
  return (unsigned int)v11;
}
