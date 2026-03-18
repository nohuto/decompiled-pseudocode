/*
 * XREFs of ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801BDC50
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180056020 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801BDCA0 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 */

void __fastcall CMagnifierRenderTarget::RestoreVisuals(CVisualGroup **this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  COffScreenRenderTarget::RestoreVisuals((COffScreenRenderTarget *)this);
  v2 = this[329];
  if ( v2 )
    CVisualGroup::RestoreVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this[3] + 772);
  if ( v3 )
    CVisualGroup::RestoreVisuals(v3);
}
