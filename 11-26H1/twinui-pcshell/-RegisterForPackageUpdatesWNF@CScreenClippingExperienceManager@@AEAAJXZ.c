/*
 * XREFs of ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801BC82C
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1800D8284 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x180052D9C (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800F9150.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$AsWeak@VCScreenClippingExperienceManager@@@WRL@Microsoft@@YAJPEAVCScreenClippingExperienceManager@@PEAVWeakRef@01@@Z @ 0x1801BC9A0 (--$AsWeak@VCScreenClippingExperienceManager@@@WRL@Microsoft@@YAJPEAVCScreenClippingExperienceMan.c)
 *     wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_ @ 0x1802BF4F4 (wistd--__function--__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(un_ea_1802BF4F4.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_ @ 0x180301B20 (_lambda_56f82e2d72bc142b92699b1566ad23a5_--_lambda_56f82e2d72bc142b92699b1566ad23a5_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForPackageUpdatesWNF(wil::details **this)
{
  const struct _tlgProvider_t *v2; // rax
  unsigned int v3; // ebx
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  wil::details **wnf_subscription; // rax
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  __int64 v14; // [rsp+28h] [rbp-49h] BYREF
  wil::details *v15; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v18[104]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807F8A90,
      0LL);
  v3 = 0;
  v14 = 0LL;
  v15 = (wil::details *)&v14;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v15);
  v5 = Microsoft::WRL::AsWeak<CScreenClippingExperienceManager>(this, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = lambda_56f82e2d72bc142b92699b1566ad23a5_::_lambda_56f82e2d72bc142b92699b1566ad23a5_(v16, this, &v14);
    v19 = 0LL;
    v19 = wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____(
            v18,
            v9,
            v10,
            v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v11 + 8));
    wnf_subscription = (wil::details **)wil::make_wnf_subscription_nothrow<unsigned long>(
                                          &v15,
                                          (__int64)&WNF_SHEL_PACKAGE_SERVICING_STATUS,
                                          (__int64)v17);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      this + 41,
      wnf_subscription);
    if ( v15 )
      wil::details::delete_wnf_subscription_state(v15, v13);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v17);
    if ( !this[41] )
    {
      v3 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)0x80004005LL);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    return v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x336,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
}
