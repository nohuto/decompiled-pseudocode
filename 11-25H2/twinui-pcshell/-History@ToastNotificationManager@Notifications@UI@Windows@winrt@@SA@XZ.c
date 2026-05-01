/*
 * XREFs of ?History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ @ 0x180562624
 * Callers:
 *     _lambda_7936b82dc4b721215efe4b8ef74a7a70_::operator() @ 0x1805620DC (_lambda_7936b82dc4b721215efe4b8ef74a7a70_--operator().c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180562208 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationManagerStatics2@2345@@Z@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics2@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUToastNotificationHistory@Notifications@UI@Windows@2@AEBUIToastNotificationManagerStatics2@4562@@Z@Z @ 0x180561BD0 (--$call@P6A-AUToastNotificationHistory@Notifications@UI@Windows@winrt@@AEBUIToastNotificationMan.c)
 */

_QWORD *__fastcall winrt::Windows::UI::Notifications::ToastNotificationManager::History(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18089CCF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>,
      a1);
    _InterlockedDecrement64(&qword_18089CCF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089CCF8);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2>::call<winrt::Windows::UI::Notifications::ToastNotificationHistory (*)(winrt::Windows::UI::Notifications::IToastNotificationManagerStatics2 const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
