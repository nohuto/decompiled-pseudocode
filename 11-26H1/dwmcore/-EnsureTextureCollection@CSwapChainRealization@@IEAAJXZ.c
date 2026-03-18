/*
 * XREFs of ?EnsureTextureCollection@CSwapChainRealization@@IEAAJXZ @ 0x1802AD054
 * Callers:
 *     ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140 (-GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0 (-GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B167C (-Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSwapChainRealization::EnsureTextureCollection(CSwapChainRealization *this)
{
  struct CTextureCollection **v1; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct CTextureCollection **)((char *)this + 280);
  if ( *((_QWORD *)this + 35) )
    return 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 35);
  v3 = CTextureCollection::Create(
         (struct IDeviceTexture *)((*((_QWORD *)this + 33) + 120LL) & -(__int64)(*((_QWORD *)this + 33) != 0LL)),
         v1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x262,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\swapchainrealization.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
