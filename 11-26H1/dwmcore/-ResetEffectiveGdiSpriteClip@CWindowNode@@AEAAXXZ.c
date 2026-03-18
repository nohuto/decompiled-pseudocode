/*
 * XREFs of ?ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ @ 0x1801C6784
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x18001F980 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18001FD44 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 */

void __fastcall CWindowNode::ResetEffectiveGdiSpriteClip(CWindowNode *this)
{
  *((_BYTE *)this + 896) &= ~1u;
  CVisual::ClearContentTreeDataCaches(this);
  CVisual::PropagateFlags((__int64)this, 5u);
}
