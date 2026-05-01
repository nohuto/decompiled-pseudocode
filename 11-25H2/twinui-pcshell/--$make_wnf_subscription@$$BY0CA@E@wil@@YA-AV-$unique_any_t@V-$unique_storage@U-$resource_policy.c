/*
 * XREFs of ??$make_wnf_subscription@$$BY0CA@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@K@Z @ 0x1801CB900
 * Callers:
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18025758C (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@$$BY0CA@E@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@KPEAPEAU?$wnf_subscription_state@$$BY0CA@E@01@@Z @ 0x1801CB958 (--$make_wnf_subscription_state@$$BY0CA@E@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription<unsigned char [32]>(_QWORD *a1, __int64 a2, __int64 a3)
{
  int wnf_subscription; // eax
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = 0LL;
  wnf_subscription = wil::details::make_wnf_subscription_state<unsigned char [32]>(a2, a3, a3, &v7);
  if ( wnf_subscription < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43C,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)wnf_subscription,
      v6);
  *a1 = v7;
  return a1;
}
