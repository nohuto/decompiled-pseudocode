/*
 * XREFs of ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180681E50
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180022614 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x1801711D0 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 *     ?OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180379C50 (-OnEventQueued@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1803834C0 (-Dismiss@CPeopleBarJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?ExitContactCard@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1803913B0 (-ExitContactCard@CQuickConnectExperienceManager@@UEAAJXZ.c)
 *     ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x180392160 (-OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ.c)
 *     _lambda_cad7757e6b1c49cd959dc880d2101d1e_::operator() @ 0x180396098 (_lambda_cad7757e6b1c49cd959dc880d2101d1e_--operator().c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x18039F3A8 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1803C2D74 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     ?OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ @ 0x1803C3300 (-OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?OnDismiss@MeetNowExperienceManager@@UEAAJXZ @ 0x1803C3320 (-OnDismiss@MeetNowExperienceManager@@UEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___::_ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___ @ 0x1806817A8 (wil--details--ScopeExitFn__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___--_ScopeExitFn__lambda_7aa1.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001F810 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180024180 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180681F9C (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSingleViewShellExperience::DestroyView(CSingleViewShellExperience *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 3) )
  {
    CSingleViewShellExperience::Hide((__int64)this, 0);
    v2 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 112LL))(
           *((_QWORD *)this + 11),
           this);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E2,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v2);
    v3 = CSingleViewShellExperience::NavigateView(this, 0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v6 = CSingleViewShellExperience::OnViewDestroyedBase((HSTRING *)this);
      v7 = v6;
      if ( v6 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E4,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v6);
      return v7;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E3,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 2LL;
    return 0LL;
  }
}
