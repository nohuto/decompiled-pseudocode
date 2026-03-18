/*
 * XREFs of ?GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x1801310C4
 * Callers:
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x18013110C (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA684 (-PostRender@CComputeScribbleRenderer@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@IUMilRectU@@UMil3D.c)
 * Callees:
 *     ?GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ @ 0x180130534 (-GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CComputeScribbleFramebuffer *__fastcall CComputeScribbleRenderer::GetBackBufferData(
        CComputeScribbleRenderer *this)
{
  struct CComputeScribbleFramebuffer *result; // rax
  __int64 v2; // rax

  result = CComputeScribbleRenderer::GetOverlaySwapChain(this);
  if ( result )
  {
    v2 = (*(__int64 (__fastcall **)(struct CComputeScribbleFramebuffer *))(*(_QWORD *)result + 208LL))(result);
    return (struct CComputeScribbleFramebuffer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
  }
  return result;
}
