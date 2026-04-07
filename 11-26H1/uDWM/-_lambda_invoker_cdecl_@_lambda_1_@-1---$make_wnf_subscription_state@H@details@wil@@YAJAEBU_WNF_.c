/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1_@?1???$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@23@@Z@SAJU4@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DF020
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$function@$$A6AXAEBH@Z@wistd@@QEBAXAEBH@Z @ 0x180078608 (--R-$function@$$A6AXAEBH@Z@wistd@@QEBAXAEBH@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800889F8 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall `wil::details::make_wnf_subscription_state<int>'::`2'::_lambda_1_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  const char *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    if ( a6 == 4 )
      wistd::function<void (int const &)>::operator()(a4 + 16);
    else
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x39D,
        (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
        (const char *)0x8000FFFFLL,
        (__int64)"Inconsistent state data size in WNF callback",
        v7);
  }
  return 0LL;
}
