/*
 * XREFs of ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802B4E7C
 * Callers:
 *     ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803CF59C (-GetSearchSize@@YA-AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180612DA0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180613528 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x180613B80 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 * Callees:
 *     ??R_lambda_7b7c9298bfeaa6f21443744179c3c395_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1802230F0 (--R_lambda_7b7c9298bfeaa6f21443744179c3c395_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@Ap.c)
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1803CEF00 (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 */

const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
        const struct winrt::param::hstring *a1,
        const struct winrt::param::hstring *a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808DBDC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics> )
  {
    _lambda_7b7c9298bfeaa6f21443744179c3c395_::operator()(
      v5,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>);
    _InterlockedDecrement64(&qword_1808DBDC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBDC8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory,winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::call<_lambda_7b7c9298bfeaa6f21443744179c3c395_ &>(
      a1,
      a1,
      v5);
  }
  return a1;
}
