/*
 * XREFs of ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x18003F618
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18003F4F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18003E74C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 */

void __fastcall CAccent::_UpdateClipRegion(CVisualProxy **this)
{
  if ( (*((_DWORD *)this + 61) & 0x210) != 0 )
    CVisualProxy::SetClip(this[2], this[42]);
}
