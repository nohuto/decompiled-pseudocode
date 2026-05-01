/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x1800A1B00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180091788 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A2584 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x1800A260C (-ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x1800A3288 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C2908 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        VirtualDesktopPersistence *a1,
        int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  __int64 (*v8)(void); // rbx
  CCriticalFailureHandler *v9; // rcx
  int v10; // ebx
  unsigned __int64 v11; // r15
  const char *v12; // r9
  __int64 result; // rax
  char v14; // si
  LPVOID *p_pv; // rdx
  __int64 v16; // rdx
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  void *v20; // rbx
  __int64 v21; // rdi
  void *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  CCriticalFailureHandler *v25; // rcx
  int v26; // edi
  void *v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  CCriticalFailureHandler *v30; // rcx
  int v31; // ebx
  _OWORD *v32; // r14
  unsigned __int64 v33; // r12
  __int64 v34; // rbx
  int (__fastcall *v35)(__int64, __int64, _QWORD, const wchar_t *); // rdi
  __int64 v36; // rdx
  unsigned __int64 i; // rsi
  _QWORD *v38; // r12
  __int64 (__fastcall *v39)(__int64 *, _QWORD *, struct IVirtualDesktop **); // rbx
  CCriticalFailureHandler *v40; // rcx
  int v41; // ebx
  __int64 v42; // rax
  struct IVirtualDesktop *v43; // rbx
  __int64 (__fastcall *v44)(struct IVirtualDesktop *, GUID *, __int64 *); // rdi
  int v45; // eax
  VirtualDesktopPersistence *v46; // rbx
  int v47; // eax
  __int64 v48; // rdx
  unsigned __int16 *v49; // rsi
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(__int64, __int64); // rdi
  __int64 v52; // rdx
  int v53; // eax
  int PerDesktopStringData; // eax
  unsigned int v55; // r8d
  WCHAR *v56; // rbx
  __int64 v57; // rdi
  UINT32 v58; // eax
  int v59; // eax
  __int64 v60; // rax
  __int64 (__fastcall *v61)(__int64 *, struct IVirtualDesktop *, __int64); // rdi
  __int64 v62; // r8
  int v63; // eax
  __int64 v64; // rcx
  struct IVirtualDesktop *v65; // rcx
  __int64 (__fastcall *v66)(__int64 *, _QWORD *, __int64, _QWORD **); // rbx
  CCriticalFailureHandler *v67; // rcx
  int v68; // ebx
  void *v69; // rcx
  unsigned __int64 *v70; // [rsp+20h] [rbp-148h]
  unsigned __int64 *v71; // [rsp+28h] [rbp-140h]
  unsigned __int64 *v72; // [rsp+28h] [rbp-140h]
  unsigned __int16 *v73; // [rsp+40h] [rbp-128h] BYREF
  _QWORD *v74; // [rsp+48h] [rbp-120h] BYREF
  _QWORD *v75; // [rsp+50h] [rbp-118h] BYREF
  LPVOID v76; // [rsp+58h] [rbp-110h] BYREF
  struct IVirtualDesktop *v77; // [rsp+60h] [rbp-108h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-100h] BYREF
  int v79; // [rsp+70h] [rbp-F8h]
  __int64 v80; // [rsp+78h] [rbp-F0h] BYREF
  PCWSTR sourceString; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v82; // [rsp+88h] [rbp-E0h]
  WCHAR *v83; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 v85; // [rsp+A0h] [rbp-C8h]
  __int64 v86; // [rsp+A8h] [rbp-C0h]
  VirtualDesktopPersistence *v87; // [rsp+B0h] [rbp-B8h]
  _OWORD *v88; // [rsp+B8h] [rbp-B0h] BYREF
  unsigned __int64 v89; // [rsp+C0h] [rbp-A8h]
  __int64 v90; // [rsp+C8h] [rbp-A0h]
  __int128 v91; // [rsp+D0h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-70h]
  char v94[32]; // [rsp+100h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v5 = a4;
  v84 = a4;
  v79 = a2;
  v87 = a1;
  v90 = a5;
  v75 = 0LL;
  v8 = *(__int64 (**)(void))(*a3 + 368);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v75);
  try
  {
    v10 = v8();
    LODWORD(v73) = v10;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v73);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v10 = (int)v73;
    }
    LODWORD(v11) = -2147024882;
    if ( v10 < 0 )
    {
      if ( v10 != -2147024882 && v10 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v9,
          (int *)&v73,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          0x6Au,
          v70,
          v71);
        v10 = (int)v73;
      }
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6A,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v75);
        return (unsigned int)v10;
      }
    }
    v74 = 0LL;
    pv = 0LL;
    v85 = 0LL;
    v14 = 0;
    p_pv = &pv;
    v72 = (unsigned __int64 *)&pv;
    LODWORD(v70) = 3;
    LOBYTE(p_pv) = 1;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
           *((_QWORD *)a1 + 2),
           p_pv,
           0LL,
           L"VirtualDesktopIDs") >= 0 )
    {
      v16 = 0LL;
      v17 = retaddr;
      if ( v85 )
      {
        v17 = retaddr;
        if ( (v85 & 0xF) == 0 )
        {
          v32 = pv;
          pv = 0LL;
          v88 = v32;
          v33 = v85 >> 4;
          v89 = v85 >> 4;
          v91 = *v32;
          v76 = 0LL;
          v86 = 0LL;
          v34 = *((_QWORD *)a1 + 2);
          v35 = *(int (__fastcall **)(__int64, __int64, _QWORD, const wchar_t *))(*(_QWORD *)v34 + 24LL);
          LOBYTE(v16) = 3;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
            &`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
            v16);
          v72 = (unsigned __int64 *)&v76;
          LODWORD(v70) = 3;
          LOBYTE(v36) = 1;
          if ( v35(v34, v36, 0LL, L"CurrentVirtualDesktop") >= 0 )
          {
            if ( v86 == 16 )
              v91 = *(_OWORD *)v76;
            else
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x7E,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                (const char *)0x8000FFFFLL);
          }
          for ( i = 0LL; ; ++i )
          {
            v82 = i;
            if ( i >= v33 )
              break;
            v38 = &v32[i];
            v77 = 0LL;
            v39 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IVirtualDesktop **))(*a3 + 248);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
            v41 = v39(a3, v38, &v77);
            LODWORD(v73) = v41;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v40, (int *)&v73);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v41 = (int)v73;
            }
            if ( v41 < 0 )
            {
              if ( v41 != -2147024882 && v41 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v40,
                  (int *)&v73,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0x87u,
                  v70,
                  v72);
                v41 = (int)v73;
              }
              if ( v41 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x87,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v41);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v76);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v88);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v75);
                return (unsigned int)v41;
              }
            }
            v42 = *v38 - v91;
            if ( *v38 == (_QWORD)v91 )
              v42 = v38[1] - *((_QWORD *)&v91 + 1);
            if ( !v42 )
              Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v74, &v77);
            v80 = 0LL;
            v43 = v77;
            v44 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v77;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v80);
            v45 = v44(v43, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v80);
            if ( v45 >= 0 )
            {
              v73 = 0LL;
              v46 = v87;
              v47 = VirtualDesktopPersistence::ReadPerDesktopStringData(v87, v77, L"Name", &v73);
              v49 = v73;
              if ( v47 >= 0 )
              {
                v50 = v80;
                v51 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v80 + 24LL);
                sourceString = v73;
                v52 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                    &hstringHeader,
                                    &sourceString)
                                + 24);
                v53 = v51(v50, v52);
                if ( v53 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x93,
                    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                    (const char *)(unsigned int)v53);
                v46 = v87;
              }
              LOBYTE(v48) = 3;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
                &`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
                v48);
              sourceString = 0LL;
              PerDesktopStringData = VirtualDesktopPersistence::ReadPerDesktopStringData(
                                       v46,
                                       v77,
                                       L"Wallpaper",
                                       (unsigned __int16 **)&sourceString);
              v56 = (WCHAR *)sourceString;
              if ( PerDesktopStringData >= 0 )
              {
                v57 = v80;
                v83 = *(WCHAR **)(*(_QWORD *)v80 + 40LL);
                v93 = 0LL;
                v11 = -1LL;
                do
                  ++v11;
                while ( sourceString[v11] );
                if ( v11 > 0xFFFFFFFF )
                {
                  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, 0, v55);
                  break;
                }
                v58 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v11, 0, v55);
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, v56, v58, v11);
                v59 = ((__int64 (__fastcall *)(__int64, __int64))v83)(v57, v93);
                if ( v59 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x9B,
                    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                    (const char *)(unsigned int)v59);
                v60 = *v38 - v91;
                if ( *v38 == (_QWORD)v91 )
                  v60 = v38[1] - *((_QWORD *)&v91 + 1);
                if ( !v60 )
                {
                  v61 = *(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop *, __int64))(*a3 + 136);
                  v83 = v56;
                  v62 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v94, &v83) + 24);
                  v63 = v61(a3, v77, v62);
                  if ( v63 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x9E,
                      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      (const char *)(unsigned int)v63);
                }
              }
              if ( v56 )
                CoTaskMemFree(v56);
              if ( v49 )
                CoTaskMemFree(v49);
              i = v82;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x8E,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                (const char *)(unsigned int)v45);
            }
            v64 = v80;
            if ( v80 )
            {
              v80 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
            }
            v65 = v77;
            if ( v77 )
            {
              v77 = 0LL;
              (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v65 + 16LL))(v65);
            }
            LODWORD(v11) = -2147024882;
            v33 = v89;
          }
          if ( !v74 )
          {
            v66 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, _QWORD **))(*a3 + 384);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
            v68 = v66(a3, v75, 5LL, &v74);
            LODWORD(v73) = v68;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v67, (int *)&v73);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v68 = (int)v73;
            }
            if ( v68 < 0 )
            {
              if ( v68 != (_DWORD)v11 && v68 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v67,
                  (int *)&v73,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0xAAu,
                  v70,
                  v72);
                v68 = (int)v73;
              }
              if ( v68 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xAA,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v68);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v76);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&v88);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v75);
                return (unsigned int)v68;
              }
            }
          }
          v14 = 1;
          v69 = v76;
          v76 = 0LL;
          CoTaskMemFree(v69);
          CoTaskMemFree(v32);
          v20 = v74;
          v5 = v84;
LABEL_19:
          v76 = v20;
          if ( v20 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( v79 == 1 )
          {
            v23 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v84);
            Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v76, v23);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v84);
            v20 = v76;
          }
          v24 = *a3;
          if ( v14 )
          {
            v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, void *))(v24 + 256))(a3, v75, v20);
            LODWORD(v73) = v26;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v25, (int *)&v73);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v26 = (int)v73;
            }
            if ( v26 < 0 )
            {
              if ( v26 != (_DWORD)v11 && v26 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v25,
                  (int *)&v73,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0xC0u,
                  v70,
                  v72);
                v26 = (int)v73;
              }
              if ( v26 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC0,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v26);
                if ( v20 )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
                v27 = pv;
                pv = 0LL;
                CoTaskMemFree(v27);
                v28 = (__int64)v74;
                if ( v74 )
                {
                  v74 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                }
                v29 = v75;
                if ( v75 )
                {
                  v75 = 0LL;
                  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v29 + 16LL))(v29, *v29);
                }
                return (unsigned int)v26;
              }
            }
          }
          else
          {
            v31 = (*(__int64 (__fastcall **)(__int64 *, void *))(v24 + 264))(a3, v20);
            LODWORD(v73) = v31;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v30, (int *)&v73);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v31 = (int)v73;
            }
            if ( v31 < 0 )
            {
              if ( v31 != (_DWORD)v11 && v31 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v30,
                  (int *)&v73,
                  L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  0xC4u,
                  v70,
                  v72);
                v31 = (int)v73;
              }
              if ( v31 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC4,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                  (const char *)(unsigned int)v31);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v76);
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v75);
                return (unsigned int)v31;
              }
            }
          }
          (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v90 + 40LL))(v90, v74);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v76);
          CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&pv);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v75);
          return 0LL;
        }
        v18 = 2147549183LL;
        v19 = 117LL;
      }
      else
      {
        v18 = 2147943568LL;
        v19 = 116LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v17,
        (void *)v19,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v18);
    }
    v20 = v74;
    v21 = (__int64)v75;
    if ( v74 != v75 )
    {
      if ( v75 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v75 + 8LL))(v75);
        v20 = v74;
      }
      v22 = v20;
      v20 = (void *)v21;
      v74 = (_QWORD *)v21;
      if ( v22 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
        v20 = v74;
      }
    }
    goto LABEL_19;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xCA,
                           (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                           v12);
  }
  return result;
}
