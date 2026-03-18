/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x18021AC68
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x1801BB670 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x1800DF830 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800DF8E4 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ??1?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800DF9A0 (--1-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurface.c)
 *     ??1?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AA684 (--1-$vector_facade@PEAVCGdiSpriteBitmap@@V-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detai.c)
 */

void __fastcall CWindowNode::~CWindowNode(CWindowNode *this)
{
  *(_QWORD *)this = &CWindowNode::`vftable';
  CWindowNode::DiscardGdiSpriteBitmaps(this);
  CWindowNode::DiscardFlipExSurfaces(this);
  CShapePtr::~CShapePtr((CWindowNode *)((char *)this + 880));
  detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::~vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>((__int64 *)this + 104);
  detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::~vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>((__int64 *)this + 103);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((_QWORD *)this + 102);
  CWindowNodeGeneratedT<CWindowNode,CVisual>::~CWindowNodeGeneratedT<CWindowNode,CVisual>((struct CResource **)this);
}
