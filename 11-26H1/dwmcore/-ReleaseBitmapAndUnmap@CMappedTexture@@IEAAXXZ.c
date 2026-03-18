/*
 * XREFs of ?ReleaseBitmapAndUnmap@CMappedTexture@@IEAAXXZ @ 0x1802B8E78
 * Callers:
 *     ??1CMappedTexture@@MEAA@XZ @ 0x1802B881C (--1CMappedTexture@@MEAA@XZ.c)
 *     ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78 (-Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unmap@CMappedTexture@@IEAAXXZ @ 0x1802B8EB8 (-Unmap@CMappedTexture@@IEAAXXZ.c)
 */

void __fastcall CMappedTexture::ReleaseBitmapAndUnmap(CMappedTexture *this)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    CMappedTexture::Unmap(this);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  }
}
