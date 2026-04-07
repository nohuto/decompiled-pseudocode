/*
 * XREFs of ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18004B1A8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?RAILModeChanged@CWindowList@@UEAAXXZ @ 0x1800E3310 (-RAILModeChanged@CWindowList@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18004CAA0 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180086EF8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180087A68 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x1800AD4A8 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::ModeChange(CDesktopManager *this)
{
  HDC DC; // rbx
  char DeviceCaps; // si
  int SystemMetrics; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  void *v8; // rdx
  unsigned int v9; // ebx
  int MonitorRenderTargets; // eax
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
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
  GetDesktopID(1LL, &v12);
  v7 = CDesktopManager::SendSwitchModeCommand(v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3D8u, 0LL);
  }
  else if ( *((_BYTE *)this + 16)
         && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this),
             v9 = MonitorRenderTargets,
             MonitorRenderTargets < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x3DCu, 0LL);
  }
  else
  {
    wil::details::SetEvent(*(wil::details **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL), v8);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
  return v9;
}
