/*
 * XREFs of ?CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x180084490
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BC30 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateGeometryProxyFromSharedHandle(
        CCompositor *this,
        void *a2,
        struct CBaseGeometryProxy **a3)
{
  return CResourceProxy::CreateFromSharedHandle<CBaseGeometryProxy>(*((_QWORD *)this + 3), a2, a3);
}
