/*
 * XREFs of ?Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x180103E20
 * Callers:
 *     ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x180103D68 (-ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x1805176A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 *     _anonymous_namespace_::GetLogoTileTheme @ 0x1805C26D0 (_anonymous_namespace_--GetLogoTileTheme.c)
 * Callees:
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C0E94 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUISystemVisualThemeStatics@4562@@Z@Z @ 0x180514764 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@-$f.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::WindowsUdk::UI::Themes::SystemVisualTheme::Current(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(const struct winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics *); // [rsp+30h] [rbp+8h] BYREF
  __int64 *v3; // [rsp+38h] [rbp+10h]

  v3 = &qword_18089CA88;
  _InterlockedIncrement64(&qword_18089CA88);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics> )
  {
    result = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>);
    _InterlockedDecrement64(&qword_18089CA88);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089CA88);
    v2 = _lambda_95a7ded9384efa6b54b5506927790237_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics const &)>(
             a1,
             &v2);
  }
  return result;
}
