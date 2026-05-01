/*
 * XREFs of ?OriginalImageFile@LockScreen@UserProfile@System@Windows@winrt@@SA@XZ @ 0x18066968C
 * Callers:
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180668E40 (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUUri@Foundation@Windows@winrt@@AEBUILockScreenStatics@UserProfile@System@34@@Z@?$factory_cache_entry@ULockScreen@UserProfile@System@Windows@winrt@@UILockScreenStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUri@Foundation@Windows@2@AEBUILockScreenStatics@UserProfile@System@52@@Z@Z @ 0x180667F7C (--$call@P6A-AUUri@Foundation@Windows@winrt@@AEBUILockScreenStatics@UserProfile@System@34@@Z@-$fa.c)
 */

_QWORD *__fastcall winrt::Windows::System::UserProfile::LockScreen::OriginalImageFile(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **))&qword_1808DDBD8;
  _InterlockedIncrement64(&qword_1808DDBD8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808DDBD8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DDBD8);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>::call<winrt::Windows::Foundation::Uri (*)(winrt::Windows::System::UserProfile::ILockScreenStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
