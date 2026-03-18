/*
 * XREFs of ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x180249B80
 * Callers:
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18020A120 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CLegacyStereoRenderTarget::ReleaseSwapChain(CConversionSwapChain **this, __int64 a2)
{
  CLegacyRenderTarget::ReleaseSwapChain((CLegacyRenderTarget *)this, a2);
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::reset(this + 4045);
}
