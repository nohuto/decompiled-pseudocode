/*
 * XREFs of ?Initialize@CWindowList@@QEAAJXZ @ 0x180030158
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800720A0 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002FF10 (--0WindowJointResizeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@AEBUITransition@234@@Z @ 0x18003028C (-RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003053C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180085DD0 (--0ScreenRotationTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18008A394 (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ??0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18008D878 (--0WindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::Initialize(CWindowList *this)
{
  int RootVisual; // ebx
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // eax
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rbx
  __int64 v7; // r8
  winrt::Udwm::Transitions::Private::WindowJointResizeTransition *v8; // rax
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  RootVisual = CWindowList::CreateRootVisual(this);
  if ( RootVisual < 0 )
  {
    v3 = 1975LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)RootVisual,
      v10);
    return (unsigned int)RootVisual;
  }
  v5 = CWindowList::RegisterTransparencySystemPolicyChangeEvent(this);
  RootVisual = v5;
  if ( v5 < 0 )
  {
    v3 = 1976LL;
    goto LABEL_3;
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    v7 = winrt::Udwm::Transitions::Private::ScreenRotationTransition::ScreenRotationTransition((winrt::Udwm::Transitions::Private::ScreenRotationTransition *)&v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 1LL, v7);
    if ( v12 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v12);
    winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition::WindowMoveResizeCrossfadeTransition((winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition *)&v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 2LL, &v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 3LL, &v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 4LL, &v12);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 5LL, &v12);
    v8 = winrt::Udwm::Transitions::Private::WindowJointResizeTransition::WindowJointResizeTransition((winrt::Udwm::Transitions::Private::WindowJointResizeTransition *)&v13);
    winrt::Udwm::Transitions::TransitionManager::RegisterTransitionHandler(Current, 6LL, v8);
    if ( v13 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v13);
    if ( v12 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7D8,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                           v9);
  }
  return result;
}
