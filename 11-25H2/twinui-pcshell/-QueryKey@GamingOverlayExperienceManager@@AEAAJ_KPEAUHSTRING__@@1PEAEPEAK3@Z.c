/*
 * XREFs of ?QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z @ 0x18034D708
 * Callers:
 *     ?QueryKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAK@Z @ 0x18034D820 (-QueryKeyDWord@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAK@Z.c)
 *     ?QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z @ 0x18034D920 (-QueryKeyString@GamingOverlayExperienceManager@@UEAAJ_KPEAUHSTRING__@@1PEAPEAU2@@Z.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::QueryKey(
        GamingOverlayExperienceManager *this,
        HKEY a2,
        HSTRING a3,
        HSTRING a4,
        unsigned __int8 *lpData,
        unsigned int *lpcbData,
        unsigned int *lpType)
{
  HKEY *phkResult; // rbx
  const WCHAR *StringRawBuffer; // rax
  unsigned int Value; // eax
  __int64 v13; // rdx
  const WCHAR *v14; // rax
  unsigned int v15; // ebx
  HKEY hKey; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  hKey = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  Value = RegOpenKeyExW(a2, StringRawBuffer, 0, 0x20019u, phkResult);
  if ( Value )
  {
    v13 = 2235LL;
  }
  else
  {
    v14 = WindowsGetStringRawBuffer(a4, 0LL);
    Value = RegQueryValueExW(hKey, v14, 0LL, lpType, lpData, lpcbData);
    if ( !Value )
    {
      v15 = 0;
      goto LABEL_7;
    }
    v13 = 2243LL;
  }
  v15 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)Value);
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v15;
}
