/*
 * XREFs of ??$?RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x180026594
 * Callers:
 *     ?MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x18002643C (-MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ?remove@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180026170 (-remove@-$event@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002668C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$invoke@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@34@UActivationChangedEventArgs@78934@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@1@AEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@41@AEBUActivationChangedEventArgs@78941@@Z @ 0x180026768 (--$invoke@U-$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  PVOID v6; // rbx
  volatile signed __int32 *Ptr; // rax
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // rbp
  volatile signed __int32 *i; // rdi
  __int64 v11; // rcx
  PVOID *token; // rax
  PVOID v13; // [rsp+20h] [rbp-38h] BYREF
  char v14[8]; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (volatile signed __int32 *)a1->Ptr;
  v8 = 0LL;
  if ( a1->Ptr )
  {
    v6 = a1->Ptr;
    v13 = a1->Ptr;
    _InterlockedIncrement(Ptr);
    v8 = Ptr;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v8 )
  {
    v9 = &v8[2 * *((unsigned int *)v8 + 1) + 2];
    for ( i = v8 + 2; i != v9; i += 2 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>(
                               i,
                               a2,
                               a3) )
      {
        token = (PVOID *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                           v11,
                           v14,
                           i);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::remove(
          a1,
          *token);
      }
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v13);
}
