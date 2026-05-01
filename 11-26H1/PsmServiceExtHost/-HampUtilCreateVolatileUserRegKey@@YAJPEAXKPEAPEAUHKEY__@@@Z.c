/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18005681C
 * Callers:
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x18005640C (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180056524 (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800566F4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(PSID Sid, REGSAM samDesired, HKEY *a3)
{
  HKEY v5; // rdi
  signed int v6; // ebx
  WCHAR *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  WCHAR *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // r8
  WCHAR v14; // r9
  WCHAR *v15; // rax
  HKEY v16; // rcx
  HKEY v17; // rcx
  LSTATUS v19; // eax
  LSTATUS v20; // eax
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SubKey[256]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  phkResult = 0LL;
  hKey = 0LL;
  UnicodeString.Buffer = SubKey;
  v5 = 0LL;
  v6 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  if ( v6 < 0 )
    goto LABEL_15;
  v7 = SubKey;
  v8 = 254LL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  v9 = (254 - v8) & -(__int64)(v8 != 0);
  v6 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
  {
    v10 = &SubKey[v9];
    v11 = 254 - v9;
    if ( 254 != v9 )
    {
      v12 = 66LL;
      v13 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(WCHAR *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    v6 = v11 == 0 ? 0x80000005 : 0;
    *v15 = 0;
  }
  if ( v6 < 0 )
    goto LABEL_15;
  v20 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, samDesired, 0LL, &hKey, 0LL);
  v6 = v20;
  if ( v20 > 0 )
    v6 = (unsigned __int16)v20 | 0xC0070000;
  if ( v6 < 0 )
  {
LABEL_15:
    v16 = hKey;
  }
  else
  {
    v5 = hKey;
    v16 = 0LL;
    hKey = 0LL;
    v6 = 0;
  }
  if ( v16 )
    RegCloseKey(v16);
  if ( v6 < 0 )
    goto LABEL_19;
  v19 = RegCreateKeyExW(v5, L"Volatile", 0, 0LL, 1u, samDesired, 0LL, &phkResult, 0LL);
  v6 = v19;
  if ( v19 > 0 )
    v6 = (unsigned __int16)v19 | 0xC0070000;
  if ( v6 < 0 )
  {
LABEL_19:
    v17 = phkResult;
  }
  else
  {
    v17 = 0LL;
    *a3 = phkResult;
    v6 = 0;
    phkResult = 0LL;
  }
  if ( v17 )
    RegCloseKey(v17);
  if ( v5 )
    RegCloseKey(v5);
  return (unsigned int)v6;
}
