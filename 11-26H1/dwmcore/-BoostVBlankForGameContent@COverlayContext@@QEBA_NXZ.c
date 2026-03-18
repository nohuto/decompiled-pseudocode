/*
 * XREFs of ?BoostVBlankForGameContent@COverlayContext@@QEBA_NXZ @ 0x180239270
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z @ 0x1801E7D00 (-BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z.c)
 *     ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z @ 0x1801E7D70 (-BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z.c)
 * Callees:
 *     ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18022B038 (-IsPowerSaverEnabled@CComposition@@QEBA_NXZ.c)
 */

bool __fastcall COverlayContext::BoostVBlankForGameContent(COverlayContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 19352) )
    return CComposition::IsPowerSaverEnabled(g_pComposition) == 0;
  return v1;
}
