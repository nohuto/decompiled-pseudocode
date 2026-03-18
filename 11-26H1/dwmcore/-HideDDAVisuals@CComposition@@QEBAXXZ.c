/*
 * XREFs of ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x18005753C
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x180055A64 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::HideDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)this + 773);
  if ( v1 )
    CVisualGroup::HideVisuals(v1);
}
