/*
 * XREFs of ??R?$function@$$A6AXAEBH@Z@wistd@@QEBAXAEBH@Z @ 0x180078608
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_1_@?1???$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@23@@Z@SAJU4@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DF020 (-_lambda_invoker_cdecl_@_lambda_1_@-1---$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<void (int const &)>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  if ( !v1 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}
