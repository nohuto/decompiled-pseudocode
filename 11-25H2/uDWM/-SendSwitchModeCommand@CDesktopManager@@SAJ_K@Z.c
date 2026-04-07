/*
 * XREFs of ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800288E0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180033BCC (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800711B0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180076ED0 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18001D434 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180067AF0 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z @ 0x180085248 (-PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z.c)
 *     ?SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z @ 0x1800894B0 (-SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180090028 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CDesktopManager::SendSwitchModeCommand(unsigned __int64 a1)
{
  CDesktopManager *v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  CAnalogCompositorManager *Instance; // rax
  int v8; // eax

  CDesktopManager::UpdateRemotingMode(CDesktopManager::s_pDesktopManagerInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 9);
  if ( v3 - 5 <= 1 )
  {
    if ( CDesktopManager::IsLogonDesktop(a1) )
      v3 = 3;
    v2 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v5 = CCompositor::PartitionSwitchRemotingMode(*((_QWORD *)v2 + 6), v3, v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x11Du, 0LL);
  }
  else
  {
    Instance = CAnalogCompositorManager::GetInstance();
    v8 = CAnalogCompositorManager::SignalDesktopModeSwitchImpl(Instance, a1);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x120u, 0LL);
  }
  return v6;
}
