/*
 * XREFs of ??$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXPEBG_K@Z@wistd@@KPEAPEAU?$wnf_array_subscription_state@G@01@@Z @ 0x180087E90
 * Callers:
 *     ?SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ @ 0x1800AAD9C (-SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800C402C (--0-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@QEAA@$$QEAV-$function@$$.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800C43A4 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_array_subscription_state<unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  __int64 v8; // r8
  int v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  int v13; // edi
  unsigned int v14; // [rsp+40h] [rbp-28h] BYREF
  void (__fastcall ***v15)(_QWORD, _QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  char v17; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v14 = -1;
  *a4 = 0LL;
  v6 = operator new[](0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v7 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::wnf_subscription_state<wil::details::empty_wnf_state>(
                                                       v6,
                                                       a2)) != 0LL )
  {
    v8 = v14;
    if ( v14 == -1 )
    {
      v9 = NtQueryWnfStateData(&WNF_AUDC_RENDER, 0LL, 0LL, &v14);
      v10 = v9 | 0x10000000;
      if ( v9 < 0 && v10 != -805306333 )
      {
        v11 = 1020LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
          (const char *)(unsigned int)v10);
        (**v7)(v7, 1LL);
        return (unsigned int)v10;
      }
      v8 = v14;
    }
    v15 = v7 + 1;
    v16 = 0LL;
    v17 = 1;
    v13 = RtlSubscribeWnfStateChangeNotification(
            &v16,
            WNF_AUDC_RENDER,
            v8,
            _lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_::_lambda_invoker_cdecl_);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(&v15);
    v10 = v13 | 0x10000000;
    if ( v10 < 0 )
    {
      v11 = 1029LL;
      goto LABEL_7;
    }
    *a4 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F5,
      (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
