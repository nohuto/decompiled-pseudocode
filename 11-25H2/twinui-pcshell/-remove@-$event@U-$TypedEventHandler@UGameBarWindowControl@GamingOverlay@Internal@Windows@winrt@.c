/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801ED13C
 * Callers:
 *     ??$?RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x18006658C (--$-RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActi.c)
 *     ?remove_ActivationChanged@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1801ED110 (-remove_ActivationChanged@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shel.c)
 *     ?StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x1802163E0 (-StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA.c)
 *     ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x180353C54 (--$-RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWin.c)
 * Callees:
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180066310 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180066684 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x180221080 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ??$make_event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1802221E0 (--$make_event_array@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@wi.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802D3474 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D34A4 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D34BC (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::remove(
        __int64 a1,
        PVOID a2)
{
  unsigned int *v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  unsigned int *v6; // rcx
  unsigned int v7; // r12d
  unsigned int *v8; // rbx
  bool v9; // al
  __int64 *v10; // rax
  unsigned int *v11; // rcx
  unsigned int *v12; // r13
  __int64 *v13; // rdi
  unsigned int *v14; // rax
  char v15; // [rsp+20h] [rbp-30h]
  unsigned int *v16; // [rsp+28h] [rbp-28h] BYREF
  unsigned int *v17; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF

  v4 = 0LL;
  v18 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v19 = a1 + 16;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v6 = *(unsigned int **)a1;
  if ( !*(_QWORD *)a1 )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v7 = v6[1] - 1;
  v8 = 0LL;
  v16 = 0LL;
  v15 = 0;
  if ( !v7 )
  {
    v9 = WINRT_IMPL_EncodePointer(*((PVOID *)v6 + 1)) == a2;
LABEL_16:
    if ( v9 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v4 = *(unsigned int **)a1;
      *(_QWORD *)a1 = 0LL;
      if ( (unsigned int **)a1 != &v16 )
      {
        v14 = v8;
        v8 = 0LL;
        v16 = 0LL;
        *(_QWORD *)a1 = v14;
      }
      v18 = v4;
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
    }
    goto LABEL_20;
  }
  v10 = (__int64 *)winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>(
                     &v17,
                     v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    (__int64 *)&v16,
    v10);
  if ( v17 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v17);
  v8 = v16;
  v11 = *(unsigned int **)a1;
  v12 = (unsigned int *)(*(_QWORD *)a1 + 8LL);
  v17 = (unsigned int *)(*(_QWORD *)a1 + 8 * (*(unsigned int *)(*(_QWORD *)a1 + 4LL) + 1LL));
  if ( v12 != v17 )
  {
    v9 = 0;
    v13 = (__int64 *)(v16 + 2);
    while ( 1 )
    {
      if ( v9 )
        goto LABEL_12;
      if ( a2 != *(PVOID *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                             v11,
                             &v19,
                             v12) )
        break;
      v9 = 1;
      v15 = 1;
LABEL_14:
      v12 += 2;
      if ( v12 == v17 )
      {
LABEL_15:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_16;
      }
    }
    v9 = v15;
LABEL_12:
    if ( !v7 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v13++, (__int64 *)v12);
    --v7;
    v9 = v15;
    goto LABEL_14;
  }
LABEL_20:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v16);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v18);
}
