/*
 * XREFs of ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803EE20C
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803E9770 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x180129DB4 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGIResource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803EE02C (--$As@UID3D11Texture2D@@@-$ComPtr@UIDXGIResource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _lambda_1b97277dfd06d1a10fbbec949ac204fa_::_lambda_1b97277dfd06d1a10fbbec949ac204fa_ @ 0x1803EE07C (_lambda_1b97277dfd06d1a10fbbec949ac204fa_--_lambda_1b97277dfd06d1a10fbbec949ac204fa_.c)
 *     wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___ @ 0x1803EE0C0 (wil--details--ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___--_ScopeExitFn__lambda_1b97.c)
 *     ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x1803EECA4 (-InitializeDuplication@DDAScreenCapture@@AEAAJXZ.c)
 *     ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x1803EF228 (-TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(
        DDAScreenCapture *this,
        struct IWICImagingFactory *a2,
        struct IWICBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 *v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct IWICBitmapSource *v36; // rax
  int v37; // eax
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  struct IWICBitmapSource *v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  struct IDXGIResource *v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46[2]; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+88h] [rbp-78h] BYREF
  __int64 v48[2]; // [rsp+90h] [rbp-70h] BYREF
  char v49; // [rsp+A0h] [rbp-60h]
  int v50[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v51; // [rsp+B8h] [rbp-48h]
  char v52; // [rsp+C0h] [rbp-40h]
  _OWORD v53[3]; // [rsp+C8h] [rbp-38h] BYREF
  GUID v54; // [rsp+F8h] [rbp-8h] BYREF
  GUID v55; // [rsp+108h] [rbp+8h] BYREF
  DXGI_OUTDUPL_FRAME_INFO v56; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  *a3 = 0LL;
  v45 = 0LL;
  memset(&v56, 0, sizeof(v56));
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 126LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_65;
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v45);
  v6 = DDAScreenCapture::TryAcquireFrame(this, &v56, &v45);
  v7 = v6;
  if ( v6 == -2005270490 )
  {
    v6 = DDAScreenCapture::InitializeDuplication(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 132LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v45);
    v6 = DDAScreenCapture::TryAcquireFrame(this, &v56, &v45);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 133LL;
      goto LABEL_6;
    }
  }
  else if ( v6 < 0 )
  {
    v8 = 137LL;
    goto LABEL_6;
  }
  v9 = (_QWORD *)*winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                    v46,
                    (__int64)this);
  v51 = v9;
  v52 = 1;
  if ( !v56.AccumulatedFrames )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v10);
    v7 = -2147483638;
    goto LABEL_65;
  }
  v40 = 0LL;
  v11 = Microsoft::WRL::ComPtr<IDXGIResource>::As<ID3D11Texture2D>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v45,
          &v40);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v13);
LABEL_18:
    v7 = v12;
    goto LABEL_65;
  }
  memset(v53, 0, 44);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v40 + 80LL))(v40, v53);
  v39 = 0LL;
  *(_QWORD *)((char *)&v53[1] + 12) = 3LL;
  *(_QWORD *)((char *)&v53[2] + 4) = 0x20000LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, _QWORD, __int64 *))(**((_QWORD **)this + 13) + 40LL))(
          *((_QWORD *)this + 13),
          v53,
          0LL,
          &v39);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v15);
    goto LABEL_18;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 14) + 376LL))(
    *((_QWORD *)this + 14),
    v39,
    v40);
  *(_OWORD *)v50 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, int *))(**((_QWORD **)this + 14) + 112LL))(
          *((_QWORD *)this + 14),
          v39,
          0LL,
          1LL,
          0,
          v50);
  v12 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v17);
    goto LABEL_18;
  }
  v18 = lambda_1b97277dfd06d1a10fbbec949ac204fa_::_lambda_1b97277dfd06d1a10fbbec949ac204fa_(v46, &v39, (__int64)this);
  v48[0] = 0LL;
  if ( v48 != v18 )
  {
    v48[0] = *v18;
    *v18 = 0LL;
  }
  v48[1] = v18[1];
  v49 = 1;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v46);
  v41 = 0LL;
  v54 = GUID_WICPixelFormat32bppBGRA;
  v19 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, _QWORD, _QWORD, GUID *, int, int, _QWORD, __int64 *))a2->lpVtbl->CreateBitmapFromMemory)(
          a2,
          LODWORD(v53[0]),
          DWORD1(v53[0]),
          &v54,
          v50[2],
          v50[2] * DWORD1(v53[0]),
          *(_QWORD *)v50,
          &v41);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v48);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v21);
LABEL_32:
    v7 = v20;
    goto LABEL_65;
  }
  v44 = 0LL;
  if ( DWORD1(v53[0]) <= LODWORD(v53[0]) )
  {
    v28 = v41;
    v46[0] = v41;
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(v46);
    v46[0] = 0LL;
    v44 = v28;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v46);
  }
  else
  {
    v42 = 0LL;
    v22 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))a2->lpVtbl->CreateBitmapFlipRotator)(
            a2,
            &v42);
    v20 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v22);
      v23 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
      wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v48);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
      v24 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v24);
      goto LABEL_32;
    }
    v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v42 + 64LL))(v42, v41, 3LL);
    v20 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v25);
      v26 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
      wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v48);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
      v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v27);
      goto LABEL_32;
    }
    v28 = v42;
    v46[0] = v42;
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(v46);
    v46[0] = 0LL;
    v44 = v28;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v46);
    v29 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  v55 = GUID_WICPixelFormat24bppBGR;
  v43 = 0LL;
  v30 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a2->lpVtbl->CreateFormatConverter)(
          a2,
          &v43);
  v12 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v30);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v48);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v31);
    goto LABEL_18;
  }
  v47 = 0;
  v32 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, GUID *, GUID *, int *))v43->lpVtbl[1].AddRef)(
          v43,
          &v54,
          &v55,
          &v47);
  v12 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v32);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v48);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v33 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v33);
    goto LABEL_18;
  }
  v34 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))v43->lpVtbl[1].QueryInterface)(
          v43,
          v28,
          &v55,
          0LL,
          0LL,
          0LL,
          0);
  v20 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v34);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
    wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v48);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
    v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
    if ( v35 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v35);
    goto LABEL_32;
  }
  v36 = v43;
  v43 = 0LL;
  *a3 = v36;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v43);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v44);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v41);
  wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(v48);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v39);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
  v37 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 112LL))(*v9);
  if ( v37 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8E,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v37);
  v7 = 0;
LABEL_65:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v45);
  return v7;
}
