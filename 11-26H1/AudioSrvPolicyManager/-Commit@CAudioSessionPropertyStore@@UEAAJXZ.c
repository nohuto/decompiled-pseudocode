/*
 * XREFs of ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180003F70
 * Callers:
 *     ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x180003E70 (--1CAudioSessionPropertyStore@@EEAA@XZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _lambda_e1a11bc3ee8655867b11559744636b64_::operator() @ 0x1800042BC (_lambda_e1a11bc3ee8655867b11559744636b64_--operator().c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800049D0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180004A60 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionPropertyStore::Commit(CAudioSessionPropertyStore *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rsi
  HRESULT v4; // eax
  unsigned int v5; // edi
  RPC_STATUS v6; // eax
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // eax
  BYTE *v10; // r15
  HKEY v11; // rdi
  unsigned int v12; // eax
  unsigned int v14; // eax
  bool v15; // sf
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int lpData; // [rsp+20h] [rbp-69h]
  HKEY hKey; // [rsp+30h] [rbp-59h] BYREF
  BYTE *v20; // [rsp+38h] [rbp-51h] BYREF
  LPOLESTR lpsz; // [rsp+40h] [rbp-49h] BYREF
  DWORD cbData[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v23; // [rsp+50h] [rbp-39h] BYREF
  DWORD *v24; // [rsp+58h] [rbp-31h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v26[4]; // [rsp+68h] [rbp-21h] BYREF
  WCHAR ValueName[20]; // [rsp+88h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v25 = v2;
  if ( *((_BYTE *)this + 88) )
  {
    v3 = *((_QWORD *)this + 4);
    while ( 1 )
    {
      if ( !v3 )
      {
        *((_BYTE *)this + 88) = 0;
        goto LABEL_20;
      }
      lpsz = 0LL;
      v4 = StringFromCLSID((const IID *const)v3, &lpsz);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x236,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v4,
          lpData);
        goto LABEL_26;
      }
      hKey = 0LL;
      v6 = RpcImpersonateClient(0LL);
      v5 = v6;
      if ( v6 && v6 != 1725 )
      {
        v15 = v6 < 0;
        if ( v6 > 0 )
        {
          v5 = (unsigned __int16)v6 | 0x80070000;
          v15 = 1;
        }
        if ( v15 )
        {
          v16 = v5;
          v17 = 575LL;
          goto LABEL_34;
        }
LABEL_25:
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
        goto LABEL_26;
      }
      v7 = CreateLowRightsRegistryKey(*((HKEY *)this + 5), lpsz, 0x20006u, &hKey);
      v8 = v7;
      if ( v7 < 0 )
        break;
      if ( !v5 )
        RpcRevertToSelf();
      v9 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *(unsigned int *)(v3 + 16));
      v5 = v9;
      if ( v9 < 0 )
      {
        v16 = (unsigned int)v9;
        v17 = 581LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v16,
          lpData);
        goto LABEL_25;
      }
      if ( *(_WORD *)(v3 + 24) )
      {
        v24 = cbData;
        v23 = v3 + 24;
        *(_QWORD *)cbData = 0LL;
        v20 = 0LL;
        v26[0] = (char *)this - 16;
        v26[1] = &v23;
        v26[2] = &v24;
        v26[3] = &v20;
        lambda_e1a11bc3ee8655867b11559744636b64_::operator()(v26);
        v10 = v20;
        if ( !v20 )
        {
          v5 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24F,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x8007000ELL,
            lpData);
LABEL_24:
          Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v20);
          goto LABEL_25;
        }
        v11 = hKey;
        v12 = RegSetValueExW(hKey, ValueName, 0, 3u, v20, cbData[0]);
        if ( v12 )
        {
          v5 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x251,
                 (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                 (const char *)v12);
          goto LABEL_24;
        }
        operator delete(v10, (const struct std::nothrow_t *)1);
      }
      else
      {
        v11 = hKey;
        v14 = RegDeleteValueW(hKey, ValueName);
        if ( v14 )
        {
          v5 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x249,
                 (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                 (const char *)v14);
          goto LABEL_25;
        }
      }
      v3 = *(_QWORD *)(v3 + 48);
      if ( v11 )
        RegCloseKey(v11);
      if ( lpsz )
        CoTaskMemFree(lpsz);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v7,
      lpData);
    if ( !v5 )
      RpcRevertToSelf();
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    v5 = v8;
LABEL_26:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&lpsz);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
    return v5;
  }
  else
  {
LABEL_20:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
