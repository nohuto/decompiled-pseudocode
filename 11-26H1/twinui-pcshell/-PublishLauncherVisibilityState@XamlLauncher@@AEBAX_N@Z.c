/*
 * XREFs of ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1800505E8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x180050190 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180050230 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x1800508D0 (-OnLauncherShow@XamlLauncher@@UEAAXXZ.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x180243FD0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x180244EA0 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802BE160 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180459FE0 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1801AEAAC (-GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z @ 0x1801B2878 (-PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x18023821C (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180238260 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ @ 0x180369C54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ @ 0x18045DA04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59342962@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncher::PublishLauncherVisibilityState(XamlLauncher *this, unsigned __int8 a2)
{
  int v2; // edi
  int v4; // eax
  char IsEnabled; // al
  ImmersiveMonitorHelper *v6; // rsi
  HMONITOR v7; // rax
  const char *v8; // r9
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v11 = a2;
  v4 = RtlPublishWnfStateData(WNF_IMSN_LAUNCHERVISIBILITY, 0LL, &v11, 4LL) | 0x10000000;
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x69F,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4);
  try
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_41356296>::GetImpl'::`2'::impl) )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_59342962>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59342962>::GetImpl'::`2'::impl);
      v6 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 25);
      v13 = 0LL;
      if ( IsEnabled )
      {
        v9[0] = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
        if ( (int)ImmersiveMonitorHelper::GetMonitor(v6, &v13) < 0
          || (*(int (__fastcall **)(struct IImmersiveMonitor *, _QWORD *))(*(_QWORD *)v13 + 40LL))(v13, v9) < 0 )
        {
          v7 = MonitorFromWindow(0LL, 1u);
          v9[0] = v7;
        }
        else
        {
          v7 = (HMONITOR)v9[0];
        }
        v12 = v2 ^ 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
          (char *)this + 384,
          v7,
          &v12);
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
        if ( (int)ImmersiveMonitorHelper::GetMonitor(v6, &v13) >= 0 )
        {
          v9[0] = 0LL;
          if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, _QWORD *))(*(_QWORD *)v13 + 40LL))(v13, v9) >= 0 )
          {
            v12 = v2 ^ 1;
            winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
              (char *)this + 384,
              v9[0],
              &v12);
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    }
    else
    {
      v12 = v2 ^ 1;
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
        (char *)this + 384,
        &v12);
    }
    ImmersiveMonitorHelper::PublishVisibilityToMonitorManager(*((ImmersiveMonitorHelper **)this + 25), v2);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6C2,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      v8);
  }
}
