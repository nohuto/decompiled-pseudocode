/*
 * XREFs of ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800DF8E4
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x18021AC68 (--1CWindowNode@@MEAA@XZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 */

void __fastcall CWindowNode::DiscardGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned __int64 v2; // rax

  v2 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size((__int64 *)this + 103);
  CWindowNode::DiscardOldestGdiSpriteBitmaps(this, v2);
}
