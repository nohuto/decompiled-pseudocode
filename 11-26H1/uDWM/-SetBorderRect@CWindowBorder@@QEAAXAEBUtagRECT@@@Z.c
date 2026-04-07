/*
 * XREFs of ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x1800117EC
 * Callers:
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800116B8 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x18005E3E8 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x180011AEC (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

void __fastcall CWindowBorder::SetBorderRect(CWindowBorder *this, const struct tagRECT *a2)
{
  int v3; // esi
  CVisual *v5; // rcx
  int v6; // r8d
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(struct tagRECT *)((char *)this + 232) = *a2;
  v5 = (CVisual *)*((_QWORD *)this + 26);
  if ( v5 )
  {
    v7.x = a2->left;
    v7.y = a2->top;
    CVisual::SetOffset(v5, &v7);
    v6 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v6 = a2->bottom - a2->top;
    if ( a2->right - a2->left >= 0 )
      v3 = a2->right - a2->left;
    CVisual::SetSize(*((CVisual **)this + 26), v3, v6);
    CWindowBorder::SetClipRectangle(this, *((struct CRectangleGeometryProxy **)this + 28), a2);
  }
}
