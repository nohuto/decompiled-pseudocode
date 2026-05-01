/*
 * XREFs of ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180013470
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x18006F8C8 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampUtilQueryHostHistoricCommitUse(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  HKEY v4; // rdi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  WCHAR *v8; // rax
  char *v9; // rax
  __int64 v10; // rcx
  signed __int64 v11; // r9
  __int16 v12; // r8
  char *v13; // rcx
  LSTATUS v14; // eax
  HKEY v15; // rsi
  LSTATUS v16; // eax
  LSTATUS v17; // eax
  __int64 v19; // rax
  int v20; // eax
  const WCHAR *v21; // rdx
  LSTATUS v22; // eax
  unsigned int v23; // edx
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v27; // [rsp+60h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-98h] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  WCHAR v31[136]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SubKey[254]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v33[4]; // [rsp+39Ch] [rbp+29Ch] BYREF

  *(_QWORD *)Data = 0LL;
  cbData = 0;
  v4 = 0LL;
  v24 = 0;
  hKey = 0LL;
  v27 = 0LL;
  if ( a1 )
    v5 = (__int64)a1 + 488;
  else
    v5 = 544LL;
  phkResult = 0LL;
  *(_QWORD *)&UnicodeString.Length = 33292288LL;
  UnicodeString.Buffer = SubKey;
  v6 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v5, 0);
  if ( v6 < 0 )
    goto LABEL_15;
  v7 = 254LL;
  v8 = SubKey;
  while ( *v8 )
  {
    ++v8;
    if ( !--v7 )
    {
      v6 = -1073741811;
      goto LABEL_15;
    }
  }
  v9 = &v33[-2 * v7];
  v10 = 66LL;
  v11 = (char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - v9;
  do
  {
    if ( !v10 )
      break;
    v12 = *(_WORD *)&v9[v11];
    if ( !v12 )
      break;
    *(_WORD *)v9 = v12;
    --v10;
    v9 += 2;
    --v7;
  }
  while ( v7 );
  v13 = v9 - 2;
  v6 = -2147483643;
  if ( v7 )
  {
    v13 = v9;
    v6 = 0;
  }
  *(_WORD *)v13 = 0;
  if ( v6 < 0 )
    goto LABEL_15;
  v14 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
  v6 = v14;
  if ( v14 > 0 )
    v6 = (unsigned __int16)v14 | 0xC0070000;
  if ( v6 < 0 )
  {
LABEL_15:
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  else
  {
    v15 = phkResult;
    phkResult = 0LL;
    v16 = RegOpenKeyExW(v15, L"CommitHistory", 0, 0x20019u, &hKey);
    v6 = v16;
    if ( v16 > 0 )
      v6 = (unsigned __int16)v16 | 0xC0070000;
    if ( v6 >= 0 )
    {
      v24 = 131;
      PsmGetAumidFromKey((char *)a1 + 24, &v24, v31);
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 99) + 616LL) & 0x10000) != 0 )
      {
        v23 = v24;
        v31[v24 - 1] = 35;
        if ( 2 * (unsigned __int64)v23 >= 0x106 )
          _report_rangecheckfailure();
        v31[v23] = 0;
      }
      v17 = RegOpenKeyExW(hKey, v31, 0, 0x20019u, &v27);
      v6 = v17;
      if ( v17 > 0 )
        v6 = (unsigned __int16)v17 | 0xC0070000;
      if ( v6 >= 0 )
      {
        v4 = v27;
        v6 = 0;
        v27 = 0LL;
      }
    }
    if ( v15 )
      RegCloseKey(v15);
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v27 )
    RegCloseKey(v27);
  if ( v6 >= 0 )
  {
    if ( a1 )
      v19 = (__int64)a1 + 560;
    else
      v19 = 616LL;
    v20 = *(_DWORD *)v19;
    switch ( v20 )
    {
      case 2:
        v21 = L"Mixed";
        break;
      case 4:
        v21 = L"Pure";
        break;
      case 8:
        v21 = L"System";
        break;
      default:
        NT_ASSERT("!"HampUtilHostTypeNameFromType bad host type"");
    }
    cbData = 8;
    v22 = RegQueryValueExW(v4, v21, 0LL, 0LL, Data, &cbData);
    v6 = v22;
    if ( v22 > 0 )
      v6 = (unsigned __int16)v22 | 0xC0070000;
    if ( v6 >= 0 )
    {
      if ( cbData == 8 )
      {
        v6 = 0;
        *a2 = *(_QWORD *)Data;
      }
      else
      {
        v6 = -1073739509;
      }
    }
  }
  if ( v4 )
    RegCloseKey(v4);
  return (unsigned int)v6;
}
