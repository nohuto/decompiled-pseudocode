/*
 * XREFs of ?HampUsageInfoRegistrySaveAppLaunched@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18003C7E0
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003B01C (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005AA04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z @ 0x180060BE4 (-HampSystemSetValue@@YAJPEAUHKEY__@@PEBGKPEAXK@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampUsageInfoRegistrySaveAppLaunched(const WCHAR *a1)
{
  HKEY v2; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  WCHAR *v5; // rax
  char *v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // r9
  __int16 v9; // r8
  char *v10; // rcx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  LSTATUS v14; // eax
  LSTATUS v15; // eax
  LSTATUS v16; // eax
  BYTE Data[4]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD cbData; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  char *v23; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SubKey[286]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[4]; // [rsp+2CCh] [rbp+1CCh] BYREF

  *(_DWORD *)Data = 0;
  *(_QWORD *)&UnicodeString.Length = 37486592LL;
  cbData = 0;
  hKey = 0LL;
  UnicodeString.Buffer = SubKey;
  phkResult = 0LL;
  v2 = 0LL;
  v3 = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)(a1 + 114), 0);
  if ( v3 < 0 )
    goto LABEL_13;
  v4 = 286LL;
  v5 = SubKey;
  while ( *v5 )
  {
    ++v5;
    if ( !--v4 )
    {
      v3 = -1073741811;
      goto LABEL_13;
    }
  }
  v6 = &v26[-2 * v4];
  v7 = 98LL;
  v8 = (char *)L"\\SOFTWARE\\Classes\\Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\SystemAppData"
     - v6;
  do
  {
    if ( !v7 )
      break;
    v9 = *(_WORD *)&v6[v8];
    if ( !v9 )
      break;
    *(_WORD *)v6 = v9;
    --v7;
    v6 += 2;
    --v4;
  }
  while ( v4 );
  v10 = v6 - 2;
  v3 = -2147483643;
  if ( v4 )
  {
    v10 = v6;
    v3 = 0;
  }
  *(_WORD *)v10 = 0;
  if ( v3 < 0 )
    goto LABEL_13;
  v14 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
  v3 = v14;
  if ( v14 > 0 )
    v3 = (unsigned __int16)v14 | 0xC0070000;
  if ( v3 < 0 )
  {
LABEL_13:
    if ( phkResult )
      RegCloseKey(phkResult);
LABEL_15:
    if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
    {
      v22 = v3;
      v23 = (char *)(a1 + 48);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1800CDD85,
        v12,
        v13,
        (__int64)&v23,
        (__int64)&v22);
    }
    goto LABEL_28;
  }
  v2 = phkResult;
  phkResult = 0LL;
  v15 = RegCreateKeyExW(v2, a1 + 48, 0, 0LL, 0, 0x2001Fu, 0LL, &hKey, 0LL);
  v3 = v15;
  if ( v15 > 0 )
    v3 = (unsigned __int16)v15 | 0xC0070000;
  if ( v3 < 0 )
    goto LABEL_15;
  cbData = 4;
  v16 = RegQueryValueExW(hKey, L"WasEverActivated", 0LL, 0LL, Data, &cbData);
  v3 = v16;
  if ( v16 > 0 )
    v3 = (unsigned __int16)v16 | 0xC0070000;
  if ( v3 < 0 || *(_DWORD *)Data != 1 )
  {
    *(_DWORD *)Data = 1;
    v3 = HampSystemSetValue(hKey, L"WasEverActivated", 4u, Data, 4u);
    if ( v3 >= 0 )
    {
      v3 = 0;
      goto LABEL_28;
    }
    goto LABEL_15;
  }
LABEL_28:
  if ( v2 )
    RegCloseKey(v2);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v3;
}
