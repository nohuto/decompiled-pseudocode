/*
 * XREFs of AVrfpAppendCurrentUserSid @ 0x18010C5FC
 * Callers:
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011E79C (AVrfpFormatCurrentUserKeyPath.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x18003CD70 (RtlConvertSidToUnicodeString.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     NtOpenProcessTokenEx @ 0x18015F540 (NtOpenProcessTokenEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AVrfpAppendCurrentUserSid(unsigned __int16 *a1)
{
  NTSTATUS result; // eax
  int v3; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  int v7; // [rsp+38h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-29h] BYREF
  PSID Sid[12]; // [rsp+58h] [rbp-19h] BYREF

  Handle = 0LL;
  v7 = 0;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  result = NtOpenProcessTokenEx(-1LL, 8LL, 512LL, &Handle);
  if ( result >= 0 )
  {
    v3 = NtQueryInformationToken(Handle, 1LL, Sid, 88LL, &v7);
    NtClose(Handle);
    if ( v3 < 0 )
    {
      return v3;
    }
    else
    {
      v4 = *a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
      if ( result >= 0 )
      {
        v6 = UnicodeString.Length + *a1;
        if ( v6 >= *a1 )
        {
          *a1 = v6;
        }
        else
        {
          *a1 = -1;
          return -1073741789;
        }
      }
    }
  }
  return result;
}
