/*
 * XREFs of ?erase_unchecked@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCCompositionSurfaceBitmap@@@2@V?$basic_iterator@QEAVCCompositionSurfaceBitmap@@@2@0@Z @ 0x1800DF6F8
 * Callers:
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1800DF85C (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?clear_region@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E0654 (-clear_region@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCComposi.c)
 */

_QWORD *__fastcall detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::erase_unchecked(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rsi

  v8 = (__int64)(*a3 - detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1)) >> 3;
  detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::clear_region(
    a1,
    v8,
    (__int64)(*a4 - *a3) >> 3);
  *a2 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(a1) + 8 * v8;
  return a2;
}
