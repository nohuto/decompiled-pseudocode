/*
 * XREFs of ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180098EA4
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001C540 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001C6E8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180056628 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::OnSettingsUpdated(CTopLevelWindow **this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx

  CTopLevelWindow::OnSettingsUpdated(this[11], a2);
  if ( (a2 & 0x10) != 0 )
    CWindowIconic::OnColorizationUpdated((CWindowIconic *)this, 0);
  v6 = CContainerVisual::RenderRecursive(this[11], v4, v5);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x29Eu, 0LL);
  return v7;
}
