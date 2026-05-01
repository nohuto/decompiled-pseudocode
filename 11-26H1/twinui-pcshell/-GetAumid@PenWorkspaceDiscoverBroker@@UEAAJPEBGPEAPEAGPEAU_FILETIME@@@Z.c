/*
 * XREFs of ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1803E80B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803E70A0 (--$GetActivationFactory@V-$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803E7508 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803E763C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAU_FILETIME@@@Z @ 0x1803E87C8 (-GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInterna.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180679928 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall PenWorkspaceDiscoverBroker::GetAumid(
        PenWorkspaceDiscoverBroker *this,
        char *a2,
        unsigned __int16 **a3,
        struct _FILETIME *a4)
{
  int IsShellExperience; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, __int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v12; // eax
  int v13; // edx
  char *v14; // r8
  __int64 v15; // rdx
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v21; // eax
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64, __int64, __int64 *); // rdi
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64 *); // rdi
  int v30; // eax
  __int64 v31; // rdx
  unsigned int i; // esi
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **); // rdi
  int v35; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v36; // rbx
  __int64 (__fastcall *v37)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *); // rdi
  int v38; // eax
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64, HSTRING *); // rdi
  int v41; // eax
  PCWSTR StringRawBuffer; // rax
  char *v43; // r8
  int v44; // edx
  int v45; // ecx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v46; // rbx
  __int64 (__fastcall *v47)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v48; // eax
  int (__fastcall ***v49)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v50)(_QWORD, GUID *, __int64 *); // rdi
  int InstallTime; // eax
  __int64 v52; // rbx
  __int64 (__fastcall *v53)(__int64, HSTRING *); // rdi
  int v54; // eax
  PCWSTR v55; // rax
  int v56; // eax
  unsigned __int16 *Reserved1; // rax
  int (__fastcall ***v59)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-69h] BYREF
  __int64 v60; // [rsp+28h] [rbp-61h] BYREF
  int (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-59h] BYREF
  HSTRING string; // [rsp+38h] [rbp-51h] BYREF
  __int64 v63; // [rsp+40h] [rbp-49h] BYREF
  __int64 v64; // [rsp+48h] [rbp-41h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v65; // [rsp+50h] [rbp-39h] BYREF
  __int64 v66; // [rsp+58h] [rbp-31h] BYREF
  HSTRING v67; // [rsp+60h] [rbp-29h] BYREF
  int (__fastcall ***v68)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-21h] BYREF
  __int64 v69; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v70; // [rsp+78h] [rbp-11h] BYREF
  __int64 v71; // [rsp+80h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-1h] BYREF
  __int64 v73; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *a3 = 0LL;
  *a4 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v8 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v71 = 0LL;
    v73 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManager",
      0x35u,
      0x34u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManagerStatics>>(
           v73,
           &v71);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v9);
LABEL_62:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v71);
      return v8;
    }
    v59 = 0LL;
    v10 = v71;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v71 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v59);
    v12 = v11(v10, 33LL, 3LL, &v59);
    v8 = v12;
    if ( v12 < 0 )
    {
      v15 = 68LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v12);
LABEL_8:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v59);
      goto LABEL_62;
    }
    v12 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>>(
            v59,
            v13,
            v14);
    v8 = v12;
    if ( v12 < 0 )
    {
      v15 = 70LL;
      goto LABEL_7;
    }
    v60 = 0LL;
    v16 = v59;
    v17 = (*v59)[8];
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v60);
    v18 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v17)(v16, &v60);
    v8 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v18);
LABEL_13:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v60);
      goto LABEL_8;
    }
    v61 = 0LL;
    v19 = v60;
    v20 = *(__int64 (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v60 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
    v21 = v20(v19, &v61);
    v8 = v21;
    if ( v21 >= 0 )
    {
      v21 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
              v61,
              v22,
              v23);
      v8 = v21;
      if ( v21 >= 0 )
      {
        v64 = 0LL;
        v25 = v60;
        v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v60 + 56LL);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
        v73 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AllApps", 8u, 7u);
        v27 = v26(v25, 1LL, v73, &v64);
        v8 = v27;
        if ( v27 >= 0 )
        {
          v63 = 0LL;
          v28 = v64;
          v29 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v64 + 56LL);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v63);
          v30 = v29(v28, &v63);
          v8 = v30;
          if ( v30 >= 0 )
          {
            v70 = 0;
            v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v63 + 56LL))(v63, &v70);
            v8 = v30;
            if ( v30 >= 0 )
            {
              for ( i = 0; i < v70; ++i )
              {
                v65 = 0LL;
                v33 = v63;
                v34 = *(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v63 + 48LL);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v65);
                v35 = v34(v33, i, &v65);
                v8 = v35;
                if ( v35 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x5B,
                    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                    (const char *)(unsigned int)v35);
                  goto LABEL_60;
                }
                v66 = 0LL;
                v36 = v65;
                v37 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)v65 + 104LL);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v66);
                v38 = v37(v36, &v66);
                v8 = v38;
                if ( v38 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x5E,
                    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                    (const char *)(unsigned int)v38);
                  goto LABEL_58;
                }
                v39 = v66;
                if ( v66 )
                {
                  string = 0LL;
                  v40 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v66 + 48LL);
                  WindowsDeleteString(0LL);
                  string = 0LL;
                  v41 = v40(v39, &string);
                  v8 = v41;
                  if ( v41 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x63,
                      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                      (const char *)(unsigned int)v41);
                    goto LABEL_56;
                  }
                  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
                  v43 = (char *)(a2 - (char *)StringRawBuffer);
                  do
                  {
                    v44 = *(unsigned __int16 *)&v43[(_QWORD)StringRawBuffer];
                    v45 = *StringRawBuffer - v44;
                    if ( v45 )
                      break;
                    ++StringRawBuffer;
                  }
                  while ( v44 );
                  if ( !v45 )
                  {
                    v68 = 0LL;
                    v46 = v65;
                    v47 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v65 + 48LL);
                    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v68);
                    v48 = v47(v46, &v68);
                    v8 = v48;
                    if ( v48 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x68,
                        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                        (const char *)(unsigned int)v48);
                      goto LABEL_54;
                    }
                    v69 = 0LL;
                    v49 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v68;
                    v50 = **v68;
                    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v69);
                    if ( v50(v49, &GUID_a7668288_cc23_4b67_be8b_6c10455986b8, &v69) >= 0 )
                    {
                      InstallTime = PenWorkspaceDiscoverBroker::GetInstallTime(v65, a4);
                      v8 = InstallTime;
                      if ( InstallTime >= 0 )
                      {
                        v67 = 0LL;
                        v52 = v69;
                        v53 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v69 + 48LL);
                        WindowsDeleteString(0LL);
                        v67 = 0LL;
                        v54 = v53(v52, &v67);
                        v8 = v54;
                        if ( v54 >= 0 )
                        {
                          memset(&hstringHeader, 0, sizeof(hstringHeader));
                          v55 = WindowsGetStringRawBuffer(v67, 0LL);
                          v56 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                                  (__int64)&hstringHeader,
                                  (__int64)v55,
                                  0xFFFFFFFFFFFFFFFFuLL);
                          v8 = v56;
                          if ( v56 >= 0 )
                          {
                            Reserved1 = (unsigned __int16 *)hstringHeader.Reserved.Reserved1;
                            memset(&hstringHeader, 0, sizeof(hstringHeader));
                            *a3 = Reserved1;
                            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                            WindowsDeleteString(v67);
                            v67 = 0LL;
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v69);
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v68);
                            WindowsDeleteString(string);
                            string = 0LL;
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v66);
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v65);
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v63);
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
                            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v60);
                            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v59);
                            v8 = 0;
                            goto LABEL_62;
                          }
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x73,
                            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                            (const char *)(unsigned int)v56);
                          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                        }
                        else
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x70,
                            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                            (const char *)(unsigned int)v54);
                        }
                        WindowsDeleteString(v67);
                        v67 = 0LL;
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x6D,
                          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                          (const char *)(unsigned int)InstallTime);
                      }
                      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v69);
LABEL_54:
                      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v68);
LABEL_56:
                      WindowsDeleteString(string);
                      string = 0LL;
LABEL_58:
                      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v66);
LABEL_60:
                      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v65);
                      goto LABEL_26;
                    }
                    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v69);
                    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v68);
                  }
                  WindowsDeleteString(string);
                }
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v66);
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v65);
              }
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v63);
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v60);
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v59);
              v8 = -2147023728;
              goto LABEL_62;
            }
            v31 = 86LL;
          }
          else
          {
            v31 = 83LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v31,
            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
            (const char *)(unsigned int)v30);
LABEL_26:
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v63);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x50,
            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
            (const char *)(unsigned int)v27);
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v64);
        goto LABEL_17;
      }
      v24 = 77LL;
    }
    else
    {
      v24 = 76LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v21);
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)IsShellExperience);
  return v8;
}
