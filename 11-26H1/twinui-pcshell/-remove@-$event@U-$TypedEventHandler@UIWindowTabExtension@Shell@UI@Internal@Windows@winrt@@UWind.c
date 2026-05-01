/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801C8A94
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800295CC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x1801C8A24 (-WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_tok.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180029A7C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$make_event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800DD6B0 (--$make_event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Wind.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x180146084 (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Interna.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801460B8 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windo.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802CA397 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::remove(
        RTL_SRWLOCK *a1,
        PVOID a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rbx
  bool v9; // r13
  __int64 *v10; // rax
  __int64 v11; // rcx
  winrt::impl::atomic_ref_count *v12; // r12
  __int64 *v13; // rdi
  __int64 *v14; // rax
  winrt::impl::atomic_ref_count *v15; // [rsp+20h] [rbp-20h] BYREF
  RTL_SRWLOCK *v16; // [rsp+28h] [rbp-18h]
  _BYTE v17[16]; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+90h] [rbp+50h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF

  v18 = a1;
  v3 = (__int64)a1;
  v4 = 0LL;
  v20 = 0LL;
  v5 = a1 + 2;
  v16 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  v6 = *(_QWORD *)v3;
  if ( !*(_QWORD *)v3 )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v7 = *(_DWORD *)(v6 + 4) - 1;
  v8 = 0LL;
  v19 = 0LL;
  v9 = 0;
  if ( v7 )
  {
    v10 = (__int64 *)winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
                       &v15,
                       v7);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
      &v19,
      v10);
    if ( v15 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref((__int64 *)&v15);
    v8 = v19;
    v11 = *(_QWORD *)v3;
    v12 = (winrt::impl::atomic_ref_count *)(*(_QWORD *)v3 + 8LL);
    v15 = (winrt::impl::atomic_ref_count *)(v11 + 8 * (*(unsigned int *)(v11 + 4) + 1LL));
    if ( v12 == v15 )
      goto LABEL_7;
    v13 = (__int64 *)(v19 + 8);
    do
    {
      if ( v9
        || a2 != *(PVOID *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                             v11,
                             v17,
                             v12) )
      {
        if ( !v7 )
          break;
        winrt::Windows::Foundation::IUnknown::operator=(v13++, (__int64 *)v12);
        --v7;
      }
      else
      {
        v9 = 1;
      }
      v12 = (winrt::impl::atomic_ref_count *)((char *)v12 + 8);
    }
    while ( v12 != v15 );
    v5 = v16;
    v3 = (__int64)v18;
  }
  else
  {
    v9 = WINRT_IMPL_EncodePointer(*(PVOID *)(v6 + 8)) == a2;
  }
  if ( v9 )
  {
    _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v3 + 8));
    v14 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>>(
            &v18,
            (__int64 *)v3,
            (__int64)&v19);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::operator=(
      &v20,
      v14);
    if ( v18 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref((__int64 *)&v18);
    ReleaseSRWLockExclusive_0((PSRWLOCK)(v3 + 8));
    v4 = v20;
    v8 = v19;
  }
LABEL_7:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v19);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v20);
}
