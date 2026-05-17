/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x180125768
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1801224D0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800D9FF0 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x1800DC350 (LdrpOpenKey.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     RtlpMuiRegAddLanguageByName @ 0x18014D2C4 (RtlpMuiRegAddLanguageByName.c)
 *     ValidateRegistrLangType @ 0x18014DC50 (ValidateRegistrLangType.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18015F580 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(int a1)
{
  unsigned int v2; // edi
  size_t v3; // rax
  int v4; // ebx
  int v6; // eax
  __int16 v7; // r11
  unsigned int v8; // r11d
  char v9; // cl
  int v10; // ecx
  int v11; // [rsp+20h] [rbp-E0h]
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v20[4]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[12]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+A4h] [rbp-5Ch]
  WCHAR SourceString[248]; // [rsp+A8h] [rbp-58h] BYREF

  v18 = 0;
  DestinationString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  v2 = 0;
  Handle = 0LL;
  v12 = 0;
  v13 = -1;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v3 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  v20[0] = 48LL;
  v20[3] = 64LL;
  v16 = 0LL;
  if ( v3 >= 0xFFFE )
    LOWORD(v3) = -4;
  v20[1] = 0LL;
  DestinationString.Length = v3;
  DestinationString.MaximumLength = v3 + 2;
  v20[2] = &DestinationString;
  v21 = 0LL;
  v4 = NtOpenKey(&v16, 131097LL, v20);
  if ( v4 < 0 )
    return 0LL;
  while ( v4 != -2147483622 )
  {
    v6 = NtEnumerateKey(v16, v2, 0LL, v22, 512, &v18);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147483622 )
        goto LABEL_25;
    }
    else if ( (unsigned __int64)v23 + 24 <= 0x200 )
    {
      SourceString[(unsigned __int64)v23 >> 1] = 0;
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (int)LdrpOpenKey((__int64)&DestinationString, (__int64)v16, 0x20019u, &Handle) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Type");
        v14 = 4;
        v19 = 4;
        if ( (int)LdrpQueryValueKey((__int64)Handle, (__int64)&DestinationString, &v14, &v12, &v19) >= 0
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
              RtlpMuiRegAddLanguageByName(a1, v11, (__int64)&v13);
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
  if ( v16 )
    NtClose(v16);
  return (unsigned int)v4;
}
