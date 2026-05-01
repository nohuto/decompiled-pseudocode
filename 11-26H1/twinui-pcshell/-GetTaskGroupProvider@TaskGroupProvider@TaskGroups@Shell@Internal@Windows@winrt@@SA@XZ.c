/*
 * XREFs of ?GetTaskGroupProvider@TaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x18029B05C
 * Callers:
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180187BE8 (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1801C8D88 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180491D80 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@23456@@Z@?$factory_cache_entry@UTaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupProviderStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupProviderStatics@45672@@Z@Z @ 0x1801ECEB0 (--$call@P6A-AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProvider.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider::GetTaskGroupProvider(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **))&qword_1808DC4D8;
  _InterlockedIncrement64(&qword_1808DC4D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808DC4D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC4D8);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
