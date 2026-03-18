/*
 * XREFs of ?insert@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@AEBQEAVCVisual@@@Z @ 0x1801B17D0
 * Callers:
 *     ?AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180281E60 (-AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18002655C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@d.c)
 */

_QWORD *__fastcall detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::insert(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v8; // rsi

  v4 = *a3;
  v8 = (__int64)(v4 - detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1)) >> 3;
  *(_QWORD *)detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::reserve_region(a1, v8) = *a4;
  *a2 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) + 8 * v8;
  return a2;
}
