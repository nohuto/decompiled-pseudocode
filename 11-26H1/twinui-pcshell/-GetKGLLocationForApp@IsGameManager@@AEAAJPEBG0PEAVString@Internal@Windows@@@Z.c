/*
 * XREFs of ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x18012675C
 * Callers:
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x180126170 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800EF200 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall IsGameManager::GetKGLLocationForApp(
        IsGameManager *this,
        char *a2,
        const unsigned __int16 *a3,
        HSTRING *a4)
{
  HSTRING v5; // rbx
  int ActivationFactory; // eax
  signed int v7; // edi
  unsigned __int64 v8; // r13
  void *v9; // rsi
  __int64 v10; // rdx
  wchar_t *v11; // rcx
  signed __int64 v12; // r14
  wchar_t v13; // ax
  wchar_t *v14; // rax
  wchar_t *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // rdx
  WCHAR *v22; // rcx
  WCHAR v23; // ax
  WCHAR *v24; // rax
  __int64 v25; // rdx
  LONG PackagesByPackageFamily; // eax
  _WORD *v27; // rcx
  unsigned __int64 v28; // r8
  _WORD *v29; // rdx
  __int64 i; // r9
  __int16 v31; // r10
  __int64 v32; // r10
  _WORD *v33; // rax
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  const WCHAR *v40; // rdi
  const WCHAR *StringRawBuffer; // rax
  HRESULT v42; // eax
  HRESULT v43; // r12d
  HSTRING v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
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
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // r14
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v80; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+60h] [rbp-A0h] BYREF
  UINT32 bufferLength[2]; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v84; // [rsp+70h] [rbp-90h] BYREF
  UINT32 count; // [rsp+78h] [rbp-88h] BYREF
  void *v86; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+88h] [rbp-78h]
  __int64 v88; // [rsp+90h] [rbp-70h]
  PCWSTR pszMore; // [rsp+98h] [rbp-68h] BYREF
  HSTRING *v90; // [rsp+A0h] [rbp-60h]
  PWSTR packageFullNames; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Str[136]; // [rsp+170h] [rbp+70h] BYREF
  WCHAR buffer[128]; // [rsp+280h] [rbp+180h] BYREF
  WCHAR pszPathOut[520]; // [rsp+380h] [rbp+280h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7D8h] [rbp+6D8h]

  v90 = a4;
  pszMore = a3;
  v82 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  v78 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v5 = 0LL;
  v84 = 0LL;
  v80 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v82);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x441,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    Windows::Internal::String::~String(&v80);
    Windows::Internal::String::~String(&v84);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v86);
    goto LABEL_132;
  }
  v8 = -1LL;
  v87 = -1LL;
  v88 = -1LL;
  v9 = 0LL;
  packageFullNames = 0LL;
  bufferLength[0] = 128;
  count = 1;
  packageFamilyName[0] = 0;
  v10 = 130LL;
  v11 = Str;
  v12 = a2 - (char *)Str;
  do
  {
    if ( v10 == -2147483516 )
      break;
    v13 = *(wchar_t *)((char *)v11 + v12);
    if ( !v13 )
      break;
    *v11++ = v13;
    --v10;
  }
  while ( v10 );
  v14 = v11 - 1;
  if ( v10 )
    v14 = v11;
  *v14 = 0;
  if ( !v10 || (v15 = wcsrchr(Str, 0x21u), Str[0] == 33) || !v15 || !v15[1] )
  {
    v7 = -2147024809;
LABEL_13:
    if ( v80 )
      WindowsDeleteString(v80);
    if ( v9 )
      CoTaskMemFree(v9);
    v16 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return (unsigned int)v7;
  }
  *v15 = 0;
  v21 = 65LL;
  v22 = packageFamilyName;
  do
  {
    if ( v21 == -2147483581 )
      break;
    v23 = v22[72];
    if ( !v23 )
      break;
    *v22++ = v23;
    --v21;
  }
  while ( v21 );
  v24 = v22 - 1;
  if ( v21 )
    v24 = v22;
  *v24 = 0;
  v25 = -v21;
  v7 = v25 == 0 ? 0x8007007A : 0;
  if ( !v25 )
    goto LABEL_13;
  PackagesByPackageFamily = FindPackagesByPackageFamily(
                              packageFamilyName,
                              0x10u,
                              &count,
                              &packageFullNames,
                              bufferLength,
                              buffer,
                              0LL);
  v7 = PackagesByPackageFamily;
  if ( PackagesByPackageFamily > 0 )
    v7 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
  if ( v7 < 0 )
    goto LABEL_13;
  if ( count != 1 )
  {
    v7 = -2147221165;
    goto LABEL_13;
  }
  v70 = -1LL;
  do
    ++v70;
  while ( buffer[v70] );
  v86 = 0LL;
  v71 = v70 + 1;
  v43 = -2147024362;
  if ( v70 + 1 < v70 )
  {
    v7 = -2147024362;
  }
  else
  {
    v86 = 0LL;
    if ( is_mul_ok(v71, 2uLL) )
    {
      v9 = CoTaskMemAlloc(2 * v71);
      v86 = v9;
      v7 = v9 == 0LL ? 0x8007000E : 0;
      v27 = v9;
    }
    else
    {
      v7 = -2147024362;
      v27 = 0LL;
    }
    if ( v7 >= 0 )
    {
      if ( !v27 && v70 != -1LL )
        goto LABEL_166;
      if ( v71 > 0x7FFFFFFF )
      {
LABEL_167:
        *v27 = 0;
        goto LABEL_54;
      }
      if ( v70 >= 0x7FFFFFFF )
      {
LABEL_166:
        if ( v70 == -1LL )
          goto LABEL_54;
        goto LABEL_167;
      }
      v28 = v70 + 1;
      v29 = v27;
      for ( i = 0LL; v28 != 1; ++i )
      {
        v31 = *(_WORD *)((char *)v29 + (char *)buffer - (char *)v27);
        if ( !v31 )
          break;
        *v29++ = v31;
        --v28;
      }
      v32 = i - 1;
      if ( v28 )
        v32 = i;
      v33 = v29 - 1;
      if ( v28 )
        v33 = v29;
      *v33 = 0;
      v34 = v71 - v32;
      if ( v28 && v34 > 1 && 2 * v34 > 2 )
        memset_0(&v27[v32 + 1], 0, 2 * v34 - 2);
    }
  }
LABEL_54:
  if ( v7 < 0 )
    goto LABEL_13;
  if ( !v9 )
  {
    v7 = -2147467261;
LABEL_128:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x446,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v7);
    Windows::Internal::String::~String(&v80);
    Windows::Internal::String::~String(&v84);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v86);
    v60 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
    v61 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    goto LABEL_132;
  }
  *(_QWORD *)bufferLength = 0LL;
  v35 = -1LL;
  do
    ++v35;
  while ( *((_WORD *)v9 + v35) );
  if ( v35 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
  }
  else
  {
    v7 = WindowsCreateString((PCNZWCH)v9, v35, (HSTRING *)bufferLength);
    if ( v7 >= 0 )
    {
      v5 = *(HSTRING *)bufferLength;
      v84 = *(HSTRING *)bufferLength;
      WindowsDeleteString(0LL);
    }
  }
  if ( v7 < 0 )
    goto LABEL_128;
  v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v82 + 368LL))(v82, 0LL, v5, &v81);
  v7 = v36;
  if ( v36 != -2147023728 )
  {
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44A,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v36);
      Windows::Internal::String::~String(&v80);
      Windows::Internal::String::~String(&v84);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v86);
      v72 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      }
      v73 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
      }
    }
    else
    {
      if ( WindowsCreateStringReference(
             L"Windows.Internal.StateRepository.PackageLocation",
             0x30u,
             &hstringHeader,
             &string) < 0 )
        RaiseException(0xC000000D, 1u, 0, 0LL);
      v37 = RoGetActivationFactory(string, &GUID_b8c8be3c_3a39_4e73_b4ba_c70d91d1b8ea, &v79);
      v7 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44C,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v37);
        if ( v80 )
          WindowsDeleteString(v80);
        if ( v5 )
          WindowsDeleteString(v5);
        CoTaskMemFree(v9);
        v62 = v78;
        if ( v78 )
        {
          v78 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
        }
        v63 = v79;
        if ( v79 )
        {
          v79 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
        }
        v64 = v81;
        if ( v81 )
        {
          v81 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
        }
        v65 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        }
        return (unsigned int)v7;
      }
      v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v79 + 96LL))(v79, v81, &v78);
      v7 = v38;
      if ( v38 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44E,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v38);
        if ( v80 )
          WindowsDeleteString(v80);
        if ( v5 )
          WindowsDeleteString(v5);
        CoTaskMemFree(v9);
        v66 = v78;
        if ( v78 )
        {
          v78 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
        }
        v67 = v79;
        if ( v79 )
        {
          v79 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
        }
        v68 = v81;
        if ( v81 )
        {
          v81 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
        }
        v69 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
        }
        return (unsigned int)v7;
      }
      v39 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v78 + 88LL))(v78, &v80);
      v7 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x450,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v39);
        if ( v80 )
          WindowsDeleteString(v80);
        if ( v5 )
          WindowsDeleteString(v5);
        CoTaskMemFree(v9);
        v56 = v78;
        if ( v78 )
        {
          v78 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
        }
        v57 = v79;
        if ( v79 )
        {
          v79 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
        }
        v58 = v81;
        if ( v81 )
        {
          v81 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        }
        v59 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
        }
        return (unsigned int)v7;
      }
      v40 = pszMore;
      StringRawBuffer = WindowsGetStringRawBuffer(v80, 0LL);
      if ( v40 )
      {
        v42 = PathCchCombine(pszPathOut, 0x208uLL, StringRawBuffer, v40);
        v7 = v42;
        if ( v42 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x454,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v42);
          Windows::Internal::String::~String(&v80);
          Windows::Internal::String::~String(&v84);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v86);
          v74 = v78;
          if ( v78 )
          {
            v78 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
          }
          v75 = v79;
          if ( v79 )
          {
            v79 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
          }
        }
        else
        {
          *(_QWORD *)bufferLength = 0LL;
          do
            ++v8;
          while ( pszPathOut[v8] );
          if ( v8 <= 0xFFFFFFFF )
          {
            v43 = WindowsCreateString(pszPathOut, v8, (HSTRING *)bufferLength);
            if ( v43 >= 0 )
            {
              v44 = *v90;
              *v90 = *(HSTRING *)bufferLength;
              WindowsDeleteString(v44);
LABEL_76:
              if ( v80 )
                WindowsDeleteString(v80);
              if ( v5 )
                WindowsDeleteString(v5);
              CoTaskMemFree(v9);
              v45 = v78;
              if ( v78 )
              {
                v78 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
              }
              v46 = v79;
              if ( v79 )
              {
                v79 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
              }
              v47 = v81;
              if ( v81 )
              {
                v81 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
              }
              v48 = v82;
              if ( v82 )
              {
                v82 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
              }
              return 0LL;
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x456,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v43);
          Windows::Internal::String::~String(&v80);
          Windows::Internal::String::~String(&v84);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v86);
          v76 = v78;
          if ( v78 )
          {
            v78 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
          }
          v77 = v79;
          if ( v79 )
          {
            v79 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
          }
          v7 = v43;
        }
      }
      else
      {
        pszMore = StringRawBuffer;
        v49 = Windows::Internal::String::Initialize<unsigned short const *>(v90, &pszMore);
        v7 = v49;
        if ( v49 >= 0 )
          goto LABEL_76;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45A,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v49);
        Windows::Internal::String::~String(&v80);
        Windows::Internal::String::~String(&v84);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v86);
        v50 = v78;
        if ( v78 )
        {
          v78 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        }
        v51 = v79;
        if ( v79 )
        {
          v79 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        }
      }
    }
LABEL_132:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v81);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
    return (unsigned int)v7;
  }
  if ( v80 )
    WindowsDeleteString(v80);
  if ( v5 )
    WindowsDeleteString(v5);
  CoTaskMemFree(v9);
  v52 = v78;
  if ( v78 )
  {
    v78 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
  v53 = v79;
  if ( v79 )
  {
    v79 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
  v54 = v81;
  if ( v81 )
  {
    v81 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v55 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  return 2147943568LL;
}
