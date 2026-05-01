/*
 * XREFs of ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000D360
 * Callers:
 *     HamQueryCallerTerminateReason @ 0x18000D000 (HamQueryCallerTerminateReason.c)
 * Callees:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18000D474 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilQueryRegistryTerminateReason(
        const unsigned __int16 *a1,
        void *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  unsigned int v5; // edx
  signed int v6; // ebx
  LSTATUS v7; // eax
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  int v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR ValueName[136]; // [rsp+50h] [rbp-B0h] BYREF

  cbData = 0;
  *(_DWORD *)Data = 0;
  hKey = 0LL;
  v12[0] = 130;
  PsmGetAumidFromKey(a1, v12, ValueName);
  v6 = HampUtilCreateVolatileUserRegKey(a2, v5, &hKey);
  if ( v6 >= 0 )
  {
    cbData = 4;
    v7 = RegQueryValueExW(hKey, ValueName, 0LL, 0LL, Data, &cbData);
    v6 = v7;
    if ( v7 > 0 )
      v6 = (unsigned __int16)v7 | 0xC0070000;
    if ( v6 < 0 )
    {
      if ( v6 != -1073283070 )
        goto LABEL_12;
      *(_DWORD *)a3 = 0;
      goto LABEL_10;
    }
    if ( *(_DWORD *)Data <= 0x1AFFu && cbData == 4 )
    {
      *(_DWORD *)a3 = *(_DWORD *)Data;
LABEL_10:
      v6 = 0;
      goto LABEL_12;
    }
    v6 = -1073739509;
  }
LABEL_12:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v6;
}
