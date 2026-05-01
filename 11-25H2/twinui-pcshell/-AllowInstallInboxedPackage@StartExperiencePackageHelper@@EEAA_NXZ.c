/*
 * XREFs of ?AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ @ 0x1805AA060
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0260 (-IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0E18 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall StartExperiencePackageHelper::AllowInstallInboxedPackage(StartExperiencePackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rcx

  return LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled(this)
      && LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v1);
}
