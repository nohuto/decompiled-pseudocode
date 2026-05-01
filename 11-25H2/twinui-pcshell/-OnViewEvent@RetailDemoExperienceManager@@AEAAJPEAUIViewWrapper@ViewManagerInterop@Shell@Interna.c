/*
 * XREFs of ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180395450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1800E35CC (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_b7fc3b8724fe379c1b1e17e559a88230_@@$0?0PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_b7fc3b8724fe379c1b1e17e559a88230_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_b7fc3b8724fe379c1b1e17e559a88230_@@$0?0PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_b7fc3b8724fe379c1b1e17e559a88230_@@@Z @ 0x1803690AC (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x18039651C (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18039678C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall RetailDemoExperienceManager::OnViewEvent(
        RetailDemoExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, char *); // rbx
  __int64 **v9; // r15
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  LONG WindowLongW; // eax
  LONG v25; // eax
  int v26; // eax
  volatile signed __int32 **v27; // rax
  __int64 v28; // rbx
  volatile signed __int32 *v29; // rcx
  int v30; // eax
  int v31; // eax
  const char *v32; // r9
  __int64 result; // rax
  int v34[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+28h] [rbp-70h] BYREF
  volatile signed __int32 *v36; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int32 *v37; // [rsp+38h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+40h] [rbp-58h] BYREF
  int v39; // [rsp+4Ch] [rbp-4Ch]
  _QWORD v40[2]; // [rsp+50h] [rbp-48h] BYREF
  int v41; // [rsp+60h] [rbp-38h]
  int v42; // [rsp+64h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 *v44; // [rsp+B0h] [rbp+18h] BYREF
  HWND hWnd; // [rsp+B8h] [rbp+20h] BYREF

  wil::EnterCriticalSection(&v38, (struct _RTL_CRITICAL_SECTION *)((char *)this + 464));
  try
  {
    v6 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x280,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v34[0]);
    v7 = *((_QWORD *)this + 24);
    v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL);
    v9 = (__int64 **)((char *)this + 200);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 25);
    v10 = v8(v7, (char *)this + 200);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x284,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v10,
        v34[0]);
    v44 = 0LL;
    v11 = *v9;
    v12 = **v9;
    v44 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v12 + 32))(v11, &v44);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x288,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        v34[0]);
    v14 = (_QWORD *)((char *)this + 248);
    if ( *((_QWORD *)this + 34) > 7uLL )
      v14 = (_QWORD *)*v14;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(*v44 + 72))(v44, v14, 1LL);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x28B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v15,
        v34[0]);
    *(_QWORD *)v34 = 0LL;
    v16 = *v44;
    *(_QWORD *)v34 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, int *))(v16 + 144))(v44, v34);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x28F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v17,
        v34[0]);
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)v34 + 48LL))(*(_QWORD *)v34, 1LL, 1LL);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x290,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v18,
        v34[0]);
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v34 + 32LL))(*(_QWORD *)v34, 0LL);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x291,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v19,
        v34[0]);
    v20 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v9 + 104))(*v9, *((_QWORD *)this + 30));
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x295,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v21,
        v34[0]);
    v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v9 + 128))(*v9, 0LL);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x298,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v22,
        v34[0]);
    hWnd = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, HWND *))(*v44 + 24))(v44, &hWnd);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x29C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v23,
        v34[0]);
    WindowLongW = GetWindowLongW(hWnd, -16);
    SetWindowLongW(hWnd, -16, WindowLongW & 0xFF30FFFF);
    v25 = GetWindowLongW(hWnd, -20);
    SetWindowLongW(hWnd, -20, v25 & 0xFFFFFEFF);
    v35 = 0LL;
    v26 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 30))(
            *((_QWORD *)this + 30),
            &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
            &v35);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v26,
        v34[0]);
    v40[0] = this;
    v40[1] = RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged;
    v41 = 0;
    v42 = v39;
    v27 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_b7fc3b8724fe379c1b1e17e559a88230_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_b7fc3b8724fe379c1b1e17e559a88230_>(
            &v36,
            (__int64)v40);
    v28 = (__int64)*v27;
    v37 = *v27;
    *v27 = 0LL;
    v29 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v29);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v35 + 80LL))(v35, v28, (char *)this + 440);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2AC,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v30,
        v34[0]);
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 344LL))(*((_QWORD *)this + 30), 4LL);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2AF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v31,
        v34[0]);
    RetailDemoExperienceManager::_Show(this);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v35);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v34);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C3,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v32);
  }
  return result;
}
