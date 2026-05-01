/*
 * XREFs of ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4CC4
 * Callers:
 *     ?AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ @ 0x1805CE360 (-AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ.c)
 *     ?AllowInstallInboxedPackage@WidgetPlatformPackageHelper@@EEAA_NXZ @ 0x1805CE390 (-AllowInstallInboxedPackage@WidgetPlatformPackageHelper@@EEAA_NXZ.c)
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x1805CE3B0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x1805CE4B0 (-AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1805CE4F0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call_factory_cast@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@ZUPowerManager@2345@U62345@V_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@Z @ 0x1805C5428 (--$call_factory_cast@P6A-AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStati.c)
 */

bool __fastcall LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(
        LockScreenWidgetPackageHelperBase *this)
{
  return (unsigned int)winrt::impl::call_factory_cast<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &),winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_d6f5de8facc06583c35b6799ac4a0daa_>((__int64 (__fastcall *)(__int64 *))this) == 2;
}
