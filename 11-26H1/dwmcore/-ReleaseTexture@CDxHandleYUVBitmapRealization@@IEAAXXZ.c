/*
 * XREFs of ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1800FB1AC
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1800FAD5C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AF4C0 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F54BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FABC4 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1800FB158 (-NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800FC280 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::ReleaseTexture(CDxHandleYUVBitmapRealization *this)
{
  __int64 *v1; // rdi
  struct Windows::Devices::Display::Core::IDisplaySurface *v3; // rdx
  CD3DResource *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx

  v1 = (__int64 *)((char *)this + 384);
  v3 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 48);
  if ( v3 )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased(this, v3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
  v4 = (CD3DResource *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    CD3DResource::RemoveResourceNotifier(
      v4,
      (const struct IDeviceResourceNotify *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 47);
  }
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    CRenderTargetBitmap::ReleaseDeviceTarget((CRenderTargetBitmap *)v5);
    *(_BYTE *)(v5 + 136) = 0;
    v6 = *(_QWORD *)(v5 + 144);
    if ( v6 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v6 + 16));
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v6 + 24));
      *(_BYTE *)(v6 + 32) = 0;
    }
  }
}
