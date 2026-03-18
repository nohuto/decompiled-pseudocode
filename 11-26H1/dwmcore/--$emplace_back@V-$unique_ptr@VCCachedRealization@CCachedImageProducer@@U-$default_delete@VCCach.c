/*
 * XREFs of ??$emplace_back@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009C238
 * Callers:
 *     ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180039FF0 (-Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009B8D4 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18009B9B4 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009BCA0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@_K0@Z @ 0x18009BF84 (-reserve_region@-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$defau.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 */

void __fastcall detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::emplace_back<std::unique_ptr<CCachedImageProducer::CCachedRealization>>(
        __int64 *a1,
        __int64 **a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rdx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  *a2 = 0LL;
  v5 = (a1[1] - *a1) >> 3;
  v6 = 0LL;
  *(_QWORD *)detail::vector_facade<std::unique_ptr<CCachedImageProducer::CCachedRealization>,detail::buffer_impl<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               v5,
               a3) = v3;
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v6);
  std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(a2);
}
