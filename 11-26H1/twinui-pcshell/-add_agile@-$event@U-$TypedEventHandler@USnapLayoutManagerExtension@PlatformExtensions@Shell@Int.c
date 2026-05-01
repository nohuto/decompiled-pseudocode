/*
 * XREFs of ?add_agile@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x1805BB9EC
 * Callers:
 *     ?WindowDragging@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@7@AEBU?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@67@@Z @ 0x1801EE594 (-WindowDragging@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002668C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$make_event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800DD6B0 (--$make_event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Wind.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1801F60DC (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformE.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801F6110 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ??$copy_n@PEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@PEAU1234@I0@Z @ 0x180334CF0 (--$copy_n@PEAU-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWind.c)
 */

PVOID *__fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::add_agile(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        unsigned int *a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned int v7; // edx
  unsigned int *v8; // rdi
  __int64 v9; // rcx
  unsigned int **v10; // rax
  unsigned int *v12; // [rsp+60h] [rbp+38h] BYREF
  unsigned int *v13; // [rsp+68h] [rbp+40h] BYREF
  unsigned int *v14; // [rsp+70h] [rbp+48h] BYREF
  RTL_SRWLOCK *v15; // [rsp+78h] [rbp+50h]

  v14 = a3;
  *a2 = 0LL;
  v13 = 0LL;
  v6 = a1 + 2;
  v15 = a1 + 2;
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  v7 = 1;
  if ( a1->Ptr )
    v7 = *((_DWORD *)a1->Ptr + 1) + 1;
  winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>>(
    (winrt::impl::atomic_ref_count **)&v12,
    v7);
  v8 = v12;
  if ( a1->Ptr )
    std::copy_n<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs> *,unsigned int,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs> *>(
      (__int64 *)a1->Ptr + 1,
      *((_DWORD *)a1->Ptr + 1),
      (__int64 *)v12 + 1);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v8[2 * v8[1]], (__int64 *)a3);
  *a2 = *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
           v9,
           (PVOID *)&v14,
           (PVOID *)&v8[2 * v8[1]]);
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  v10 = (unsigned int **)std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>>>(
                           &v14,
                           (__int64 *)a1,
                           (__int64)&v12);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>>::operator=(
    &v13,
    v10);
  if ( v14 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v14);
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v12 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v12);
  ReleaseSRWLockExclusive_0(v6);
  if ( v13 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v13);
  if ( *(_QWORD *)a3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a3);
  return a2;
}
