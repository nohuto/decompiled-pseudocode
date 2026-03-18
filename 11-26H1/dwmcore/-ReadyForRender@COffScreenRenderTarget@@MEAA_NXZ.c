/*
 * XREFs of ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180123710
 * Callers:
 *     ?ReadyForRender@CMagnifierRenderTarget@@MEAA_NXZ @ 0x180123500 (-ReadyForRender@CMagnifierRenderTarget@@MEAA_NXZ.c)
 *     ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1801235A0 (-ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ.c)
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x180123640 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 *     ?ReadyForRender@CVisualCapture@@MEAA_NXZ @ 0x1802867E0 (-ReadyForRender@CVisualCapture@@MEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COffScreenRenderTarget::ReadyForRender(COffScreenRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_QWORD *)this + 14) )
    return (*(unsigned __int8 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 256LL))(this) != 0;
  return v1;
}
