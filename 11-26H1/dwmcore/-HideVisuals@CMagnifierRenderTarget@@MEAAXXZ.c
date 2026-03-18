/*
 * XREFs of ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801AF150
 * Callers:
 *     <none>
 * Callees:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x180055A64 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CMagnifierRenderTarget::HideVisuals(CMagnifierRenderTarget *this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  v2 = *(CVisualGroup **)(*((_QWORD *)this + 3) + 6176LL);
  if ( v2 )
    CVisualGroup::HideVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this + 329);
  if ( v3 )
    CVisualGroup::HideVisuals(v3);
  COffScreenRenderTarget::HideVisuals(this);
}
