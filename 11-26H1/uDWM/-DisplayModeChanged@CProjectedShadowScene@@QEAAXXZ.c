/*
 * XREFs of ?DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ @ 0x18008C154
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180018EE4 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180066354 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProjectedShadowScene::DisplayModeChanged(CProjectedShadowScene *this)
{
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CProjectedShadowScene::PositionProjectedShadowReceiverVisual(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
