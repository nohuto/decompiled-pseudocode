/*
 * XREFs of ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x180030CB0
 * Callers:
 *     ??$make_wnf_subscription_nothrow@H@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@K@Z @ 0x18008BD60 (--$make_wnf_subscription_nothrow@H@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180030CA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18007C400 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-Reg.c)
 *     ??0?$function@$$A6AXAEBH@Z@wistd@@QEAA@$$QEAV01@@Z @ 0x18007D288 (--0-$function@$$A6AXAEBH@Z@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008D824 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18008DD54 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<int>(
        __int64 a1,
        const struct std::nothrow_t *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // ebx
  int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v15 = 0;
  *a4 = 0LL;
  v6 = operator new[](0x88uLL, a2);
  v7 = (void (__fastcall ***)(_QWORD, __int64))v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = &wil::details::wnf_subscription_state<int>::`vftable';
    wistd::function<void (int const &)>::function<void (int const &)>(v6 + 2, a2);
    if ( v15 != -1
      || (v8 = NtQueryWnfStateData(&WNF_IMSN_TRANSPARENCYPOLICY, 0LL, 0LL, &v15), v9 = v8 | 0x10000000, v8 >= 0)
      || v9 == -805306333 )
    {
      v10 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
              v16,
              v7 + 1);
      v12 = RtlSubscribeWnfStateChangeNotification(
              v10 + 8,
              WNF_IMSN_TRANSPARENCYPOLICY,
              v11,
              `wil::details::make_wnf_subscription_state<int>'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
      wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(v16);
      if ( v12 >= 0 )
      {
        *a4 = v7;
        return 0LL;
      }
      v9 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x3C7,
             (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)(unsigned int)v12,
             (int)v7);
      (**v7)(v7, 1LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
        (const char *)v9,
        0);
      (**v7)(v7, 1LL);
    }
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL,
      v14);
  }
  return v9;
}
