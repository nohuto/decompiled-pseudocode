/*
 * XREFs of ?get@?$weak_ref@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801D8198
 * Callers:
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805B25C4 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x1805B2620 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B2620.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAA@XZ @ 0x1805B267C (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B267C.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLI@AA@impl@winrt@@QEAA@XZ @ 0x1805B26D8 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B26D8.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMI@AA@impl@winrt@@QEAA@XZ @ 0x1805B2734 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B2734.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNI@AA@impl@winrt@@QEAA@XZ @ 0x1805B2790 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B2790.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
