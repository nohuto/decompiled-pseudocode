/*
 * XREFs of ??$?RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1800DCE30
 * Callers:
 *     ?ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180212CCC (-ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002668C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktopSnapLayoutManager@implementation@23456@@impl@winrt@@YA_NAEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBUDesktopSnapLayoutManager@implementation@34561@@Z @ 0x1800DD5D4 (--$invoke@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@UDesktop.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ?remove@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1805BC0E8 (-remove@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@w.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *token; // rax
  __int64 v9; // rcx
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  _Platform_AcquireSRWLockExclusive(&stru_1808DA940);
  v4 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
  v5 = 0LL;
  if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
  {
    v3 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
    v10 = (unsigned int *)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary;
    _InterlockedIncrement((volatile signed __int32 *)winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary);
    v5 = v4;
  }
  ReleaseSRWLockExclusive_0(&stru_1808DA940);
  if ( v5 )
  {
    v6 = v5 + 8 * (*(unsigned int *)(v5 + 4) + 1LL);
    while ( 1 )
    {
      v5 += 8LL;
      if ( v5 == v6 )
        break;
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>(
                               v5,
                               a2) )
      {
        token = (_QWORD *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                            v7,
                            &v11,
                            v5);
        winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::remove(
          v9,
          *token);
      }
    }
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v10);
}
