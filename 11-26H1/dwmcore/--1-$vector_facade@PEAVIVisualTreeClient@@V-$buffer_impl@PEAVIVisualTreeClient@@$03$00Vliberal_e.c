/*
 * XREFs of ??1?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800AD410
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800ACD54 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008DC40 (-clear_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansio.c)
 */

int __fastcall detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::~vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v2; // r8

  v2 = (a1[1] - *a1) >> 3;
  if ( v2 )
    detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)a1);
}
