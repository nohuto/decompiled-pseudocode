/*
 * XREFs of ?CreateFastShadowBitmap@ShadowHelpers@@YAJPEAVCDrawingContext@@@Z @ 0x180017520
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18001771C (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18019805C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z @ 0x180159064 (-Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 */

__int64 __fastcall ShadowHelpers::CreateFastShadowBitmap(ShadowHelpers *this, struct CDrawingContext *a2)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-48h]
  const char *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  __m128i si128; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v11; // [rsp+78h] [rbp+10h] BYREF
  int v12; // [rsp+7Ch] [rbp+14h]

  v2 = (int)this;
  v11 = 1107296256;
  v12 = 1107296256;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&ShadowHelpers::s_cpFastShadowBlur);
  v7 = "DWM FastShadow Blur";
  v8 = 19;
  v3 = CShadowBlurProducer::Create(
         (unsigned int)&v7,
         v2,
         (unsigned int)&v11,
         *((_QWORD *)g_pComposition + 90),
         (__int64)&si128,
         LODWORD(FLOAT_16_0),
         (__int64)&ShadowHelpers::s_cpFastShadowBlur,
         (__int64)&ShadowHelpers::s_rcFastShadowBlur);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
