/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1???$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@23@@Z@SAJU4@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802291B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall `wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>'::`2'::_lambda_1_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  if ( a2 )
  {
    v4 = *(_QWORD *)(a4 + 128);
    if ( !v4 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  }
  return 0LL;
}
