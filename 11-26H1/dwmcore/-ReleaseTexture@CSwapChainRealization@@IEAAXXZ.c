/*
 * XREFs of ?ReleaseTexture@CSwapChainRealization@@IEAAXXZ @ 0x1802AE240
 * Callers:
 *     ??1CSwapChainRealization@@MEAA@XZ @ 0x1802AC8EC (--1CSwapChainRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CSwapChainRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ADEC0 (-NotifyInvalidResource@CSwapChainRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1800FB158 (-NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSwapChainRealization::ReleaseTexture(CSwapChainRealization *this)
{
  __int64 *v1; // rdi
  struct Windows::Devices::Display::Core::IDisplaySurface *v3; // rdx
  __int64 v4; // rcx

  v1 = (__int64 *)((char *)this + 272);
  v3 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 34);
  if ( v3 )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased(this, v3);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 35);
  v4 = *((_QWORD *)this + 33);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 80LL))(
      v4,
      ((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 33);
  }
  CBitmapRealization::InvalidateDecodeBitmap(this, 1);
}
