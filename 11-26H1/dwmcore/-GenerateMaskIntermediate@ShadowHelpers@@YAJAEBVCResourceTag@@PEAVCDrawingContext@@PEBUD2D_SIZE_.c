/*
 * XREFs of ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8
 * Callers:
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015926C (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ?ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802B31A0 (-ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCa.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18003D634 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x18005CB40 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005D0FC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180158F04 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___ @ 0x1801CAC08 (gsl--final_action__ShadowHelpers--GenerateMaskIntermediate_--_8_--_lambda_1___--_final_action__S.c)
 *     gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_3___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_3___ @ 0x1801D9654 (gsl--final_action__ShadowHelpers--GenerateMaskIntermediate_--_8_--_lambda_3___--_final_action__S.c)
 *     gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___ @ 0x1801DCCC0 (gsl--final_action__ShadowHelpers--GenerateMaskIntermediate_--_8_--_lambda_2___--_final_action__S.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18022864C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x1802287C8 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180236A34 (-PushClipShapeForCurrentNode@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GenerateMaskIntermediate(
        __int64 a1,
        __int64 a2,
        struct CShape **a3,
        int *a4,
        __int64 a5,
        struct CShape *a6,
        char a7,
        unsigned int *a8,
        _QWORD *a9)
{
  double v9; // xmm2_8
  int v13; // xmm0_4
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  struct CShape *v25; // rbx
  int v26; // eax
  int v27; // eax
  const struct tagRECT *v28; // rax
  int v29; // eax
  int v30; // eax
  struct CShape *v31; // [rsp+38h] [rbp-A1h] BYREF
  __m128 v32; // [rsp+40h] [rbp-99h] BYREF
  __int64 v33; // [rsp+50h] [rbp-89h] BYREF
  int v34; // [rsp+58h] [rbp-81h]
  int v35; // [rsp+5Ch] [rbp-7Dh]
  __int64 v36; // [rsp+60h] [rbp-79h] BYREF
  int v37; // [rsp+68h] [rbp-71h]
  int v38; // [rsp+6Ch] [rbp-6Dh]
  __int64 v39; // [rsp+70h] [rbp-69h] BYREF
  char v40; // [rsp+78h] [rbp-61h]
  _OWORD v41[4]; // [rsp+88h] [rbp-51h] BYREF
  char v42; // [rsp+C8h] [rbp-11h]
  __int16 v43; // [rsp+C9h] [rbp-10h]
  char v44; // [rsp+CBh] [rbp-Eh]
  int v45[8]; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v46; // [rsp+128h] [rbp+4Fh] BYREF

  v31 = 0LL;
  if ( a3 )
  {
    v14 = 4;
    v31 = *a3;
  }
  else
  {
    v13 = *a4;
    *(_QWORD *)&v9 = LODWORD(FLOAT_1_0);
    v38 = a4[1];
    v37 = v13;
    v36 = 0LL;
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate((float *)&v36, 1.0, 1.0);
    PixelAlign((int *)&v33, (unsigned int *)&v36, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)));
    *(float *)&v31 = (float)(v34 - v33);
    v14 = 3;
    *((float *)&v31 + 1) = (float)(v35 - HIDWORD(v33));
  }
  v46 = 0LL;
  v15 = CDrawingContext::PushOffScreenRenderingLayer(a2, a1, (unsigned int *)&v31, -1, v14, &v46);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v39 = a2;
    v40 = 1;
    v32.m128_u64[0] = 0x3F8000003F800000LL;
    v32.m128_f32[2] = *(float *)&v31 - 1.0;
    v32.m128_f32[3] = *((float *)&v31 + 1) - 1.0;
    if ( (float)(*(float *)&v31 - 1.0) <= 1.0 || (float)(*((float *)&v31 + 1) - 1.0) <= 1.0 )
      v32 = 0uLL;
    v18 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, &v32, 1, 0);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x105u, 0LL);
LABEL_37:
      gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_1___(&v39);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v46);
      return v16;
    }
    v33 = a2;
    LOBYTE(v34) = 1;
    v22 = CDrawingContext::MarkCurrentState((CDrawingContext *)a2, v19, v20, v21);
    v16 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x109u, 0LL);
LABEL_36:
      gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_2___(&v33);
      goto LABEL_37;
    }
    v44 = 0;
    v41[0] = _mm_load_si128((const __m128i *)&_xmm);
    v41[1] = _mm_load_si128((const __m128i *)&_xmm);
    v43 = 41;
    v36 = a2;
    LOBYTE(v37) = 1;
    v41[2] = _mm_load_si128((const __m128i *)&_xmm);
    v41[3] = _mm_load_si128((const __m128i *)&_xmm);
    v42 = -88;
    v23 = CDrawingContext::PushTransformInternal((const void **)a2, 0LL, (const struct CMILMatrix *)v41, 0, 1);
    v16 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x10Fu, 0LL);
      goto LABEL_35;
    }
    v25 = a6;
    v32.m128_u64[0] = 0LL;
    v32.m128_i8[8] = 0;
    if ( a6 )
    {
      if ( !a7 )
      {
        CShapePtr::~CShapePtr((CShapePtr *)&v32);
        v32.m128_i8[8] = 0;
        goto LABEL_18;
      }
      v31 = 0LL;
      v28 = (const struct tagRECT *)PixelAlign(v45, a8, v9);
      v29 = CShape::ClipWithRect(v25, v28, &v31);
      v16 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x11Au, 0LL);
        goto LABEL_25;
      }
      v25 = v31;
      CShapePtr::~CShapePtr((CShapePtr *)&v32);
    }
    else
    {
      if ( !a7 )
      {
LABEL_14:
        v26 = (*(__int64 (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)a5 + 208LL))(a5, a2, a4, 0LL);
        v16 = v26;
        if ( v26 >= 0 )
        {
          *a9 = v46;
          CShapePtr::~CShapePtr((CShapePtr *)&v32);
          CDrawingContext::RestoreStateToLastMark((CDrawingContext *)a2);
          CBaseClipStack::Pop((CBaseClipStack *)(a2 + 3104));
          --*(_QWORD *)(*(_QWORD *)(a2 + 744) - 184LL);
          *(_BYTE *)(a2 + 8065) = 1;
          CDrawingContext::PopLayer((CDrawingContext *)a2);
          return v16;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x12Eu, 0LL);
        goto LABEL_25;
      }
      v31 = 0LL;
      v30 = CShape::BuildFromRectFs(a8, v24, &v31);
      v16 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x125u, 0LL);
        goto LABEL_25;
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v32);
      v25 = v31;
    }
    v32.m128_i8[8] = 1;
LABEL_18:
    v32.m128_u64[0] = (unsigned __int64)v25;
    if ( !v25 )
      goto LABEL_14;
    v27 = CDrawingContext::PushClipShapeForCurrentNode((struct CDrawingContext *)a2);
    v16 = v27;
    if ( v27 >= 0 )
      goto LABEL_14;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x12Bu, 0LL);
LABEL_25:
    CShapePtr::~CShapePtr((CShapePtr *)&v32);
LABEL_35:
    gsl::final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_3___::_final_action__ShadowHelpers::GenerateMaskIntermediate_::_8_::_lambda_3___(&v36);
    goto LABEL_36;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xFDu, 0LL);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  return v16;
}
