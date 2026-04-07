/*
 * XREFs of ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x180033BCC
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?RAILModeChanged@CWindowList@@UEAAXXZ @ 0x1800E6BE0 (-RAILModeChanged@CWindowList@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18004D0BC (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?ModeChange@CAnalogCompositorManager@@SAJXZ @ 0x180065CB4 (-ModeChange@CAnalogCompositorManager@@SAJXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A3254 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x1800ADD68 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::ModeChange(CDesktopManager *this)
{
  HDC DC; // rbx
  char DeviceCaps; // si
  int SystemMetrics; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  int MonitorRenderTargets; // eax
  int v10; // eax
  void *v11; // rdx

  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v5 = GetSystemMetrics(0);
      McTemplateU0qqq_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        v6,
        v5,
        SystemMetrics,
        DeviceCaps);
    }
  }
  GetDesktopID(1LL);
  v7 = CDesktopManager::SendSwitchModeCommand(0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3FAu, 0LL);
  }
  else if ( *((_BYTE *)this + 16)
         && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this),
             v8 = MonitorRenderTargets,
             MonitorRenderTargets < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x3FEu, 0LL);
  }
  else
  {
    v10 = CAnalogCompositorManager::ModeChange();
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x404u, 0LL);
    else
      wil::details::SetEvent(
        *(wil::details **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 72LL),
        v11);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
  return v8;
}
