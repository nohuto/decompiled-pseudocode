/*
 * XREFs of ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18034E6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x1802B8708 (-GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180350AF0 (-TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::RestoreTargetAfterTakingFocus(GamingOverlayExperienceManager *this)
{
  int v2; // eax
  GamingOverlayExperienceManager *v3; // rcx
  HWND ParentIfCoreWindow; // rdi
  HWND Ancestor; // rax
  const char *v6; // r9
  HWND LastActivePopup; // rax
  int FocusedWindow; // eax
  unsigned int v10; // ebx
  WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_QWORD *)this + 168) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 24LL))(*((_QWORD *)this + 32));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1023,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v2);
    ParentIfCoreWindow = GamingOverlayExperienceManager::GetParentIfCoreWindow(v3, *((HWND *)this + 168));
    Ancestor = GetAncestor(*((HWND *)this + 168), 2u);
    *(_OWORD *)&wndpl.length = 0LL;
    if ( Ancestor )
      ParentIfCoreWindow = Ancestor;
    wndpl.length = 44;
    memset(&wndpl.ptMinPosition.y, 0, 28);
    if ( !GetWindowPlacement(ParentIfCoreWindow, &wndpl) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x102F,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        v6);
    if ( ((wndpl.showCmd - 2) & 0xFFFFFFFB) == 0 )
    {
      LastActivePopup = GetLastActivePopup(ParentIfCoreWindow);
      SwitchToThisWindow(LastActivePopup, 1);
    }
    SetForegroundWindow(ParentIfCoreWindow);
    return 0LL;
  }
  FocusedWindow = GamingOverlayExperienceManager::TriggerOnLastFocusedWindow(this);
  v10 = FocusedWindow;
  if ( FocusedWindow >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x103D,
    (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)FocusedWindow);
  return v10;
}
