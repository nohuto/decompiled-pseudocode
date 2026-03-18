/*
 * XREFs of ?RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z @ 0x18009B0B8
 * Callers:
 *     ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18009B10C (-GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1800579DC (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009C114 (-clear_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default.c)
 */

void __fastcall CWindowBackgroundBitmapProducer::RemoveStaleRealization(
        struct CCachedImageProducer::CCachedRealization ***this,
        const struct RenderTargetInfo *a2)
{
  struct CCachedImageProducer::CCachedRealization *RealizationInternal; // rax
  struct CCachedImageProducer::CCachedRealization **i; // rdx

  RealizationInternal = CCachedImageProducer::FindRealizationInternal((CCachedImageProducer *)this, a2);
  if ( RealizationInternal && !*((_QWORD *)RealizationInternal + 1) )
  {
    for ( i = this[4]; i != this[5] && RealizationInternal != *i; ++i )
      ;
    detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
      this + 4,
      i - this[4],
      1LL);
  }
}
