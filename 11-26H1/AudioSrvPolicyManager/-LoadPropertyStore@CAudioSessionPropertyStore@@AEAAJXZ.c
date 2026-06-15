/*
 * XREFs of ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x180003488
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUHKEY__@@@Z @ 0x1800032E8 (--$MakeAndInitialize@VCAudioSessionPropertyStore@@UIPropertyStore@@AEAPEAUHKEY__@@@Details@WRL@M.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180004A60 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x180004A84 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800286A0 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@Upropstoreinfo_tag@@U?$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ @ 0x18002EA80 (--1-$unique_ptr@Upropstoreinfo_tag@@U-$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180035144 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x18003D8E0 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x18003E030 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18003E0AC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x18003E124 (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::LoadPropertyStore(CAudioSessionPropertyStore *this)
{
  CAudioSessionPropertyStore *v1; // r13
  unsigned int v2; // r12d
  DWORD v3; // r15d
  unsigned int v4; // eax
  HRESULT v5; // eax
  unsigned int v6; // ebx
  RPC_STATUS v7; // eax
  HKEY v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  WCHAR *v12; // r14
  __int64 v13; // rsi
  DWORD i; // ecx
  unsigned int v15; // eax
  char *v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // xmm0_8
  unsigned __int64 v19; // r13
  __int64 v20; // rbx
  int v21; // r15d
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  SAFEARRAY *v24; // rbx
  char *v25; // rax
  const unsigned __int16 *v26; // r15
  int v27; // eax
  LPVOID v28; // rax
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rdx
  const char *v32; // r15
  int v33; // eax
  LPVOID v34; // rax
  int v35; // eax
  BSTR v36; // rax
  bool v37; // sf
  __int64 v38; // rdx
  int v39; // edi
  SAFEARRAY *v40; // rbx
  __int64 v41; // rdx
  SAFEARRAY *v42; // rbx
  SAFEARRAY *v43; // rbx
  int lpReserved; // [rsp+28h] [rbp-E0h]
  int lpReserveda; // [rsp+28h] [rbp-E0h]
  int lpReservedb; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR *v49; // [rsp+70h] [rbp-98h] BYREF
  SAFEARRAY *psa; // [rsp+78h] [rbp-90h] BYREF
  char *v51; // [rsp+80h] [rbp-88h] BYREF
  HKEY hKey; // [rsp+88h] [rbp-80h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+90h] [rbp-78h] BYREF
  DWORD cbMaxValueLen; // [rsp+94h] [rbp-74h] BYREF
  DWORD cchName; // [rsp+98h] [rbp-70h] BYREF
  DWORD cbData; // [rsp+9Ch] [rbp-6Ch] BYREF
  DWORD cValues; // [rsp+A0h] [rbp-68h] BYREF
  DWORD v58; // [rsp+A4h] [rbp-64h]
  DWORD v59; // [rsp+A8h] [rbp-60h]
  int v60; // [rsp+ACh] [rbp-5Ch] BYREF
  char v61[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 j; // [rsp+B8h] [rbp-50h]
  CAudioSessionPropertyStore *v63; // [rsp+C0h] [rbp-48h]
  GUID pclsid; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR Name[104]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v1 = this;
  v63 = this;
  v2 = 0;
  v3 = 0;
LABEL_2:
  v59 = v3;
  cchName = 100;
  v4 = RegEnumKeyExW(*((HKEY *)v1 + 7), v3, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
  if ( v4 == 259 )
    return 0LL;
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x354,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v4);
  pclsid = 0LL;
  v5 = CLSIDFromString(Name, &pclsid);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x357,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v5,
      lpReserved);
  }
  else
  {
    hKey = 0LL;
    v7 = RpcImpersonateClient(0LL);
    v6 = v7;
    if ( v7 && v7 != 1725 )
    {
      v37 = v7 < 0;
      if ( v7 > 0 )
      {
        v6 = (unsigned __int16)v7 | 0x80070000;
        v37 = 1;
      }
      if ( v37 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35F,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v6,
          lpReserved);
      goto LABEL_91;
    }
    v8 = hKey;
    if ( hKey )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)v61);
      RegCloseKey(v8);
      wil::last_error_context::~last_error_context((wil::last_error_context *)v61);
    }
    hKey = 0LL;
    v9 = RegOpenKeyExW(*((HKEY *)v1 + 7), Name, 0, 0x20019u, &hKey);
    if ( v9 )
    {
      v39 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x361,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)v9);
      if ( !v6 )
        RpcRevertToSelf();
      goto LABEL_90;
    }
    if ( !v6 )
      RpcRevertToSelf();
    cValues = 0;
    cbMaxValueNameLen = 0;
    cbMaxValueLen = 0;
    v10 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL);
    if ( v10 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x368,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v10);
      goto LABEL_91;
    }
    v11 = 2LL * ++cbMaxValueNameLen;
    if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
      v11 = -1LL;
    v12 = (WCHAR *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v49 = v12;
    if ( v12 )
    {
      v13 = (__int64)operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
      v48 = v13;
      if ( v13 )
      {
        for ( i = 0; ; i = v58 + 1 )
        {
          v58 = i;
          if ( i >= cValues
            || (cchName = cbMaxValueNameLen,
                cbData = cbMaxValueLen,
                v15 = RegEnumValueW(hKey, i, v12, &cchName, 0LL, 0LL, (LPBYTE)v13, &cbData),
                v15 == 259) )
          {
            Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v48);
            std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v49);
            wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
            v3 = v59 + 1;
            goto LABEL_2;
          }
          if ( v15 )
          {
            v6 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0x37A,
                   (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                   (const char *)v15);
            operator delete((void *)v13, (const struct std::nothrow_t *)1);
            operator delete(v12, (const struct std::nothrow_t *)2);
            goto LABEL_85;
          }
          v16 = (char *)operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v51 = v16;
          if ( !v16 )
          {
            v31 = 893LL;
            goto LABEL_79;
          }
          *((_QWORD *)v16 + 6) = *((_QWORD *)v1 + 6);
          *((_DWORD *)v16 + 4) = _o__wtoi(v12);
          *(GUID *)v16 = pclsid;
          v18 = *(_QWORD *)(v13 + 16);
          *(_OWORD *)(v16 + 24) = *(_OWORD *)v13;
          *((_QWORD *)v16 + 5) = v18;
          switch ( *((_WORD *)v16 + 12) )
          {
            case 8:
              v36 = SysAllocString((const OLECHAR *)(v13 + *((_QWORD *)v16 + 4)));
              *((_QWORD *)v16 + 4) = v36;
              if ( !v36 )
              {
                v31 = 974LL;
                goto LABEL_79;
              }
              break;
            case 0x1E:
              psa = 0LL;
              v32 = (const char *)(v13 + *((_QWORD *)v16 + 4));
              v33 = StringCbLengthA(v32, v17, (unsigned __int64 *)&psa);
              v6 = v33;
              if ( v33 < 0 )
              {
                v30 = (unsigned int)v33;
                v31 = 982LL;
                goto LABEL_80;
              }
              v34 = CoTaskMemAlloc((SIZE_T)psa);
              if ( !v34 )
              {
                v31 = 985LL;
LABEL_79:
                v6 = -2147024882;
                v30 = 2147942414LL;
                goto LABEL_80;
              }
              *((_QWORD *)v16 + 4) = v34;
              v35 = StringCchCopyA(0LL, (unsigned __int64)psa, v32);
              v6 = v35;
              if ( v35 < 0 )
              {
                v30 = (unsigned int)v35;
                v31 = 988LL;
                goto LABEL_80;
              }
              break;
            case 0x1F:
              psa = 0LL;
              v26 = (const unsigned __int16 *)(v13 + *((_QWORD *)v16 + 4));
              v27 = StringCbLengthW(v26, 0x7FFFFFFFuLL, (unsigned __int64 *)&psa);
              v6 = v27;
              if ( v27 < 0 )
              {
                v30 = (unsigned int)v27;
                v31 = 958LL;
                goto LABEL_80;
              }
              v28 = CoTaskMemAlloc((SIZE_T)psa);
              if ( !v28 )
              {
                v31 = 961LL;
                goto LABEL_79;
              }
              *((_QWORD *)v16 + 4) = v28;
              v29 = StringCbCopyW(0LL, (unsigned __int64)psa, v26);
              v6 = v29;
              if ( v29 < 0 )
              {
                v30 = (unsigned int)v29;
                v31 = 964LL;
LABEL_80:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v31,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                  (const char *)v30,
                  lpReservedb);
                std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v51);
                goto LABEL_83;
              }
              break;
            case 0x41:
            case 0x46:
              v25 = (char *)CoTaskMemAlloc(*((unsigned int *)v16 + 8));
              if ( !v25 )
              {
                v31 = 908LL;
                goto LABEL_79;
              }
              *((_QWORD *)v16 + 5) = v25;
              memcpy_0(0LL, &v25[v13], *((unsigned int *)v16 + 8));
              break;
            case 0x2004:
              v19 = ((unsigned __int64)cbData - 24) >> 2;
              if ( (((_BYTE)cbData - 24) & 3) == 0 )
              {
                v20 = *((_QWORD *)v16 + 4);
                psa = 0LL;
                v21 = ATL::CComSafeArray<float,4>::Create(&psa, (unsigned int)v19);
                if ( v21 < 0 )
                {
                  v38 = 934LL;
LABEL_67:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v38,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                    (const char *)(unsigned int)v21,
                    lpReservedb);
                  v43 = psa;
                  if ( psa )
                  {
                    if ( SafeArrayUnlock(psa) >= 0 )
                      SafeArrayDestroy(v43);
                  }
                  std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v51);
                  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v48);
                  std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v49);
                  v6 = v21;
                }
                else
                {
                  v22 = v13 + v20 + 4;
                  v23 = -v13;
                  for ( j = -v13; ; v23 = j )
                  {
                    if ( v2 >= v19 )
                    {
                      v24 = psa;
                      SafeArrayUnlock(psa);
                      *((_QWORD *)v16 + 4) = v24;
                      v1 = v63;
                      v2 = 0;
                      goto LABEL_49;
                    }
                    if ( v22 < 4 )
                      break;
                    if ( v22 < v13 )
                    {
                      v41 = 941LL;
                      goto LABEL_62;
                    }
                    if ( v22 + v23 > cbData )
                    {
                      v39 = -2147024809;
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x3AF,
                        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                        (const char *)0x80070057LL,
                        lpReservedb);
                      v40 = psa;
                      if ( psa && SafeArrayUnlock(psa) >= 0 )
                        SafeArrayDestroy(v40);
                      goto LABEL_59;
                    }
                    v60 = *(_DWORD *)(v22 - 4);
                    v21 = ATL::CComSafeArray<float,4>::SetAt(&psa, v2, &v60);
                    if ( v21 < 0 )
                    {
                      v38 = 946LL;
                      goto LABEL_67;
                    }
                    v22 += 4LL;
                    ++v2;
                  }
                  v41 = 939LL;
LABEL_62:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v41,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                    (const char *)0x80070216LL,
                    lpReservedb);
                  v42 = psa;
                  if ( psa && SafeArrayUnlock(psa) >= 0 )
                    SafeArrayDestroy(v42);
                  std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v51);
                  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v48);
                  std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v49);
                  v6 = -2147024362;
                }
                goto LABEL_91;
              }
              v39 = -2147024809;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3A2,
                (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                (const char *)0x80070057LL,
                lpReservedb);
LABEL_59:
              std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v51);
              Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v48);
              std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v49);
LABEL_90:
              v6 = v39;
              goto LABEL_91;
          }
LABEL_49:
          *((_QWORD *)v1 + 6) = v16;
        }
      }
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x370,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL,
        lpReserveda);
LABEL_83:
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v48);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v49);
LABEL_91:
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    }
    else
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36D,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL,
        lpReserveda);
LABEL_85:
      if ( hKey )
        RegCloseKey(hKey);
    }
  }
  return v6;
}
