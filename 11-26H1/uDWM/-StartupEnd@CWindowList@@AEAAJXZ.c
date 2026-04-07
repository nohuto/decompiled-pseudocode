/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18007ADDC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180088ED0 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1BEAu, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
