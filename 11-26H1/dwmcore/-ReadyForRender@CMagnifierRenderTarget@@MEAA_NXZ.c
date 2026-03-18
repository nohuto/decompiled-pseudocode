/*
 * XREFs of ?ReadyForRender@CMagnifierRenderTarget@@MEAA_NXZ @ 0x180123500
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180123710 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 */

bool __fastcall CMagnifierRenderTarget::ReadyForRender(CMagnifierRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 2640) )
    return COffScreenRenderTarget::ReadyForRender(this);
  return v1;
}
