/*
 * XREFs of ?erase_unchecked@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@0@Z @ 0x1801B0FDC
 * Callers:
 *     ?erase@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@@Z @ 0x1801B0FA4 (-erase@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x180026858 (-clear_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@det.c)
 */

_QWORD *__fastcall detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::erase_unchecked(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rsi

  v8 = (__int64)(*a3 - detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1)) >> 3;
  detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::clear_region(
    a1,
    v8,
    (__int64)(*a4 - *a3) >> 3);
  *a2 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) + 8 * v8;
  return a2;
}
