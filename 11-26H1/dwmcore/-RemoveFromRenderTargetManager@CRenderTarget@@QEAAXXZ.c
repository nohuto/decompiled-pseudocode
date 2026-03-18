/*
 * XREFs of ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180148E64
 * Callers:
 *     ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x1801DF770 (-FinalRelease@CRenderTarget@@MEAAXXZ.c)
 *     ?DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18020613C (-DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18020B854 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180286888 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x180148EAC (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 */

void __fastcall CRenderTarget::RemoveFromRenderTargetManager(CRenderTarget *this)
{
  if ( *((_BYTE *)this + 156) )
  {
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 3) + 616LL),
      (struct IRenderTarget *)(((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_BYTE *)this + 156) = 0;
  }
}
