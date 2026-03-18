/*
 * XREFs of ??1?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180245DE4
 * Callers:
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18025FE94 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180170D94 (-clear@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion.c)
 */

int __fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::~vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  void **v1; // r10

  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(a1);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v1);
}
