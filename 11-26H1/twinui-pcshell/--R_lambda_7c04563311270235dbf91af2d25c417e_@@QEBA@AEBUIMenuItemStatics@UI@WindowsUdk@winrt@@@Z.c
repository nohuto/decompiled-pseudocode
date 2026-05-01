/*
 * XREFs of ??R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z @ 0x1801E4A54
 * Callers:
 *     ??$call_factory@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@V_lambda_7c04563311270235dbf91af2d25c417e_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@Z @ 0x1801E49E8 (--$call_factory@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@V_lambda_7c04563311270235db.c)
 *     ??$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@Z @ 0x1805FF754 (--$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 * Callees:
 *     ?CreateCommand@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBUFontIconInfo@UI@WindowsUdk@3@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@3@@Z @ 0x1801E4A94 (-CreateCommand@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@.c)
 */

__int64 __fastcall _lambda_7c04563311270235dbf91af2d25c417e_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateCommand(
    a3,
    a2,
    *a1,
    a1[1],
    a1[2],
    a1[3]);
  return a2;
}
