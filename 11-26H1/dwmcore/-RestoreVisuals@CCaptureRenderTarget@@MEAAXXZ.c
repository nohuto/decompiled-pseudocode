/*
 * XREFs of ?RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180257DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180056020 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801BDCA0 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 */

void __fastcall CCaptureRenderTarget::RestoreVisuals(CComposition **this)
{
  CVisualGroup *v2; // rcx

  COffScreenRenderTarget::RestoreVisuals(this);
  v2 = this[355];
  if ( v2 )
    CVisualGroup::RestoreVisuals(v2);
}
