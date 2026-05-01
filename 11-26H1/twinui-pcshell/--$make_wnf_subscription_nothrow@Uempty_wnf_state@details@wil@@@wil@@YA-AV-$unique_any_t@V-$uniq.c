/*
 * XREFs of ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180109FF8
 * Callers:
 *     ?SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180236640 (-SubscribeToServices@GamingOverlayExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180246900 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18010A0B0 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = 0LL;
  if ( (int)wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(a2, a3, a4, v6) < 0 )
    *a1 = 0LL;
  else
    *a1 = v6[0];
  return a1;
}
