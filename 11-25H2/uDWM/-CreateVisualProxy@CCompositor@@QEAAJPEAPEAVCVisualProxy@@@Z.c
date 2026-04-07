/*
 * XREFs of ?CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z @ 0x180070100
 * Callers:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800700B0 (-Initialize@CVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateVisualProxy(__int64 this, CBaseObject **a2)
{
  return CCompositor::CreateProxy<CVisualProxy>(this, a2);
}
