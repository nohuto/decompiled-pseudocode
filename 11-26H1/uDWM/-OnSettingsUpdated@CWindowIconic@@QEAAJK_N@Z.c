/*
 * XREFs of ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x1800853A8
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180018EE4 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x1800183A8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008AD08 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::OnSettingsUpdated(CTopLevelWindow **this, char a2)
{
  CTopLevelWindow::OnSettingsUpdated(this[11], a2);
  if ( (a2 & 0x10) != 0 )
    CWindowIconic::OnColorizationUpdated((CWindowIconic *)this, 0);
  CContainerVisual::RenderRecursive(this[11]);
  return 0LL;
}
