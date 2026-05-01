/*
 * XREFs of ?GetForCurrentThread@DispatcherQueue@System@Windows@winrt@@SA@XZ @ 0x180572A74
 * Callers:
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x1805736CC (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805913F4 (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@?$factory_cache_entry@UDispatcherQueue@System@Windows@winrt@@UIDispatcherQueueStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueue@System@Windows@2@AEBUIDispatcherQueueStatics@452@@Z@Z @ 0x180571C48 (--$call@P6A-AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@-$factory.c)
 */

_QWORD *__fastcall winrt::Windows::System::DispatcherQueue::GetForCurrentThread(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089AEF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>,
      a1);
    _InterlockedDecrement64(&qword_18089AEF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AEF8);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>::call<winrt::Windows::System::DispatcherQueue (*)(winrt::Windows::System::IDispatcherQueueStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
