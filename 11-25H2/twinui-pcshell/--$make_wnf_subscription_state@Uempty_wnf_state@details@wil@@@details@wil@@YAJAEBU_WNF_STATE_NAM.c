/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800BF6E4
 * Callers:
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x1800A194C (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ.c)
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800BF2E0 (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800BF630 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800BF680 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x180131F34 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x18014B3A4 (-SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801536AC (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x18023464C (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801966FC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CE330 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  __int64 v9; // r8
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  char v14; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v16; // [rsp+A0h] [rbp+40h] BYREF
  int v17; // [rsp+A8h] [rbp+48h] BYREF

  v16 = a3;
  *a4 = 0LL;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( !v7 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
    return v11;
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
  v9 = v16;
  if ( v16 == -1 )
  {
    v17 = 0;
    v11 = NtQueryWnfStateData(a1, 0LL, 0LL, &v16, 0LL, &v17) | 0x10000000;
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -805306333 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B8,
        (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)v11);
      goto LABEL_9;
    }
    v9 = v16;
  }
  v13 = 0LL;
  v14 = 1;
  v10 = RtlSubscribeWnfStateChangeNotification(
          &v13,
          *a1,
          v9,
          _lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_);
  if ( v14 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v8 + 1,
      v13);
  if ( v10 < 0 )
  {
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3C7,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v10,
            (int)v8);
LABEL_9:
    (**v8)(v8, 1LL);
    return v11;
  }
  *a4 = v8;
  return 0LL;
}
