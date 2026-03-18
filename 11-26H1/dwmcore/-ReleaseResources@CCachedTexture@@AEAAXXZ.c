/*
 * XREFs of ?ReleaseResources@CCachedTexture@@AEAAXXZ @ 0x1802B1F4C
 * Callers:
 *     ??1CCachedTexture@@MEAA@XZ @ 0x1802B14DC (--1CCachedTexture@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CCachedTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B1E10 (-NotifyInvalidResource@CCachedTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedTexture::ReleaseResources(CCachedTexture *this)
{
  __int64 v2; // rcx

  wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset((_QWORD *)this + 16);
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    if ( *((_QWORD *)this + 15) )
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 80LL))(
        v2,
        ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 17);
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 18);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 19);
}
