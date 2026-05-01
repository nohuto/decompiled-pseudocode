/*
 * XREFs of ??R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z @ 0x18060102C
 * Callers:
 *     ??$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@Z @ 0x1805FF888 (--$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x180601930 (-CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU.c)
 * Callees:
 *     ?CreateContainer@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBUFontIconInfo@UI@WindowsUdk@3@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@53@@Z @ 0x1806018A4 (-CreateContainer@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 */

__int64 __fastcall _lambda_a2f7f7f06ceca043d5386b16a3f42495_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateContainer(
    a3,
    a2,
    *a1,
    a1[1],
    a1[2],
    a1[3]);
  return a2;
}
