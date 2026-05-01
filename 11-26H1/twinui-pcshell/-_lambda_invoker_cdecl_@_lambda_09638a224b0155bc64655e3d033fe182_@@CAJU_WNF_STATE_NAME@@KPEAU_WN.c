/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_09638a224b0155bc64655e3d033fe182_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802D9AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@U_EA_EVENT_HEADER@@@?$wnf_subscription_state@U_EA_EVENT_HEADER@@@details@wil@@QEAAXPEBU_EA_EVENT_HEADER@@K@Z @ 0x1802D9CA4 (--$InternalCallback@U_EA_EVENT_HEADER@@@-$wnf_subscription_state@U_EA_EVENT_HEADER@@@details@wil.c)
 */

__int64 __fastcall _lambda_09638a224b0155bc64655e3d033fe182_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<_EA_EVENT_HEADER>::InternalCallback<_EA_EVENT_HEADER>(a4, a5, a6);
  return 0LL;
}
