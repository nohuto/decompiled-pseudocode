/*
 * XREFs of ?CreateWindowDraggingEventArgs@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@@Z @ 0x1802ABAE4
 * Callers:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x1801FBA84 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 * Callees:
 *     ??R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18021E5A8 (--R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@She.c)
 *     ??$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@Z @ 0x18029BC18 (--$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@-$factory_cache_entry@USnapEventFactory@.c)
 */

const struct winrt::Windows::Foundation::Point *__fastcall winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory::CreateWindowDraggingEventArgs(
        const struct winrt::Windows::Foundation::Point *a1,
        unsigned int *a2)
{
  unsigned int *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DD638;
  _InterlockedIncrement64(&qword_1808DD638);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics> )
  {
    _lambda_32ed34ebfde5e368616da7ac4eaeafd9_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>);
    _InterlockedDecrement64(&qword_1808DD638);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD638);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::call<_lambda_32ed34ebfde5e368616da7ac4eaeafd9_ &>(
      (__int64 *)a1,
      a1,
      &v4);
  }
  return a1;
}
