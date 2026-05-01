/*
 * XREFs of ?HampUtilOpenApplicationHistoryKey@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@KPEAPEAUHKEY__@@@Z @ 0x1800422F0
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x18006F8C8 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilOpenApplicationHistoryKey(struct _RM_HAM_ACTIVITY_HOST *a1, char a2, HKEY *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rdx
  WCHAR *v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  signed __int64 v12; // r9
  __int16 v13; // r8
  char *v14; // rcx
  LSTATUS v15; // eax
  LSTATUS v17; // eax
  HKEY v18; // rdi
  int v19; // r14d
  LSTATUS v20; // eax
  unsigned int v21; // edx
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-A0h] BYREF
  HKEY v25; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SubKey[136]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v28[254]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v29[4]; // [rsp+38Ch] [rbp+28Ch] BYREF

  v22 = 0;
  hKey = 0LL;
  phkResult = 0LL;
  if ( a1 )
    v6 = (__int64)a1 + 488;
  else
    v6 = 544LL;
  v25 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  UnicodeString.Buffer = v28;
  v7 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v6, 0);
  if ( v7 < 0 )
    goto LABEL_15;
  v8 = 254LL;
  v9 = v28;
  while ( *v9 )
  {
    ++v9;
    if ( !--v8 )
    {
      v7 = -1073741811;
      goto LABEL_15;
    }
  }
  v10 = &v29[-2 * v8];
  v11 = 66LL;
  v12 = (char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - v10;
  do
  {
    if ( !v11 )
      break;
    v13 = *(_WORD *)&v10[v12];
    if ( !v13 )
      break;
    *(_WORD *)v10 = v13;
    --v11;
    v10 += 2;
    --v8;
  }
  while ( v8 );
  v14 = v10 - 2;
  v7 = -2147483643;
  if ( v8 )
  {
    v14 = v10;
    v7 = 0;
  }
  *(_WORD *)v14 = 0;
  if ( v7 < 0 )
    goto LABEL_15;
  v17 = RegCreateKeyExW(HKEY_USERS, v28, 0, 0LL, 0, 4u, 0LL, &v25, 0LL);
  v7 = v17;
  if ( v17 > 0 )
    v7 = (unsigned __int16)v17 | 0xC0070000;
  if ( v7 < 0 )
  {
LABEL_15:
    if ( v25 )
      RegCloseKey(v25);
    goto LABEL_23;
  }
  v18 = v25;
  v25 = 0LL;
  v19 = a2 & 1;
  if ( v19 )
  {
    v20 = RegCreateKeyExW(v18, L"CommitHistory", 0, 0LL, 0, 0x20006u, 0LL, &hKey, 0LL);
    v7 = v20;
    if ( v20 <= 0 )
      goto LABEL_33;
  }
  else
  {
    v20 = RegOpenKeyExW(v18, L"CommitHistory", 0, 0x20019u, &hKey);
    v7 = v20;
    if ( v20 <= 0 )
      goto LABEL_33;
  }
  v7 = (unsigned __int16)v20 | 0xC0070000;
LABEL_33:
  if ( v7 >= 0 )
  {
    v22 = 131;
    PsmGetAumidFromKey((char *)a1 + 24, &v22, SubKey);
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 99) + 616LL) & 0x10000) != 0 )
    {
      v21 = v22;
      SubKey[v22 - 1] = 35;
      if ( 2 * (unsigned __int64)v21 >= 0x106 )
        _report_rangecheckfailure();
      SubKey[v21] = 0;
    }
    if ( v19 )
    {
      v15 = RegCreateKeyExW(hKey, SubKey, 0, 0LL, 0, 0x20006u, 0LL, &phkResult, 0LL);
      v7 = v15;
      if ( v15 <= 0 )
        goto LABEL_19;
    }
    else
    {
      v15 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &phkResult);
      v7 = v15;
      if ( v15 <= 0 )
        goto LABEL_19;
    }
    v7 = (unsigned __int16)v15 | 0xC0070000;
LABEL_19:
    if ( v7 >= 0 )
    {
      v7 = 0;
      *a3 = phkResult;
      phkResult = 0LL;
    }
  }
  if ( v18 )
    RegCloseKey(v18);
LABEL_23:
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v7;
}
