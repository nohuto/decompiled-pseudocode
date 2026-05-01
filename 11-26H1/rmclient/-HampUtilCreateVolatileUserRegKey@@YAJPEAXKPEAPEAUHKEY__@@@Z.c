/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18000CC34
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000CB14 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z @ 0x18000CD58 (-HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(void *a1, unsigned int a2, HKEY *a3, unsigned __int16 a4)
{
  signed int v5; // ebx
  LSTATUS v6; // eax
  HKEY v7; // rcx
  HKEY phkResult; // [rsp+50h] [rbp-228h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-220h] BYREF
  unsigned __int16 v11[256]; // [rsp+60h] [rbp-218h] BYREF

  hKey = 0LL;
  phkResult = 0LL;
  v5 = HampUtilCreateUserRegKey(a1, a2, (const unsigned __int16 *)a3, a4, v11, &hKey);
  if ( v5 < 0 )
    goto LABEL_11;
  v6 = RegCreateKeyExW(hKey, L"Volatile", 0, 0LL, 1u, 1u, 0LL, &phkResult, 0LL);
  v5 = v6;
  if ( v6 > 0 )
    v5 = (unsigned __int16)v6 | 0xC0070000;
  if ( v5 < 0 )
  {
LABEL_11:
    v7 = phkResult;
  }
  else
  {
    v7 = 0LL;
    *a3 = phkResult;
    v5 = 0;
    phkResult = 0LL;
  }
  if ( v7 )
    RegCloseKey(v7);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v5;
}
