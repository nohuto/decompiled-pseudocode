/*
 * XREFs of ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008DEB4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800298C8 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004B350 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AbortAnimation@CLoginTransition@@QEAAXXZ @ 0x1800BA468 (-AbortAnimation@CLoginTransition@@QEAAXXZ.c)
 *     ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800DC088 (-PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800DC108 (-PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RotationModeChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *a2)
{
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rcx
  CLoginTransition *v6; // rcx
  int v7; // eax
  const struct std::nothrow_t *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v12; // r9
  struct winrt::Udwm::Transitions::TransitionManager *v14; // rax
  const char *v15; // r9
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v18; // [rsp+40h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp+20h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !CDesktopManager::IsWindowAnimationEnabled() || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
  {
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  else
  {
    if ( *((_DWORD *)a2 + 1) )
    {
      CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
      v6 = (CLoginTransition *)*((_QWORD *)this + 68);
      if ( v6 )
        CLoginTransition::AbortAnimation(v6);
      v7 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      v10 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CB5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v7,
          v16);
LABEL_8:
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
        return v10;
      }
      try
      {
        Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v9, v8);
        winrt::Udwm::Transitions::TransitionManager::PreTransition(Current);
      }
      catch ( ... )
      {
        v10 = wil::details::in1diag3::Return_CaughtException(
                retaddr,
                (void *)0x1CBA,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                v12);
        goto LABEL_8;
      }
    }
    else
    {
      try
      {
        v14 = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v5, v4);
        winrt::Udwm::Transitions::TransitionManager::PostTransition(v14, 1LL);
      }
      catch ( ... )
      {
        v18 = wil::details::in1diag3::Return_CaughtException(
                retaddr,
                (void *)0x1CC1,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                v15);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
        return v18;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  }
  return 0LL;
}
