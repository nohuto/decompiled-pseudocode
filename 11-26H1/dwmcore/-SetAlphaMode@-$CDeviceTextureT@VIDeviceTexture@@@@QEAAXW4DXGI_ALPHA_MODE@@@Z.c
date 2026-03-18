/*
 * XREFs of ?SetAlphaMode@?$CDeviceTextureT@VIDeviceTexture@@@@QEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802AE344
 * Callers:
 *     ?EnsureTexture@CSwapChainRealization@@IEAAJXZ @ 0x1802ACF30 (-EnsureTexture@CSwapChainRealization@@IEAAJXZ.c)
 *     ?UpdateAttributes@CSwapChainRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802AE560 (-UpdateAttributes@CSwapChainRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CDeviceTextureT<IDeviceTexture>::SetAlphaMode(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 192) != a2 )
  {
    v2 = (*(_DWORD *)(a1 + 176) & 0x400000) == 0;
    *(_DWORD *)(a1 + 192) = a2;
    if ( v2 )
      return wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(a1 + 224));
  }
  return result;
}
