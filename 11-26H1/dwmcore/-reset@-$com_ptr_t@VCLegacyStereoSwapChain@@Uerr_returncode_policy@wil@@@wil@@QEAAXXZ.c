/*
 * XREFs of ?reset@?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E149C
 * Callers:
 *     ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x180249B80 (-ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E1DB8 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

int __fastcall wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::reset(CConversionSwapChain **a1)
{
  CConversionSwapChain *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(v1);
  return (int)v1;
}
