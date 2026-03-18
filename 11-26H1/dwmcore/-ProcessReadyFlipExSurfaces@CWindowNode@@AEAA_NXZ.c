/*
 * XREFs of ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180268734
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18000E770 (-size@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurf.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ @ 0x18004D640 (-first@-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@QEBAPEAPEAVCBaseExpression@@XZ.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1800DF85C (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180186600 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExSurfaces(CWindowNode *this)
{
  _QWORD *v1; // rbp
  char v3; // di
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rax
  char v7; // al

  v1 = (_QWORD *)((char *)this + 832);
  v3 = 0;
  v4 = detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size((__int64 *)this + 104);
  while ( v4-- )
  {
    v6 = detail::pointer_buffer_impl<CBaseExpression *,0>::first(v1);
    if ( CCompositionSurfaceBitmap::GetRenderingRealization(*(CCompositionSurfaceBitmap **)(v6 + 8 * v4)) )
    {
      v7 = *((_BYTE *)this + 896);
      if ( (v7 & 8) == 0 || v4 )
      {
        *((_BYTE *)this + 896) = v7 | 8;
        CWindowNode::DiscardOldestFlipExSurfaces(this, v4);
        CWindowNode::Invalidate(this, 2, 4u);
        return 1;
      }
      return v3;
    }
  }
  return v3;
}
