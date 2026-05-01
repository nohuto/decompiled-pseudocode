/*
 * XREFs of ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806C147C
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B06D0 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwit.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806B39B0 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitc.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806BEE40 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18009AEE0 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18009C148 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x180124100 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1801B0BD4 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18067FB48 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59052199@@@details@wil@@QEAA_NXZ @ 0x1806C1B60 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59052199@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall _CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        struct IUnknown *a2)
{
  char v4; // bl
  __int64 **v5; // r14
  __int64 *v6; // rax
  bool v7; // di
  __int64 **v8; // rbx
  __int64 *v9; // rax
  const char *v10; // r9
  int v11; // [rsp+20h] [rbp-38h]
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  LODWORD(v15) = 0;
  try
  {
    AppViewDataSourceHelpers::TryGetApplicationViewForItem(&v16, (__int64)a2);
    if ( v16 )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59052199>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59052199>::GetImpl'::`2'::impl) )
        v11 = 15;
      else
        v11 = 3;
      ApplicationViewHelpers::CloseView(v16, *(IUnknown **)(a1 + 64), 7, 8, v11);
    }
    else
    {
      v5 = (__int64 **)(a1 + 96);
      v7 = 0;
      if ( *(_QWORD *)(a1 + 96) )
      {
        v6 = (__int64 *)from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>((winrt *)v12, a2);
        v4 = 1;
        LODWORD(v15) = 1;
        if ( winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
               (__int64 **)(a1 + 96),
               v6) )
        {
          v7 = 1;
        }
      }
      if ( (v4 & 1) != 0 )
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
      if ( v7 )
      {
        v8 = (__int64 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                           v5,
                           v13);
        v9 = (__int64 *)from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>((winrt *)v12, a2);
        winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
          v8,
          &v15,
          v9);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x59,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      v10);
  }
}
