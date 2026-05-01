/*
 * XREFs of ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BFC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvider@@@Z @ 0x1801BFFA4 (--4-$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvid.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801BFFF8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall RetailDemoExperienceManager::SubscribeToServices(
        RetailDemoExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, char *); // r12
  __int64 v7; // rcx
  int v8; // eax
  _OWORD *v9; // rax
  _OWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _OWORD *, _QWORD, HSTRING); // r12
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r12
  __int64 v18; // rcx
  int v19; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v21; // eax
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, _QWORD, SID *, GUID *); // r12
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  const char *v27; // r9
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-88h]
  int v30; // [rsp+20h] [rbp-88h]
  int v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+30h] [rbp-78h] BYREF
  __int128 v33; // [rsp+38h] [rbp-70h]
  __int64 v34; // [rsp+48h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+50h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-50h] BYREF
  HSTRING string; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v35 = v4;
  wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=((char *)this + 176, a2);
  try
  {
    v5 = *((_QWORD *)this + 22);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v5 + 24LL);
    v7 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v6(v5, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 184);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2DF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v29);
    *(_QWORD *)&v33 = (char *)this - 48;
    *((_QWORD *)&v33 + 1) = RetailDemoExperienceManager::OnViewEvent;
    LODWORD(v34) = 0;
    HIDWORD(v34) = (unsigned __int64)RetailDemoExperienceManager::OnViewEvent >> 32;
    v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>(v9);
      v10[1] = v33;
      *((_QWORD *)v10 + 4) = v34;
      *(_QWORD *)v10 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_25d31112a6ede4e9e98db34fc3b6b635_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::`vftable';
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)&v33 = v10;
    v11 = *((_QWORD *)this + 23);
    v12 = *(__int64 (__fastcall **)(__int64, _OWORD *, _QWORD, HSTRING))(*(_QWORD *)v11 + 48LL);
    string = 0LL;
    v13 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.RetailDemo", 0x2Bu, &hstringHeader, &string);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    v30 = (_DWORD)this + 400;
    v16 = v12(v11, v10, 0LL, string);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2EC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v16,
        v30);
    QueryService = a2->lpVtbl->QueryService;
    v18 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 144);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2EF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v19,
        v30);
    lpVtbl = a2->lpVtbl;
    v32 = 0LL;
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v32);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v21,
        v30);
    v22 = v32;
    v23 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *))(*(_QWORD *)v32 + 72LL);
    v24 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v31 = (_DWORD)this + 160;
    v25 = v23(v22, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v25,
        v31);
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 20) + 40LL))(
            *((_QWORD *)this + 20),
            10LL,
            ((unsigned __int64)this + 72) & -(__int64)(this != (RetailDemoExperienceManager *)48),
            (char *)this + 384);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2FB,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v26,
        v31);
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v10 )
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x300,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v27);
  }
  return result;
}
