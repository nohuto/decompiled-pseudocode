/*
 * XREFs of ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x180031D40
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180031700 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180130300 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 */

bool __fastcall CComposition::GetCompositorClockBoost(CComposition *this)
{
  return !*(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 753LL)
      && !*((_BYTE *)g_pComposition + 6463)
      && !*((_BYTE *)g_pComposition + 6464)
      && (*((_DWORD *)g_pComposition + 1593)
       || CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)g_pComposition + 82)));
}
