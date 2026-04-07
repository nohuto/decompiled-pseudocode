/*
 * XREFs of ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A802C
 * Callers:
 *     ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18009E9D0 (-BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV-$vector@PEAUHWND__@@V-$all.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateVisualGroupProxyFromSharedHandle(
        struct IDwmChannel **this,
        __int64 a2,
        struct CVisualGroupProxy **a3)
{
  return CResourceProxy::CreateFromSharedHandle<CVisualGroupProxy>(this[3], a2, a3);
}
