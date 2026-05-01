/*
 * XREFs of ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1800E15D0
 * Callers:
 *     ?OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1801022A0 (-OnControlUnloaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180102620 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ?OnPointerExited@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUPointerRoutedEventArgs@Input@Xaml@UI@67@@Z @ 0x18023C2A0 (-OnPointerExited@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ?OnDismissRequested@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x18059DDB0 (-OnDismissRequested@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     ?OnPointerEntered@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@AEBUPointerRoutedEventArgs@Input@Xaml@UI@67@@Z @ 0x18059DDF0 (-OnPointerEntered@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E141C (-remove@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@Q.c)
 *     ??$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInstance@implementation@23456@@impl@winrt@@YA_NAEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@1@AEBUSnapFlyoutInstance@implementation@34561@@Z @ 0x1800E1688 (--$invoke@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@USnapFlyoutInst.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int *v4; // rbx
  unsigned int *Ptr; // rax
  unsigned int *v6; // rsi
  unsigned int *v7; // rbp
  unsigned int *i; // rdi
  __int64 v9; // rcx
  PVOID *token; // rax
  unsigned int *v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v6 = 0LL;
  if ( a1->Ptr )
  {
    v11 = (unsigned int *)a1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)Ptr);
    v6 = Ptr;
    v4 = v11;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v6 )
  {
    v7 = &v6[2 * v6[1] + 2];
    for ( i = v6 + 2; i != v7; i += 2 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(
                               i,
                               a2) )
      {
        token = (PVOID *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                           v9,
                           &v12,
                           i);
        winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::remove(a1, *token);
      }
    }
  }
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v11);
}
