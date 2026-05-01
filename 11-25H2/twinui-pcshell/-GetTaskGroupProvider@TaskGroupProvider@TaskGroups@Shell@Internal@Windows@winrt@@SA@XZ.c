/*
 * XREFs of ?GetTaskGroupProvider@TaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802A278C
 * Callers:
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180107BA8 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180150F80 (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x180481390 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@23456@@Z@?$factory_cache_entry@UTaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupProviderStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupProviderStatics@45672@@Z@Z @ 0x1801F7104 (--$call@P6A-AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProvider.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider::GetTaskGroupProvider(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089BE58);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089BE58);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BE58);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
