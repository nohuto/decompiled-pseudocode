/*
 * XREFs of ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x1805AA1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B01C8 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0768 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0E18 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall WebExperiencePackageHelper::AllowPackageInstall(WebExperiencePackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rcx

  return (*((_DWORD *)this + 2) || LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(this))
      && LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this)
      && LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v1);
}
