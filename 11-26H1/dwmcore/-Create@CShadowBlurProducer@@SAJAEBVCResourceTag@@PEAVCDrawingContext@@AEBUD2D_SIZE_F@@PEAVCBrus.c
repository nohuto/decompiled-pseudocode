/*
 * XREFs of ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x180159064
 * Callers:
 *     ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x180017520 (-CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18001771C (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180039E6C (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x180039FBC (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009B8D4 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18009C290 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015926C (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C74FC (--1-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CShadowBlurProducer::Create(
        __int128 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __m128i *a5,
        int a6,
        __int64 *a7,
        __int64 a8)
{
  __m128 v12; // xmm6
  float v13; // xmm8_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  CCachedImageProducer *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  int v23; // edi
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-60h] BYREF
  __int64 **v29; // [rsp+28h] [rbp-58h]
  __int64 *v30; // [rsp+30h] [rbp-50h] BYREF
  char v31; // [rsp+38h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v12 = (__m128)_mm_loadu_si128(a5);
  v13 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
  v14 = v12.m128_f32[0] + 1.0;
  v15 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0] + 1.0;
  v16 = _mm_shuffle_ps(v12, v12, 255).m128_f32[0] + 1.0;
  v17 = v13 + 1.0;
  v18 = (CCachedImageProducer *)MIDL_user_allocate(0x80uLL);
  v20 = (__int64)v18;
  if ( v18 )
  {
    CCachedImageProducer::CCachedImageProducer(v18, v19);
    v21 = *a3;
    *(_QWORD *)(v20 + 16) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v20 = &CShadowBlurProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    v22 = *a1;
    *(_QWORD *)(v20 + 96) = a4;
    *(_QWORD *)(v20 + 88) = v21;
    *(_OWORD *)(v20 + 72) = v22;
    LODWORD(v22) = a6;
    *(float *)(v20 + 104) = v14;
    *(float *)(v20 + 108) = v15;
    *(float *)(v20 + 112) = v17;
    *(float *)(v20 + 116) = v16;
    *(_DWORD *)(v20 + 120) = v22;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v20 + 8));
    v29 = (__int64 **)&a5;
    a5 = 0LL;
    v30 = 0LL;
    v31 = 1;
    v23 = CShadowBlurProducer::ProduceRealizationInternal(v20, a2, &v30, a8);
    if ( v31 )
    {
      v24 = (__int64)v30;
      v25 = *v29;
      *v29 = v30;
      if ( v25 )
        std::default_delete<CCachedImageProducer::CCachedRealization>::operator()(v24, v25);
    }
    if ( v23 >= 0 )
    {
      CCachedImageProducer::Initialize(v20, (__int64 *)&a5);
      v28 = 0LL;
      *a7 = v20;
      std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>((__int64 **)&a5);
      wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(&v28);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x273,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
        (const char *)(unsigned int)v23);
      if ( a5 )
        std::default_delete<CCachedImageProducer::CCachedRealization>::operator()(v26, a5->m128i_i64);
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v20);
      return (unsigned int)v23;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
