/*
 * XREFs of ??$make_wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@01@@Z @ 0x1801F35C4
 * Callers:
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1802369B0 (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801966FC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CE330 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<_SEB_EVENT_HEADER>(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v11; // ebx
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v18; // [rsp+90h] [rbp+30h] BYREF

  v18 = a3;
  v13 = 0;
  *a4 = 0LL;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
    return v10;
  }
  v7[1] = 0LL;
  *v7 = &wil::details::wnf_subscription_state<int>::`vftable';
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
  v9 = v13;
  if ( v13 != -1 )
    goto LABEL_11;
  v18 = 0;
  v10 = NtQueryWnfStateData(a1, 0LL, 0LL, &v13, 0LL, &v18) | 0x10000000;
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -805306333 )
  {
    v9 = v13;
LABEL_11:
    v14 = v8 + 1;
    v15 = 0LL;
    v16 = 1;
    v11 = RtlSubscribeWnfStateChangeNotification(
            &v15,
            *a1,
            v9,
            _lambda_3d7cde0590ac75205a70a489945adb21_::_lambda_invoker_cdecl_);
    if ( v16 )
      wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
        v14,
        v15);
    if ( v11 >= 0 )
    {
      *a4 = v8;
      return 0LL;
    }
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3C7,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v11,
            (int)v8);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
    (const char *)v10);
LABEL_9:
  (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
  return v10;
}
