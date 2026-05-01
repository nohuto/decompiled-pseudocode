/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18058A1CC
 * Callers:
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowStateChangedEventArgs@45671@@Z @ 0x1801460FC (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateCh.c)
 *     ?remove_WindowStateChange@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18058A450 (-remove_WindowStateChange@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Interna.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180029A7C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$make_event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800DD70C (--$make_event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180146084 (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Interna.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801460B8 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windo.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>::remove(
        RTL_SRWLOCK *a1,
        PVOID a2)
{
  RTL_SRWLOCK *v3; // r12
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  __int64 Ptr; // r8
  unsigned int v8; // r15d
  __int64 v9; // rbx
  bool v10; // r13
  __int64 *v11; // rax
  __int64 v12; // rcx
  winrt::impl::atomic_ref_count *v13; // r12
  __int64 *v14; // rdi
  __int64 *v15; // rax
  winrt::impl::atomic_ref_count *v16; // [rsp+20h] [rbp-20h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-18h]
  PVOID v18; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v19 = a1;
  v3 = a1;
  v4 = 0LL;
  v21 = 0LL;
  v5 = a1 + 2;
  v17 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  Ptr = (__int64)v3->Ptr;
  if ( !v3->Ptr )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v8 = *(_DWORD *)(Ptr + 4) - 1;
  v9 = 0LL;
  v20 = 0LL;
  v10 = 0;
  if ( v8 )
  {
    v11 = (__int64 *)winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>(
                       &v16,
                       v8);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
      &v20,
      v11);
    if ( v16 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref((__int64 *)&v16);
    v9 = v20;
    v12 = (__int64)v3->Ptr;
    v13 = (winrt::impl::atomic_ref_count *)((char *)v3->Ptr + 8);
    v16 = (winrt::impl::atomic_ref_count *)(v12 + 8 * (*(unsigned int *)(v12 + 4) + 1LL));
    if ( v13 == v16 )
      goto LABEL_19;
    v14 = (__int64 *)(v20 + 8);
    do
    {
      if ( v10
        || a2 != *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                    v12,
                    &v18,
                    (PVOID *)v13) )
      {
        if ( !v8 )
          break;
        winrt::Windows::Foundation::IUnknown::operator=(v14++, (__int64 *)v13);
        --v8;
      }
      else
      {
        v10 = 1;
      }
      v13 = (winrt::impl::atomic_ref_count *)((char *)v13 + 8);
    }
    while ( v13 != v16 );
    v5 = v17;
    v3 = v19;
  }
  else
  {
    v10 = *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
             v6,
             (PVOID *)&v19,
             (PVOID *)(Ptr + 8)) == a2;
  }
  if ( v10 )
  {
    _Platform_AcquireSRWLockExclusive(v3 + 1);
    v15 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>>(
            &v19,
            (__int64 *)v3,
            (__int64)&v20);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
      &v21,
      v15);
    if ( v19 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref((__int64 *)&v19);
    ReleaseSRWLockExclusive_0(v3 + 1);
    v4 = v21;
    v9 = v20;
  }
LABEL_19:
  if ( v9 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v20);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v21);
}
