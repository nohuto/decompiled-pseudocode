/*
 * XREFs of ?SetAlphaMode@CSysmemTexture@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1802B9520
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CSysmemTexture::SetAlphaMode(CSysmemTexture *this, enum DXGI_ALPHA_MODE a2)
{
  bool v2; // zf

  if ( *((_DWORD *)this - 14) != a2 )
  {
    v2 = (*((_DWORD *)this - 18) & 0x400000) == 0;
    *((_DWORD *)this - 14) = a2;
    if ( v2 )
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this - 3);
  }
  return 0LL;
}
