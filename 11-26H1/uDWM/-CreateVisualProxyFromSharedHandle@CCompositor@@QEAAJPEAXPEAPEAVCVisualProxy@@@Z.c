/*
 * XREFs of ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180081B28
 * Callers:
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x18003C6A8 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x180062EC0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateVisualProxyFromSharedHandle(
        CCompositor *this,
        void *a2,
        struct CVisualProxy **a3)
{
  return CResourceProxy::CreateFromSharedHandle<CVisualProxy>(*((_QWORD *)this + 3), a2, a3);
}
