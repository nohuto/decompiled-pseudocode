/*
 * XREFs of ?SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ @ 0x1800AAD9C
 * Callers:
 *     wil::init_once__lambda_b97ad778945d7336730384125f54d282___ @ 0x1800ADDC8 (wil--init_once__lambda_b97ad778945d7336730384125f54d282___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXPEBG_K@Z@wistd@@KPEAPEAU?$wnf_array_subscription_state@G@01@@Z @ 0x180087E90 (--$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AAE78 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800CC874 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioRenderEndpointChangeDelegator::SubscribeToWnfAudioRenderEndpointChanges(
        CAudioRenderEndpointChangeDelegator *this,
        __int64 a2,
        __int64 a3)
{
  int wnf_array_subscription; // eax
  wil::details *v5; // rcx
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  wil::details *v8; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v9[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v10[13]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD *v11; // [rsp+98h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v10[1] = this;
  v10[0] = off_180174618;
  v8 = 0LL;
  v11 = v10;
  wnf_array_subscription = wil::details::make_wnf_array_subscription_state<unsigned short>(
                             (__int64)this,
                             (__int64)v9,
                             a3,
                             &v8);
  v5 = 0LL;
  if ( wnf_array_subscription >= 0 )
    v5 = v8;
  v8 = v5;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (char *)this + 88,
    &v8);
  if ( v8 )
    wil::details::delete_wnf_subscription_state(v8, v6);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
  if ( *((_QWORD *)this + 11) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEBE,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
