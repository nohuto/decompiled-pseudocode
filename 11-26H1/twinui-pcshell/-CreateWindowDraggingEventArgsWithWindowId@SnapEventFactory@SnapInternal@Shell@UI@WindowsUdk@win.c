/*
 * XREFs of ?CreateWindowDraggingEventArgsWithWindowId@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@AEBUWindowId@496@@Z @ 0x180292934
 * Callers:
 *     ?TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@UWindowId@UI@67@@Z @ 0x1802927AC (-TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     ??R_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802322D8 (--R_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@She.c)
 *     ??$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@Z @ 0x1805B87D4 (--$call@AEAV_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@@-$factory_cache_entry@USnapEventFactory@.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::Foundation::Point *__fastcall winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory::CreateWindowDraggingEventArgsWithWindowId(
        const struct winrt::Windows::Foundation::Point *a1,
        const struct winrt::Windows::UI::WindowId *a2,
        __int64 a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808DD638);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics> )
  {
    _lambda_8cef40b0f04add78b87f76d5b45d2d32_::operator()(
      v5,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>);
    _InterlockedDecrement64(&qword_1808DD638);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD638);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::call<_lambda_8cef40b0f04add78b87f76d5b45d2d32_ &>(
      a1,
      a1,
      v5);
  }
  return a1;
}
