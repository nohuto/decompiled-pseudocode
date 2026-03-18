/*
 * XREFs of ?erase_unchecked@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCGdiSpriteBitmap@@@2@V?$basic_iterator@QEAVCGdiSpriteBitmap@@@2@0@Z @ 0x1800DF678
 * Callers:
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1800DF910 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?clear_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18001F564 (-clear_region@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@.c)
 */

_QWORD *__fastcall detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::erase_unchecked(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rsi

  v8 = (__int64)(*a3 - detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1)) >> 3;
  detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::clear_region(
    a1,
    v8,
    (__int64)(*a4 - *a3) >> 3);
  *a2 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) + 8 * v8;
  return a2;
}
