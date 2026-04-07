/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800288E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18002246C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180028B10 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180028C78 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x180028CA4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800298C8 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002A5B8 (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??0CLoginTransition@@QEAA@XZ @ 0x18008F560 (--0CLoginTransition@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800E2B2C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  CWindowList *v5; // rsi
  int started; // eax
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  struct CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  unsigned int v9; // edi
  int v11; // r9d
  unsigned int v12; // edx
  CLoginTransition *v13; // rdi
  struct CVisual *RootVisualForDesktop; // rax
  CLoginTransition *v15; // rax
  CLoginTransition *v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v5 = this;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = CDesktopManager::SendSwitchModeCommand(v3);
  if ( started < 0 )
  {
    v17 = 7253;
  }
  else
  {
    try
    {
      Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
      winrt::Udwm::Transitions::TransitionManager::StopRotation(Current);
    }
    catch ( ... )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x1C5Du, 0LL);
      v5 = this;
      v3 = a3;
      goto LABEL_24;
    }
    if ( !*((_QWORD *)v5 + 69) || a2 != 55 && a2 != 65 || !CDesktopManager::IsWindowAnimationEnabled() )
      goto LABEL_10;
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v5, v3);
    started = CWindowList::BringDesktopToFront(v5, RenderTargetRootVisualForDesktop);
    if ( started < 0 )
    {
      v17 = 7272;
    }
    else
    {
      CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
      started = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      if ( started >= 0 )
      {
        v13 = (CLoginTransition *)*((_QWORD *)v5 + 68);
        if ( !v13 )
        {
          v15 = (CLoginTransition *)DefaultHeap::AllocClear(0x58uLL);
          v13 = v15 ? CLoginTransition::CLoginTransition(v15) : 0LL;
          *((_QWORD *)v5 + 68) = v13;
          if ( !v13 )
          {
            v17 = 7281;
            v11 = -2147024882;
            goto LABEL_14;
          }
        }
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v5, v3);
        started = CLoginTransition::StartAnimation(v13, a2, *((struct CVisual **)v5 + 69), RootVisualForDesktop, v3);
        v9 = started;
        if ( started >= 0 )
          goto LABEL_11;
        v17 = 7285;
      }
      else
      {
        v17 = 7276;
      }
    }
  }
  v11 = started;
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v17, 0LL);
LABEL_24:
  v16 = (CLoginTransition *)*((_QWORD *)v5 + 68);
  if ( v16 )
  {
    CLoginTransition::`scalar deleting destructor'(v16, v12);
    *((_QWORD *)v5 + 68) = 0LL;
  }
LABEL_10:
  v9 = CWindowList::DesktopSwitchImmediately(v5, v3);
LABEL_11:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
