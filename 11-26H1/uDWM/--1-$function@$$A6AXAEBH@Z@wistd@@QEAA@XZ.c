/*
 * XREFs of ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18003092C
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003053C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18005B9A0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x1800DF414 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 *     _wil::details_abi::RawUsageIndex::Iterate_::_1_::dtor$0 @ 0x1800E7C59 (_wil--details_abi--RawUsageIndex--Iterate_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
