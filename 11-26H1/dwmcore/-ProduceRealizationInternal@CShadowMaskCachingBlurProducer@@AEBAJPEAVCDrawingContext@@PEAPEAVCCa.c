/*
 * XREFs of ?ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B32CC
 * Callers:
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802B2D4C (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 *     ?ProduceRealization@CShadowMaskCachingBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802B3190 (-ProduceRealization@CShadowMaskCachingBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedReal.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ @ 0x180159900 (-IsInitialRender@CCachedImageProducer@@IEBA_NXZ.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x18015A6EC (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     ?GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18019D080 (-GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 */

__int64 __fastcall CShadowMaskCachingBlurProducer::ProduceRealizationInternal(
        __int64 a1,
        struct CDrawingContext *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 **v8; // rsi
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  CCachedImageProducer *v11; // rbx
  int CurrentRenderingRealization; // eax
  unsigned int v13; // ebx
  int BlurIntermediate; // eax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  struct IBitmapRealization *v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v19 = 0LL;
  v8 = 0LL;
  if ( !CCachedImageProducer::IsInitialRender((CCachedImageProducer *)a1) )
  {
    v8 = &v19;
    v9 = 0LL;
    v10 = 0LL;
    v9.m128_f32[0] = (float)(int)*(_QWORD *)(a1 + 24);
    v10.m128_f32[0] = (float)(int)HIDWORD(*(_QWORD *)(a1 + 24));
    v19 = (__int64 *)_mm_unpacklo_ps(v9, v10).m128_u64[0];
  }
  v11 = *(CCachedImageProducer **)(a1 + 88);
  v18 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v18);
  CurrentRenderingRealization = CCachedImageProducer::GetCurrentRenderingRealization(v11, &v18);
  v13 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization >= 0 )
  {
    v21 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v21);
    BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                         (struct CResourceTag *)(a1 + 72),
                         a2,
                         (__int64)v18,
                         v8,
                         (__int128 *)(a1 + 96),
                         *(float *)(a1 + 112),
                         (__int64)&v21,
                         a4);
    v13 = BlurIntermediate;
    if ( BlurIntermediate >= 0 )
    {
      v15 = operator new(8uLL);
      if ( v15 )
      {
        v16 = v21;
        v21 = 0LL;
        *v15 = v16;
      }
      v19 = 0LL;
      *a3 = v15;
      std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v19);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
        (const char *)(unsigned int)BlurIntermediate);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x243,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)CurrentRenderingRealization);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return v13;
}
