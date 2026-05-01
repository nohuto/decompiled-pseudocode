/*
 * XREFs of ??$?RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@?$event@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEB$$T@Z @ 0x180464630
 * Callers:
 *     ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x180473D94 (-UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002668C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@USearchAppHost@implementation@Shell@UI@WindowsUdk@4@$$T@impl@winrt@@YA_NAEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@1@AEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEB$$T@Z @ 0x1803CE59C (--$invoke@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundatio.c)
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180475A50 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>>::operator()<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::nullptr_t>(
        __int64 a1,
        __int64 a2)
{
  unsigned int *v4; // rbx
  unsigned int *v5; // rax
  unsigned int *v6; // rsi
  PVOID *v7; // rbp
  PVOID *i; // rdi
  __int64 v9; // rcx
  PVOID *token; // rax
  PVOID v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int *v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v5 = *(unsigned int **)a1;
  v6 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(unsigned int **)a1;
    v12 = *(unsigned int **)a1;
    _InterlockedIncrement((volatile signed __int32 *)v5);
    v6 = v5;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
  if ( v6 )
  {
    v7 = (PVOID *)&v6[2 * v6[1] + 2];
    for ( i = (PVOID *)(v6 + 2); i != v7; ++i )
    {
      if ( !winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,std::nullptr_t>(
              (__int64 **)i,
              a2) )
      {
        token = winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                  v9,
                  &v11,
                  i);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>>::remove(
          a1,
          *token);
      }
    }
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v12);
}
