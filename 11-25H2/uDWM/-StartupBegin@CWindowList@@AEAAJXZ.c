/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800711B0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004B350 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?EnsureDCompResources@CDesktopManager@@QEAAJXZ @ 0x18007128C (-EnsureDCompResources@CDesktopManager@@QEAAJXZ.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18009A2C4 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GetDesktopID(1LL);
  v2 = CDesktopManager::SendSwitchModeCommand(0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1AB1u, 0LL);
  }
  else
  {
    v4 = CDesktopManager::EnsureDCompResources(CDesktopManager::s_pDesktopManagerInstance);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1AB4u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 632) = CDesktopManager::CheckAnyPreference(0x10u) ^ 1;
      CDesktopManager::SetPreferences(v5);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v3;
}
