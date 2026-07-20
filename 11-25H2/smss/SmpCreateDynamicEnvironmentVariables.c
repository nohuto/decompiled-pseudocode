/*
 * XREFs of SmpCreateDynamicEnvironmentVariables @ 0x1400143B0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpCreateDynamicEnvironmentVariables(HANDLE KeyHandle)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  int v4; // r8d
  int v5; // edx
  NTSTATUS v6; // eax
  PWSTR Buffer; // r8
  unsigned int v8; // edx
  unsigned int v9; // r9d
  __int64 *v10; // rcx
  ULONG DataSize; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  wchar_t *v19; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v27; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING v28; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v29; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING v30; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING v31; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  __int64 SystemInformation; // [rsp+100h] [rbp+0h] BYREF
  int v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h] BYREF
  __int64 v36; // [rsp+118h] [rbp+18h] BYREF
  __int64 v37; // [rsp+120h] [rbp+20h] BYREF
  int v38; // [rsp+128h] [rbp+28h]
  __int64 v39; // [rsp+130h] [rbp+30h] BYREF
  int v40; // [rsp+138h] [rbp+38h]
  __int128 Data; // [rsp+140h] [rbp+40h] BYREF
  int v42; // [rsp+150h] [rbp+50h]
  wchar_t v43; // [rsp+154h] [rbp+54h]
  __int128 v44; // [rsp+158h] [rbp+58h] BYREF
  wchar_t pszDest[6]; // [rsp+170h] [rbp+70h] BYREF
  wchar_t v46[250]; // [rsp+17Ch] [rbp+7Ch] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v48[500]; // [rsp+37Ch] [rbp+27Ch] BYREF

  *(_QWORD *)&ValueName.Length = 393220LL;
  SystemInformation = 0LL;
  v34 = 0;
  v42 = *(_DWORD *)L"NT";
  v43 = aWindowsNt[10];
  Data = *(_OWORD *)L"Windows_NT";
  v36 = 0x3600380078LL;
  v40 = *(_DWORD *)L"4";
  v35 = 0x4D00520041LL;
  v38 = *(_DWORD *)L"4";
  ValueName.Buffer = L"OS";
  v27 = L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0";
  v24.Buffer = L"PROCESSOR_ARCHITECTURE";
  v25.Buffer = L"PROCESSOR_LEVEL";
  v29.Buffer = L"PROCESSOR_IDENTIFIER";
  v39 = *(_QWORD *)L"AMD64";
  v30.Buffer = L"PROCESSOR_REVISION";
  v37 = *(_QWORD *)L"ARM64";
  v28.Buffer = L"Identifier";
  v31.Buffer = L"VendorIdentifier";
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandlea = 0LL;
  v44 = *(_OWORD *)L"Unknown";
  v26 = 8519808LL;
  *(_QWORD *)&v24.Length = 3014700LL;
  *(_QWORD *)&v25.Length = 2097182LL;
  *(_QWORD *)&v29.Length = 2752552LL;
  *(_QWORD *)&v30.Length = 2490404LL;
  *(_QWORD *)&v28.Length = 1441812LL;
  *(_QWORD *)&v31.Length = 2228256LL;
  v2 = NtQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = v2;
    v5 = 3217;
LABEL_34:
    SmpLogFailure((__int64)"SmpCreateDynamicEnvironmentVariables", v5, v4);
    return (unsigned int)v3;
  }
  v6 = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, &Data, 0x16u);
  v3 = v6;
  if ( v6 >= 0 )
  {
    if ( (_WORD)SystemInformation )
    {
      if ( (unsigned __int16)SystemInformation != 5 )
      {
        if ( (unsigned __int16)SystemInformation == 9 )
        {
          v10 = &v39;
        }
        else
        {
          if ( (unsigned __int16)SystemInformation != 12 )
          {
            v10 = (__int64 *)&v44;
            ResultLength = 16;
            DataSize = 16;
            goto LABEL_19;
          }
          v10 = &v37;
        }
        DataSize = 12;
LABEL_18:
        ResultLength = DataSize;
LABEL_19:
        v6 = NtSetValueKey(KeyHandle, &v24, 0, 1u, v10, DataSize);
        v3 = v6;
        if ( v6 < 0 )
        {
          Buffer = v24.Buffer;
          v8 = 3275;
          goto LABEL_5;
        }
        RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", WORD1(SystemInformation));
        v12 = -1LL;
        v13 = -1LL;
        do
          ++v13;
        while ( pszDest[v13] );
        v6 = NtSetValueKey(KeyHandle, &v25, 0, 1u, pszDest, 2 * v13 + 2);
        v3 = v6;
        if ( v6 < 0 )
        {
          Buffer = v25.Buffer;
          v8 = 3312;
          goto LABEL_5;
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = NtOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
        v3 = v6;
        if ( v6 < 0 )
        {
          Buffer = (PWSTR)v27;
          v8 = 3332;
          goto LABEL_5;
        }
        v3 = NtQueryValueKey(KeyHandlea, &v28, KeyValuePartialInformation, pszDest, 0x200u, &ResultLength);
        if ( v3 < 0 )
        {
          NtClose(KeyHandlea);
          Buffer = v28.Buffer;
          v9 = v3;
          v8 = 3351;
          goto LABEL_6;
        }
        v14 = NtQueryValueKey(KeyHandlea, &v31, KeyValuePartialInformation, KeyValueInformation, 0x200u, &ResultLength);
        NtClose(KeyHandlea);
        if ( v14 >= 0 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v46[v15] );
          v16 = RtlStringCbPrintfW(&v46[v15], 2 * (250 - v15), L", %ws", v48);
          v3 = v16;
          if ( v16 < 0 )
          {
            v4 = v16;
            v5 = 3394;
            goto LABEL_34;
          }
        }
        v17 = -1LL;
        do
          ++v17;
        while ( v46[v17] );
        v6 = NtSetValueKey(KeyHandle, &v29, 0, 1u, v46, 2 * v17 + 2);
        v3 = v6;
        if ( v6 < 0 )
        {
          Buffer = v29.Buffer;
          v8 = 3410;
          goto LABEL_5;
        }
        if ( (_WORD)SystemInformation )
        {
          if ( (unsigned __int16)SystemInformation != 5
            && (unsigned __int16)SystemInformation != 9
            && (unsigned __int16)SystemInformation != 12 )
          {
            RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", WORD2(SystemInformation));
            goto LABEL_47;
          }
        }
        else if ( (WORD2(SystemInformation) & 0xFF00) == 0xFF00 )
        {
          RtlStringCbPrintfW(pszDest, 0x200uLL, L"%02x", BYTE4(SystemInformation));
          _wcsupr_s(pszDest, 0x100uLL);
          goto LABEL_47;
        }
        RtlStringCbPrintfW(pszDest, 0x200uLL, L"%04x", WORD2(SystemInformation));
        do
LABEL_47:
          ++v12;
        while ( pszDest[v12] );
        v6 = NtSetValueKey(KeyHandle, &v30, 0, 1u, pszDest, 2 * v12 + 2);
        v3 = v6;
        if ( v6 < 0 )
        {
          Buffer = v30.Buffer;
          v8 = 3486;
          goto LABEL_5;
        }
        if ( SmpSafeBootOption == -1 )
          return 0;
        v18 = 18;
        if ( SmpSafeBootOption != 1 )
        {
          if ( SmpSafeBootOption == 2 )
          {
            v19 = L"NETWORK";
LABEL_57:
            v18 = 16;
LABEL_58:
            v6 = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue, 0, 1u, v19, v18);
            v3 = v6;
            if ( v6 < 0 )
            {
              Buffer = L"SAFEBOOT_OPTION";
              v8 = 3527;
              goto LABEL_5;
            }
            return 0;
          }
          if ( SmpSafeBootOption == 3 )
          {
            v19 = L"DSREPAIR";
            goto LABEL_58;
          }
        }
        v19 = L"MINIMAL";
        goto LABEL_57;
      }
      v10 = &v35;
    }
    else
    {
      v10 = &v36;
    }
    DataSize = 8;
    goto LABEL_18;
  }
  Buffer = ValueName.Buffer;
  v8 = 3232;
LABEL_5:
  v9 = v6;
LABEL_6:
  SmpLogFailureString((__int64)"SmpCreateDynamicEnvironmentVariables", v8, (__int64)Buffer, v9);
  return (unsigned int)v3;
}
