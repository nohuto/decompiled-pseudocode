/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_024856d2eaa26e7e4864a7fffc39e281_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801A11D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@$$BY0CA@E@?$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAAXPEAY0CA@$$CBEK@Z @ 0x1801A11F8 (--$InternalCallback@$$BY0CA@E@-$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAAXPEAY0CA@$$CBE.c)
 */

__int64 __fastcall _lambda_024856d2eaa26e7e4864a7fffc39e281_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<unsigned char [32]>::InternalCallback<unsigned char [32]>(a4, a5, a6);
  return 0LL;
}
