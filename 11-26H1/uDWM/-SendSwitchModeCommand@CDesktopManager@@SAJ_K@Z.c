/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180087A68
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18004B1A8 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18006240C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18004D0EC (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z @ 0x1800629A0 (-PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180087B04 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(__int64 a1)
{
  CDesktopManager *v2; // rcx
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebx

  CDesktopManager::UpdateRemotingMode(CDesktopManager::s_pDesktopManagerInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
  if ( v3 == 5 || v3 == 6 )
  {
    CDesktopManager::IsLogonDesktop(a1);
    v2 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v4 = CCompositor::PartitionSwitchRemotingMode(*((_QWORD *)v2 + 6));
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xFFu, 0LL);
  return v5;
}
