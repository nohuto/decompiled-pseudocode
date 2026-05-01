/*
 * XREFs of ??0XamlLauncher@@QEAA@XZ @ 0x18024EE7C
 * Callers:
 *     ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x18022A790 (--$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x18009AABC (-PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800FAB4C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     _anonymous_namespace_::IsTestDevice @ 0x1801F2F24 (_anonymous_namespace_--IsTestDevice.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028CC38 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A7A60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@WRL@Microsoft@@QEAA@XZ @ 0x1802B2E9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@U-$Implements@U-$.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CEA04 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D8D8C (IsQueryWin32SubsystemHostPresent.c)
 *     ??$try_get_value@I@reg@wil@@YA?AV?$optional@I@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803A4004 (--$try_get_value@I@reg@wil@@YA-AV-$optional@I@std@@PEAUHKEY__@@PEBG1@Z.c)
 *     ?AutomaticInvokeSkipped_ContainerOSGuest@StartWindowTelemetry@@SAXXZ @ 0x18044D5B0 (-AutomaticInvokeSkipped_ContainerOSGuest@StartWindowTelemetry@@SAXXZ.c)
 *     ?AutomaticInvokeSkipped_LaunchingRecall@StartWindowTelemetry@@SAXXZ @ 0x18044D608 (-AutomaticInvokeSkipped_LaunchingRecall@StartWindowTelemetry@@SAXXZ.c)
 *     ?AutomaticInvokeSkipped_PrelaunchDisabled@StartWindowTelemetry@@SAXXZ @ 0x18044D660 (-AutomaticInvokeSkipped_PrelaunchDisabled@StartWindowTelemetry@@SAXXZ.c)
 *     ?AutomaticInvokeSkipped_TestMachine@StartWindowTelemetry@@SAXXZ @ 0x18044D68C (-AutomaticInvokeSkipped_TestMachine@StartWindowTelemetry@@SAXXZ.c)
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x18044EBB0 (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID51538523@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180450530 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID51538523@@@details@wil@@QEAAX_NW4Report.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180450F68 (-ensure_data@-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@detail.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1804512F4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip.c)
 */

// Hidden C++ exception states: #wind=21
XamlLauncher *__fastcall XamlLauncher::XamlLauncher(XamlLauncher *this)
{
  unsigned int v2; // r9d
  XamlLauncher *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  StartDocked *v10; // rcx
  int v12; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+34h] [rbp-24h]
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>();
  *(_QWORD *)this = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>'};
  *((_QWORD *)this + 3) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>'};
  *((_QWORD *)this + 4) = &XamlLauncher::`vftable'{for `IImmersiveLauncherTrayNotify'};
  *((_QWORD *)this + 5) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 6) = &XamlLauncher::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 7) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 8) = &XamlLauncher::`vftable'{for `IImmersiveLauncherCortana'};
  *((_QWORD *)this + 9) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 10) = &XamlLauncher::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 11) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 256;
  *((_WORD *)this + 178) = 0;
  *((_BYTE *)this + 358) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 5;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *(_QWORD *)&v14 = (char *)this + 480;
  winrt::impl::resume_apartment_context::resume_apartment_context((XamlLauncher *)((char *)this + 480));
  v12 = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
              L"StartShownOnUpgrade",
              v2,
              &v12) < 0
    || !v12 )
  {
    *((_BYTE *)this + 356) = 1;
  }
  if ( anonymous_namespace_::IsTestDevice() )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_TestMachine();
    *((_BYTE *)this + 356) = 0;
  }
  if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_ContainerOSGuest();
    *((_BYTE *)this + 356) = 0;
  }
  if ( !XamlLauncher::IsStartMenuPrelaunchEnabled(v3) )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_PrelaunchDisabled();
    *((_BYTE *)this + 356) = 0;
  }
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID51538523>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID51538523>::GetImpl'::`2'::impl,
    v4);
  wil::reg::try_get_value<unsigned int>(
    &v12,
    v5,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\A9\\SnapshotCapture",
    L"SnapshotCaptureActive");
  wil::reg::try_get_value<unsigned int>(
    &v14,
    v6,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\A9\\SnapshotCapture",
    L"RecallLaunched");
  if ( v13 && v12 == 1 && !BYTE4(v14) )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_LaunchingRecall();
    *((_BYTE *)this + 356) = 0;
  }
  if ( *((_BYTE *)this + 356) )
  {
    v8 = *((_QWORD *)this + 16);
    if ( v8 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v8 + 8) )
      wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::reset((char *)this + 128);
    v9 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::ensure_data((char *)this + 128);
    tip2::details::shared_data<1,0,0>::start(*v9 + 8LL, &v14);
    *(_OWORD *)((char *)this + 136) = v14;
  }
  XamlLauncher::s_pLauncher = this;
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_43480734>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_43480734>::GetImpl'::`2'::impl,
    v7);
  StartDocked::PrecreateStartMenuConfigRegKey(v10);
  return this;
}
