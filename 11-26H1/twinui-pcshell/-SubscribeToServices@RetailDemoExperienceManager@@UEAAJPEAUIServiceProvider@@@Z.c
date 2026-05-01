/*
 * XREFs of ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801CFAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvider@@@Z @ 0x1801CFE58 (--4-$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIServiceProvid.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_21d39ee1c2e0b9ed287f741a9113a432_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_21d39ee1c2e0b9ed287f741a9113a432_@@@Z @ 0x1802BF614 (--$Callback@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Interna_ea_1802BF614.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall RetailDemoExperienceManager::SubscribeToServices(
        RetailDemoExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // r15
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, char *); // r12
  char *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, HSTRING); // r12
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  __int64 v16; // rbx
  int v17; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r12
  __int64 v19; // rcx
  int v20; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v22; // eax
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, _QWORD, SID *, GUID *); // r12
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  const char *v28; // r9
  __int64 result; // rax
  int v30; // [rsp+20h] [rbp-A8h]
  int v31; // [rsp+20h] [rbp-A8h]
  int v32; // [rsp+20h] [rbp-A8h]
  __int64 v33; // [rsp+30h] [rbp-98h] BYREF
  __int128 v34; // [rsp+40h] [rbp-88h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+50h] [rbp-78h]
  __int128 v36; // [rsp+60h] [rbp-68h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-58h] BYREF
  HSTRING string; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v35 = v4;
  wil::com_ptr_t<IServiceProvider,wil::err_exception_policy>::operator=((char *)this + 176, a2);
  try
  {
    v5 = *((_QWORD *)this + 22);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v5 + 24LL);
    v7 = (char *)this + 184;
    v8 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v6(v5, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 184);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2DF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v30);
    *(_QWORD *)&v34 = RetailDemoExperienceManager::OnViewEvent;
    DWORD2(v34) = 0;
    v36 = v34;
    *(_QWORD *)&v34 = (char *)this - 48;
    v10 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_(
            &hstringHeader,
            &v34,
            &v36);
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_21d39ee1c2e0b9ed287f741a9113a432_>(
      &v34,
      v10);
    v11 = *(_QWORD *)v7;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, HSTRING))(**(_QWORD **)v7 + 48LL);
    string = 0LL;
    v13 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.RetailDemo", 0x2Bu, &hstringHeader, &string);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    v31 = (_DWORD)this + 400;
    v16 = v34;
    v17 = v12(v11, v34, 0LL, string);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2EC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v17,
        v31);
    QueryService = a2->lpVtbl->QueryService;
    v19 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 144);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2EF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v20,
        v31);
    lpVtbl = a2->lpVtbl;
    v33 = 0LL;
    v22 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v33);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v22,
        v31);
    v23 = v33;
    v24 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *))(*(_QWORD *)v33 + 72LL);
    v25 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = 0LL;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v32 = (_DWORD)this + 160;
    v26 = v24(v23, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2F4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v26,
        v32);
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(**((_QWORD **)this + 20) + 40LL))(
            *((_QWORD *)this + 20),
            10LL,
            ((unsigned __int64)this + 72) & -(__int64)(this != (RetailDemoExperienceManager *)48),
            (char *)this + 384);
    if ( v27 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2FB,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v27,
        v32);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x300,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v28);
  }
  return result;
}
