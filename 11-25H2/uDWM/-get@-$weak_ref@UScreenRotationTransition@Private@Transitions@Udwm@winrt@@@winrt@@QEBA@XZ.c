/*
 * XREFs of ?get@?$weak_ref@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800E13D0
 * Callers:
 *     ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ @ 0x1800E12A0 (-OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Udwm::Transitions::Private::ScreenRotationTransition>::get(
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
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
