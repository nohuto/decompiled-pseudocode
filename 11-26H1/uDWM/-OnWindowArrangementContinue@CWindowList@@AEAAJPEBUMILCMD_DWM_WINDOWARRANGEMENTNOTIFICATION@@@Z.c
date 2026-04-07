/*
 * XREFs of ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180042A8C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ @ 0x180042B4C (-EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180042BD4 (-OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementContinue(
        CWindowArrangementTransition **this,
        const struct tagRECT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = CWindowList::EnsureWindowArrangementTransition((CWindowList *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1F0Cu, 0LL);
  }
  else
  {
    v6 = CWindowArrangementTransition::OnWindowArrangementContinue(this[66], a2 + 1);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1F0Du, 0LL);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
