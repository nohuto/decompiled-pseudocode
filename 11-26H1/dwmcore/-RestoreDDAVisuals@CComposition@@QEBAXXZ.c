/*
 * XREFs of ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x1800574F0
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180056020 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)g_pComposition + 773);
  if ( v1 )
    CVisualGroup::RestoreVisuals(v1);
}
