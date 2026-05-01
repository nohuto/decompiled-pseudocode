/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180475A50
 * Callers:
 *     ??$?RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@?$event@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEB$$T@Z @ 0x180464630 (--$-RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@-$event@U-$TypedEventHandler@UI.c)
 *     ?remove_EffectiveSettingChanged@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180475C00 (-remove_EffectiveSettingChanged@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_K@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_K@Z @ 0x180608968 (--$-RUSharedDesktopBackgroundVisualHost@@_K@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800262F8 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002668C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$make_event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800DD6B0 (--$make_event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Wind.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800DD790 (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindow.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>>::remove(
        __int64 a1,
        PVOID a2)
{
  unsigned int *v3; // r12
  unsigned int *v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r15d
  unsigned int *v9; // rbx
  bool v10; // r13
  __int64 *v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // r12
  __int64 *v14; // rdi
  __int64 *v15; // rax
  unsigned int *v16; // [rsp+20h] [rbp-20h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-18h]
  PVOID v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v19; // [rsp+80h] [rbp+40h] BYREF
  unsigned int *v20; // [rsp+90h] [rbp+50h] BYREF
  unsigned int *v21; // [rsp+98h] [rbp+58h] BYREF

  v19 = (unsigned int *)a1;
  v3 = (unsigned int *)a1;
  v4 = 0LL;
  v21 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v17 = (RTL_SRWLOCK *)(a1 + 16);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v7 = *(_QWORD *)v3;
  if ( !*(_QWORD *)v3 )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v8 = *(_DWORD *)(v7 + 4) - 1;
  v9 = 0LL;
  v20 = 0LL;
  v10 = 0;
  if ( v8 )
  {
    v11 = (__int64 *)winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
                       (winrt::impl::atomic_ref_count **)&v16,
                       v8);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
      (__int64 *)&v20,
      v11);
    if ( v16 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v16);
    v9 = v20;
    v12 = *(_QWORD *)v3;
    v13 = (unsigned int *)(*(_QWORD *)v3 + 8LL);
    v16 = (unsigned int *)(v12 + 8 * (*(unsigned int *)(v12 + 4) + 1LL));
    if ( v13 == v16 )
      goto LABEL_19;
    v14 = (__int64 *)(v20 + 2);
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
      v13 += 2;
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
             (PVOID *)(v7 + 8)) == a2;
  }
  if ( v10 )
  {
    _Platform_AcquireSRWLockExclusive((PSRWLOCK)v3 + 1);
    v15 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>>(
            (__int64 *)&v19,
            (__int64 *)v3,
            (__int64 *)&v20);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
      (__int64 *)&v21,
      v15);
    if ( v19 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v19);
    ReleaseSRWLockExclusive_0((PSRWLOCK)v3 + 1);
    v4 = v21;
    v9 = v20;
  }
LABEL_19:
  if ( v9 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v20);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v21);
}
