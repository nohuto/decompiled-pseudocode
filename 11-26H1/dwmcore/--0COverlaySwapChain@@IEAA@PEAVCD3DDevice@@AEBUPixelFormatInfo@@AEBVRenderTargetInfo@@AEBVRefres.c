/*
 * XREFs of ??0COverlaySwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@@Z @ 0x1801D3B00
 * Callers:
 *     ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x180218304 (--0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefre.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180033150 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x1801D3C5C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

COverlaySwapChain *__fastcall COverlaySwapChain::COverlaySwapChain(
        COverlaySwapChain *this,
        struct CD3DDevice *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        const struct RefreshRateInfo *a5,
        unsigned int a6,
        unsigned int a7,
        struct _LUID a8)
{
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+2Ch] [rbp-1Ch]
  int v19; // [rsp+34h] [rbp-14h]

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    (char *)this + 64,
    a2);
  *((_DWORD *)this + 18) = a6;
  *(struct _LUID *)((char *)this + 76) = a8;
  *((_DWORD *)this + 21) = a7;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 92) = *(_QWORD *)a3;
  *((_DWORD *)this + 25) = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)a4;
  *((_QWORD *)this + 15) = *((_QWORD *)a4 + 2);
  *((_OWORD *)this + 8) = *(_OWORD *)a5;
  *((_OWORD *)this + 9) = *((_OWORD *)a5 + 1);
  v11 = *((_OWORD *)a5 + 2);
  *((_QWORD *)this + 22) = 0LL;
  *((_OWORD *)this + 10) = v11;
  *((_QWORD *)this + 23) = (char *)this + 192;
  *((_DWORD *)this + 48) = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(
                          (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
                          v12,
                          v13,
                          v14) )
  {
    v16 = *(_QWORD *)((char *)this + 76);
    v17 = *((_DWORD *)this + 18);
    v18 = 0LL;
    v19 = 0;
    NtHWCursorUpdatePointer(&v16, 0LL);
  }
  return this;
}
