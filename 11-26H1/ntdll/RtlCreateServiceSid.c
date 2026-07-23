/*
 * XREFs of RtlCreateServiceSid @ 0x180023780
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180137CD0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     SymCryptSha1Result @ 0x180024140 (SymCryptSha1Result.c)
 *     SymCryptSha1Append @ 0x180024260 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x180024290 (SymCryptSha1Init.c)
 *     RtlUpcaseUnicodeString @ 0x180025100 (RtlUpcaseUnicodeString.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  wchar_t *Buffer; // rdi
  int v9; // eax
  _BYTE v10[4]; // [rsp+20h] [rbp-B8h] BYREF
  int v11; // [rsp+24h] [rbp-B4h]
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-38h] BYREF
  int v13; // [rsp+B0h] [rbp-28h]

  v11 = 0;
  DestinationString = 0LL;
  memset_thunk_772440563353939046(v10, 0, 0x7CuLL);
  if ( !ServiceName || !ServiceSidLength )
    return -1073741811;
  v6 = *ServiceSidLength;
  *ServiceSidLength = 32;
  if ( v6 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, ServiceName, 1u);
  if ( result >= 0 )
  {
    SymCryptSha1Init(v10);
    Buffer = DestinationString.Buffer;
    SymCryptSha1Append(v10, DestinationString.Buffer, DestinationString.Length);
    SymCryptSha1Result(v10, &DestinationString);
    if ( Buffer )
      RtlpSysVolFree(Buffer);
    *(_WORD *)ServiceSid = 1537;
    *(_DWORD *)((char *)ServiceSid + 2) = RtlpNtAuthority;
    *((_WORD *)ServiceSid + 3) = 1280;
    v9 = *(_DWORD *)&DestinationString.Length;
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v9;
    *((_DWORD *)ServiceSid + 4) = *(_DWORD *)(&DestinationString.MaximumLength + 1);
    *(_QWORD *)((char *)ServiceSid + 20) = DestinationString.Buffer;
    *((_DWORD *)ServiceSid + 7) = v13;
    return 0;
  }
  return result;
}
