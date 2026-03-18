/*
 * XREFs of ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x1800105B0 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x1800189E4 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180019868 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180019A30 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180038AB4 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180130610 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x18015B11C (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z @ 0x18016EB7C (-GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x18017FE90 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18018A560 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1801AC2D4 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1801AE95C (-HasMatchingParameters@CBlurRenderingGraph@@QEBA_NAEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::ExecuteBlur(
        CRenderingTechnique *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        const struct D2D_VECTOR_2F *a4,
        const struct D2D_SIZE_F *a5,
        struct EffectInput *a6)
{
  unsigned int v6; // edi
  const struct CBackdropVisualImage *BackdropVisualImage; // r14
  CVisual *CurrentVisual; // rax
  __int64 v13; // rdx
  unsigned int *v14; // rdx
  unsigned int v15; // xmm0_4
  __int64 v16; // rdx
  __m128 y_low; // xmm6
  CBlurRenderingGraph *v18; // rsi
  const struct RenderTargetInfo *v19; // rax
  DwmDbg::DbgString *v20; // rax
  const char *v21; // rdx
  char **v22; // rcx
  DwmDbg::DbgString *v23; // rbx
  DwmDbg::DbgString *v24; // rax
  DwmDbg::DbgString *v25; // rbx
  DwmDbg::DbgString *v26; // rax
  __int64 v27; // rdx
  int v28; // ebx
  __int64 v29; // rdx
  CDrawListBitmap *v30; // r12
  struct D2D_MATRIX_3X2_F *v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // xmm1_8
  DwmDbg::DbgString *v37; // rbx
  DwmDbg::DbgString *v38; // rax
  __int64 v39; // rcx
  int v41; // [rsp+28h] [rbp-E0h]
  CBlurRenderingGraph *v42; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_2F v43; // [rsp+40h] [rbp-C8h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v44; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_MATRIX_3X2_F v45; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h]
  float v47; // [rsp+70h] [rbp-98h] BYREF
  char *v48; // [rsp+78h] [rbp-90h] BYREF
  int v49; // [rsp+80h] [rbp-88h] BYREF
  CDrawListBitmap *v50; // [rsp+88h] [rbp-80h] BYREF
  char *v51; // [rsp+90h] [rbp-78h] BYREF
  struct D2D_RECT_F v52; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v53[36]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v54[36]; // [rsp+D4h] [rbp-34h] BYREF
  _BYTE v55[80]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v6 = 0;
  v50 = a3;
  v51 = (char *)this;
  BackdropVisualImage = 0LL;
  if ( *((_BYTE *)a3 + 105) && !*((_BYTE *)a3 + 107) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    BackdropVisualImage = CVisual::GetBackdropVisualImage(CurrentVisual, *(const struct CVisualTreePath **)(v13 + 7968));
  }
  v14 = (unsigned int *)*((_QWORD *)this + 1);
  v47 = 0.0;
  v44 = D2D1_GAUSSIANBLUR_OPTIMIZATION_SPEED;
  v49 = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, float *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, int *))(**(_QWORD **)v14 + 48LL))(
    *(_QWORD *)v14,
    v14[4],
    &v47,
    &v44,
    &v49);
  *(float *)&v15 = v47 * a4->x;
  v43 = 0LL;
  *(_QWORD *)&v45.m11 = __PAIR64__(v47 * a4->y, v15);
  CBlurRenderingGraph::DeterminePreScale(a3, a6, v44, &v45, &v43);
  v16 = *((_QWORD *)this + 2);
  y_low = (__m128)LODWORD(v43.y);
  v45.m11 = v45.m11 * v43.x;
  v45.m12 = v45.m12 * v43.y;
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
    &v42,
    v16);
  v18 = v42;
  if ( !v42 )
    goto LABEL_17;
  if ( CBlurRenderingGraph::HasMatchingParameters(v42, (const struct D2D_VECTOR_2F *)&v45, v44) )
  {
    if ( BackdropVisualImage )
    {
      v19 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
      if ( CBlurredBackdropCache::LookupCachedBlur(
             (CBlurRenderingGraph *)((char *)v18 + 216),
             BackdropVisualImage,
             v19,
             a6) )
      {
        if ( !a5
          || (CDrawListBitmap::GetSize(a6), a5->width == (float)(int)v48)
          && (CDrawListBitmap::GetSize(a6), a5->height == (float)SHIDWORD(v48)) )
        {
          v23 = DwmDbg::DbgString::DbgString((char **)v45.m[1], word_1802F327A);
          v24 = DwmDbg::DbgString::DbgString(&v51, "BVI-UsingCachedBlur");
          CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v24, v23);
          goto LABEL_31;
        }
        v20 = DwmDbg::DbgString::DbgString(&v48, word_1802F327A);
        v21 = "BVI-MismatchedCachedBlurSize";
        v22 = (char **)v45.m[1];
      }
      else
      {
        v20 = DwmDbg::DbgString::DbgString((char **)v45.m[1], word_1802F327A);
        v21 = "BVI-CouldNotFindCachedBlur";
        v22 = &v48;
      }
      v25 = v20;
      v26 = DwmDbg::DbgString::DbgString(v22, v21);
      CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v26, v25);
    }
  }
  else
  {
    wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(&v42);
    v18 = v42;
  }
  if ( !v18 )
  {
LABEL_17:
    wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(&v42);
    v27 = *((_QWORD *)a2 + 4);
    *(_QWORD *)&v45.m[1][0] = "DWM Blur Effect intermediate";
    LODWORD(v45.dx) = 28;
    v28 = CBlurRenderingGraph::Create(
            (const struct CResourceTag *)v45.m[1],
            (enum D3D_FEATURE_LEVEL)*(_DWORD *)(v27 + 624),
            (const struct D2D_VECTOR_2F *)&v45,
            v44,
            D2D1_BORDER_MODE_HARD,
            &v42);
    if ( v28 < 0 )
    {
      v29 = 828LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
        (const char *)(unsigned int)v28,
        v41);
      v6 = v28;
      goto LABEL_31;
    }
    v18 = v42;
  }
  *((_QWORD *)v18 + 198) = _mm_unpacklo_ps((__m128)LODWORD(v43.x), y_low).m128_u64[0];
  if ( a5 )
    *((struct D2D_SIZE_F *)v18 + 195) = *a5;
  v30 = v50;
  v28 = CExternalEffectGraph::Render(v18, a2, v50, a6);
  if ( v28 < 0 )
  {
    v29 = 843LL;
    goto LABEL_19;
  }
  CDrawListBitmap::GetSize(a6);
  D2DMatrixHelper::ComputeRectangleTransform(
    (CDrawListBitmap *)((char *)v30 + 84),
    (const struct D2D_RECT_F *)((char *)a6 + 84),
    &v52,
    v31);
  CDrawListBitmap::GetSize(v30);
  *(_QWORD *)&v45.m[1][1] = 0LL;
  v45.m21 = (float)SLODWORD(v43.x);
  v45.dy = (float)SLODWORD(v43.y);
  *(float *)&v46 = 0.0 - (float)((float)SLODWORD(v43.x) * 0.0);
  *((float *)&v46 + 1) = 0.0 - (float)((float)SLODWORD(v43.y) * 0.0);
  v32 = Matrix3x3::operator*((char *)v30 + 48, v53, v45.m[1]);
  v33 = Matrix3x3::operator*(v32, v54, &v52);
  *(_QWORD *)&v45.m[1][1] = 0LL;
  v45.m21 = 1.0 / (float)(int)v42;
  v45.dy = 1.0 / (float)SHIDWORD(v42);
  *(float *)&v46 = 0.0 - (float)(v45.m21 * 0.0);
  *((float *)&v46 + 1) = 0.0 - (float)(v45.dy * 0.0);
  v34 = Matrix3x3::operator*(v33, v55, v45.m[1]);
  *((_OWORD *)a6 + 3) = *(_OWORD *)v34;
  *((_OWORD *)a6 + 4) = *(_OWORD *)(v34 + 16);
  *((_DWORD *)a6 + 20) = *(_DWORD *)(v34 + 32);
  if ( BackdropVisualImage )
  {
    v35 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
    v43 = 0LL;
    v36 = *(_QWORD *)(v35 + 16);
    *(_OWORD *)&v45.m[1][0] = *(_OWORD *)v35;
    v46 = v36;
    if ( CCommonRegistryData::EnableBackdropBlurCaching )
    {
      if ( CBackdropVisualImage::GetBlurCacheRealizationKey(
             BackdropVisualImage,
             (const struct RenderTargetInfo *)v45.m[1],
             (const void **)&v43) )
      {
        CBlurredBackdropCache::UpdateCachedBlur(
          (CBlurRenderingGraph *)((char *)v18 + 216),
          BackdropVisualImage,
          *(const void **)&v43,
          a6);
        v37 = DwmDbg::DbgString::DbgString((char **)v45.m[1], word_1802F327A);
        v38 = DwmDbg::DbgString::DbgString((char **)&v50, "BVI-CachedNewBlur");
        CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v38, v37);
        ++dword_1803DE41C;
      }
    }
  }
  v42 = 0LL;
  v39 = *((_QWORD *)v51 + 2);
  *((_QWORD *)v51 + 2) = v18;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
LABEL_31:
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v42);
  return v6;
}
