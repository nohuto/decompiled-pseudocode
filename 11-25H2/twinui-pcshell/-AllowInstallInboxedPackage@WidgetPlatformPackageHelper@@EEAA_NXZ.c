/*
 * XREFs of ?AllowInstallInboxedPackage@WidgetPlatformPackageHelper@@EEAA_NXZ @ 0x1805AA090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0E18 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall WidgetPlatformPackageHelper::AllowInstallInboxedPackage(WidgetPlatformPackageHelper *this)
{
  return LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this);
}
