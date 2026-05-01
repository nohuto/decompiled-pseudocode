/*
 * XREFs of ?Current@AppVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x1802BC708
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1800A0798 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@?$factory_cache_entry@UAppVisualTheme@Themes@UI@WindowsUdk@winrt@@UIAppVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUIAppVisualThemeStatics@4562@@Z@Z @ 0x1805C0A40 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@-$fact.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::WindowsUdk::UI::Themes::AppVisualTheme::Current(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(__int64 *); // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall *)(__int64 *))&qword_1808DD148;
  _InterlockedIncrement64(&qword_1808DD148);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics> )
  {
    result = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>);
    _InterlockedDecrement64(&qword_1808DD148);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD148);
    v2 = _lambda_95a7ded9384efa6b54b5506927790237_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &)>(
             a1,
             &v2);
  }
  return result;
}
