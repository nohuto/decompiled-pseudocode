/*
 * XREFs of ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x18007AE6C
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18007ADDC (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800AC2C8 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180035ECC (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180038D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18004C9F4 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006A244 (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18007FDD4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180084AC4 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180087A68 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800DFC1C (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::EnableMonitorRenderTargets(CDesktopManager *this, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  CWindowList *v6; // rbx
  struct CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  int v8; // eax
  int MonitorRenderTargets; // eax
  char v10; // dl
  int v11; // eax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x607u, 0LL);
        return v2;
      }
      v10 = 0;
      goto LABEL_15;
    }
    v13 = 0LL;
    GetDesktopID(1LL, &v13);
    v5 = CDesktopManager::SendSwitchModeCommand(v13);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5F1u, 0LL);
    }
    else
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
      {
        CWindowList::BringDesktopToFront(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), v13);
      }
      else
      {
        v6 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v6);
        CWindowList::BringDesktopToFront(v6, RenderTargetRootVisualForDesktop);
      }
      v8 = CVisualTargetProxy::SetRoot(
             *((CVisualTargetProxy **)this + 12),
             *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 80LL)
                                     + 16LL));
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5FCu, 0LL);
      }
      else
      {
        MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this);
        v2 = MonitorRenderTargets;
        if ( MonitorRenderTargets >= 0 )
        {
          v10 = 1;
LABEL_15:
          CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
            v10);
          *((_BYTE *)this + 16) = a2;
          return v2;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x5FDu, 0LL);
      }
    }
  }
  return v2;
}
