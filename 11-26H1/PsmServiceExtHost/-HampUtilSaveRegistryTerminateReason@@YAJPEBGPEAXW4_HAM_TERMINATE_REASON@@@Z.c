/*
 * XREFs of ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x18005640C
 * Callers:
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800562F0 (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18005681C (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilSaveRegistryTerminateReason(__int64 a1, void *a2, int a3)
{
  signed int v4; // ebx
  LSTATUS v5; // eax
  LSTATUS v7; // eax
  BYTE Data[8]; // [rsp+30h] [rbp-148h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-140h] BYREF
  int v10[4]; // [rsp+40h] [rbp-138h] BYREF
  WCHAR ValueName[136]; // [rsp+50h] [rbp-128h] BYREF

  *(_DWORD *)Data = a3;
  v10[0] = 130;
  hKey = 0LL;
  PsmGetAumidFromKey(a1, v10, ValueName);
  v4 = HampUtilCreateVolatileUserRegKey(a2, 0x20006u, &hKey);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)Data )
    {
      v7 = RegSetValueExW(hKey, ValueName, 0, 4u, Data, 4u);
      v4 = v7;
      if ( v7 > 0 )
        v4 = (unsigned __int16)v7 | 0xC0070000;
    }
    else
    {
      v5 = RegDeleteValueW(hKey, ValueName);
      v4 = v5;
      if ( v5 > 0 )
        v4 = (unsigned __int16)v5 | 0xC0070000;
      if ( v4 == -1073283070 )
        v4 = 279;
    }
    if ( v4 >= 0 )
      v4 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
