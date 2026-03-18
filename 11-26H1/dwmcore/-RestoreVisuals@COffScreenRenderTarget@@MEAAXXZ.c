/*
 * XREFs of ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801BDCA0
 * Callers:
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801BDC50 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 *     ?RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ @ 0x180257DC0 (-RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18021D20C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::RestoreVisuals(CComposition **this)
{
  if ( *((_DWORD *)this + 46) )
    CComposition::RestoreCursors(this[3]);
}
