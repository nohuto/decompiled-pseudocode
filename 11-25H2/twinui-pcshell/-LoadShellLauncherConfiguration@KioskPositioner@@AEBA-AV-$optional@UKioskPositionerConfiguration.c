/*
 * XREFs of ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1804DEA24
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800E5EAC (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800BB8A8 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180218580 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804DCAF4 (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1804DD3E0 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall KioskPositioner::LoadShellLauncherConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 *StringRawBuffer; // rsi
  Win32PrimaryAppProxy *v11; // rdi
  int v12; // eax
  bool v13; // al
  int v15; // [rsp+20h] [rbp-30h]
  HSTRING string; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-20h] BYREF
  Win32PrimaryAppProxy *v18; // [rsp+38h] [rbp-18h]
  Win32PrimaryAppProxy *v19; // [rsp+40h] [rbp-10h]
  char v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  int v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v24; // [rsp+98h] [rbp+48h] BYREF

  v22 = a1;
  if ( IsShellLauncherEnabledForCurrentUser(a1) )
  {
    v19 = 0LL;
    v20 = 0;
    wil::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>((__int64)&v17, v3, v4);
    v24 = 0LL;
    v5 = *v17;
    v24 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v5 + 48))(v17, 0LL, &v24);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x435,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v6,
        v15);
    v23 = -1;
    v7 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v24 + 80))(v24, &v23);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x437,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v7,
        v15);
    string = 0LL;
    v8 = *v24;
    string = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v8 + 64))(v24, &string);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x439,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v9,
        v15);
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
    if ( v23 == 1 )
    {
      v18 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
      v11 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v18, StringRawBuffer);
    }
    else
    {
      v11 = (Win32PrimaryAppProxy *)operator new(0x50uLL);
      v18 = v11;
      *(_QWORD *)v11 = &UwpPrimaryAppProxy::`vftable';
      std::wstring::wstring((char **)v11 + 1, StringRawBuffer);
      *((_QWORD *)v11 + 5) = 0LL;
      *((_QWORD *)v11 + 6) = 0LL;
      *((_QWORD *)v11 + 7) = 0LL;
      *((_QWORD *)v11 + 8) = 0LL;
      *((_QWORD *)v11 + 9) = -1LL;
    }
    v19 = v11;
    LOBYTE(v22) = 0;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v24 + 96))(v24, &v22);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x444,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v12,
        v15);
    v13 = (_BYTE)v22 != 0;
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = v13;
    *(_BYTE *)(a2 + 16) = 1;
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
  }
  else
  {
    *(_BYTE *)(a2 + 16) = 0;
  }
  return a2;
}
