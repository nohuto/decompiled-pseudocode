/*
 * XREFs of ??$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x180210688
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800F8858 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEB_N@Z@wistd@@@Z @ 0x180090A74 (--0-$wnf_subscription_state@_N@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEB_N@Z@wistd@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C5830 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802C6E38 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
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
  unsigned int v13; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = -1;
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
  v9 = NtQueryWnfStateData(&WNF_HOLO_USER_DISPLAY_CONTEXT, 0LL, 0LL, &v13);
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
            WNF_HOLO_USER_DISPLAY_CONTEXT,
            v8,
            _lambda_10c2d457696a47a750b06b77de2a577d_::_lambda_invoker_cdecl_);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(&v14);
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
