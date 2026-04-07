/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180076E40
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180076ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x1800968B8 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // ebx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 632) )
    CDesktopManager::ClearPreferences(v2);
  v3 = CDesktopManager::EnableMonitorRenderTargets(CDesktopManager::s_pDesktopManagerInstance, 1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1AC9u, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
