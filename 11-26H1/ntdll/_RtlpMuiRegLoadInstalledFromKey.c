/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x1801254D8
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180122270 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800D6FB0 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x1800D92C0 (LdrpOpenKey.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     RtlpMuiRegAddLanguageByName @ 0x18014D174 (RtlpMuiRegAddLanguageByName.c)
 *     ValidateRegistrLangType @ 0x18014DB00 (ValidateRegistrLangType.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18015F480 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(int a1)
{
  ULONG v2; // edi
  size_t v3; // rax
  NTSTATUS v4; // ebx
  NTSTATUS v6; // eax
  __int16 v7; // r11
  unsigned int v8; // r11d
  char v9; // cl
  int v10; // ecx
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v19[13]; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+A4h] [rbp-5Ch]
  WCHAR SourceString[248]; // [rsp+A8h] [rbp-58h] BYREF

  ResultLength = 0;
  DestinationString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  v2 = 0;
  Handle = 0LL;
  v12 = 0;
  v13 = -1;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v3 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  *(_QWORD *)&v19[1] = 48LL;
  *(_QWORD *)&v19[7] = 64LL;
  KeyHandle = 0LL;
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  *(_QWORD *)&v19[3] = 0LL;
  DestinationString.Length = v3;
  DestinationString.MaximumLength = v3 + 2;
  *(_QWORD *)&v19[5] = &DestinationString;
  *(_OWORD *)&v19[9] = 0LL;
  v4 = NtOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&v19[1]);
  if ( v4 < 0 )
    return 0LL;
  while ( v4 != -2147483622 )
  {
    v6 = NtEnumerateKey(KeyHandle, v2, KeyBasicInformation, KeyInformation, 0x200u, &ResultLength);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147483622 )
        goto LABEL_25;
    }
    else if ( (unsigned __int64)v21 + 24 <= 0x200 )
    {
      SourceString[(unsigned __int64)v21 >> 1] = 0;
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( LdrpOpenKey(&DestinationString, KeyHandle, 0x20019u, &Handle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Type");
        v14 = 4;
        v19[0] = 4;
        if ( (int)LdrpQueryValueKey(Handle, &DestinationString, &v14, &v12, v19) >= 0
          && (int)ValidateRegistrLangType(v12) >= 0 )
        {
          v8 = v7 & 0x419F;
          v12 = v8;
          if ( (v8 & 7) != 0 && (v8 & 7 & -(v8 & 7)) == (v8 & 7) )
          {
            if ( (v8 & 0x180) == 0 || (v9 = v8, (v8 & 0x180 & -(v8 & 0x180)) != (v8 & 0x180)) )
            {
              v8 = v8 & 0xFFFFFE7F | 0x80;
              v12 = v8;
              v9 = v8;
            }
            v10 = v9 & 0x18;
            if ( v10 && (v10 & -v10) == v10 && (v8 & 0xC) != 8 )
              RtlpMuiRegAddLanguageByName(a1, Length, (__int64)&v13);
          }
        }
      }
    }
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    ++v2;
  }
  v4 = 0;
LABEL_25:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v4;
}
