/*
 * XREFs of ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800197AC
 * Callers:
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180019868 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180019E90 (-clear_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansio.c)
 */

void __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::~vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  if ( 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4) )
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::clear_region();
  detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>((void **)a1);
}
