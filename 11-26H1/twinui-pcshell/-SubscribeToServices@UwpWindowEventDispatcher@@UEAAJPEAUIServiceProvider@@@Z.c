/*
 * XREFs of ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180241F20
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802C78AC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180411AA8 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x18042529C (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UwpWindowEventDispatcher::SubscribeToServices(
        UwpWindowEventDispatcher *this,
        struct IServiceProvider *a2)
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
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v17; // eax
  CCriticalFailureHandler *v18; // rcx
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v20; // rcx
  int v21; // ebx
  const char *v22; // r9
  __int64 result; // rax
  CCriticalFailureHandler *v24; // rcx
  int v25; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v27; // eax
  CCriticalFailureHandler *v28; // rcx
  int v29; // eax
  CCriticalFailureHandler *v30; // rcx
  __int64 *v31; // rax
  CCriticalFailureHandler *v32; // rcx
  int v33; // ebx
  const char *v34; // r9
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned __int64 *v40; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v41; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v42; // [rsp+28h] [rbp-50h]
  _BYTE v43[8]; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v44; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v46; // [rsp+80h] [rbp+8h] BYREF
  __int64 v47; // [rsp+88h] [rbp+10h] BYREF
  __int64 v48; // [rsp+90h] [rbp+18h] BYREF

  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 25);
  try
  {
    v5 = QueryService();
    v46 = v5;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, &v46);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v5 = v46;
    }
    if ( v5 < 0 )
    {
      if ( v5 != -2147024882 && v5 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v6,
          &v46,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x4Fu,
          v40,
          v42);
        v5 = v46;
      }
      if ( v5 < 0 )
      {
        v34 = (const char *)(unsigned int)wil::verify_hresult<long>((unsigned int)v5);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4F,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          v34,
          (int)v40);
      }
    }
    v7 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 26);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
           a2,
           &CLSID_ImmersivePlaybackManager,
           &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
           (char *)this + 208);
    v46 = v8;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, &v46);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v8 = v46;
    }
    if ( v8 < 0 )
    {
      if ( v8 != -2147024882 && v8 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v9,
          &v46,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x52u,
          v40,
          v42);
        v8 = v46;
      }
      if ( v8 < 0 )
      {
        v35 = wil::verify_hresult<long>((unsigned int)v8);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x52,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v35,
          (int)v40);
      }
    }
    v10 = a2->lpVtbl->QueryService;
    v11 = *((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
      a2,
      &SID_VirtualDesktopManager,
      &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
      (char *)this + 216);
    v12 = a2->lpVtbl->QueryService;
    v13 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v12)(
            a2,
            &IID_IApplicationPositionPersistence,
            &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
            (char *)this + 224);
    v46 = v14;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v15, &v46);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v14 = v46;
    }
    if ( v14 < 0 )
    {
      if ( v14 != -2147024882 && v14 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v15,
          &v46,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x57u,
          v40,
          v42);
        v14 = v46;
      }
      if ( v14 < 0 )
      {
        v36 = wil::verify_hresult<long>((unsigned int)v14);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x57,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v36,
          (int)v40);
      }
    }
    v16 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 29);
    v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
            a2,
            &IID_IAppViewManager,
            &GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086,
            (char *)this + 232);
    v46 = v17;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v18, &v46);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v17 = v46;
    }
    if ( v17 < 0 )
    {
      if ( v17 != -2147024882 && v17 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v18,
          &v46,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x58u,
          v40,
          v42);
        v17 = v46;
      }
      if ( v17 < 0 )
      {
        v37 = wil::verify_hresult<long>((unsigned int)v17);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v37,
          (int)v40);
      }
    }
    v47 = 0LL;
    v19 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v47);
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v19)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            &v47);
    v46 = v21;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v20, &v46);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v21 = v46;
    }
    if ( v21 >= 0 )
      goto LABEL_42;
    if ( v21 != -2147024882 && v21 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v20,
        &v46,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        0x5Du,
        v40,
        v42);
      v21 = v46;
    }
    if ( v21 >= 0 )
    {
LABEL_42:
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v47 + 32LL))(
              v47,
              ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 128) >> 64),
              (char *)this + 356);
      v46 = v25;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v24, &v46);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v25 = v46;
      }
      if ( v25 >= 0 )
        goto LABEL_50;
      if ( v25 != -2147024882 && v25 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v24,
          &v46,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x5Fu,
          v40,
          v42);
        v25 = v46;
      }
      if ( v25 >= 0 )
      {
LABEL_50:
        lpVtbl = a2->lpVtbl;
        v48 = 0LL;
        v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                a2,
                &SID_ImmersiveShellHookService,
                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                &v48);
        v46 = v27;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v28, &v46);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v27 = v46;
        }
        if ( v27 < 0 )
        {
          if ( v27 != -2147024882 && v27 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v28,
              &v46,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              0x69u,
              v40,
              v42);
            v27 = v46;
          }
          if ( v27 < 0 )
          {
            v38 = wil::verify_hresult<long>((unsigned int)v27);
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x69,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)v38,
              (int)v40);
          }
        }
        v41 = (unsigned __int64 *)((char *)this + 352);
        v29 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v48 + 24LL))(
                v48,
                &unk_1807A7D70,
                10LL,
                ((unsigned __int64)this - 48) & -(__int64)(this != (UwpWindowEventDispatcher *)128));
        v46 = v29;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v30, &v46);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v29 = v46;
        }
        if ( v29 < 0 )
        {
          if ( v29 != -2147024882 && v29 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v30,
              &v46,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              0x7Bu,
              v41,
              v42);
            v29 = v46;
          }
          if ( v29 < 0 )
          {
            v39 = wil::verify_hresult<long>((unsigned int)v29);
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x7B,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)v39,
              (int)v41);
          }
        }
        v31 = (__int64 *)std::make_shared<ConnectedStandbyHelper,>(v43);
        std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 30, v31);
        if ( v44 )
          std::_Ref_count_base::_Decref(v44);
        v33 = ConnectedStandbyHelper::Initialize(
                *((ConnectedStandbyHelper **)this + 30),
                (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 88) & -(__int64)(this != (UwpWindowEventDispatcher *)128)));
        v46 = v33;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v32, &v46);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v33 = v46;
        }
        if ( v33 >= 0 )
          goto LABEL_74;
        if ( v33 != -2147024882 && v33 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v32,
            &v46,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            0x7Eu,
            v41,
            v42);
          v33 = v46;
        }
        if ( v33 >= 0 )
        {
LABEL_74:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7E,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v33);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
          result = (unsigned int)v33;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5F,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v25);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
        result = (unsigned int)v25;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v21);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
      result = (unsigned int)v21;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x82,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v22);
  }
  return result;
}
