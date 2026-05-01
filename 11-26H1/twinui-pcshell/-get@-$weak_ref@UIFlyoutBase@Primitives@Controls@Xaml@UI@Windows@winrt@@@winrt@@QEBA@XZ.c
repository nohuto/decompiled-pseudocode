/*
 * XREFs of ?get@?$weak_ref@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1802A836C
 * Callers:
 *     ?OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x1801C0D60 (-OnControlLoaded@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 *     ??1?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x18021D978 (--1-$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFlyo.c)
 *     ?revoke@?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@winrt@@QEAAXXZ @ 0x1802A82F0 (-revoke@-$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@U.c)
 *     ??4?$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802A9738 (--4-$event_revoker@UIFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFlyo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
