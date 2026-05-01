/*
 * XREFs of ?OpenForCurrentUser@PackageCatalog@ApplicationModel@Windows@winrt@@SA@XZ @ 0x1802BFFC0
 * Callers:
 *     ??0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802C574C (--0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805E3510 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1805ED580 (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??$call@P6A?AUPackageCatalog@ApplicationModel@Windows@winrt@@AEBUIPackageCatalogStatics@234@@Z@?$factory_cache_entry@UPackageCatalog@ApplicationModel@Windows@winrt@@UIPackageCatalogStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageCatalog@ApplicationModel@Windows@2@AEBUIPackageCatalogStatics@452@@Z@Z @ 0x1802AAC10 (--$call@P6A-AUPackageCatalog@ApplicationModel@Windows@winrt@@AEBUIPackageCatalogStatics@234@@Z@-.c)
 */

_QWORD *__fastcall winrt::Windows::ApplicationModel::PackageCatalog::OpenForCurrentUser(_QWORD *a1)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089AAB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics> )
  {
    winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089AAB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AAB8);
    v3 = _lambda_a02d817213a1872483990d5857a507da_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::PackageCatalog,winrt::Windows::ApplicationModel::IPackageCatalogStatics>::call<winrt::Windows::ApplicationModel::PackageCatalog (*)(winrt::Windows::ApplicationModel::IPackageCatalogStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
