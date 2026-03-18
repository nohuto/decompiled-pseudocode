/*
 * XREFs of ??1?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18021B9AC
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800FB84C (--1CEffectBrush@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCBrush@@V?$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18021B9D0 (-clear@-$vector_facade@PEAVCBrush@@V-$buffer_impl@PEAVCBrush@@$01$00Vliberal_expansion_policy@de.c)
 */

void __fastcall detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::~vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<CBrush *,detail::buffer_impl<CBrush *,2,1,detail::liberal_expansion_policy>>::clear();
  detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>(a1);
}
