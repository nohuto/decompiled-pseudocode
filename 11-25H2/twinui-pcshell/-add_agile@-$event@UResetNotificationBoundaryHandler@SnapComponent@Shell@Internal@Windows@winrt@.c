/*
 * XREFs of ?add_agile@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1805978A8
 * Callers:
 *     ?ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUevent_token@7@AEBUResetNotificationBoundaryHandler@34567@@Z @ 0x1802CBB58 (-ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Sh_ea_1802CBB58.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180066310 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$make_event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180212290 (--$make_event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1802C8F60 (--$exchange@U-$com_ptr@U-$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Inte.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 *     ??$copy_n@PEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@PEAU1234@I0@Z @ 0x180335494 (--$copy_n@PEAU-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWind.c)
 */

// Hidden C++ exception states: #wind=3
PVOID *__fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::add_agile(
        unsigned int *a1,
        PVOID *a2,
        unsigned int *a3)
{
  unsigned int v5; // edx
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  unsigned int *v11; // [rsp+50h] [rbp+30h] BYREF
  unsigned int *v12; // [rsp+58h] [rbp+38h] BYREF
  unsigned int *v13; // [rsp+60h] [rbp+40h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+48h]

  v13 = a3;
  v11 = a1;
  *a2 = 0LL;
  v12 = 0LL;
  v14 = &stru_18089A270;
  _Platform_AcquireSRWLockExclusive(&stru_18089A270);
  v5 = 1;
  if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
    v5 = *(_DWORD *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                   + 4)
       + 1;
  winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>(
    &v11,
    v5);
  v6 = v11;
  if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
    std::copy_n<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs> *,unsigned int,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs> *>(
      (__int64 *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                + 8),
      *(_DWORD *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                + 4),
      (__int64 *)v11 + 1);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v6[2 * v6[1]], (__int64 *)a3);
  *a2 = *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
           v7,
           (PVOID *)&v13,
           (PVOID *)&v6[2 * v6[1]]);
  _Platform_AcquireSRWLockExclusive(&stru_18089A268);
  v9 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>>(
         (__int64 *)&v13,
         v8,
         (__int64 *)&v11);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    (__int64 *)&v12,
    v9);
  if ( v13 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v13);
  ReleaseSRWLockExclusive_0(&stru_18089A268);
  if ( v11 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v11);
  ReleaseSRWLockExclusive_0(&stru_18089A270);
  if ( v12 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v12);
  if ( *(_QWORD *)a3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a3);
  return a2;
}
