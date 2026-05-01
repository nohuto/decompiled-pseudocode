/*
 * XREFs of ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1801F8984
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800D0C14 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002C6F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800AAD0C (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800F660C (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180117530 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1801F8C84 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804EEFF8 (--$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA-AV-$com_pt.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1804EFA08 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall KioskPositioner::LoadAssignedAccessConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  int v20; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v21; // [rsp+28h] [rbp-41h] BYREF
  __int64 *v22; // [rsp+30h] [rbp-39h] BYREF
  __int64 v23; // [rsp+38h] [rbp-31h] BYREF
  HLOCAL hMem; // [rsp+40h] [rbp-29h] BYREF
  int v25; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v26; // [rsp+50h] [rbp-19h] BYREF
  HSTRING string; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v28; // [rsp+60h] [rbp-9h] BYREF
  const WCHAR *v29[3]; // [rsp+68h] [rbp-1h] BYREF
  char v30; // [rsp+80h] [rbp+17h]
  HSTRING_HEADER v31; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v29[0] = (const WCHAR *)a2;
  KioskPositioner::GetUserSidString(a1, &hMem, -4LL);
  if ( (unsigned int)IsUserSidAssignedAccessSingleAppClassicApp((unsigned __int16 *)hMem) )
  {
    v29[2] = 0LL;
    v30 = 0;
    wil::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>(&v28);
    v23 = 0LL;
    v3 = *v28;
    v23 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 56))(v28, &v23);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x454,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v4,
        v20);
    v21 = 0LL;
    v6 = v23;
    v7 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v23 + 72LL);
    v21 = 0LL;
    v29[0] = (const WCHAR *)hMem;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, v29, v5);
    v9 = v7(v6, v8[1].Reserved.Reserved1, (__int64 *)&v21);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x456,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v9,
        v20);
    if ( !v21 )
      goto LABEL_24;
    LOBYTE(v20) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v21 + 88))(v21, &v20);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45C,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v10,
        v20);
    if ( (_BYTE)v20 )
    {
      v26 = 0LL;
      v11 = *v21;
      v26 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v11 + 120))(v21, &v26);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x462,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v12,
          v20);
      v22 = 0LL;
      v13 = *v26;
      v22 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v13 + 48))(v26, 0LL, &v22);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x464,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v14,
          v20);
      v25 = 0;
      v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v22 + 64))(v22, &v25);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x466,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v15,
          v20);
      if ( v25 == 3 )
      {
        string = 0LL;
        v16 = *v22;
        string = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v16 + 48))(v22, &string);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x46C,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
            (const char *)(unsigned int)v17,
            v20);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v29[0] = (const WCHAR *)operator new(0x28uLL);
        *(_QWORD *)a2 = Win32PrimaryAppProxy::Win32PrimaryAppProxy((Win32PrimaryAppProxy *)v29[0], StringRawBuffer);
        *(_BYTE *)(a2 + 8) = 1;
        *(_BYTE *)(a2 + 16) = 1;
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
      }
      else
      {
        *(_BYTE *)(a2 + 16) = 0;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    }
    else
    {
LABEL_24:
      *(_BYTE *)(a2 + 16) = 0;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&hMem);
  }
  else
  {
    *(_BYTE *)(a2 + 16) = 0;
    if ( hMem )
      LocalFree(hMem);
  }
  return a2;
}
