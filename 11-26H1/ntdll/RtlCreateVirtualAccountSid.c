/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x1800242C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     SymCryptSha1Result @ 0x180024140 (SymCryptSha1Result.c)
 *     SymCryptSha1Append @ 0x180024260 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x180024290 (SymCryptSha1Init.c)
 *     RtlUpcaseUnicodeString @ 0x180025100 (RtlUpcaseUnicodeString.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCreateVirtualAccountSid(PUNICODE_STRING Name, ULONG BaseSubAuthority, PSID Sid, PULONG SidLength)
{
  ULONG v8; // eax
  NTSTATUS result; // eax
  wchar_t *Buffer; // rdi
  int v11; // eax
  unsigned int v12[32]; // [rsp+20h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-38h] BYREF
  int v14; // [rsp+B0h] [rbp-28h]

  v12[1] = 0;
  DestinationString = 0LL;
  memset_thunk_772440563353939046(v12, 0, 0x7CuLL);
  if ( !Name || !SidLength || BaseSubAuthority - 80 > 0x1F )
    return -1073741811;
  v8 = *SidLength;
  *SidLength = 32;
  if ( v8 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, Name, 1u);
  if ( result >= 0 )
  {
    SymCryptSha1Init((__int64)v12);
    Buffer = DestinationString.Buffer;
    SymCryptSha1Append(v12, (char *)DestinationString.Buffer, DestinationString.Length);
    SymCryptSha1Result(v12, &DestinationString);
    if ( Buffer )
      RtlpSysVolFree(Buffer);
    *(_WORD *)Sid = 1537;
    *(_DWORD *)((char *)Sid + 2) = RtlpNtAuthority;
    *((_WORD *)Sid + 3) = 1280;
    v11 = *(_DWORD *)&DestinationString.Length;
    *((_DWORD *)Sid + 2) = BaseSubAuthority;
    *((_DWORD *)Sid + 3) = v11;
    *((_DWORD *)Sid + 4) = *(_DWORD *)(&DestinationString.MaximumLength + 1);
    *(_QWORD *)((char *)Sid + 20) = DestinationString.Buffer;
    *((_DWORD *)Sid + 7) = v14;
    return 0;
  }
  return result;
}
