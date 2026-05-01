/*
 * XREFs of ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180413280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005D480 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180091788 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180406DCC (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x18041A5EC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::SubscribeToServices(WindowEventDispatcher *this, struct IServiceProvider *a2)
{
  __int64 (*QueryService)(void); // rdi
  int v5; // eax
  CCriticalFailureHandler *v6; // rcx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v8; // eax
  CCriticalFailureHandler *v9; // rcx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v11; // rcx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v13; // rcx
  int v14; // eax
  CCriticalFailureHandler *v15; // rcx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v17; // rcx
  int v18; // ebx
  const char *v19; // r9
  __int64 result; // rax
  CCriticalFailureHandler *v21; // rcx
  int v22; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v24; // eax
  CCriticalFailureHandler *v25; // rcx
  int v26; // eax
  CCriticalFailureHandler *v27; // rcx
  __int64 *v28; // rax
  ConnectedStandbyHelper **v29; // rbx
  const char *v30; // r9
  CCriticalFailureHandler *v31; // rcx
  int v32; // ebx
  unsigned __int64 *v33; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v34; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v37; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v39; // [rsp+80h] [rbp+8h] BYREF
  __int64 v40; // [rsp+88h] [rbp+10h] BYREF
  __int64 v41; // [rsp+90h] [rbp+18h] BYREF

  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 24);
  try
  {
    v5 = QueryService();
    v39 = v5;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, &v39);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v5 = v39;
    }
    if ( v5 < 0 && v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        &v39,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x54u,
        v33,
        v35);
      v5 = v39;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x55,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        (int)v33);
    v7 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 25);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
           a2,
           &CLSID_ImmersivePlaybackManager,
           &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
           (char *)this + 200);
    v39 = v8;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, &v39);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v8 = v39;
    }
    if ( v8 < 0 && v8 != -2147024882 && v8 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        &v39,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x59u,
        v33,
        v35);
      v8 = v39;
    }
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        (int)v33);
    v10 = a2->lpVtbl->QueryService;
    v11 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
      a2,
      &SID_VirtualDesktopManager,
      &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
      (char *)this + 208);
    v12 = a2->lpVtbl->QueryService;
    v13 = *((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
            a2,
            &IID_IApplicationPositionPersistence,
            &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
            (char *)this + 216);
    v39 = v14;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v15, &v39);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v14 = v39;
    }
    if ( v14 < 0 && v14 != -2147024882 && v14 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v15,
        &v39,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x60u,
        v33,
        v35);
      v14 = v39;
    }
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x61,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14,
        (int)v33);
    v40 = 0LL;
    v16 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v40);
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v16)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            &v40);
    v39 = v18;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v17, &v39);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v18 = v39;
    }
    if ( v18 >= 0 )
      goto LABEL_35;
    if ( v18 != -2147024882 && v18 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v17,
        &v39,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x66u,
        v33,
        v35);
      v18 = v39;
    }
    if ( v18 >= 0 )
    {
LABEL_35:
      v22 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v40 + 32LL))(
              v40,
              ((unsigned __int64)this + 72) & -(__int64)(this != (WindowEventDispatcher *)128),
              (char *)this + 340);
      v39 = v22;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v21, &v39);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v22 = v39;
      }
      if ( v22 >= 0 )
        goto LABEL_43;
      if ( v22 != -2147024882 && v22 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v21,
          &v39,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          0x68u,
          v33,
          v35);
        v22 = v39;
      }
      if ( v22 >= 0 )
      {
LABEL_43:
        lpVtbl = a2->lpVtbl;
        v41 = 0LL;
        v24 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                a2,
                &SID_ImmersiveShellHookService,
                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                &v41);
        v39 = v24;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v25, &v39);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v24 = v39;
        }
        if ( v24 < 0 && v24 != -2147024882 && v24 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v25,
            &v39,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x73u,
            v33,
            v35);
          v24 = v39;
        }
        if ( v24 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x74,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v24,
            (int)v33);
        v34 = (unsigned __int64 *)((char *)this + 336);
        v26 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v41 + 24LL))(
                v41,
                &unk_18077C710,
                11LL,
                ((unsigned __int64)this - 48) & -(__int64)(this != (WindowEventDispatcher *)128));
        v39 = v26;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v27, &v39);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v26 = v39;
        }
        if ( v26 < 0 && v26 != -2147024882 && v26 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v27,
            &v39,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x8Cu,
            v34,
            v35);
          v26 = v39;
        }
        if ( v26 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x8D,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v26,
            (int)v34);
        try
        {
          v28 = std::make_shared<ConnectedStandbyHelper,>(&v36);
          v29 = (ConnectedStandbyHelper **)((char *)this + 224);
          std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 28, v28);
          if ( v37 )
            std::_Ref_count_base::_Decref(v37);
        }
        catch ( ... )
        {
          v39 = wil::details::in1diag3::Return_CaughtException(
                  retaddr,
                  (void *)0x93,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  v30);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
          return (unsigned int)v39;
        }
        v32 = ConnectedStandbyHelper::Initialize(
                *v29,
                (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 88) & -(__int64)(this != (WindowEventDispatcher *)128)));
        v39 = v32;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v31, &v39);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v32 = v39;
        }
        if ( v32 >= 0 )
          goto LABEL_68;
        if ( v32 != -2147024882 && v32 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v31,
            &v39,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x94u,
            v34,
            v35);
          v32 = v39;
        }
        if ( v32 >= 0 )
        {
LABEL_68:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x94,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v32);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
          result = (unsigned int)v32;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v22);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
        result = (unsigned int)v22;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v18);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
      result = (unsigned int)v18;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x98,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v19);
  }
  return result;
}
