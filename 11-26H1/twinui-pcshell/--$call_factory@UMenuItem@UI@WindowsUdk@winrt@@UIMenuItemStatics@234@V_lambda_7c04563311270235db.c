/*
 * XREFs of ??$call_factory@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@V_lambda_7c04563311270235dbf91af2d25c417e_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@Z @ 0x1801E49E8
 * Callers:
 *     ?CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@4@@Z @ 0x1801E49AC (-CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU-$.c)
 * Callees:
 *     ??R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z @ 0x1801E4A54 (--R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z.c)
 *     ??$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@Z @ 0x1805FF754 (--$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::call_factory<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics,_lambda_7c04563311270235dbf91af2d25c417e_>(
        __int64 a1,
        __int64 a2)
{
  _InterlockedIncrement64(&qword_1808DB868);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics> )
  {
    _lambda_7c04563311270235dbf91af2d25c417e_::operator()(
      a2,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>);
    _InterlockedDecrement64(&qword_1808DB868);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB868);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>::call<_lambda_7c04563311270235dbf91af2d25c417e_ &>(
      &qword_1808DB868,
      a1,
      a2);
  }
  return a1;
}
