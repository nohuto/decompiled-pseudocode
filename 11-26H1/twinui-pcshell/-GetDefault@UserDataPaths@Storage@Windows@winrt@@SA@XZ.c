/*
 * XREFs of ?GetDefault@UserDataPaths@Storage@Windows@winrt@@SA@XZ @ 0x1802B631C
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??$call@P6A?AUUserDataPaths@Storage@Windows@winrt@@AEBUIUserDataPathsStatics@234@@Z@?$factory_cache_entry@UUserDataPaths@Storage@Windows@winrt@@UIUserDataPathsStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUserDataPaths@Storage@Windows@2@AEBUIUserDataPathsStatics@452@@Z@Z @ 0x18029C888 (--$call@P6A-AUUserDataPaths@Storage@Windows@winrt@@AEBUIUserDataPathsStatics@234@@Z@-$factory_ca.c)
 */

_QWORD *__fastcall winrt::Windows::Storage::UserDataPaths::GetDefault(_QWORD *a1)
{
  void (__fastcall *v3)(__int64, __int64 *); // [rsp+40h] [rbp+8h] BYREF

  v3 = (void (__fastcall *)(__int64, __int64 *))&qword_1808DB1E8;
  _InterlockedIncrement64(&qword_1808DB1E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics> )
  {
    winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808DB1E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB1E8);
    v3 = (void (__fastcall *)(__int64, __int64 *))_lambda_a02d817213a1872483990d5857a507da_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::UserDataPaths,winrt::Windows::Storage::IUserDataPathsStatics>::call<winrt::Windows::Storage::UserDataPaths (*)(winrt::Windows::Storage::IUserDataPathsStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      &v3);
  }
  return a1;
}
