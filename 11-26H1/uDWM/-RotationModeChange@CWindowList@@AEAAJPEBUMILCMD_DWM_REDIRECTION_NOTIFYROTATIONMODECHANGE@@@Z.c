/*
 * XREFs of ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18007CF3C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180080150 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002A1A4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AbortAnimation@CLoginTransition@@QEAAXXZ @ 0x18007CDB4 (-AbortAnimation@CLoginTransition@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800D8E1C (-PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800D8E58 (-PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RotationModeChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *a2)
{
  CLoginTransition *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v8; // r9
  struct winrt::Udwm::Transitions::TransitionManager *v10; // rax
  const char *v11; // r9
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v14; // [rsp+40h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
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
      v4 = (CLoginTransition *)*((_QWORD *)this + 68);
      if ( v4 )
        CLoginTransition::AbortAnimation(v4);
      v5 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DE5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v5,
          v12);
LABEL_8:
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
        return v6;
      }
      try
      {
        Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
        winrt::Udwm::Transitions::TransitionManager::PreTransition(Current);
      }
      catch ( ... )
      {
        v6 = wil::details::in1diag3::Return_CaughtException(
               retaddr,
               (void *)0x1DEA,
               (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
               v8);
        goto LABEL_8;
      }
    }
    else
    {
      try
      {
        v10 = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
        winrt::Udwm::Transitions::TransitionManager::PostTransition(v10, 1LL);
      }
      catch ( ... )
      {
        v14 = wil::details::in1diag3::Return_CaughtException(
                retaddr,
                (void *)0x1DF1,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                v11);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
        return v14;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  }
  return 0LL;
}
