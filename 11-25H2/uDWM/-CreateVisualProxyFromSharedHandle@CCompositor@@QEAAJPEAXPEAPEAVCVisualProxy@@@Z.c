/*
 * XREFs of ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x18003E0F0
 * Callers:
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x18003E0A0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180090B34 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateVisualProxyFromSharedHandle(__int64 this, void *a2, CBaseObject **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CVisualProxy>(this, a2, a3);
}
