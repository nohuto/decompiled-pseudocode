/*
 * XREFs of ?IsManagedByOrganization@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801E3D30
 * Callers:
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x18002A768 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1801E3CD8 (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackage@ApplicationModel.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180473DC4 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4684 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x180627548 (-IsCopilotPWAInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     ?IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ @ 0x18063241C (-IsTargetAppPackageInstalled@CopilotHotkeyManager@@QEAA_NXZ.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@2345@@impl@winrt@@QEBA@XZ @ 0x18065343C (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IMap@IUhstring@winrt@@@Collections@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::IsManagedByOrganization(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 56LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, &v4);
  return v6;
}
