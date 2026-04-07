/*
 * XREFs of ??$InternalCallback@H@?$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z @ 0x1800E265C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_6fe7f41459601891023985285f8158ba_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18008A080 (-_lambda_invoker_cdecl_@_lambda_6fe7f41459601891023985285f8158ba_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 * Callees:
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180096104 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state<int>::InternalCallback<int>(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 == 4 )
    return wistd::function<void (int const &)>::operator()(a1 + 16);
  else
    return wil::details::in1diag3::Log_HrMsg(
             retaddr,
             (void *)0x39D,
             (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)0x8000FFFFLL,
             (__int64)"Inconsistent state data size in WNF callback",
             v4);
}
