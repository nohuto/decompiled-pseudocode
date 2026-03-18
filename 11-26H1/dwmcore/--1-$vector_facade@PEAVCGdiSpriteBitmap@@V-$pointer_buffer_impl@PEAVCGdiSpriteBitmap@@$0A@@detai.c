/*
 * XREFs of ??1?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AA684
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x18021AC68 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 *     ?clear_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x18001F564 (-clear_region@-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@.c)
 */

void __fastcall detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::~vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>(
        __int64 *a1)
{
  __int64 v2; // rax

  v2 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(a1);
  if ( v2 )
    detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::clear_region(
      a1,
      0LL,
      v2);
  detail::pointer_buffer_impl<CResource *,0>::~pointer_buffer_impl<CResource *,0>(a1);
}
