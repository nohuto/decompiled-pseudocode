/*
 * XREFs of ?Current@TaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802B2F60
 * Callers:
 *     ?InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180107BA8 (-InitializeTaskGroupItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18055BCC0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupDataModelStatics@23456@@Z@?$factory_cache_entry@UTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataModelStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupDataModelStatics@45672@@Z@Z @ 0x18020E2C4 (--$call@P6A-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupDataMode.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel::Current(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089BE98);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089BE98);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BE98);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
