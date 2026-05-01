/*
 * XREFs of ?CreateShellSessionSubKey@@YAJPEBGKPEA_NPEAPEAUHKEY__@@@Z @ 0x1806740CC
 * Callers:
 *     ??0RdpShellExtensionHost@@QEAA@XZ @ 0x1806737E4 (--0RdpShellExtensionHost@@QEAA@XZ.c)
 * Callees:
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x1802B60AC (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall CreateShellSessionSubKey(const unsigned __int16 *a1, DWORD a2, bool *a3, HKEY *a4)
{
  int v4; // ebx
  LSTATUS v5; // eax
  DWORD dwDisposition; // [rsp+68h] [rbp+10h] BYREF
  HKEY phkResult; // [rsp+70h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+20h] BYREF

  phkResult = (HKEY)a3;
  dwDisposition = a2;
  hKey = 0LL;
  v4 = CreateShellSessionKey((__int64)a1, &hKey);
  if ( v4 >= 0 )
  {
    phkResult = 0LL;
    dwDisposition = 0;
    v5 = RegCreateKeyExW(
           hKey,
           L"RdpShellExtensionHostHasBeenRun",
           0,
           0LL,
           1u,
           0x20006u,
           0LL,
           &phkResult,
           &dwDisposition);
    v4 = v5;
    if ( v5 > 0 )
      v4 = (unsigned __int16)v5 | 0x80070000;
    if ( v4 >= 0 )
      RegCloseKey(phkResult);
    RegCloseKey(hKey);
  }
  return (unsigned int)v4;
}
