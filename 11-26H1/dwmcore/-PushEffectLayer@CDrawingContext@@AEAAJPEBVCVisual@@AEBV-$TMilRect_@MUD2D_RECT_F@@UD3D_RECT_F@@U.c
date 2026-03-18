/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800F898C
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 * Callees:
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x18005D080 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x18005D5D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F8D88 (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800F8EA0 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800F8ECC (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCV.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x1800F93CC (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800FA610 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18025041C (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IDeviceTarget **this,
        struct CVisual *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CEffectBrush *a6,
        char *a7)
{
  __m128 v7; // xmm2
  struct CLayer *v10; // rsi
  CTreeEffectLayer *v11; // r15
  char v12; // r13
  __m128i *v13; // rax
  float *v14; // r11
  __m128 v15; // xmm3
  __m128i v16; // xmm6
  int v17; // ecx
  __m128i v18; // xmm4
  int v19; // ecx
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  int v22; // eax
  int v23; // ecx
  float v24; // xmm7_4
  __m128i v25; // xmm3
  unsigned __int64 v26; // xmm0_8
  float v27; // xmm8_4
  unsigned int v28; // edx
  unsigned int v29; // r8d
  int v30; // eax
  unsigned int v31; // ebx
  int v33; // r9d
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+28h] [rbp-A1h]
  float v37; // [rsp+48h] [rbp-81h]
  float v38; // [rsp+48h] [rbp-81h]
  struct CLayer *v39; // [rsp+50h] [rbp-79h] BYREF
  struct CLayer *v40[2]; // [rsp+58h] [rbp-71h] BYREF
  float v41[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v42; // [rsp+70h] [rbp-59h]
  __int64 v43; // [rsp+78h] [rbp-51h]
  char *v44; // [rsp+80h] [rbp-49h]
  _OWORD v45[4]; // [rsp+88h] [rbp-41h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v43 = a5;
  v44 = a7;
  v12 = 0;
  v42 = 0LL;
  v40[0] = 0LL;
  v39 = 0LL;
  v13 = (__m128i *)CTreeEffectLayer::RoundOffLayerSize(v45, a3);
  v15 = (__m128)*(unsigned int *)v14;
  v16 = *v13;
  v45[0] = *v13;
  if ( (_mm_cvtsi128_si32((__m128i)v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v15.m128_f32[0] - v15.m128_f32[0];
    v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
    v17 = (int)v15.m128_f32[0] - _mm_cvtsi128_si32((__m128i)v7);
  }
  else
  {
    v37 = v15.m128_f32[0] + 6291456.25;
    v17 = (int)(LODWORD(v37) << 10) >> 11;
  }
  v18 = (__m128i)*((unsigned int *)v14 + 1);
  v41[0] = (float)v17;
  if ( (_mm_cvtsi128_si32(v18) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)*(float *)v18.m128i_i32 - *(float *)v18.m128i_i32;
    v19 = (int)*(float *)v18.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v38 = *(float *)v18.m128i_i32 + 6291456.25;
    v19 = (int)(LODWORD(v38) << 10) >> 11;
  }
  v20.m128_f32[0] = v14[2] - v15.m128_f32[0];
  v21 = (__m128)COERCE_UNSIGNED_INT((float)v19);
  v41[1] = (float)v19;
  v21.m128_f32[0] = (float)(int)v20.m128_f32[0];
  v22 = _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v21, v20));
  v21.m128_f32[0] = v14[3] - *(float *)v18.m128i_i32;
  v23 = (int)v21.m128_f32[0];
  v24 = (float)((int)v20.m128_f32[0] - v22);
  v15.m128_f32[0] = (float)(int)v21.m128_f32[0];
  *(float *)&v42 = v24;
  v25 = (__m128i)_mm_cmplt_ss(v15, v21);
  v26 = _mm_srli_si128(v16, 8).m128i_u64[0];
  v27 = (float)(v23 - _mm_cvtsi128_si32(v25));
  *((float *)&v42 + 1) = v27;
  if ( (int)v26 <= 0 || SHIDWORD(v26) <= 0 )
  {
    v12 = 1;
    v30 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
    v31 = v30;
    if ( v30 >= 0 )
      goto LABEL_17;
    v36 = 3725;
    goto LABEL_27;
  }
  if ( a6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)a6 + 64LL))(a6, 51LL) )
    {
      if ( CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v26, _mm_cvtsi128_si32(_mm_srli_si128(v16, 12))) )
      {
        v35 = CFilterEffectLayer::Create(
                this[3],
                (const struct D2D_POINTANDSIZE_L *)v45,
                a6,
                a2,
                (const struct D2D_POINTANDSIZE_F *)v41,
                v40);
        v31 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0xEA2u, 0LL);
          v10 = v40[0];
          goto LABEL_18;
        }
        v10 = v40[0];
        v30 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v40[0], 1, 1);
        v31 = v30;
        if ( v30 >= 0 )
        {
          v10 = 0LL;
          goto LABEL_17;
        }
        v36 = 3752;
      }
      else
      {
        v30 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
        v31 = v30;
        if ( v30 >= 0 )
          goto LABEL_17;
        v36 = 3735;
      }
LABEL_27:
      v33 = v30;
      goto LABEL_24;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)a6 + 64LL))(a6, 47LL) )
    {
      v31 = -2147024809;
      v33 = -2147024809;
      v36 = 3802;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, v36, 0LL);
      goto LABEL_18;
    }
  }
  *(__m128i *)v40 = v16;
  if ( a6 && CEffectBrush::HasBlurEffectNode(a6) )
  {
    v28 = (int)v24;
    v29 = (int)v27;
  }
  else
  {
    v29 = HIDWORD(v40[1]);
    v28 = (unsigned int)v40[1];
  }
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v28, v29) )
  {
    v30 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
    v31 = v30;
    if ( v30 >= 0 )
      goto LABEL_17;
    v36 = 3768;
    goto LABEL_27;
  }
  if ( (int)CTreeEffectLayer::Create(this[3], v45, a6, a2, v41, v43, &v39) >= 0 )
  {
    v11 = v39;
    v30 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v39, 1, 1);
    v31 = v30;
    if ( v30 >= 0 )
    {
      v11 = 0LL;
LABEL_17:
      *v44 = v12;
      goto LABEL_18;
    }
    v36 = 3792;
    goto LABEL_27;
  }
  v34 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
  v31 = v34;
  if ( v34 >= 0 )
  {
    v11 = v39;
    v31 = 0;
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0xEC7u, 0LL);
  v11 = v39;
LABEL_18:
  if ( v10 )
  {
    *(_QWORD *)v10 = &CFilterEffectLayer::`vftable';
    CExternalLayer::~CExternalLayer(v10);
    operator delete(v10, 0x90uLL);
  }
  if ( v11 )
    CTreeEffectLayer::`vector deleting destructor'(v11, 1);
  return v31;
}
