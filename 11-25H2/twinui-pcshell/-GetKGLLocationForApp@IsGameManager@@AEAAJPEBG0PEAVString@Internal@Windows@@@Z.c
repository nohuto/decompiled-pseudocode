/*
 * XREFs of ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x18013FDD8
 * Callers:
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x18013F7F0 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800750D8 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall IsGameManager::GetKGLLocationForApp(
        IsGameManager *this,
        char *a2,
        const unsigned __int16 *a3,
        HSTRING *a4)
{
  HSTRING *v4; // r14
  const WCHAR *v5; // r15
  HSTRING v7; // rbx
  int ActivationFactory; // eax
  unsigned int v9; // edi
  unsigned __int64 v10; // r12
  _WORD *v11; // rdi
  __int64 v12; // rdx
  wchar_t *v13; // rcx
  signed __int64 v14; // rsi
  wchar_t v15; // ax
  wchar_t *v16; // rax
  HRESULT v17; // r13d
  wchar_t *v18; // rax
  signed int v19; // esi
  WCHAR *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v26; // rdx
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  const WCHAR *StringRawBuffer; // rax
  HRESULT v33; // eax
  HSTRING v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  WCHAR *v40; // rcx
  WCHAR v41; // ax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
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
  _WORD *v63; // rcx
  unsigned __int64 v64; // rdx
  _WORD *v65; // r8
  __int64 v66; // r9
  __int16 v67; // ax
  _WORD *v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // r14
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // r14
  LONG PackagesByPackageFamily; // eax
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v82; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v84; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING bufferLength; // [rsp+68h] [rbp-98h] BYREF
  HSTRING v86; // [rsp+70h] [rbp-90h] BYREF
  UINT32 count; // [rsp+78h] [rbp-88h] BYREF
  _WORD *v88; // [rsp+80h] [rbp-80h] BYREF
  __int64 v89; // [rsp+88h] [rbp-78h]
  __int64 v90; // [rsp+90h] [rbp-70h]
  const WCHAR *v91; // [rsp+98h] [rbp-68h] BYREF
  PWSTR packageFullNames; // [rsp+A0h] [rbp-60h] BYREF
  struct Windows::Internal::String *v93; // [rsp+A8h] [rbp-58h]
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Str[136]; // [rsp+170h] [rbp+70h] BYREF
  WCHAR buffer[128]; // [rsp+280h] [rbp+180h] BYREF
  WCHAR pszPathOut[520]; // [rsp+380h] [rbp+280h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7D8h] [rbp+6D8h]

  v4 = a4;
  v93 = (struct Windows::Internal::String *)a4;
  v5 = a3;
  v91 = a3;
  v83 = 0LL;
  v82 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v7 = 0LL;
  v86 = 0LL;
  v84 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v83);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x441,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    Windows::Internal::String::~String(&v84);
    Windows::Internal::String::~String(&v86);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
    goto LABEL_80;
  }
  v10 = -1LL;
  v89 = -1LL;
  v90 = -1LL;
  v11 = 0LL;
  v88 = 0LL;
  packageFullNames = 0LL;
  LODWORD(bufferLength) = 128;
  count = 1;
  packageFamilyName[0] = 0;
  v12 = 130LL;
  v13 = Str;
  v14 = a2 - (char *)Str;
  do
  {
    if ( v12 == -2147483516 )
      break;
    v15 = *(wchar_t *)((char *)v13 + v14);
    if ( !v15 )
      break;
    *v13++ = v15;
    --v12;
  }
  while ( v12 );
  v16 = v13 - 1;
  if ( v12 )
    v16 = v13;
  *v16 = 0;
  v17 = -2147024362;
  if ( !v12 )
  {
    v19 = -2147024809;
    goto LABEL_31;
  }
  v18 = wcsrchr(Str, 0x21u);
  if ( Str[0] != 33 && v18 && v18[1] )
  {
    *v18 = 0;
    v39 = 65LL;
    v40 = packageFamilyName;
    do
    {
      if ( v39 == -2147483581 )
        break;
      v41 = v40[72];
      if ( !v41 )
        break;
      *v40++ = v41;
      --v39;
    }
    while ( v39 );
    v20 = v40 - 1;
    if ( v39 )
      v20 = v40;
    *v20 = 0;
    v19 = v39 == 0 ? 0x8007007A : 0;
  }
  else
  {
    v19 = -2147024809;
  }
  if ( v19 < 0 )
    goto LABEL_17;
  PackagesByPackageFamily = FindPackagesByPackageFamily(
                              packageFamilyName,
                              0x10u,
                              &count,
                              &packageFullNames,
                              (UINT32 *)&bufferLength,
                              buffer,
                              0LL);
  v19 = PackagesByPackageFamily;
  if ( PackagesByPackageFamily > 0 )
    v19 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
  if ( v19 < 0 )
    goto LABEL_17;
  if ( count == 1 )
  {
    v71 = -1LL;
    do
      ++v71;
    while ( buffer[v71] );
    v88 = 0LL;
    v72 = v71 + 1;
    if ( v71 + 1 < v71 )
    {
      v19 = -2147024362;
    }
    else
    {
      v88 = 0LL;
      if ( is_mul_ok(v72, 2uLL) )
      {
        v11 = CoTaskMemAlloc(2 * v72);
        v88 = v11;
        v63 = v11;
        if ( v11 )
          v19 = 0;
        else
          v19 = -2147024882;
      }
      else
      {
        v19 = -2147024362;
        v63 = 0LL;
      }
      if ( v19 >= 0 )
      {
        if ( !v63 && v71 != -1LL || v72 > 0x7FFFFFFF )
          goto LABEL_172;
        if ( v71 < 0x7FFFFFFF )
        {
          v64 = v71 + 1;
          v65 = v63;
          v66 = 0LL;
          do
          {
            if ( v64 == 1 )
              break;
            v67 = *(_WORD *)((char *)v65 + (char *)buffer - (char *)v63);
            if ( !v67 )
              break;
            *v65++ = v67;
            ++v66;
            --v64;
          }
          while ( v64 );
          v68 = v65 - 1;
          if ( v64 )
            v68 = v65;
          *v68 = 0;
          v69 = v66 - 1;
          if ( v64 )
            v69 = v66;
          v70 = v72 - v69;
          if ( v64 && v70 > 1 && 2 * v70 > 2 )
            memset_0(&v63[v69 + 1], 0, 2 * v70 - 2);
          goto LABEL_154;
        }
        if ( v71 != -1LL )
LABEL_172:
          *v63 = 0;
      }
    }
LABEL_154:
    v4 = (HSTRING *)v93;
    v5 = v91;
    goto LABEL_31;
  }
  v19 = -2147221165;
LABEL_31:
  if ( v19 < 0 )
  {
LABEL_17:
    if ( v84 )
      WindowsDeleteString(v84);
    if ( v11 )
      CoTaskMemFree(v11);
    v21 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return (unsigned int)v19;
  }
  if ( !v11 )
  {
    v19 = -2147467261;
LABEL_108:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x446,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v19);
    Windows::Internal::String::~String(&v84);
    Windows::Internal::String::~String(&v86);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
    v53 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v83);
    return (unsigned int)v19;
  }
  bufferLength = 0LL;
  v26 = -1LL;
  do
    ++v26;
  while ( v11[v26] );
  if ( v26 > 0xFFFFFFFF )
  {
    v19 = -2147024362;
  }
  else
  {
    v19 = WindowsCreateString(v11, v26, &bufferLength);
    if ( v19 >= 0 )
    {
      v7 = bufferLength;
      v86 = bufferLength;
      WindowsDeleteString(0LL);
    }
  }
  if ( v19 < 0 )
    goto LABEL_108;
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v83 + 368LL))(v83, 0LL, v7, &v82);
  v28 = v27;
  if ( v27 != -2147023728 )
  {
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44A,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v27);
      Windows::Internal::String::~String(&v84);
      Windows::Internal::String::~String(&v86);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
      v74 = v80;
      if ( v80 )
      {
        v80 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
      }
      v75 = v81;
      if ( v81 )
      {
        v81 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      }
      goto LABEL_79;
    }
    if ( WindowsCreateStringReference(
           L"Windows.Internal.StateRepository.PackageLocation",
           0x30u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v29 = RoGetActivationFactory(string, &GUID_b8c8be3c_3a39_4e73_b4ba_c70d91d1b8ea, &v81);
    v19 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44C,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v29);
      if ( v84 )
        WindowsDeleteString(v84);
      if ( v7 )
        WindowsDeleteString(v7);
      CoTaskMemFree(v11);
      v55 = v80;
      if ( v80 )
      {
        v80 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v81;
      if ( v81 )
      {
        v81 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = v82;
      if ( v82 )
      {
        v82 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
    else
    {
      v30 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v81 + 96LL))(v81, v82, &v80);
      v19 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44E,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v30);
        if ( v84 )
          WindowsDeleteString(v84);
        if ( v7 )
          WindowsDeleteString(v7);
        CoTaskMemFree(v11);
        v59 = v80;
        if ( v80 )
        {
          v80 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
        }
        v60 = v81;
        if ( v81 )
        {
          v81 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
        }
        v61 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
        }
        v62 = v83;
        if ( v83 )
        {
          v83 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
        }
      }
      else
      {
        v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v80 + 88LL))(v80, &v84);
        v19 = v31;
        if ( v31 >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(v84, 0LL);
          if ( v5 )
          {
            v33 = PathCchCombine(pszPathOut, 0x208uLL, StringRawBuffer, v5);
            v28 = v33;
            if ( v33 >= 0 )
            {
              bufferLength = 0LL;
              do
                ++v10;
              while ( pszPathOut[v10] );
              if ( v10 <= 0xFFFFFFFF )
              {
                v17 = WindowsCreateString(pszPathOut, v10, &bufferLength);
                if ( v17 >= 0 )
                {
                  v34 = *v4;
                  *v4 = bufferLength;
                  WindowsDeleteString(v34);
LABEL_53:
                  if ( v84 )
                    WindowsDeleteString(v84);
                  if ( v7 )
                    WindowsDeleteString(v7);
                  CoTaskMemFree(v11);
                  v35 = v80;
                  if ( v80 )
                  {
                    v80 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                  }
                  v36 = v81;
                  if ( v81 )
                  {
                    v81 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                  }
                  v37 = v82;
                  if ( v82 )
                  {
                    v82 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                  }
                  v38 = v83;
                  if ( v83 )
                  {
                    v83 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
                  }
                  return 0LL;
                }
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x456,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                (const char *)(unsigned int)v17);
              Windows::Internal::String::~String(&v84);
              Windows::Internal::String::~String(&v86);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
              v78 = v80;
              if ( v80 )
              {
                v80 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
              }
              v79 = v81;
              if ( v81 )
              {
                v81 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
              }
              v9 = v17;
LABEL_80:
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v83);
              return v9;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x454,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
              (const char *)(unsigned int)v33);
            Windows::Internal::String::~String(&v84);
            Windows::Internal::String::~String(&v86);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
            v76 = v80;
            if ( v80 )
            {
              v80 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
            }
            v77 = v81;
            if ( v81 )
            {
              v81 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
            }
          }
          else
          {
            v91 = StringRawBuffer;
            v42 = Windows::Internal::String::Initialize<unsigned short const *>(v4, &v91);
            v28 = v42;
            if ( v42 >= 0 )
              goto LABEL_53;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x45A,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
              (const char *)(unsigned int)v42);
            Windows::Internal::String::~String(&v84);
            Windows::Internal::String::~String(&v86);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
            v43 = v80;
            if ( v80 )
            {
              v80 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
            }
            v44 = v81;
            if ( v81 )
            {
              v81 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            }
          }
LABEL_79:
          v9 = v28;
          goto LABEL_80;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x450,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v31);
        if ( v84 )
          WindowsDeleteString(v84);
        if ( v7 )
          WindowsDeleteString(v7);
        CoTaskMemFree(v11);
        v49 = v80;
        if ( v80 )
        {
          v80 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        }
        v50 = v81;
        if ( v81 )
        {
          v81 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        }
        v51 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        }
        v52 = v83;
        if ( v83 )
        {
          v83 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    return (unsigned int)v19;
  }
  if ( v84 )
    WindowsDeleteString(v84);
  if ( v7 )
    WindowsDeleteString(v7);
  CoTaskMemFree(v11);
  v45 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = v81;
  if ( v81 )
  {
    v81 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
  v47 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  v48 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  return 2147943568LL;
}
