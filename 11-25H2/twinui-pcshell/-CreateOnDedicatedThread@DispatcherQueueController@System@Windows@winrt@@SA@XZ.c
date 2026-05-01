/*
 * XREFs of ?CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ @ 0x180613724
 * Callers:
 *     ??0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180638AF4 (--0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStatics@234@@Z@?$factory_cache_entry@UDispatcherQueueController@System@Windows@winrt@@UIDispatcherQueueControllerStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@System@Windows@2@AEBUIDispatcherQueueControllerStatics@452@@Z@Z @ 0x180612A08 (--$call@P6A-AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStat.c)
 */

_QWORD *__fastcall winrt::Windows::System::DispatcherQueueController::CreateOnDedicatedThread(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089AF18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089AF18);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AF18);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>::call<winrt::Windows::System::DispatcherQueueController (*)(winrt::Windows::System::IDispatcherQueueControllerStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
