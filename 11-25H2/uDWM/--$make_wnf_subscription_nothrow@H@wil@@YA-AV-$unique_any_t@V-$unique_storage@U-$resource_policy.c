/*
 * XREFs of ??$make_wnf_subscription_nothrow@H@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@K@Z @ 0x180098938
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800629A0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x180089184 (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription_nothrow<int>(_QWORD *a1, __int64 a2, const struct std::nothrow_t *a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( (int)wil::details::make_wnf_subscription_state<int>((__int64)a1, a3, (__int64)a3, &v5) < 0 )
    *a1 = 0LL;
  else
    *a1 = v5;
  return a1;
}
