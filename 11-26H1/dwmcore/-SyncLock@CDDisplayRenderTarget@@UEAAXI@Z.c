/*
 * XREFs of ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x1801FC760
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800F0834 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?NotifySyncLock@CTargetStats@@QEAAXI@Z @ 0x1801B8C00 (-NotifySyncLock@CTargetStats@@QEAAXI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@wil@@QEAA_NXZ @ 0x180254B20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayInkBlackFlash@@@details@w.c)
 */

void __fastcall CDDisplayRenderTarget::SyncLock(CDDisplayRenderTarget *this, unsigned int a2)
{
  char IsEnabled; // al
  unsigned __int64 *v5; // rcx

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayInkBlackFlash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplayInkBlackFlash>::GetImpl'::`2'::impl);
  if ( *((_DWORD *)this + 8060) )
  {
    v5 = (unsigned __int64 *)((char *)this + 56);
    if ( (!IsEnabled || !*(_BYTE *)(*v5 + 665))
      && (int)COverlayContext::SyncLock(
                (CDDisplayRenderTarget *)((char *)this + 72),
                (struct IOverlaySwapChain *)((*v5 + 24) & ((unsigned __int128)-(__int128)*v5 >> 64)),
                a2,
                *((_DWORD *)this + 8050),
                0) >= 0 )
    {
      CTargetStats::NotifySyncLock((CDDisplayRenderTarget *)((char *)this + 31992), a2);
    }
  }
}
