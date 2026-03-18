/*
 * XREFs of ??1?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18009B980
 * Callers:
 *     ??_GCShadowBlurProducer@@EEAAPEAXI@Z @ 0x18009AAB0 (--_GCShadowBlurProducer@@EEAAPEAXI@Z.c)
 *     ??_ECWindowBackgroundBitmapProducer@@EEAAPEAXI@Z @ 0x18009AB30 (--_ECWindowBackgroundBitmapProducer@@EEAAPEAXI@Z.c)
 *     ??_ECShapeBitmapProducer@@EEAAPEAXI@Z @ 0x18009AEE0 (--_ECShapeBitmapProducer@@EEAAPEAXI@Z.c)
 *     ??_ECEffectIntermediateProducer@@EEAAPEAXI@Z @ 0x18009B940 (--_ECEffectIntermediateProducer@@EEAAPEAXI@Z.c)
 *     ??_GCStockBitmapProducer@@EEAAPEAXI@Z @ 0x1802596B0 (--_GCStockBitmapProducer@@EEAAPEAXI@Z.c)
 *     ??1CShadowMaskCachingBlurProducer@@EEAA@XZ @ 0x1802B2C80 (--1CShadowMaskCachingBlurProducer@@EEAA@XZ.c)
 *     ??1CShadowMaskProducer@@EEAA@XZ @ 0x1802B2CA8 (--1CShadowMaskProducer@@EEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009C114 (-clear_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default.c)
 */

void __fastcall detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  __int64 v2; // r8

  v2 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( v2 )
    detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>((void **)a1);
}
