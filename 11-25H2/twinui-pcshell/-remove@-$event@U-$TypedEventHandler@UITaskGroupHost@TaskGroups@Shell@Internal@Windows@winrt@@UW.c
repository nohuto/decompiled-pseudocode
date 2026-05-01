/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180565F28
 * Callers:
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowStateChangedEventArgs@45671@@Z @ 0x180156598 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateCh.c)
 *     ?remove_WindowStateChange@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1805661B0 (-remove_WindowStateChange@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Interna.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A9FA4 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180156524 (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Interna.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180156558 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windo.c)
 *     ??$make_event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x180212290 (--$make_event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>::remove(
        __int64 a1,
        PVOID a2)
{
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r15d
  __int64 v9; // rbx
  char v10; // al
  __int64 *v11; // rax
  __int64 v12; // rcx
  PVOID *v13; // r12
  __int64 *v14; // rdi
  __int64 *v15; // rax
  PVOID *v16; // [rsp+20h] [rbp-10h] BYREF
  PVOID v17; // [rsp+28h] [rbp-8h] BYREF
  PVOID v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+80h] [rbp+50h] BYREF
  __int64 v20; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v17 = (PVOID)(a1 + 16);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v7 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v8 = *(_DWORD *)(v7 + 4) - 1;
  v9 = 0LL;
  v19 = 0LL;
  LOBYTE(v18) = 0;
  if ( !v8 )
  {
    v10 = *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
             v6,
             &v18,
             (PVOID *)(v7 + 8)) == a2;
LABEL_16:
    if ( v10 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v15 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>>(
              &v18,
              (__int64 *)a1,
              (__int64)&v19);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
        &v20,
        v15);
      if ( v18 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref((__int64 *)&v18);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
      v4 = v20;
      v9 = v19;
    }
    goto LABEL_20;
  }
  v11 = winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>(
          &v16,
          v8);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
    &v19,
    v11);
  if ( v16 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref((__int64 *)&v16);
  v9 = v19;
  v12 = *(_QWORD *)a1;
  v13 = (PVOID *)(*(_QWORD *)a1 + 8LL);
  v16 = (PVOID *)(*(_QWORD *)a1 + 8 * (*(unsigned int *)(*(_QWORD *)a1 + 4LL) + 1LL));
  if ( v13 != v16 )
  {
    v10 = (char)v18;
    v14 = (__int64 *)(v19 + 8);
    while ( 1 )
    {
      if ( v10 )
        goto LABEL_12;
      if ( a2 != *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                    v12,
                    &v17,
                    v13) )
        break;
      v10 = 1;
      LOBYTE(v18) = 1;
LABEL_14:
      if ( ++v13 == v16 )
      {
LABEL_15:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_16;
      }
    }
    v10 = (char)v18;
LABEL_12:
    if ( !v8 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v14++, (__int64 *)v13);
    --v8;
    v10 = (char)v18;
    goto LABEL_14;
  }
LABEL_20:
  if ( v9 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v19);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v20);
}
