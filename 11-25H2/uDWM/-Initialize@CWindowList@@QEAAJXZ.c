/*
 * XREFs of ?Initialize@CWindowList@@QEAAJXZ @ 0x18006286C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@AEBUITransition@234@@Z @ 0x18002AED0 (-RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800629A0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ??0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180062A38 (--0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18009458C (--0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18009734C (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180099ECC (--0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::Initialize(CWindowList *this)
{
  int RootVisual; // ebx
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // eax
  const struct std::nothrow_t *v6; // rdx
  __int64 v7; // rcx
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rbx
  winrt::Windows::Foundation::IUnknown *v9; // r8
  winrt::Windows::Foundation::IUnknown *v10; // rax
  const char *v11; // r9
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  RootVisual = CWindowList::CreateRootVisual(this);
  if ( RootVisual < 0 )
  {
    v3 = 1679LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)RootVisual,
      v12);
    return (unsigned int)RootVisual;
  }
  v5 = CWindowList::RegisterTransparencySystemPolicyChangeEvent(this);
  RootVisual = v5;
  if ( v5 < 0 )
  {
    v3 = 1680LL;
    goto LABEL_3;
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v7, v6);
    v9 = (winrt::Windows::Foundation::IUnknown *)winrt::Udwm::Transitions::Private::ScreenRotationTransition::ScreenRotationTransition((winrt::Udwm::Transitions::Private::ScreenRotationTransition *)&v14);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler((__int64)Current, 1, v9);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition::WindowMoveResizeCrossfadeTransition((winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *)&v14);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(
      (__int64)Current,
      2,
      (winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(
      (__int64)Current,
      3,
      (winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(
      (__int64)Current,
      4,
      (winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(
      (__int64)Current,
      5,
      (winrt::Windows::Foundation::IUnknown *)&v14);
    v10 = (winrt::Windows::Foundation::IUnknown *)winrt::Udwm::Transitions::Private::WindowJointResizeTransition::WindowJointResizeTransition((winrt::Udwm::Transitions::Private::WindowJointResizeTransition *)&v15);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler((__int64)Current, 6, v10);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6B0,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                           v11);
  }
  return result;
}
