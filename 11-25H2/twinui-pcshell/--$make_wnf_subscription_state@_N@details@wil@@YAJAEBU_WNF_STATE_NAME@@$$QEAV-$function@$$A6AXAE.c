/*
 * XREFs of ??$make_wnf_subscription_state@_N@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@KPEAPEAU?$wnf_subscription_state@_N@01@@Z @ 0x1800C0CEC
 * Callers:
 *     ??$make_wnf_subscription_nothrow@_N@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@K@Z @ 0x1800C0CA8 (--$make_wnf_subscription_nothrow@_N@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_polic.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C1B0C (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@@Z @ 0x180078C14 (--0-$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEB_N@Z@wistd@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801966FC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CE330 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<bool>(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  _QWORD *v9; // rdi
  __int64 v10; // r8
  int v11; // ebx
  unsigned int v12; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v17; // [rsp+80h] [rbp+20h] BYREF

  v17 = a3;
  v12 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 || (v9 = wil::details::wnf_subscription_state<bool>::wnf_subscription_state<bool>(v6, a2)) == 0LL )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
    return v7;
  }
  v10 = v12;
  if ( v12 == -1 )
  {
    v17 = 0;
    v7 = NtQueryWnfStateData(&WNF_TMCN_ISTABLETPOSTURE, 0LL, 0LL, &v12, 0LL, &v17) | 0x10000000;
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -805306333 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B8,
        (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)v7);
LABEL_14:
      (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
      return v7;
    }
    v10 = v12;
  }
  v13 = v9 + 1;
  v14 = 0LL;
  v15 = 1;
  v11 = RtlSubscribeWnfStateChangeNotification(
          &v14,
          WNF_TMCN_ISTABLETPOSTURE,
          v10,
          _lambda_9504f3500b9dc45adde9f8fc6017a36d_::_lambda_invoker_cdecl_);
  if ( v15 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v13,
      v14);
  if ( v11 < 0 )
  {
    v7 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3C7,
           (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v11,
           (int)v9);
    goto LABEL_14;
  }
  *a4 = v9;
  return 0LL;
}
