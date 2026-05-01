/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805DAC18
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805C8F4C (--$serialize@Vinput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVinput_archive@ts.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805CA04C (--$serialize@Voutput_archive@tson@@@_tip_SettingsStoreAppInstallerTest@@QEAAXAEAVoutput_archive@.c)
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x1805CE3B0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D40D8 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     ?evaluate@_tip_SettingsStoreAppInstallerTest@@QEAAXXZ @ 0x1805DBC6C (-evaluate@_tip_SettingsStoreAppInstallerTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D05CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D6060 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
