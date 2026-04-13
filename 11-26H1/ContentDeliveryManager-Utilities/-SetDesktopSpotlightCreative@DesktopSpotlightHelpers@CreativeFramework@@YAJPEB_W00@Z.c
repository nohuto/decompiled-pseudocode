/*
 * XREFs of ?SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z @ 0x1800A534C
 * Callers:
 *     ?Stage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A55E0 (-Stage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029DFC (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800579DC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x180091158 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::DesktopSpotlightHelpers::SetDesktopSpotlightCreative(
        _WORD *lpData,
        _WORD *a2,
        _WORD *a3,
        const wchar_t *a4)
{
  unsigned __int64 v7; // rbx
  unsigned int Key; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SubKey[256]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  hKey[0] = 0LL;
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Spotlight",
          0,
          0LL,
          0,
          0xF003Fu,
          0LL,
          hKey,
          0LL);
  if ( Key )
  {
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           79LL,
           (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)Key);
  }
  else
  {
    v10 = StringCchPrintfW(SubKey, 255LL, L"%llu", v7);
    v9 = v10;
    if ( v10 >= 0 )
    {
      phkResult = 0LL;
      v11 = RegCreateKeyExW(hKey[0], SubKey, 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
      if ( v11 )
      {
        v12 = 84LL;
      }
      else
      {
        v13 = -1LL;
        v14 = -1LL;
        do
          ++v14;
        while ( lpData[v14] );
        v11 = RegSetKeyValueW(phkResult, 0LL, L"contentId", 1u, lpData, 2 * v14);
        if ( v11 )
        {
          v12 = 85LL;
        }
        else
        {
          v15 = -1LL;
          do
            ++v15;
          while ( a2[v15] );
          v11 = RegSetKeyValueW(phkResult, 0LL, L"landscapeImage", 1u, a2, 2 * v15);
          if ( v11 )
          {
            v12 = 86LL;
          }
          else
          {
            do
              ++v13;
            while ( a3[v13] );
            v11 = RegSetKeyValueW(phkResult, 0LL, L"portraitImage", 1u, a3, 2 * v13);
            if ( !v11 )
            {
              wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
              v9 = 0;
              goto LABEL_20;
            }
            v12 = 87LL;
          }
        }
      }
      v9 = wil::details::in1diag3::Return_Win32(
             retaddr,
             v12,
             (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
             (const char *)v11);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
        (const char *)(unsigned int)v10);
    }
  }
LABEL_20:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
  return v9;
}
