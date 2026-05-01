/*
 * XREFs of ?QueryInterface@?$produce_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802E0240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,void>::QueryInterface(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx

  v1 = (__int64 (__fastcall ***)(_QWORD))((a1 - 24) & -(__int64)(a1 != 0));
  return (**v1)(v1);
}
