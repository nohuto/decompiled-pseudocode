/*
 * XREFs of ??$make_wnf_subscription_state@E@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@KPEAPEAU?$wnf_subscription_state@E@01@@Z @ 0x1801E43B4
 * Callers:
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x1801E4358 (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@@Z @ 0x180090A74 (--0-$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEB_N@Z@wistd@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801A17FC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C5830 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<unsigned char>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // ebx
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v13 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 || (v7 = wil::details::wnf_subscription_state<bool>::wnf_subscription_state<bool>(v6, a2)) == 0LL )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
    return v10;
  }
  v8 = v13;
  if ( v13 != -1 )
    goto LABEL_9;
  v9 = NtQueryWnfStateData(&WNF_PO_PDC_SHELL_PHASE_NOTIFICATION, 0LL, 0LL, &v13);
  v10 = v9 | 0x10000000;
  if ( v9 >= 0 || v10 == -805306333 )
  {
    v8 = v13;
LABEL_9:
    v14 = v7 + 1;
    v15 = 0LL;
    v16 = 1;
    v11 = RtlSubscribeWnfStateChangeNotification(
            &v15,
            WNF_PO_PDC_SHELL_PHASE_NOTIFICATION,
            v8,
            _lambda_9504f3500b9dc45adde9f8fc6017a36d_::_lambda_invoker_cdecl_);
    if ( v16 )
      wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
        v14,
        v15);
    if ( v11 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3C7,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v11,
            (int)v7);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
    (const char *)v10);
LABEL_7:
  (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
  return v10;
}
