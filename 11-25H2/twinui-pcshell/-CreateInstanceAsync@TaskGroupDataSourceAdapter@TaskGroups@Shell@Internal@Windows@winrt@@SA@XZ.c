/*
 * XREFs of ?CreateInstanceAsync@TaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802B8F18
 * Callers:
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18055BCC0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@34@@Z@?$factory_cache_entry@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupDataSourceAdapterStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@2@AEBUITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@52@@Z@Z @ 0x1801F2D24 (--$call@P6A-AU-$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Window.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter::CreateInstanceAsync(
        _QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089BE38);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089BE38);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089BE38);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::call<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter> (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
