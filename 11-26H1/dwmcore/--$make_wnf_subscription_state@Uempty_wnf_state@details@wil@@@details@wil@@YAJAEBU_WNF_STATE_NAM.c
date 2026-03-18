/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180162DB8
 * Callers:
 *     ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ @ 0x180161660 (-RegisterMonitorPowerNotification@CComposition@@IEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x180162EF8 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180163B90 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18022976C (--0-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@QEAA@$$QEAV-$function@$$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  void *v6; // rax
  unsigned int v7; // ebx
  void (__fastcall ***v9)(_QWORD, __int64); // rdi
  __int64 v10; // r8
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD); // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v18; // [rsp+80h] [rbp+20h] BYREF

  v18 = a3;
  v13 = 0;
  *a4 = 0LL;
  v6 = MIDL_user_allocate(0x88uLL);
  if ( !v6
    || (v9 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::wnf_subscription_state<wil::details::empty_wnf_state>(
                                                       v6,
                                                       a2)) == 0LL )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)0x8007000ELL);
    return v7;
  }
  v10 = v13;
  if ( v13 == -1 )
  {
    v18 = 0;
    v12 = NtQueryWnfStateData(&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, 0LL, 0LL, &v13, 0LL, &v18);
    v7 = v12 | 0x10000000;
    if ( v12 < 0 && v7 != -805306333 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B8,
        (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
        (const char *)v7);
      goto LABEL_10;
    }
    v10 = v13;
  }
  v14 = v9 + 1;
  v15 = 0LL;
  v16 = 1;
  v11 = RtlSubscribeWnfStateChangeNotification(
          &v15,
          WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
          v10,
          `wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
  if ( v16 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v14,
      v15);
  if ( v11 < 0 )
  {
    v7 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3C7,
           (unsigned int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
           (const char *)(unsigned int)v11,
           (int)v9);
LABEL_10:
    (**v9)(v9, 1LL);
    return v7;
  }
  *a4 = v9;
  return 0LL;
}
