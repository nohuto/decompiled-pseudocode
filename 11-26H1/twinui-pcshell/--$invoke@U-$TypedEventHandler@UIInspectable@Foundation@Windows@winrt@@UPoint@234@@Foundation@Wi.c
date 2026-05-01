/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@$$TUPoint@234@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@1@AEB$$TAEBUPoint@341@@Z @ 0x1800DCCE0
 * Callers:
 *     ??$?R$$TUPoint@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$TAEBUPoint@Foundation@Windows@1@@Z @ 0x1800DCC24 (--$-R$$TUPoint@Foundation@Windows@winrt@@@-$event@U-$TypedEventHandler@UIInspectable@Foundation@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@QEBA@AEBUISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@23@AEBUSize@123@@Z @ 0x18026B5D8 (--R-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
bool winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>,std::nullptr_t,winrt::Windows::Foundation::Point>()
{
  winrt::impl *v0; // rcx
  bool result; // al
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>::operator()();
    if ( v2 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v2);
    result = 1;
  }
  catch ( ... )
  {
    return winrt::impl::report_failed_invoke(v0);
  }
  return result;
}
