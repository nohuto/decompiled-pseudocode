/*
 * XREFs of ??$make_wnf_subscription_nothrow@_N@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@K@Z @ 0x1800C0CA8
 * Callers:
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1804EF0B0 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 * Callees:
 *     ??$make_wnf_subscription_state@_N@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@KPEAPEAU?$wnf_subscription_state@_N@01@@Z @ 0x1800C0CEC (--$make_wnf_subscription_state@_N@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAE.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription_nothrow<bool>(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( (int)wil::details::make_wnf_subscription_state<bool>(a1, a3, a3, &v5) < 0 )
    *a1 = 0LL;
  else
    *a1 = v5;
  return a1;
}
