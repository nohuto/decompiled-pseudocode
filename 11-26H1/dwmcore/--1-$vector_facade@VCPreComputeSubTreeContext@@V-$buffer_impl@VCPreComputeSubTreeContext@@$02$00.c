/*
 * XREFs of ??1?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180196E48
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180218990 (--1CPreComputeContext@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180196E6C (-clear@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeContext@@$0.c)
 */

int __fastcall detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::~vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(a1);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(a1);
}
