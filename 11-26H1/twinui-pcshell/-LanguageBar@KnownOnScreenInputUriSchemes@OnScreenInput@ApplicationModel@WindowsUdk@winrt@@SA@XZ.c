/*
 * XREFs of ?LanguageBar@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x180204C60
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180145528 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800283DC (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x18029AB3C (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationM.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::LanguageBar(
        _QWORD *a1)
{
  __int64 *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = &qword_1808DCCD8;
  _InterlockedIncrement64(&qword_1808DCCD8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808DCCD8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DCCD8);
    v3 = (__int64 *)_lambda_67918f09f7b935b7e6c8337dbf854d36_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
