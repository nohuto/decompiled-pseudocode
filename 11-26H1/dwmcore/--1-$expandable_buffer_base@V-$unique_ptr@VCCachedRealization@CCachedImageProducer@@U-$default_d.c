/*
 * XREFs of ??1?$expandable_buffer_base@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01@detail@@QEAA@XZ @ 0x180019514
 * Callers:
 *     ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800197AC (--1-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@de.c)
 *     ??1?$vector_facade@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18009B980 (--1-$vector_facade@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCC.c)
 *     ??1?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18021B9AC (--1-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail.c)
 * Callees:
 *     <none>
 */

void __fastcall detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>(
        void **a1)
{
  void *v1; // rdx
  bool v2; // zf

  v1 = *a1;
  v2 = *a1 == a1 + 3;
  *a1 = 0LL;
  if ( v2 )
    v1 = 0LL;
  operator delete(v1);
}
