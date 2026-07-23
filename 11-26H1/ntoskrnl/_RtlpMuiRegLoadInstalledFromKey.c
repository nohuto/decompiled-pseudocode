/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x140724EE4
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1408B00B4 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     LdrpOpenKey @ 0x14080BE68 (LdrpOpenKey.c)
 *     ValidateRegistrLangType @ 0x1408AFAAC (ValidateRegistrLangType.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     RtlpMuiRegAddLanguageByName @ 0x140B2FCBC (RtlpMuiRegAddLanguageByName.c)
 *     LdrpQueryValueKey @ 0x140B3E948 (LdrpQueryValueKey.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(int a1)
{
  ULONG v2; // esi
  __int64 v3; // r8
  int v4; // edi
  NTSTATUS v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  char v9; // cl
  int v10; // ecx
  int Length; // [rsp+28h] [rbp-E0h]
  unsigned int v12; // [rsp+38h] [rbp-D0h]
  __int16 v13; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+7Ch] [rbp-8Ch]
  WCHAR SourceString[248]; // [rsp+80h] [rbp-88h] BYREF

  LODWORD(DestinationString[0]) = 0;
  Handle = 0LL;
  v12 = 0;
  v13 = -1;
  v2 = 0;
  KeyHandle = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  v4 = LdrpOpenKey(&DestinationString[1], 0LL, v3, &KeyHandle);
  if ( v4 < 0 )
    return 0LL;
  while ( v4 != -2147483622 )
  {
    v6 = ZwEnumerateKey(KeyHandle, v2, KeyBasicInformation, KeyInformation, 0x200u, (PULONG)DestinationString);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147483622 )
        goto LABEL_23;
    }
    else if ( (unsigned __int64)v19 + 24 <= 0x200 )
    {
      SourceString[(unsigned __int64)v19 >> 1] = 0;
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
      if ( (int)LdrpOpenKey(&DestinationString[1], KeyHandle, v7, &Handle) >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"Type");
        LODWORD(v14) = 4;
        HIDWORD(DestinationString[0]) = 4;
        if ( (int)LdrpQueryValueKey(Handle, (PUNICODE_STRING)&DestinationString[1], (__int64)DestinationString + 4) >= 0
          && (int)ValidateRegistrLangType(v12) >= 0 )
        {
          v8 = v12 & 0x419F;
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
              RtlpMuiRegAddLanguageByName(a1, (_DWORD)Handle, (unsigned int)SourceString, v8, Length, (__int64)&v13);
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
LABEL_23:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v4;
}
