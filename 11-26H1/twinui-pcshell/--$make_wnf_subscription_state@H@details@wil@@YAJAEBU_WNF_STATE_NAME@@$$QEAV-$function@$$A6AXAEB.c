/*
 * XREFs of ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x18032698C
 * Callers:
 *     ??$make_wnf_subscription_nothrow@H@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@K@Z @ 0x180326940 (--$make_wnf_subscription_nothrow@H@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C5830 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802C6E38 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<int>(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // ebx
  unsigned int v14; // [rsp+40h] [rbp-38h] BYREF
  void (__fastcall ***v15)(_QWORD, _QWORD); // [rsp+48h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  char v17; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14 = 0;
  *a4 = 0LL;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = &wil::details::wnf_subscription_state<_EA_EVENT_HEADER>::`vftable';
    if ( *(_QWORD *)(a2 + 112) )
    {
      v7[16] = v7 + 3;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
      *(_QWORD *)(a2 + 112) = 0LL;
    }
    else
    {
      v7[16] = 0LL;
    }
    v9 = v14;
    if ( v14 == -1 )
    {
      v10 = NtQueryWnfStateData(a1, 0LL, 0LL, &v14);
      v11 = v10 | 0x10000000;
      if ( v10 < 0 && v11 != -805306333 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B8,
          (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
          (const char *)v11);
        (**v8)(v8, 1LL);
        return v11;
      }
      v9 = v14;
    }
    v15 = v8 + 1;
    v16 = 0LL;
    v17 = 1;
    v12 = RtlSubscribeWnfStateChangeNotification(
            &v16,
            *a1,
            v9,
            _lambda_a14e49ce427a1853f087bba834558a2c_::_lambda_invoker_cdecl_);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>((__int64)&v15);
    if ( v12 >= 0 )
    {
      *a4 = v8;
      return 0LL;
    }
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3C7,
            (__int64)"onecore\\internal\\sdk\\inc\\wil/resource.h",
            (const char *)(unsigned int)v12);
    (**v8)(v8, 1LL);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)0x8007000ELL);
  }
  return v11;
}
