/*
 * XREFs of ?UpdateCompNode@CRectangleVisual@@AEAAJXZ @ 0x18000A608
 * Callers:
 *     ?ValidateVisual@CRectangleVisual@@UEAAJXZ @ 0x18000A2F0 (-ValidateVisual@CRectangleVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18000A660 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?SendSetOffsetImpl@CRectangleVisual@@AEAAJAEBUtagPOINT@@@Z @ 0x18000A724 (-SendSetOffsetImpl@CRectangleVisual@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A88C (-Width@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A898 (-Height@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 */

__int64 __fastcall CRectangleVisual::UpdateCompNode(CRectangleVisual *this)
{
  double v2; // xmm0_8
  double v3; // xmm2_8
  __int64 v4; // rcx
  double v5; // xmm0_8

  CRectangleVisual::SendSetOffsetImpl(this, (const struct tagPOINT *)this + 7);
  v2 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height((char *)this + 192);
  v3 = *(float *)&v2;
  v5 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width(v4);
  CVisualProxy::SetSize(*((CVisualProxy **)this + 2), *(float *)&v5, v3);
  return 0LL;
}
