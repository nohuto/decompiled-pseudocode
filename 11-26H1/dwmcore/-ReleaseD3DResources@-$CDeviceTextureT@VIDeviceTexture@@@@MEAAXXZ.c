/*
 * XREFs of ?ReleaseD3DResources@?$CDeviceTextureT@VIDeviceTexture@@@@MEAAXXZ @ 0x1802B8770
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801B1E84 (-reset@-$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CDeviceTextureT<IDeviceTexture>::ReleaseD3DResources(__int64 *a1)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a1 + 17);
  wil::com_ptr_t<IDXGIResource1,wil::err_returncode_policy>::reset(a1 + 26);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a1 + 27);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a1 + 28);
  return wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a1 + 29);
}
