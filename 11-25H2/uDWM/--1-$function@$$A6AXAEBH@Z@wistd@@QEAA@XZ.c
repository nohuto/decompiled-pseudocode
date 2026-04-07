/*
 * XREFs of ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180063FB4
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800629A0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180072410 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180095C40 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180095CE0 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800A1ED8 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x1800E26D8 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 *     _wil::details_abi::RawUsageIndex::Iterate_::_1_::dtor$0 @ 0x1800EC1FE (_wil--details_abi--RawUsageIndex--Iterate_--_1_--dtor$0.c)
 *     _Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher_::_1_::dtor$0 @ 0x1800EC82B (_Windows--Mirage--HolographicDriverDetectedWatcher--CreateDetachWatcher_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function<void (int const &)>::~function<void (int const &)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
