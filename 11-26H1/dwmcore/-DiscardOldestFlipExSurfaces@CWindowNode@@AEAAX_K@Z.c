/*
 * XREFs of ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1800DF85C
 * Callers:
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x1800DF830 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180268734 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCCompositionSurfaceBitmap@@@2@V?$basic_iterator@QEAVCCompositionSurfaceBitmap@@@2@0@Z @ 0x1800DF6F8 (-erase_unchecked@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCComp.c)
 */

void __fastcall CWindowNode::DiscardOldestFlipExSurfaces(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *i; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  for ( i = (_QWORD *)((char *)this + 832); v2 < a2; ++v2 )
  {
    v8 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(i);
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v8 + 8 * v2));
  }
  v6 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(i) + 8 * a2;
  v7 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(i);
  v9 = v6;
  v10 = v7;
  detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::erase_unchecked(
    i,
    &v11,
    &v10,
    &v9);
}
