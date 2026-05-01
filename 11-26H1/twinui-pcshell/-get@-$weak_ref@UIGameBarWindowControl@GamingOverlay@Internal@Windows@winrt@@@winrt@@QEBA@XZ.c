/*
 * XREFs of ?get@?$weak_ref@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1803596A0
 * Callers:
 *     ??1?$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@?$abi@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@QEAA@XZ @ 0x1803420E0 (--1-$event_revoker@UIGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@$MP8type@-$abi@U.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
