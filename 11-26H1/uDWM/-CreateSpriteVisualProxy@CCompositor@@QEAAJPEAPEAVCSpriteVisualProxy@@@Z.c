/*
 * XREFs of ?CreateSpriteVisualProxy@CCompositor@@QEAAJPEAPEAVCSpriteVisualProxy@@@Z @ 0x180082780
 * Callers:
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateSpriteVisualProxy(struct IDwmChannel **this, struct CSpriteVisualProxy **a2)
{
  return CResourceProxy::Create<CSpriteVisualProxy>(this[3]);
}
