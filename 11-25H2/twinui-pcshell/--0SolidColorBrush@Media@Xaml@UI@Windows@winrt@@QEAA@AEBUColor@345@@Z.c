/*
 * XREFs of ??0SolidColorBrush@Media@Xaml@UI@Windows@winrt@@QEAA@AEBUColor@345@@Z @ 0x180574E8C
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1805E57D8 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$call@AEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@?$factory_cache_entry@USolidColorBrush@Media@Xaml@UI@Windows@winrt@@UISolidColorBrushFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@Z @ 0x180574464 (--$call@AEAV_lambda_f6412da80843da22cf270b1b12cf80a7_@@@-$factory_cache_entry@USolidColorBrush@M.c)
 *     ??R_lambda_f6412da80843da22cf270b1b12cf80a7_@@QEBA@AEBUISolidColorBrushFactory@Media@Xaml@UI@Windows@winrt@@@Z @ 0x1805752A8 (--R_lambda_f6412da80843da22cf270b1b12cf80a7_@@QEBA@AEBUISolidColorBrushFactory@Media@Xaml@UI@Win.c)
 */

winrt::Windows::UI::Xaml::Media::SolidColorBrush *__fastcall winrt::Windows::UI::Xaml::Media::SolidColorBrush::SolidColorBrush(
        winrt::Windows::UI::Xaml::Media::SolidColorBrush *this,
        const struct winrt::Windows::UI::Color *a2)
{
  const struct winrt::Windows::UI::Color *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18089CC58;
  _InterlockedIncrement64(&qword_18089CC58);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::SolidColorBrush,winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory> )
  {
    _lambda_f6412da80843da22cf270b1b12cf80a7_::operator()(
      &v4,
      this,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::SolidColorBrush,winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>);
    _InterlockedDecrement64(&qword_18089CC58);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089CC58);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::SolidColorBrush,winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory>::call<_lambda_f6412da80843da22cf270b1b12cf80a7_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)this,
      (__int64)&v4);
  }
  return this;
}
