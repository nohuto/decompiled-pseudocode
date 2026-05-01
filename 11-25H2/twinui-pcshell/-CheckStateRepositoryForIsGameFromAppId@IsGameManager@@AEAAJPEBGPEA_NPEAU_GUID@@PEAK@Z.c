/*
 * XREFs of ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x18012F4C0
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x18012F170 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?IsCheckStateRepositoryMocked@@YA_NPEA_NPEAE@Z @ 0x1801302B4 (-IsCheckStateRepositoryMocked@@YA_NPEA_NPEAE@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801302C4 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ??$?0$0M@@StringReference@Internal@Windows@@QEAA@AEAY0M@$$CBG@Z @ 0x1801305C4 (--$-0$0M@@StringReference@Internal@Windows@@QEAA@AEAY0M@$$CBG@Z.c)
 *     ??$?0$09@StringReference@Internal@Windows@@QEAA@AEAY09$$CBG@Z @ 0x180130620 (--$-0$09@StringReference@Internal@Windows@@QEAA@AEAY09$$CBG@Z.c)
 *     ?UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z @ 0x18013067C (-UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031A2D4 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall IsGameManager::CheckStateRepositoryForIsGameFromAppId(
        IsGameManager *this,
        unsigned __int16 *a2,
        bool *a3,
        struct _GUID *a4,
        unsigned int *a5)
{
  unsigned __int16 *v5; // rsi
  unsigned int v7; // r15d
  void *v8; // r14
  HSTRING v9; // rdi
  struct _GUID *v10; // r9
  unsigned int *v11; // r10
  bool v12; // r12
  HSTRING v13; // rbx
  int ActivationFactory; // eax
  unsigned __int16 **v15; // r8
  HRESULT PackageFullNameFromAppId; // ebx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, _QWORD, HSTRING, __int64 *); // rsi
  int v25; // eax
  HSTRING v26; // rbx
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64, _QWORD, __int64 *); // rsi
  const unsigned __int16 (*v30)[12]; // rdx
  _QWORD *v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, _QWORD, HSTRING *); // rsi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  const WCHAR *StringRawBuffer; // rax
  HSTRING v40; // rcx
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, __int64, _QWORD, _QWORD, int *); // rsi
  const unsigned __int16 (*v43)[10]; // rdx
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  bool v48; // zf
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rdx
  HSTRING v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int updated; // eax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  HSTRING v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // eax
  __int64 *v89; // rcx
  __int64 v90; // rax
  __int64 *v91; // rcx
  __int64 v92; // rax
  int v93; // eax
  int v94; // ebx
  unsigned __int8 v95; // [rsp+30h] [rbp-D0h] BYREF
  bool v96[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v97; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v99; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v101; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v102; // [rsp+60h] [rbp-A0h] BYREF
  int v103[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v104; // [rsp+70h] [rbp-90h] BYREF
  HSTRING v105; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID *v106[2]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-70h] BYREF
  __int64 v108; // [rsp+98h] [rbp-68h]
  __int64 v109; // [rsp+A0h] [rbp-60h]
  bool *v110; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v111; // [rsp+B0h] [rbp-50h]
  unsigned int *v112[2]; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v106[0] = a4;
  v110 = a3;
  v5 = a2;
  v111 = a2;
  v112[0] = a5;
  v7 = 0;
  v99 = 0LL;
  v100 = 0LL;
  v98 = 0LL;
  v97 = 0LL;
  v8 = 0LL;
  pv = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v9 = 0LL;
  v105 = 0LL;
  v104 = 0;
  v96[0] = 0;
  v95 = 0;
  *a3 = 0;
  if ( IsCheckStateRepositoryMocked(v96, &v95) )
  {
    v12 = v96[0];
    LOBYTE(v46) = v95;
LABEL_51:
    if ( v12 )
    {
      v48 = (_BYTE)v46 == 0;
    }
    else
    {
      v48 = (_BYTE)v46 == 0;
      if ( !(_BYTE)v46 )
      {
        *(_OWORD *)v112 = xmmword_180758018;
        if ( (*(int (__fastcall **)(_QWORD, unsigned __int16 *, unsigned int **, struct _GUID *))(**((_QWORD **)this + 2)
                                                                                                + 40LL))(
               *((_QWORD *)this + 2),
               v5,
               v112,
               v10) >= 0 )
        {
          LODWORD(v102) = 0;
          LODWORD(v101) = 4;
          v89 = (__int64 *)*((_QWORD *)this + 2);
          v90 = *v89;
          *(_OWORD *)v106 = *(_OWORD *)v112;
          if ( (*(int (__fastcall **)(__int64 *, struct _GUID **, __int64, HSTRING *, HSTRING *))(v90 + 64))(
                 v89,
                 v106,
                 11LL,
                 &v102,
                 &v101) >= 0 )
          {
            if ( (_DWORD)v102 )
            {
              v91 = (__int64 *)*((_QWORD *)this + 2);
              v92 = *v91;
              *(_OWORD *)v106 = *(_OWORD *)v112;
              v93 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID **))(v92 + 8))(v91, v106);
              v94 = v93;
              if ( v93 < 0 )
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x559,
                  (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                  (const char *)(unsigned int)v93);
                GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError(v94);
              }
            }
          }
        }
LABEL_54:
        if ( v9 )
          WindowsDeleteString(v9);
        if ( v8 )
          CoTaskMemFree(v8);
        v49 = v97;
        if ( v97 )
        {
          v97 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        }
        v50 = v98;
        if ( v98 )
        {
          v98 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        }
        v51 = v100;
        if ( v100 )
        {
          v100 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        }
        v52 = v99;
        if ( v99 )
        {
          v99 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
        }
        return 0LL;
      }
    }
    updated = IsGameManager::UpdateGameConfigStoreForStoreApp(this, v5, !v48, v10, v11);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x547,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated);
    goto LABEL_54;
  }
  v12 = 0;
  v95 = 0;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v13 = string;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v100);
  ActivationFactory = RoGetActivationFactory(v13, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v100);
  PackageFullNameFromAppId = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x508,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v53 = v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v98;
    if ( v98 )
    {
      v98 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v100;
    if ( v100 )
    {
      v100 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v56 = v99;
    if ( v99 )
    {
      v99 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    return (unsigned int)PackageFullNameFromAppId;
  }
  v108 = -1LL;
  v109 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(
                               (CallerIdentity *)v5,
                               (const unsigned __int16 *)&pv,
                               v15);
  if ( PackageFullNameFromAppId < 0 )
  {
    if ( pv )
      CoTaskMemFree(pv);
    v18 = v97;
    if ( v97 )
    {
      v97 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v98;
    if ( v98 )
    {
      v98 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v100;
    if ( v100 )
    {
      v100 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v99;
    if ( v99 )
    {
      v99 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return (unsigned int)PackageFullNameFromAppId;
  }
  v8 = pv;
  if ( !pv )
  {
    PackageFullNameFromAppId = -2147467261;
    goto LABEL_180;
  }
  v101 = 0LL;
  v17 = -1LL;
  do
    ++v17;
  while ( *((_WORD *)pv + v17) );
  if ( v17 <= 0xFFFFFFFF )
  {
    PackageFullNameFromAppId = WindowsCreateString((PCNZWCH)pv, v17, &v101);
    if ( PackageFullNameFromAppId >= 0 )
    {
      v9 = v101;
      v105 = v101;
      WindowsDeleteString(0LL);
    }
  }
  else
  {
    PackageFullNameFromAppId = -2147024362;
  }
  if ( PackageFullNameFromAppId < 0 )
  {
LABEL_180:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50C,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)PackageFullNameFromAppId);
LABEL_181:
    Windows::Internal::String::~String(&v105);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v97);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v98);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v100);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v99);
    return (unsigned int)PackageFullNameFromAppId;
  }
  v23 = v100;
  v24 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v100 + 368LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v99);
  v25 = v24(v23, 0LL, v9, &v99);
  PackageFullNameFromAppId = v25;
  if ( v25 != -2147023728 )
  {
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50F,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v25);
      if ( v9 )
        WindowsDeleteString(v9);
      if ( v8 )
        CoTaskMemFree(v8);
      v61 = v97;
      if ( v97 )
      {
        v97 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
      }
      v62 = v98;
      if ( v98 )
      {
        v98 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
      }
      v63 = v100;
      if ( v100 )
      {
        v100 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      }
      v64 = v99;
      if ( v99 )
      {
        v99 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      }
    }
    else
    {
      if ( WindowsCreateStringReference(
             L"Windows.Internal.StateRepository.PackagePolicy",
             0x2Eu,
             &hstringHeader,
             &string) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v26 = string;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v98);
      v27 = RoGetActivationFactory(v26, &GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v98);
      PackageFullNameFromAppId = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x512,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v27);
        if ( v9 )
          WindowsDeleteString(v9);
        if ( v8 )
          CoTaskMemFree(v8);
        v65 = v97;
        if ( v97 )
        {
          v97 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        }
        v66 = v98;
        if ( v98 )
        {
          v98 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
        }
        v67 = v100;
        if ( v100 )
        {
          v100 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
        }
        v68 = v99;
        if ( v99 )
        {
          v99 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
        }
      }
      else
      {
        v28 = v98;
        v29 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v98 + 360LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v97);
        v31 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, v30);
        v32 = v29(v28, v99, *v31, &v97);
        PackageFullNameFromAppId = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x514,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v32);
          if ( v9 )
            WindowsDeleteString(v9);
          if ( v8 )
            CoTaskMemFree(v8);
          v57 = v97;
          if ( v97 )
          {
            v97 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
          }
          v58 = v98;
          if ( v98 )
          {
            v98 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
          }
          v59 = v100;
          if ( v100 )
          {
            v100 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          }
          v60 = v99;
          if ( v99 )
          {
            v99 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
          }
        }
        else
        {
          v33 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v97 + 56LL))(v97, &v104);
          PackageFullNameFromAppId = v33;
          if ( v33 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x515,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
              (const char *)(unsigned int)v33);
            if ( v9 )
              WindowsDeleteString(v9);
            if ( v8 )
              CoTaskMemFree(v8);
            v79 = v97;
            if ( v97 )
            {
              v97 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
            }
            v80 = v98;
            if ( v98 )
            {
              v98 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
            }
            v81 = v100;
            if ( v100 )
            {
              v100 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
            }
            v82 = v99;
            if ( v99 )
            {
              v99 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
            }
          }
          else
          {
            while ( 1 )
            {
              if ( v7 >= v104 )
                goto LABEL_43;
              v101 = 0LL;
              v102 = 0LL;
              v96[0] = 1;
              v34 = v97;
              v35 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v97 + 48LL);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v101);
              v36 = v35(v34, v7, &v101);
              PackageFullNameFromAppId = v36;
              if ( v36 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x51E,
                  (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                  (const char *)(unsigned int)v36);
                Windows::Internal::String::~String(&v102);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v101);
                goto LABEL_181;
              }
              v37 = (*(__int64 (__fastcall **)(HSTRING, bool *))(*(_QWORD *)v101 + 176LL))(v101, v96);
              PackageFullNameFromAppId = v37;
              if ( v37 < 0 )
                break;
              if ( !v96[0] )
              {
                v38 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v101 + 192LL))(v101, &v102);
                PackageFullNameFromAppId = v38;
                if ( v38 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x524,
                    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                    (const char *)(unsigned int)v38);
                  if ( v102 )
                    WindowsDeleteString(v102);
                  v73 = v101;
                  if ( v101 )
                  {
                    v101 = 0LL;
                    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v73 + 16LL))(v73);
                  }
                  if ( v9 )
                    WindowsDeleteString(v9);
                  if ( v8 )
                    CoTaskMemFree(v8);
                  v74 = v97;
                  if ( v97 )
                  {
                    v97 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
                  }
                  v75 = v98;
                  if ( v98 )
                  {
                    v98 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
                  }
                  v76 = v100;
                  if ( v100 )
                  {
                    v100 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
                  }
                  v77 = v99;
                  if ( v99 )
                  {
                    v99 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
                  }
                  return (unsigned int)PackageFullNameFromAppId;
                }
                StringRawBuffer = WindowsGetStringRawBuffer(v102, 0LL);
                if ( CompareStringOrdinal(StringRawBuffer, -1, L"game", -1, 1) == 2 )
                {
                  v12 = 1;
                  Windows::Internal::String::~String(&v102);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v101);
LABEL_43:
                  *(_QWORD *)v103 = 0LL;
                  v41 = v98;
                  v42 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v98 + 488LL);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v103);
                  v44 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, v43);
                  v45 = v42(v41, v99, *v44, 0LL, v103);
                  if ( v45 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x531,
                      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                      (const char *)(unsigned int)v45);
                  v47 = *(_QWORD *)v103;
                  if ( *(_QWORD *)v103 )
                  {
                    v88 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**(_QWORD **)v103 + 264LL))(
                            *(_QWORD *)v103,
                            &v95);
                    if ( v88 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x535,
                        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                        (const char *)(unsigned int)v88);
                    v47 = *(_QWORD *)v103;
                  }
                  LOBYTE(v46) = v95;
                  if ( v12 )
                    *v110 = v95 == 0;
                  if ( v47 )
                  {
                    *(_QWORD *)v103 = 0LL;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 16LL))(v47, v46);
                    LOBYTE(v46) = v95;
                  }
                  v5 = v111;
                  v10 = v106[0];
                  v11 = v112[0];
                  goto LABEL_51;
                }
              }
              if ( v102 )
                WindowsDeleteString(v102);
              v40 = v101;
              if ( v101 )
              {
                v101 = 0LL;
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v40 + 16LL))(v40);
              }
              ++v7;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x520,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
              (const char *)(unsigned int)v37);
            if ( v102 )
              WindowsDeleteString(v102);
            v83 = v101;
            if ( v101 )
            {
              v101 = 0LL;
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v83 + 16LL))(v83);
            }
            if ( v9 )
              WindowsDeleteString(v9);
            if ( v8 )
              CoTaskMemFree(v8);
            v84 = v97;
            if ( v97 )
            {
              v97 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
            }
            v85 = v98;
            if ( v98 )
            {
              v98 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
            }
            v86 = v100;
            if ( v100 )
            {
              v100 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
            }
            v87 = v99;
            if ( v99 )
            {
              v99 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
            }
          }
        }
      }
    }
    return (unsigned int)PackageFullNameFromAppId;
  }
  if ( v9 )
    WindowsDeleteString(v9);
  if ( v8 )
    CoTaskMemFree(v8);
  v69 = v97;
  if ( v97 )
  {
    v97 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  }
  v70 = v98;
  if ( v98 )
  {
    v98 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
  }
  v71 = v100;
  if ( v100 )
  {
    v100 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
  }
  v72 = v99;
  if ( v99 )
  {
    v99 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  }
  return 2147943568LL;
}
