/*
 * XREFs of ?CreateForWorkAreaRect@SnapLayoutManager@Shell@UI@WindowsUdk@winrt@@SA@AEBURect@Foundation@Windows@5@@Z @ 0x180221B00
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1800A1240 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ??R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802C2198 (--R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@Windo.c)
 *     ??$call@AEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics2@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@Z @ 0x1804AAFAC (--$call@AEAV_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@@-$factory_cache_entry@USnapLayoutManager.c)
 */

const struct winrt::Windows::Foundation::Rect *__fastcall winrt::WindowsUdk::UI::Shell::SnapLayoutManager::CreateForWorkAreaRect(
        const struct winrt::Windows::Foundation::Rect *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DB908;
  _InterlockedIncrement64(&qword_1808DB908);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2> )
  {
    _lambda_c6eead5922142ea911cef51d7f7bcdf9_::operator()(
      &v4,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>);
    _InterlockedDecrement64(&qword_1808DB908);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB908);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapLayoutManager,winrt::WindowsUdk::UI::Shell::ISnapLayoutManagerStatics2>::call<_lambda_c6eead5922142ea911cef51d7f7bcdf9_ &>(
      a1,
      a1,
      &v4);
  }
  return a1;
}
