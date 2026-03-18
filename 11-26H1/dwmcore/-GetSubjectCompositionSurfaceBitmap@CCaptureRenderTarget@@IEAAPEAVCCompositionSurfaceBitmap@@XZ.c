/*
 * XREFs of ?GetSubjectCompositionSurfaceBitmap@CCaptureRenderTarget@@IEAAPEAVCCompositionSurfaceBitmap@@XZ @ 0x18021C314
 * Callers:
 *     ?GetSourceSwapChainTextureFormat@CCaptureRenderTarget@@IEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18025768C (-GetSourceSwapChainTextureFormat@CCaptureRenderTarget@@IEAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800DFBBC (-GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@QEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180260B8C (-GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@QEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CCompositionSurfaceBitmap *__fastcall CCaptureRenderTarget::GetSubjectCompositionSurfaceBitmap(
        CCaptureRenderTarget *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  char v4; // al
  CWindowNode *v5; // rcx
  struct CCompositionSurfaceBitmap *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = *((_QWORD *)this + 328);
  v7 = 0LL;
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 164LL);
    v5 = (CWindowNode *)*((_QWORD *)this + 328);
    if ( v4 )
    {
      return CWindowNode::GetCurrentFlipExSurface(v5);
    }
    else
    {
      CVisual::GetContentAsCompositionSurfaceBitmapNoRef(v5, &v7);
      return v7;
    }
  }
  return (struct CCompositionSurfaceBitmap *)v1;
}
