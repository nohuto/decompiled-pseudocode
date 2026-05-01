/*
 * XREFs of ??$make_wnf_subscription@UPenButtonActionData@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUPenButtonActionData@@@Z@wistd@@K@Z @ 0x18061F2B4
 * Callers:
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637760 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@UPenButtonActionData@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUPenButtonActionData@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@UPenButtonActionData@@@01@@Z @ 0x18061F310 (--$make_wnf_subscription_state@UPenButtonActionData@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEA.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription<PenButtonActionData>(_QWORD *a1, __int64 a2, __int64 a3)
{
  int wnf_subscription; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  wnf_subscription = wil::details::make_wnf_subscription_state<PenButtonActionData>(a1, a3, a3, &v8);
  if ( wnf_subscription < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43C,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)wnf_subscription,
      v6);
  *a1 = v8;
  return a1;
}
