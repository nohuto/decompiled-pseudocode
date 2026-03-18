/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18019805C
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D72A0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x180017520 (-CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x1800D70B0 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180263EC0 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802B2D4C (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(
        CProjectedShadowCaster **this,
        struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int ApproxBlur; // eax
  int FastShadowBitmap; // eax
  int updated; // eax
  __int64 *v9; // rax
  CProjectedShadowCaster *v10; // rcx
  float v11; // xmm2_4
  __int64 v12; // r12
  __m128 *v13; // rsi
  __int64 *v14; // rcx
  int v15; // eax
  __m128 v16; // xmm1
  unsigned int v17; // [rsp+20h] [rbp-40h]
  __m128 v18; // [rsp+40h] [rbp-20h] BYREF
  const char *v19; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+58h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 63) == 1 )
  {
    if ( !ShadowHelpers::s_cpFastShadowBlur )
    {
      FastShadowBitmap = ShadowHelpers::CreateFastShadowBitmap(a2, a2);
      v2 = FastShadowBitmap;
      if ( FastShadowBitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, FastShadowBitmap, 0x123u, 0LL);
    }
  }
  else if ( *((_DWORD *)this + 63) == 2
         || *((_DWORD *)this + 63) == 3
         || (unsigned int)(*((_DWORD *)this + 63) - 4) <= 1 )
  {
    ApproxBlur = CProjectedShadow::GenerateApproxBlur((CProjectedShadow *)this, a2);
    v2 = ApproxBlur;
    if ( ApproxBlur < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ApproxBlur, 0x12Bu, 0LL);
  }
  else
  {
    if ( *((_QWORD *)this[10] + 12) > 1uLL )
      (*((void (__fastcall **)(CProjectedShadowCaster **, __int64, CProjectedShadowCaster **))*this + 10))(
        this,
        5LL,
        this);
    if ( !this[43] )
    {
      updated = CProjectedShadowCaster::UpdateMaskIntermediate(this[10], a2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x13Cu, 0LL);
      }
      else
      {
        v21 = *((_QWORD *)a2 + 993);
        v9 = std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
               (__int64 *)this[10] + 11,
               &v21);
        v10 = this[10];
        v11 = *((float *)this + 24);
        v18.m128_u64[0] = 0LL;
        v12 = v9[5];
        v18.m128_u64[1] = *(_QWORD *)(*((_QWORD *)v10 + 9) + 140LL);
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(v18.m128_f32, v11, v11);
        v13 = (__m128 *)(this + 44);
        v14 = (__int64 *)(this + 43);
        if ( v11 <= 0.0 )
        {
          wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(v14, v12);
          v16 = _mm_add_ps(v18, (__m128)_xmm);
          *v13 = v18;
          *v13 = v16;
        }
        else
        {
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v14);
          v17 = *((_DWORD *)this + 24);
          v19 = "DWM ProjectedShadow Blur";
          v20 = 24;
          v15 = CShadowMaskCachingBlurProducer::Create(
                  (unsigned int)&v19,
                  (_DWORD)a2,
                  v12,
                  (unsigned int)&v18,
                  v17,
                  (__int64)(this + 43),
                  (__int64)(this + 44));
          v2 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x14Eu, 0LL);
        }
      }
    }
  }
  return v2;
}
