/*
 * XREFs of ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803828E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800148E4 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1800D29B8 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x1800FB7F8 (-GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800FB86C (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?ApproveProcessesForAnimation@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBI@3@@Z @ 0x180246DA0 (-ApproveProcessesForAnimation@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGe.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x1802B69E4 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@QEAA_NXZ @ 0x180384454 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ @ 0x180384490 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SSFJVTest@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCreated(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CSingleViewShellExperience *v3; // rdi
  int v4; // eax
  int v5; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v6; // rdx
  HWND v7; // rax
  HWND v8; // rdi
  __int64 v9; // rdx
  __int64 *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = (CStartExperienceManager *)((char *)this + 224);
  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)this + 224, 3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = PriorityBoostHelper::OnViewCreated(*((PriorityBoostHelper **)this + 27));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  if ( *((_QWORD *)this + 31) )
    CSingleViewShellExperience::KeepAlive(v3);
  v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 31), v6);
  v8 = v7;
  if ( v7 )
  {
    if ( !SetPropW(v7, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      v9 = 605LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    if ( ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SSFJVTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SSFJVTest>::GetImpl'::`2'::impl)
       || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LFSFSRTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_LFSFSRTest>::GetImpl'::`2'::impl))
      && !SetPropW(v8, L"AttachToDesktop", HANDLE_FLAG_INHERIT) )
    {
      v9 = 611LL;
      goto LABEL_10;
    }
    if ( !SetPropW(v8, L"WindowShouldReportLayoutCompletedTelemetryProp", HANDLE_FLAG_INHERIT) )
    {
      v9 = 615LL;
      goto LABEL_10;
    }
    GetWindowThreadProcessId(v8, (LPDWORD)this + 172);
    if ( *((_DWORD *)this + 172) )
    {
      winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)&v15);
      v11 = (__int64 *)winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
                         (const struct winrt::Windows::UI::Internal::Input::InputSite *)&v14,
                         &v15);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 87, v11);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      v14 = *((_DWORD *)this + 172);
      *(_QWORD *)&v12 = &v14;
      DWORD2(v12) = 1;
      winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::ApproveProcessesForAnimation(
        (__int64)this + 696,
        &v12);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    }
  }
  return 0LL;
}
