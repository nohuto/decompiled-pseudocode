/*
 * XREFs of ??$invoke@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@USearchAppHost@implementation@Shell@UI@WindowsUdk@4@$$T@impl@winrt@@YA_NAEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@1@AEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x1803C53B4
 * Callers:
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x1803C52F8 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@$$T@-$event@U-$TypedEventHandler@U.c)
 *     ??$?RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@?$event@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEB$$T@Z @ 0x18045829C (--$-RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@-$event@U-$TypedEventHandler@UI.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteSystemStateChangedEventArgs@Shell@Internal@23@@Z @ 0x1802433C4 (--R-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@W.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>(
        __int64 **a1,
        __int64 a2)
{
  winrt::impl *v2; // rcx
  bool result; // al
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = a2 + 16;
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::operator()(
      a1,
      &v5,
      &v4);
    v5 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    result = 1;
  }
  catch ( ... )
  {
    return winrt::impl::report_failed_invoke(v2);
  }
  return result;
}
