/*
 * XREFs of ?CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@4@@Z @ 0x1801E49AC
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ??$call_factory@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@V_lambda_7c04563311270235dbf91af2d25c417e_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@Z @ 0x1801E49E8 (--$call_factory@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@V_lambda_7c04563311270235db.c)
 */

__int64 __fastcall winrt::WindowsUdk::UI::MenuItem::CreateCommand(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF

  v7[0] = a2;
  v7[3] = a5;
  v7[1] = a3;
  v7[2] = a4;
  winrt::impl::call_factory<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics,_lambda_7c04563311270235dbf91af2d25c417e_>(
    a1,
    v7);
  return a1;
}
