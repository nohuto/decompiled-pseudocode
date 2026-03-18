/*
 * XREFs of ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x180123744
 * Callers:
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801234B0 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1801235A0 (-ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTreeDirty::IsEmpty(CTreeDirty *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 2324) )
    return *((_DWORD *)this + 4) == 0;
  return result;
}
