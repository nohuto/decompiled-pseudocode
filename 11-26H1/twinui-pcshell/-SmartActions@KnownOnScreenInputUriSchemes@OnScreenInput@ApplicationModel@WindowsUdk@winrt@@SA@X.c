/*
 * XREFs of ?SmartActions@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802B6394
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180145528 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics3@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x180466104 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics3@OnScreenInput@Application.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::SmartActions(
        _QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **))&qword_1808DCCB8;
  _InterlockedIncrement64(&qword_1808DCCB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3>,
      a1);
    _InterlockedDecrement64(&qword_1808DCCB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DCCB8);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics3 const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
