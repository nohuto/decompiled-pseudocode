/*
 * XREFs of ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180352D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x180349CC4 (-GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180355910 (-TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59385726@@@details@wil@@QEAA_NXZ @ 0x180358A48 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59385726@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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

  if ( *((_QWORD *)this + 176) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59385726>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59385726>::GetImpl'::`2'::impl)
      || !(unsigned int)IsGamingFullScreenExperienceActive() )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37));
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x110D,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v2);
      ParentIfCoreWindow = GamingOverlayExperienceManager::GetParentIfCoreWindow(v3, *((HWND *)this + 176));
      Ancestor = GetAncestor(*((HWND *)this + 176), 2u);
      *(_OWORD *)&wndpl.length = 0LL;
      if ( Ancestor )
        ParentIfCoreWindow = Ancestor;
      wndpl.length = 44;
      memset(&wndpl.ptMinPosition.y, 0, 28);
      if ( !GetWindowPlacement(ParentIfCoreWindow, &wndpl) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x1119,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          v6);
      if ( ((wndpl.showCmd - 2) & 0xFFFFFFFB) == 0 )
      {
        LastActivePopup = GetLastActivePopup(ParentIfCoreWindow);
        SwitchToThisWindow(LastActivePopup, 1);
      }
      SetForegroundWindow(ParentIfCoreWindow);
    }
    return 0LL;
  }
  FocusedWindow = GamingOverlayExperienceManager::TriggerOnLastFocusedWindow(this);
  v10 = FocusedWindow;
  if ( FocusedWindow >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1127,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)FocusedWindow);
  return v10;
}
