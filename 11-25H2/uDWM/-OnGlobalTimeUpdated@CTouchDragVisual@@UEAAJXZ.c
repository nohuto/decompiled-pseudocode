/*
 * XREFs of ?OnGlobalTimeUpdated@CTouchDragVisual@@UEAAJXZ @ 0x18007DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CTouchDragVisual::OnGlobalTimeUpdated(CTouchDragVisual *this)
{
  if ( *((_DWORD *)this + 76) > 1u )
    CVisual::SetDirtyFlags(this, 4096);
  return 0LL;
}
