/*
 * XREFs of ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1806B53E8
 * Callers:
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x1806B4DE8 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 * Callees:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180047744 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x180211818 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WindowsDeleteString_0 @ 0x1802CA6C2 (WindowsDeleteString_0.c)
 *     ?_EnsureCount@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18067585C (-_EnsureCount@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x1806AB6C4 (--0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1806B6430 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@Q.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlAllUpViewController::GetTabletModeContextMenuItemString(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        unsigned int a3,
        HSTRING *a4)
{
  int v7; // r14d
  unsigned __int16 **v8; // r8
  int ViewTitle; // eax
  const WCHAR *v10; // rdi
  WCHAR *v11; // rax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  HSTRING *v15; // r8
  HSTRING v16; // rbx
  HSTRING *v17; // r8
  HSTRING v18; // rcx
  LPCWSTR lpsz; // [rsp+20h] [rbp-49h] BYREF
  __int64 v20; // [rsp+28h] [rbp-41h]
  __int64 v21; // [rsp+30h] [rbp-39h]
  HSTRING__ v22[2]; // [rsp+38h] [rbp-31h] BYREF
  HSTRING string; // [rsp+40h] [rbp-29h] BYREF
  PCNZWCH sourceString; // [rsp+48h] [rbp-21h] BYREF
  UINT32 length[2]; // [rsp+50h] [rbp-19h]
  __int64 v26; // [rsp+58h] [rbp-11h]
  HSTRING v27; // [rsp+60h] [rbp-9h]
  WCHAR Buffer[12]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  LoadStringW(&_ImageBase, 0x5E7u, Buffer, 10);
  v7 = wcstol(Buffer, 0LL, 10);
  if ( !v7 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x205,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)0x8000FFFFLL,
      (int)lpsz);
  lpsz = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpsz);
  v20 = -1LL;
  v21 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, (unsigned __int16 **)&lpsz, v8);
  if ( ViewTitle < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x209,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)ViewTitle,
      (int)lpsz);
  v10 = lpsz;
  lpsz = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v11 = (WCHAR *)v10;
  v12 = 0;
  while ( *v11 )
  {
    v11 = CharNextW(v11);
    if ( ++v12 == v7 )
    {
      if ( *v11 )
        *(_DWORD *)v11 = 8230;
      break;
    }
  }
  lpsz = v10;
  v21 = -1LL;
  v20 = -1LL;
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v26 = 0LL;
  string = 0LL;
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeResFormat(
          &sourceString,
          &_ImageBase,
          a3,
          v10);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x221,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v13,
      (int)lpsz);
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  WindowsCreateString(sourceString, length[0], &string);
  *(_QWORD *)&v22[0].unused = 0LL;
  v16 = Platform::String::String(v14, (Platform::Details *)string, v15);
  v27 = v16;
  v18 = *a4;
  if ( *a4 != v16 )
  {
    if ( v18 )
      WindowsDeleteString_0(v18);
    *a4 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)&v22[0].unused = 0LL;
      Platform::Details::DuplicateString((Platform::Details *)v16, (HSTRING *)v22, v17);
      *a4 = *(HSTRING *)&v22[0].unused;
    }
  }
  WindowsDeleteString_0(v16);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpsz);
}
