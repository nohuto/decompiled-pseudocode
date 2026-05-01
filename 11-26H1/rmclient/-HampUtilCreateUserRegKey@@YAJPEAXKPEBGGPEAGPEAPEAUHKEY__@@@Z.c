/*
 * XREFs of ?HampUtilCreateUserRegKey@@YAJPEAXKPEBGGPEAGPEAPEAUHKEY__@@@Z @ 0x18000CD58
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18000CC34 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCreateUserRegKey(
        PSID Sid,
        __int64 a2,
        const unsigned __int16 *a3,
        __int64 a4,
        unsigned __int16 *lpSubKey,
        HKEY *a6)
{
  const WCHAR *v6; // rdi
  signed int v7; // ebx
  const WCHAR *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  LSTATUS v11; // eax
  HKEY v12; // rcx
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  signed __int64 v17; // r8
  __int16 v18; // r9
  char *v19; // rax
  struct _UNICODE_STRING v20; // [rsp+50h] [rbp-18h] BYREF
  HKEY phkResult; // [rsp+80h] [rbp+18h] BYREF

  v6 = lpSubKey;
  *(_QWORD *)&v20.Length = 33292288LL;
  v20.Buffer = lpSubKey;
  phkResult = 0LL;
  v7 = RtlConvertSidToUnicodeString(&v20, Sid, 0);
  if ( v7 < 0 )
    goto LABEL_22;
  v8 = v6;
  v9 = 254LL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = (254 - v9) & -(__int64)(v9 != 0);
  v7 = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
  {
    v14 = (char *)&v6[v10];
    v15 = 254 - v10;
    if ( 254 != v10 )
    {
      v16 = 66LL;
      v17 = (char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - v14;
      do
      {
        if ( !v16 )
          break;
        v18 = *(_WORD *)&v14[v17];
        if ( !v18 )
          break;
        *(_WORD *)v14 = v18;
        --v16;
        v14 += 2;
        --v15;
      }
      while ( v15 );
    }
    v19 = v14 - 2;
    if ( v15 )
      v19 = v14;
    v7 = v15 == 0 ? 0x80000005 : 0;
    *(_WORD *)v19 = 0;
  }
  if ( v7 < 0 )
    goto LABEL_22;
  v11 = RegCreateKeyExW(HKEY_USERS, v6, 0, 0LL, 0, 1u, 0LL, &phkResult, 0LL);
  v7 = v11;
  if ( v11 > 0 )
    v7 = (unsigned __int16)v11 | 0xC0070000;
  if ( v7 < 0 )
  {
LABEL_22:
    v12 = phkResult;
  }
  else
  {
    v7 = 0;
    *a6 = phkResult;
    v12 = 0LL;
    phkResult = 0LL;
  }
  if ( v12 )
    RegCloseKey(v12);
  return (unsigned int)v7;
}
