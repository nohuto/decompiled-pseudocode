/*
 * XREFs of ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800ED670
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAX_NPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800F0094 (-ApplyConfiguration@COverlayContext@@QEAAX_NPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180194650 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801D0790 (-IsComputeScribbleSupported@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801D9FB0 (-IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D54A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::GetEffectiveDirectFlipMode(__int64 a1)
{
  CDirectFlipInfo *v1; // rcx
  unsigned int v3; // ebx

  v1 = *(CDirectFlipInfo **)(a1 + 19288);
  if ( !v1 )
    return 0LL;
  v3 = *((_DWORD *)v1 + 13);
  if ( v3 == 4 && !CDirectFlipInfo::RenderingRealizationChanged(v1) )
    return 2;
  return v3;
}
