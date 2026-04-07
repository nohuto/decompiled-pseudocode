/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800814E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002A1A4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180035ECC (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800373A0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180038D84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18004D0EC (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18006E7BC (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180074130 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??0CLoginTransition@@QEAA@XZ @ 0x18007E7F0 (--0CLoginTransition@@QEAA@XZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18007FDD4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180087A68 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800ABA40 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800DF85C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800DFC1C (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3771241786@@@details@wil@@QEAA_NXZ @ 0x1800E4EFC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3771241786@@@details@wil@@QEAA_NX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  CWindowList *v5; // rsi
  char v6; // r15
  int v7; // eax
  int v8; // edi
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  int v10; // eax
  unsigned int v11; // edx
  struct CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  int v13; // eax
  int v14; // eax
  CLoginTransition *v15; // rdi
  CLoginTransition *v16; // rax
  struct CVisual *RootVisualForDesktop; // rax
  int started; // eax
  CLoginTransition *v19; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v3 = a3;
  v5 = this;
  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 1;
  v7 = CDesktopManager::SendSwitchModeCommand(v3);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1D76u, 0LL);
    goto LABEL_27;
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    winrt::Udwm::Transitions::TransitionManager::StopRotation(Current);
  }
  catch ( ... )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x1D7Eu, 0LL);
    v5 = this;
    v3 = a3;
    v8 = -2147467259;
    v6 = 1;
    goto LABEL_27;
  }
  if ( *((_QWORD *)v5 + 69) && (a2 == 55 || a2 == 65) && CDesktopManager::IsWindowAnimationEnabled() )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      v10 = CWindowList::BringDesktopToFront(v5, v3);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1D8Bu, 0LL);
        goto LABEL_27;
      }
    }
    else
    {
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v5);
      v13 = CWindowList::BringDesktopToFront(v5, RenderTargetRootVisualForDesktop);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x1D8Fu, 0LL);
        goto LABEL_27;
      }
    }
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
    v14 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1D94u, 0LL);
    }
    else
    {
      v15 = (CLoginTransition *)*((_QWORD *)v5 + 68);
      if ( !v15 )
      {
        v16 = (CLoginTransition *)DefaultHeap::AllocClear(0x58uLL);
        if ( !v16 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v15 = CLoginTransition::CLoginTransition(v16);
        *((_QWORD *)v5 + 68) = v15;
        if ( !v15 )
        {
          v8 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1D99u, 0LL);
          goto LABEL_27;
        }
      }
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v5, v3);
      started = CLoginTransition::StartAnimation(v15, a2, *((struct CVisual **)v5 + 69), RootVisualForDesktop, v3);
      v8 = started;
      if ( started >= 0 )
      {
        v6 = 0;
        goto LABEL_18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1D9Du, 0LL);
    }
LABEL_27:
    v19 = (CLoginTransition *)*((_QWORD *)v5 + 68);
    if ( v19 )
    {
      CLoginTransition::`scalar deleting destructor'(v19, v11);
      *((_QWORD *)v5 + 68) = 0LL;
    }
    goto LABEL_29;
  }
LABEL_18:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3771241786>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3771241786>::GetImpl'::`2'::impl)
    && CDesktopManager::IsLogonDesktop(v3) )
  {
    CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
  }
  if ( v8 < 0 )
    goto LABEL_27;
LABEL_29:
  if ( v6 )
    v8 = CWindowList::DesktopSwitchImmediately((CLoginTransition **)v5, v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v8;
}
