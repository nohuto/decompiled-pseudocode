/*
 * XREFs of ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x1800C32D8
 * Callers:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800C4240 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 */

__int64 __fastcall CortanaExperienceHelpers::SetCortanaRegKey(LPCWSTR lpValueName, const unsigned __int16 *a2)
{
  HKEY *phkResult; // rax
  LSTATUS Key; // eax
  unsigned int v5; // ebx
  LSTATUS v6; // eax
  int Data; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+20h] BYREF

  Data = (int)a2;
  hKey = 0LL;
  phkResult = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Cortana",
          0,
          0LL,
          0,
          2u,
          0LL,
          phkResult,
          0LL);
  v5 = Key;
  if ( Key )
  {
    if ( Key > 0 )
      v5 = (unsigned __int16)Key | 0x80070000;
    if ( hKey )
      RegCloseKey(hKey);
    return v5;
  }
  v6 = RegSetValueExW(hKey, lpValueName, 0, 4u, (const BYTE *)&Data, 4u);
  v5 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v5 = (unsigned __int16)v6 | 0x80070000;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    return v5;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
