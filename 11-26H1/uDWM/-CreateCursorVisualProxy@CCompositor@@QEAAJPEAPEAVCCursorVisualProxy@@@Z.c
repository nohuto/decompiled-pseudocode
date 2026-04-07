/*
 * XREFs of ?CreateCursorVisualProxy@CCompositor@@QEAAJPEAPEAVCCursorVisualProxy@@@Z @ 0x1800A7F7C
 * Callers:
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800A9634 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateCursorVisualProxy(struct IDwmChannel **this, struct CCursorVisualProxy **a2)
{
  return CResourceProxy::Create<CCursorVisualProxy>(this[3], a2);
}
