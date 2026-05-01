/*
 * XREFs of ?CreateSeparator@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1806019B8
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ??R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt@@@Z @ 0x18013982C (--R_lambda_ca425077811c26dd994b3d0531fe1de0_@@QEBA@AEBUIJsonValueStatics@Json@Data@Windows@winrt.c)
 *     ??$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@Z @ 0x1805FF9BC (--$call@AEAV_lambda_f76301d492854dbc5fbf4a375fca4889_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 */

const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::UI::MenuItem::CreateSeparator(
        const struct winrt::param::hstring *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808DB868;
  _InterlockedIncrement64(&qword_1808DB868);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics> )
  {
    _lambda_ca425077811c26dd994b3d0531fe1de0_::operator()(
      &v4,
      (__int64)a1,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>);
    _InterlockedDecrement64(&qword_1808DB868);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB868);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>::call<_lambda_f76301d492854dbc5fbf4a375fca4889_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))a1,
      (__int64)a1,
      &v4);
  }
  return a1;
}
