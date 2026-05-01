/*
 * XREFs of ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UActiveTabChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUActiveTabChangedEventArgs@4UI@561@@Z @ 0x1802AF610
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x18026D0E0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E0B24 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Int.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@UWindowTabHost@implementation@Shell@Internal@34@UActiveTabChangedEventArgs@7UI@834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@1@AEBUWindowTabHost@implementation@Shell@Internal@41@AEBUActiveTabChangedEventArgs@7UI@841@@Z @ 0x18055902C (--$invoke@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabC.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v6; // rbx
  unsigned int *Ptr; // rax
  unsigned int *v8; // rsi
  PVOID *v9; // rbp
  PVOID *i; // rdi
  __int64 v11; // rcx
  PVOID *token; // rax
  unsigned int *v13; // [rsp+50h] [rbp+8h] BYREF
  PVOID v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v8 = 0LL;
  if ( a1->Ptr )
  {
    v13 = (unsigned int *)a1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)Ptr);
    v8 = Ptr;
    v6 = v13;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v8 )
  {
    v9 = (PVOID *)&v8[2 * v8[1] + 2];
    for ( i = (PVOID *)(v8 + 2); i != v9; ++i )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>,winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>(
                               i,
                               a2,
                               a3) )
      {
        token = winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                  v11,
                  &v14,
                  i);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::remove(
          a1,
          *token);
      }
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v13);
}
