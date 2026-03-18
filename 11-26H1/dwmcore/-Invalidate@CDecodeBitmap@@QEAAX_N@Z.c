/*
 * XREFs of ?Invalidate@CDecodeBitmap@@QEAAX_N@Z @ 0x1801A834C
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F54BC (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CDecodeBitmap::Invalidate(CDecodeBitmap *this, char a2)
{
  __int64 v4; // rbx

  if ( a2 )
    CRenderTargetBitmap::ReleaseDeviceTarget(this);
  *((_BYTE *)this + 136) = 0;
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    if ( a2 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v4 + 16));
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(v4 + 24));
    }
    *(_BYTE *)(v4 + 32) = 0;
  }
}
