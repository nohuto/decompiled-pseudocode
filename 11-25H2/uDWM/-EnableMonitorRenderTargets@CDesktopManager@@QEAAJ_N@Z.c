/*
 * XREFs of ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180076ED0
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180076E40 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800AD224 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180028C78 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x180028CA4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180077020 (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180077E50 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800965F0 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::EnableMonitorRenderTargets(CDesktopManager *this, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  CWindowList *v6; // rbx
  struct CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  int v8; // eax
  int MonitorRenderTargets; // eax
  bool v10; // dl
  int v11; // eax

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 16) )
  {
    if ( !a2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), 0LL);
      v11 = CDesktopManager::ReleaseMonitorRenderTargets(this);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x61Eu, 0LL);
        return v2;
      }
      v10 = 0;
      goto LABEL_12;
    }
    GetDesktopID(1LL);
    v5 = CDesktopManager::SendSwitchModeCommand(0LL);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x611u, 0LL);
    }
    else
    {
      v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6);
      CWindowList::BringDesktopToFront(v6, RenderTargetRootVisualForDesktop);
      v8 = CVisualTargetProxy::SetRoot(
             *((CVisualTargetProxy **)this + 12),
             *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 80LL)
                                     + 16LL));
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x613u, 0LL);
      }
      else
      {
        MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this);
        v2 = MonitorRenderTargets;
        if ( MonitorRenderTargets >= 0 )
        {
          v10 = 1;
LABEL_12:
          CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
            v10);
          *((_BYTE *)this + 16) = a2;
          return v2;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x614u, 0LL);
      }
    }
  }
  return v2;
}
