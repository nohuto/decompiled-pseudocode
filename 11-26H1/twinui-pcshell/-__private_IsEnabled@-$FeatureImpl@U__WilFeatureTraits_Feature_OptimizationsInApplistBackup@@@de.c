/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAA_NXZ @ 0x1802C7638
 * Callers:
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800271F0 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     wistd::__function::__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180612B10 (wistd--__function--__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil--Regis.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802B466C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180614470 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBa.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::__private_IsEnabled(
        _DWORD *a1)
{
  char v2; // bl
  __int64 v3; // r8
  char v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
