/*
 * XREFs of ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800E0888
 * Callers:
 *     ?unsubscribe_from_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E0770 (-unsubscribe_from_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x180334014 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 *     ?remove_ConfigurationChanged@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1803376D0 (-remove_ConfigurationChanged@-$produce@UGamingPostureConfiguration@factory_implementation@Postur.c)
 *     ?remove_NetworkStateChanged@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x18064AB10 (-remove_NetworkStateChanged@-$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180066310 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$make_event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800E02C8 (--$make_event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Wind.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802D3474 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(
        __int64 a1,
        PVOID a2)
{
  unsigned int *v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  unsigned int *v6; // rcx
  unsigned int v7; // r12d
  unsigned int *v8; // rbx
  bool v9; // al
  unsigned int *v10; // rax
  __int64 *v11; // rax
  unsigned int *v12; // rcx
  unsigned int *v13; // r13
  __int64 *v14; // rdi
  unsigned int *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  char v17; // [rsp+70h] [rbp+40h]
  unsigned int *v18; // [rsp+80h] [rbp+50h] BYREF
  unsigned int *v19; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v16 = a1 + 16;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v6 = *(unsigned int **)a1;
  if ( !*(_QWORD *)a1 )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v7 = v6[1] - 1;
  v8 = 0LL;
  v15 = 0LL;
  v17 = 0;
  if ( !v7 )
  {
    v9 = WINRT_IMPL_EncodePointer(*((PVOID *)v6 + 1)) == a2;
LABEL_4:
    if ( v9 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v4 = *(unsigned int **)a1;
      *(_QWORD *)a1 = 0LL;
      if ( (unsigned int **)a1 != &v15 )
      {
        v10 = v8;
        v8 = 0LL;
        v15 = 0LL;
        *(_QWORD *)a1 = v10;
      }
      v19 = v4;
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
    }
    goto LABEL_8;
  }
  v11 = winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
          &v18,
          v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    (__int64 *)&v15,
    v11);
  if ( v18 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v18);
  v8 = v15;
  v12 = *(unsigned int **)a1;
  v13 = (unsigned int *)(*(_QWORD *)a1 + 8LL);
  v18 = (unsigned int *)(*(_QWORD *)a1 + 8 * (*(unsigned int *)(*(_QWORD *)a1 + 4LL) + 1LL));
  if ( v13 != v18 )
  {
    v9 = 0;
    v14 = (__int64 *)(v15 + 2);
    while ( 1 )
    {
      if ( v9 )
        goto LABEL_22;
      if ( a2 != *(PVOID *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                             v12,
                             &v16,
                             v13) )
        break;
      v9 = 1;
      v17 = 1;
LABEL_24:
      v13 += 2;
      if ( v13 == v18 )
      {
LABEL_25:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_4;
      }
    }
    v9 = v17;
LABEL_22:
    if ( !v7 )
      goto LABEL_25;
    winrt::Windows::Foundation::IUnknown::operator=(v14++, (__int64 *)v13);
    --v7;
    v9 = v17;
    goto LABEL_24;
  }
LABEL_8:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v15);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v19);
}
