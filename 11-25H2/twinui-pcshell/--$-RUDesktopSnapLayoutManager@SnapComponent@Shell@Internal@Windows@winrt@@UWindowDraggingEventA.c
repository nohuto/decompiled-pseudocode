/*
 * XREFs of ??$?RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventArgs@2UI@WindowsUdk@5@@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@AEBUWindowDraggingEventArgs@4UI@WindowsUdk@1@@Z @ 0x18029AD64
 * Callers:
 *     ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180207CC4 (-TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna.c)
 *     ?TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@UWindowId@UI@67@@Z @ 0x18029ACA8 (-TryGetHitTestResultForPointWithWindowId@DesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ?remove@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E0F14 (-remove@-$event@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Intern.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@34@UWindowDraggingEventArgs@7UI@WindowsUdk@4@@impl@winrt@@YA_NAEBU?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@41@AEBUWindowDraggingEventArgs@7UI@WindowsUdk@1@@Z @ 0x180594BE4 (--$invoke@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>(
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
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>(
                               i,
                               a2,
                               a3) )
      {
        token = winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                  v11,
                  &v14,
                  i);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::remove(
          a1,
          *token);
      }
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v13);
}
