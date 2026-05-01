/*
 * XREFs of ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D40D8
 * Callers:
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x1805CE3B0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x1805CE4B0 (-AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1805CE4F0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4124 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D43E4 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4540 (-IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805DAC18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 */

char __fastcall LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(
        LockScreenWidgetPackageHelperBase *this)
{
  char v1; // bl
  LockScreenWidgetPackageHelperBase *v2; // rcx
  LockScreenWidgetPackageHelperBase *v3; // rcx

  v1 = 0;
  if ( !LockScreenWidgetPackageHelperBase::IsInternetUpdateAllowed(this) )
    return 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl) )
    return 1;
  if ( !LockScreenWidgetPackageHelperBase::IsInCTARegion(v2)
    || LockScreenWidgetPackageHelperBase::IsCTAUpdateAllowed(v3) )
  {
    return 1;
  }
  return v1;
}
