/*
 * XREFs of ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x1805AB160
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AB194 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@PEAUISnappedWindow@@@Z @ 0x1805AEA38 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::CanFitColumnLayouts(SnapLayoutHelpers *this, const struct Geometry::CRect *a2)
{
  return (unsigned int)MulDiv(*((_DWORD *)this + 2) - *(_DWORD *)this, 96, (int)a2) >= 0x738;
}
