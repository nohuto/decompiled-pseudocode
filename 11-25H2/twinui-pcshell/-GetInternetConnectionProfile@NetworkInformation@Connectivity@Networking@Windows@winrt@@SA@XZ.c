/*
 * XREFs of ?GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ @ 0x1805AE8C8
 * Callers:
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805B0768 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkConnected@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x18064A7B0 (-IsNetworkConnected@-$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??$call@P6A?AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationStatics@2345@@Z@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUConnectionProfile@Connectivity@Networking@Windows@2@AEBUINetworkInformationStatics@4562@@Z@Z @ 0x1805A0D38 (--$call@P6A-AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationSt.c)
 */

_QWORD *__fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile(
        _QWORD *a1)
{
  const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *(__fastcall *v3)(const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089D068);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics> )
  {
    winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089D068);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089D068);
    v3 = _lambda_a02d817213a1872483990d5857a507da_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<winrt::Windows::Networking::Connectivity::ConnectionProfile (*)(winrt::Windows::Networking::Connectivity::INetworkInformationStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
