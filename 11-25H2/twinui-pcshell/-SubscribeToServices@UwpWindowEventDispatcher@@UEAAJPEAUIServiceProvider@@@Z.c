/*
 * XREFs of ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18024D950
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
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1802D078C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180406DCC (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@@@details@wil@@QEAA_NXZ @ 0x18041A360 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang@.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x18041A5EC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  char IsEnabled; // al
  unsigned __int64 v30; // r10
  bool v31; // zf
  __int64 (__fastcall *v32)(__int64, void *, __int64, unsigned __int64); // rax
  int v33; // eax
  CCriticalFailureHandler *v34; // rcx
  int v35; // eax
  CCriticalFailureHandler *v36; // rcx
  __int64 *v37; // rax
  CCriticalFailureHandler *v38; // rcx
  int v39; // ebx
  const char *v40; // r9
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned __int64 *v47; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v48; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v49; // [rsp+28h] [rbp-40h]
  _BYTE v50[8]; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v51; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v53; // [rsp+70h] [rbp+8h] BYREF
  __int64 v54; // [rsp+78h] [rbp+10h] BYREF
  __int64 v55; // [rsp+80h] [rbp+18h] BYREF

  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 25);
  try
  {
    v5 = QueryService();
    v53 = v5;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, &v53);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v5 = v53;
    }
    if ( v5 < 0 )
    {
      if ( v5 != -2147024882 && v5 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v6,
          &v53,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x4Fu,
          v47,
          v49);
        v5 = v53;
      }
      if ( v5 < 0 )
      {
        v40 = (const char *)(unsigned int)wil::verify_hresult<long>((unsigned int)v5);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4F,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          v40,
          (int)v47);
      }
    }
    v7 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 26);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
           a2,
           &CLSID_ImmersivePlaybackManager,
           &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
           (char *)this + 208);
    v53 = v8;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, &v53);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v8 = v53;
    }
    if ( v8 < 0 )
    {
      if ( v8 != -2147024882 && v8 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v9,
          &v53,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x52u,
          v47,
          v49);
        v8 = v53;
      }
      if ( v8 < 0 )
      {
        v41 = wil::verify_hresult<long>((unsigned int)v8);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x52,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v41,
          (int)v47);
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
    v53 = v14;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v15, &v53);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v14 = v53;
    }
    if ( v14 < 0 )
    {
      if ( v14 != -2147024882 && v14 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v15,
          &v53,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x57u,
          v47,
          v49);
        v14 = v53;
      }
      if ( v14 < 0 )
      {
        v42 = wil::verify_hresult<long>((unsigned int)v14);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x57,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v42,
          (int)v47);
      }
    }
    v16 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 29);
    v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
            a2,
            &IID_IAppViewManager,
            &GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086,
            (char *)this + 232);
    v53 = v17;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v18, &v53);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v17 = v53;
    }
    if ( v17 < 0 )
    {
      if ( v17 != -2147024882 && v17 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v18,
          &v53,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x58u,
          v47,
          v49);
        v17 = v53;
      }
      if ( v17 < 0 )
      {
        v43 = wil::verify_hresult<long>((unsigned int)v17);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v43,
          (int)v47);
      }
    }
    v54 = 0LL;
    v19 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v54);
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v19)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            &v54);
    v53 = v21;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v20, &v53);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v21 = v53;
    }
    if ( v21 >= 0 )
      goto LABEL_42;
    if ( v21 != -2147024882 && v21 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v20,
        &v53,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        0x5Du,
        v47,
        v49);
      v21 = v53;
    }
    if ( v21 >= 0 )
    {
LABEL_42:
      v25 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v54 + 32LL))(
              v54,
              ((unsigned __int64)this + 72) & -(__int64)(this != (UwpWindowEventDispatcher *)128),
              (char *)this + 356);
      v53 = v25;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v24, &v53);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v25 = v53;
      }
      if ( v25 >= 0 )
        goto LABEL_50;
      if ( v25 != -2147024882 && v25 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v24,
          &v53,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x5Fu,
          v47,
          v49);
        v25 = v53;
      }
      if ( v25 >= 0 )
      {
LABEL_50:
        lpVtbl = a2->lpVtbl;
        v55 = 0LL;
        v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                a2,
                &SID_ImmersiveShellHookService,
                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                &v55);
        v53 = v27;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v28, &v53);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v27 = v53;
        }
        if ( v27 < 0 )
        {
          if ( v27 != -2147024882 && v27 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v28,
              &v53,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              0x69u,
              v47,
              v49);
            v27 = v53;
          }
          if ( v27 < 0 )
          {
            v44 = wil::verify_hresult<long>((unsigned int)v27);
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x69,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)v44,
              (int)v47);
          }
        }
        IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UwpPositionChangedHang>::GetImpl'::`2'::impl);
        v30 = (unsigned __int64)this - 48;
        v48 = (unsigned __int64 *)((char *)this + 352);
        v31 = IsEnabled == 0;
        v32 = *(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v55 + 24LL);
        if ( v31 )
        {
          v35 = v32(v55, &unk_18077C710, 11LL, v30 & -(__int64)(this != (UwpWindowEventDispatcher *)128));
          v53 = v35;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v36, &v53);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            v35 = v53;
          }
          if ( v35 < 0 )
          {
            if ( v35 != -2147024882 && v35 != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v36,
                &v53,
                L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                0x92u,
                v48,
                v49);
              v35 = v53;
            }
            if ( v35 < 0 )
            {
              v46 = wil::verify_hresult<long>((unsigned int)v35);
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x92,
                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)v46,
                (int)v48);
            }
          }
        }
        else
        {
          v33 = v32(v55, &unk_18077C820, 10LL, v30 & -(__int64)(this != (UwpWindowEventDispatcher *)128));
          v53 = v33;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v34, &v53);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            v33 = v53;
          }
          if ( v33 < 0 )
          {
            if ( v33 != -2147024882 && v33 != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v34,
                &v53,
                L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                0x7Du,
                v48,
                v49);
              v33 = v53;
            }
            if ( v33 < 0 )
            {
              v45 = wil::verify_hresult<long>((unsigned int)v33);
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x7D,
                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)v45,
                (int)v48);
            }
          }
        }
        v37 = (__int64 *)std::make_shared<ConnectedStandbyHelper,>(v50);
        std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 30, v37);
        if ( v51 )
          std::_Ref_count_base::_Decref(v51);
        v39 = ConnectedStandbyHelper::Initialize(
                *((ConnectedStandbyHelper **)this + 30),
                (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 88) & -(__int64)(this != (UwpWindowEventDispatcher *)128)));
        v53 = v39;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v38, &v53);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v39 = v53;
        }
        if ( v39 >= 0 )
          goto LABEL_83;
        if ( v39 != -2147024882 && v39 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v38,
            &v53,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            0x96u,
            v48,
            v49);
          v39 = v53;
        }
        if ( v39 >= 0 )
        {
LABEL_83:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x96,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v39);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
          result = (unsigned int)v39;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5F,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v25);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
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
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v54);
      result = (unsigned int)v21;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v22);
  }
  return result;
}
