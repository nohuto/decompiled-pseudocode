/*
 * XREFs of ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x18000D250
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800634B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 */

void __fastcall CAccent::_UpdateClipRegion(CVisualProxy **this)
{
  if ( (*((_DWORD *)this + 47) & 0x210) != 0 )
    CVisualProxy::SetClip(this[2], this[35]);
}
