/*
 * XREFs of ?HideVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180257830
 * Callers:
 *     <none>
 * Callees:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x180055A64 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CCaptureRenderTarget::HideVisuals(CCaptureRenderTarget *this)
{
  CVisualGroup *v2; // rcx

  v2 = (CVisualGroup *)*((_QWORD *)this + 355);
  if ( v2 )
    CVisualGroup::HideVisuals(v2);
  COffScreenRenderTarget::HideVisuals(this);
}
