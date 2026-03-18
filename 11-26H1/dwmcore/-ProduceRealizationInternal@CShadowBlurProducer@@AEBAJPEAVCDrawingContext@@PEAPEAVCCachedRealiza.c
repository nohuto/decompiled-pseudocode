/*
 * XREFs of ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015926C
 * Callers:
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x180159064 (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     ?ProduceRealization@CShadowBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802B3180 (-ProduceRealization@CShadowBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCa.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801044B4 (--4-$com_ptr_t@VIBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ @ 0x180159900 (-IsInitialRender@CCachedImageProducer@@IEBA_NXZ.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x18015A6EC (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShadowBlurProducer::ProduceRealizationInternal(
        __int64 a1,
        struct CDrawingContext *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  unsigned __int64 *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rbx
  int BlurIntermediate; // eax
  unsigned int v14; // edi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  int v19[2]; // [rsp+20h] [rbp-49h]
  char v20; // [rsp+30h] [rbp-39h]
  __int64 v21; // [rsp+50h] [rbp-19h] BYREF
  __int64 v22; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-9h] BYREF
  __int128 v24; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v21 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  if ( !CCachedImageProducer::IsInitialRender((CCachedImageProducer *)a1) )
  {
    v17 = 0LL;
    v18 = 0LL;
    v17.m128_f32[0] = (float)(int)*(_QWORD *)(a1 + 24);
    v18.m128_f32[0] = (float)(int)HIDWORD(*(_QWORD *)(a1 + 24));
    v17.m128_u64[0] = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    v18.m128_i32[0] = *(_DWORD *)(a1 + 120);
    v23 = v17.m128_u64[0];
    if ( v18.m128_f32[0] == 0.0 )
      v8 = &v23;
  }
  v22 = 0LL;
  v20 = 0;
  *(_QWORD *)v19 = *(_QWORD *)(a1 + 96);
  v24 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v9 = ShadowHelpers::GenerateMaskIntermediate(a1 + 72, a2, v8, a1 + 88, *(_QWORD *)v19, 0LL, v20, &v24, &v22);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *(float *)(a1 + 120) == 0.0 )
    {
      wil::com_ptr_t<IBitmapLock,wil::err_returncode_policy>::operator=(&v21, &v22);
      v12 = v22;
      if ( a4 )
        *a4 = *(_OWORD *)(a1 + 104);
    }
    else
    {
      v12 = v22;
      BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                           (struct CResourceTag *)(a1 + 72),
                           a2,
                           a1 + 104,
                           *(_DWORD *)(a1 + 120),
                           (__int64)&v21,
                           (__int64)a4);
      v14 = BlurIntermediate;
      if ( BlurIntermediate < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B8,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
          (const char *)(unsigned int)BlurIntermediate);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
        return v14;
      }
    }
    v15 = operator new(8uLL);
    if ( v15 )
    {
      v16 = v21;
      v21 = 0LL;
      *v15 = v16;
    }
    *a3 = v15;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v9);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    return v10;
  }
}
