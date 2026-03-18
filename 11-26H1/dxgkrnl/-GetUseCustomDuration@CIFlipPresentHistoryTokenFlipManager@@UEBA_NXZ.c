/*
 * XREFs of ?GetUseCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x140058690
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA?BIXZ @ 0x1400586B0 (-GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA-BIXZ.c)
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetUseCustomDuration(CIFlipPresentHistoryTokenFlipManager *this)
{
  return CIFlipPresentHistoryTokenFlipManager::GetCustomDuration(this) != 0;
}
