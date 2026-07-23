/*
 * XREFs of AVrfpAppendCurrentUserSid @ 0x18010C14C
 * Callers:
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011E54C (AVrfpFormatCurrentUserKeyPath.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtOpenProcessTokenEx @ 0x18015F440 (NtOpenProcessTokenEx.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AVrfpAppendCurrentUserSid(unsigned __int16 *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  ULONG ReturnLength; // [rsp+38h] [rbp-39h] BYREF
  HANDLE TokenHandle; // [rsp+40h] [rbp-31h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-29h] BYREF
  PSID TokenInformation[12]; // [rsp+58h] [rbp-19h] BYREF

  TokenHandle = 0LL;
  ReturnLength = 0;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  result = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    v3 = NtQueryInformationToken(TokenHandle, 1u, TokenInformation, 0x58u, &ReturnLength);
    NtClose(TokenHandle);
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
      result = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
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
