/*
 * XREFs of ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18028B480 (-ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180040050 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___ @ 0x1801BE958 (gsl--final_action__CShapeTree--RenderIntermediate_--_2_--_lambda_2___--_final_action__CShapeTree.c)
 *     gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___ @ 0x1801CAC08 (gsl--final_action__ShadowHelpers--GenerateMaskIntermediate_--_8_--_lambda_1___--_final_action__S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTree::RenderIntermediate(
        __m128 *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        float *a5,
        float *a6,
        int a7,
        __int64 *a8)
{
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  CDrawingContext *v19; // rcx
  int v21; // [rsp+28h] [rbp-59h]
  int v22; // [rsp+28h] [rbp-59h]
  const char *v23; // [rsp+38h] [rbp-49h] BYREF
  int v24; // [rsp+40h] [rbp-41h]
  struct CDrawingContext *v25; // [rsp+48h] [rbp-39h] BYREF
  char v26; // [rsp+50h] [rbp-31h]
  _BYTE v27[64]; // [rsp+58h] [rbp-29h] BYREF
  int v28; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+3Fh]
  __int64 v30; // [rsp+D0h] [rbp+4Fh] BYREF

  v30 = 0LL;
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v24 = 28;
  v23 = "DWM ShapeVisual intermediate";
  v21 = a7;
  v13 = CDrawingContext::PushOffScreenRenderingLayer(a2, &v23, a4, *(unsigned int *)(v12 + 8));
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
      (const char *)(unsigned int)v13,
      v21);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    return v14;
  }
  else
  {
    v15 = v30;
    v25 = a2;
    v26 = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 104LL))(v30, 0LL);
    v28 = 0;
    CMILMatrix::InferAffineMatrix((__int64)v27, a5, a6);
    v16 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v27, 0, 1);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11A,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
        (const char *)(unsigned int)v16,
        v22);
      CDrawingContext::PopLayer(a2);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      v23 = (const char *)a2;
      LOBYTE(v24) = 1;
      v18 = CShapeTree::DrawShapes(this, a2, a3);
      v17 = v18;
      if ( v18 >= 0 )
      {
        *a8 = v15;
        CDrawingContext::PopTransformInternal(a2, 1);
        CDrawingContext::PopLayer(v19);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
        (const char *)(unsigned int)v18,
        v22);
      gsl::final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___::_final_action__CShapeTree::RenderIntermediate_::_2_::_lambda_2___(&v23);
      gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___(&v25);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
    }
    return v17;
  }
}
