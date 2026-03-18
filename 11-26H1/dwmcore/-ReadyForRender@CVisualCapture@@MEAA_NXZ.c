/*
 * XREFs of ?ReadyForRender@CVisualCapture@@MEAA_NXZ @ 0x1802867E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180123710 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 */

char __fastcall CVisualCapture::ReadyForRender(CVisualCapture *this)
{
  char v1; // bl

  v1 = 1;
  if ( *((_DWORD *)this + 608) != 1 || !COffScreenRenderTarget::ReadyForRender(this) )
    return 0;
  return v1;
}
