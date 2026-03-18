/*
 * XREFs of ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x1801A7A80
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18003A7BC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18009E24C (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18009E84C (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4,
        struct CDrawListBrush **a5)
{
  struct IBitmapResource *v5; // rdx
  FLOAT v6; // xmm1_4
  CNineGridDrawListBrush *v8; // rbx
  int v9; // edi
  struct D2D_MATRIX_3X2_F *v10; // r9
  __int64 v11; // rcx
  CSurfaceDrawListBrush *v12; // rax
  CNineGridDrawListBrush *v13; // rcx
  __int64 v14; // xmm1_8
  struct CDrawListBrush *v15; // rbx
  __int64 v16; // rcx
  char v17; // al
  float v18; // xmm0_4
  float v19; // xmm0_4
  __int64 v20; // rcx
  CNineGridDrawListBrush *v21; // rdx
  CNineGridDrawListBrush *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v26; // [rsp+38h] [rbp-21h] BYREF
  struct D2D_RECT_F v27; // [rsp+48h] [rbp-11h] BYREF
  struct D2D_RECT_F v28; // [rsp+58h] [rbp-1h] BYREF
  __int64 v29; // [rsp+68h] [rbp+Fh]
  __int64 v30; // [rsp+70h] [rbp+17h] BYREF
  __int64 v31[4]; // [rsp+78h] [rbp+1Fh] BYREF
  CNineGridDrawListBrush *v32; // [rsp+B8h] [rbp+5Fh] BYREF
  CNineGridDrawListBrush *v33; // [rsp+C0h] [rbp+67h] BYREF

  v33 = a2;
  v5 = (struct IBitmapResource *)*((_QWORD *)this + 7);
  v6 = a4 + a3->height;
  v8 = 0LL;
  v33 = 0LL;
  v27.bottom = v6;
  v27.left = 0.0 - a4;
  v27.top = 0.0 - a4;
  v27.right = a4 + a3->width;
  v26 = *(_OWORD *)((char *)this + 24);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v30, v5);
  *(_QWORD *)&v28.right = 0LL;
  *(_QWORD *)&v28.left = &v33;
  LOWORD(v32) = SamplerMode::k_ClampClampLinear;
  BYTE2(v32) = 1;
  LOBYTE(v29) = 1;
  v9 = CSurfaceDrawListBrush::CreateWithContentRect(&v30, (__int16 *)&v32, (float *)&v26, (__int64)&v28.right);
  if ( (_BYTE)v29 )
  {
    v11 = *(_QWORD *)&v28.right;
    v12 = **(CSurfaceDrawListBrush ***)&v28.left;
    **(_QWORD **)&v28.left = *(_QWORD *)&v28.right;
    if ( v12 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v11, v12);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x34Cu, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v31);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v30);
    if ( !v33 )
      return (unsigned int)v9;
    std::default_delete<CSurfaceDrawListBrush>::operator()(v24, v33);
  }
  else
  {
    v29 = 0LL;
    v28 = 0LL;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v26, &v27, &v28, v10);
    v13 = v33;
    v14 = v29;
    *(struct D2D_RECT_F *)((char *)v33 + 8) = v28;
    *((_QWORD *)v13 + 3) = v14;
    v15 = v33;
    v32 = v33;
    v33 = 0LL;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v31);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>(&v30);
    if ( v33 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v16, v33);
    v17 = *((_BYTE *)this + 68);
    if ( !v17 && !*((_BYTE *)this + 69) )
      goto LABEL_20;
    v26 = 0LL;
    v27 = 0LL;
    if ( v17 )
    {
      v18 = *((float *)this + 8) - *((float *)this + 6);
      *(float *)&v26 = a4 + a4;
      *((float *)&v26 + 2) = a4 + a4;
      v27.left = v18 * 0.5;
      v27.right = v18 * 0.5;
    }
    if ( *((_BYTE *)this + 69) )
    {
      v19 = *((float *)this + 9) - *((float *)this + 7);
      *((float *)&v26 + 1) = a4 + a4;
      *((float *)&v26 + 3) = a4 + a4;
      v27.top = v19 * 0.5;
      v27.bottom = v19 * 0.5;
    }
    v33 = 0LL;
    *(_QWORD *)&v28.left = &v33;
    *(_QWORD *)&v28.right = 0LL;
    LOBYTE(v29) = 1;
    v9 = CNineGridDrawListBrush::Create(
           (struct CNineGridDrawListBrush *)&v32,
           (int)&v27,
           (int)&v26,
           0,
           (CNineGridDrawListBrush **)&v28.right);
    if ( (_BYTE)v29 )
    {
      v20 = *(_QWORD *)&v28.left;
      v21 = **(CNineGridDrawListBrush ***)&v28.left;
      **(_QWORD **)&v28.left = *(_QWORD *)&v28.right;
      if ( v21 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v20, v21);
    }
    v22 = 0LL;
    if ( v9 >= 0 )
    {
      v23 = (__int64)v32;
      v15 = v33;
      v33 = 0LL;
      if ( v32 )
      {
        (**(void (__fastcall ***)(CNineGridDrawListBrush *, __int64))v32)(v32, 1LL);
        v22 = v33;
      }
      if ( v22 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v23, v22);
LABEL_20:
      v9 = 0;
      *a5 = v15;
      return (unsigned int)v9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x377u, 0LL);
    std::unique_ptr<CNineGridDrawListBrush>::~unique_ptr<CNineGridDrawListBrush>(&v33);
    v8 = v32;
  }
  if ( v8 )
    (**(void (__fastcall ***)(CNineGridDrawListBrush *, __int64))v8)(v8, 1LL);
  return (unsigned int)v9;
}
