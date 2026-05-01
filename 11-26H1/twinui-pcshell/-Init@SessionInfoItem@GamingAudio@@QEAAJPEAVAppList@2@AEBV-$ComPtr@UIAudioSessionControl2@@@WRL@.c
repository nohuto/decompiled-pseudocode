/*
 * XREFs of ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18035F4C8
 * Callers:
 *     ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18035F0E0 (-GetSessionInfo@AppList@GamingAudio@@AEAAXV-$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180171BA4 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x18017283C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x1801CA710 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801DD140 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x18035DA30 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18035DB94 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$AsWeak@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@YAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x18035DBCC (--$AsWeak@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@YAJPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall GamingAudio::SessionInfoItem::Init(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        LPARAM a3)
{
  __int64 (__fastcall ****v3)(__int64, GUID *, __int64 *); // r12
  __int64 *v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  DWORD *v9; // r13
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall ***v13)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  BOOL v18; // eax
  _QWORD *v19; // rsi
  __int64 (__fastcall ***v20)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v21)(__int64, GUID *, __int64 *); // rbx
  int v22; // eax
  int v23; // eax
  HANDLE v24; // rdi
  BOOL v25; // eax
  __int64 v26; // rbx
  int (__fastcall *v27)(__int64, _QWORD, PVOID, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rsi
  unsigned int v28; // r8d
  HSTRING_HEADER *v29; // rax
  int (__fastcall ***v30)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v31)(_QWORD, GUID *, __int64 *); // rsi
  HSTRING v32; // r8
  HSTRING *v33; // r12
  __int64 v34; // rbx
  void (__fastcall *v35)(__int64, __int64); // rsi
  _WORD *v36; // rsi
  HSTRING v37; // r8
  Microsoft::WRL::Wrappers::Details **v38; // rbx
  HSTRING v39; // r8
  int v40; // eax
  unsigned __int64 v41; // r8
  int v42; // eax
  __int64 (__fastcall ***v43)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v44)(__int64, GUID *, __int64 *); // rbx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rbx
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h]
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  LPARAM lParam[2]; // [rsp+58h] [rbp-A8h] BYREF
  DWORD dwSize[2]; // [rsp+68h] [rbp-98h] BYREF
  UINT32 packageFullNameLength; // [rsp+70h] [rbp-90h] BYREF
  void *v55; // [rsp+78h] [rbp-88h] BYREF
  int v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  int (__fastcall ***v58)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 v60[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v61[264]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v3 = (__int64 (__fastcall ****)(__int64, GUID *, __int64 *))a3;
  lParam[0] = a3;
  v55 = (void *)(a1 + 760);
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v55);
  v7 = Microsoft::WRL::AsWeak<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(a2, v6);
  if ( v7 >= 0 )
  {
    *(_QWORD *)(a1 + 768) = a2;
    v9 = (DWORD *)(a1 + 48);
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64))(**v3)[14])(
           *v3,
           a1 + 48);
    if ( v7 < 0 )
    {
      v8 = 287LL;
      goto LABEL_3;
    }
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64))(**v3)[3])(
            *v3,
            a1 + 84);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x120,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v10);
    *(_DWORD *)(a1 + 72) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(**v3)[15])(*v3) == 0;
    pv = 0LL;
    v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), LPVOID *))(**v3)[4])(*v3, &pv);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x125,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v11);
    if ( pv )
    {
      v12 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(
              (Microsoft::WRL::Wrappers::HString *)(a1 + 56),
              (const unsigned __int16 **)&pv);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x129,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
          (const char *)(unsigned int)v12);
      CoTaskMemFree(pv);
    }
    v59 = 0LL;
    v13 = *v3;
    v14 = ***v3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
    v15 = v14((__int64)v13, &GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f, &v59);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 303LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v15);
LABEL_73:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
      return (unsigned int)v7;
    }
    v56 = 0;
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v59 + 152LL))(v59, &v56);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x132,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v17);
    v18 = *(_DWORD *)(a1 + 84) != 2 && (v56 & 0x200000) == 0;
    *(_DWORD *)(a1 + 80) = v18;
    v19 = (_QWORD *)(a1 + 744);
    v20 = *v3;
    v21 = ***v3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 744));
    v15 = v21((__int64)v20, &GUID_87ce5498_68d6_44e5_9215_6da47ef883d8, (__int64 *)(a1 + 744));
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 311LL;
      goto LABEL_24;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 32LL))(*v19, a1 + 64);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x138,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v22);
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 48LL))(*v19, a1 + 68);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x139,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
        (const char *)(unsigned int)v23);
    if ( *v9 )
    {
      v24 = OpenProcess(0x1000u, 0, *v9);
      v55 = v24;
      if ( wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v55) )
      {
        v25 = IsImmersiveProcess(v24);
        *(_DWORD *)(a1 + 76) = v25;
        if ( v25 )
        {
          packageFullNameLength = 65;
          if ( !GetPackageFullName(v24, &packageFullNameLength, (PWSTR)(a1 + 88)) )
          {
            v60[0] = 0LL;
            v58 = 0LL;
            v57 = 0LL;
            v50 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Management.Deployment.PackageManager",
              0x2Du,
              0x2Cu);
            if ( (int)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
                        v50,
                        v60) >= 0 )
            {
              v26 = v60[0];
              v27 = *(int (__fastcall **)(__int64, _QWORD, PVOID, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v60[0] + 168LL);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v58);
              v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (PCWSTR)(a1 + 88), v28);
              if ( v27(v26, 0LL, v29[1].Reserved.Reserved1, (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v58) >= 0 )
              {
                v30 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v58;
                v31 = **v58;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
                if ( v31(v30, &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01, &v57) >= 0 )
                {
                  v33 = (HSTRING *)(a1 + 56);
                  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                        *(Microsoft::WRL::Wrappers::Details **)(a1 + 56),
                                        0LL,
                                        v32) )
                  {
                    v34 = v57;
                    v35 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 48LL);
                    WindowsDeleteString(*v33);
                    *v33 = 0LL;
                    v35(v34, a1 + 56);
                  }
                }
              }
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v58);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v60);
          }
          v3 = (__int64 (__fastcall ****)(__int64, GUID *, __int64 *))lParam[0];
        }
        dwSize[0] = 261;
        v36 = (_WORD *)(a1 + 218);
        if ( !QueryFullProcessImageNameW(v24, 0, (LPWSTR)(a1 + 218), dwSize) )
        {
          *v36 = 0;
          *(_DWORD *)(a1 + 80) = 0;
        }
        v38 = (Microsoft::WRL::Wrappers::Details **)(a1 + 56);
        if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                              *(Microsoft::WRL::Wrappers::Details **)(a1 + 56),
                              0LL,
                              v37) )
        {
          *(_OWORD *)lParam = 0LL;
          LODWORD(lParam[0]) = *v9;
          EnumWindows((WNDENUMPROC)GamingAudio::EnumWindowsProc, (LPARAM)lParam);
          if ( lParam[1] )
          {
            v40 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(
                    (Microsoft::WRL::Wrappers::HString *)(a1 + 56),
                    (const unsigned __int16 **)&lParam[1]);
            if ( v40 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x178,
                (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
                (const char *)(unsigned int)v40);
            CoTaskMemFree((LPVOID)lParam[1]);
          }
        }
        if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*v38, 0LL, v39) )
        {
          v61[0] = 0;
          packageFullNameLength = 261;
          if ( (unsigned int)SHGetFileDescriptionW(a1 + 218, 0LL, 0LL, v61, &packageFullNameLength) )
          {
            v41 = -1LL;
            do
              ++v41;
            while ( v61[v41] );
            v42 = v41 > 0xFFFFFFFF
                ? -2147024362
                : Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 56), v61, v41);
            if ( v42 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x185,
                (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
                (const char *)(unsigned int)v42);
          }
        }
        if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*v38, 0LL, (HSTRING)v41)
          && !*v36
          && !*(_DWORD *)(a1 + 72) )
        {
          *(_DWORD *)(a1 + 80) = 0;
        }
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v55);
    }
    if ( *(_DWORD *)(a1 + 80) )
    {
      *(_QWORD *)dwSize = 0LL;
      v43 = *v3;
      v44 = ***v3;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)dwSize);
      v45 = v44((__int64)v43, &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd, (__int64 *)dwSize);
      v7 = v45;
      if ( v45 < 0 )
      {
        v46 = 407LL;
LABEL_64:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v46,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
          (const char *)(unsigned int)v45);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)dwSize);
        goto LABEL_73;
      }
      v47 = *(_QWORD *)dwSize;
      if ( *(_QWORD *)(a1 + 752) != *(_QWORD *)dwSize )
      {
        if ( *(_QWORD *)dwSize )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)dwSize + 8LL))(*(_QWORD *)dwSize);
        v55 = *(void **)(a1 + 752);
        *(_QWORD *)(a1 + 752) = v47;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v55);
      }
      v45 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 752) + 80LL))(*(_QWORD *)(a1 + 752), a1);
      v7 = v45;
      if ( v45 < 0 )
      {
        v46 = 412LL;
        goto LABEL_64;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)dwSize);
    }
    v7 = 0;
    goto LABEL_73;
  }
  v8 = 283LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\Audio.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
