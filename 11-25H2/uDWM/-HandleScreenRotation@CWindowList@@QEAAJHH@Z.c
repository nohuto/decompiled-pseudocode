/*
 * XREFs of ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E590C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800DC3E0 (-UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::HandleScreenRotation(CWindowList *this)
{
  const struct std::nothrow_t *v2; // rdx
  __int64 v3; // rcx
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v5; // r9
  int updated; // eax
  unsigned int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+58h] [rbp+20h]

  *(_QWORD *)v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v3, v2);
    winrt::Udwm::Transitions::TransitionManager::UpdateAngle(Current);
  }
  catch ( ... )
  {
    v11 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x7AC,
            (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            v5);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v9);
    return v11;
  }
  updated = CWindowList::ForceUpdateScene(this);
  v7 = updated;
  if ( updated >= 0 )
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7AD,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)updated);
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v9);
    return v7;
  }
}
