/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18005B900
 * Callers:
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlUpcaseUnicodeString @ 0x180025100 (RtlUpcaseUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1800A6410 (RtlPrefixUnicodeString.c)
 *     SymCryptSha256 @ 0x1800FD6DC (SymCryptSha256.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  unsigned int v9; // edi
  __int128 v10; // xmm1
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-68h] BYREF
  __int128 v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]

  DestinationString = 0LL;
  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  *(_OWORD *)CapabilitySid = 0LL;
  *((_OWORD *)CapabilitySid + 1) = 0LL;
  *((_OWORD *)CapabilitySid + 2) = 0LL;
  *(_OWORD *)CapabilityGroupSid = 0LL;
  *((_OWORD *)CapabilityGroupSid + 1) = 0LL;
  *((_QWORD *)CapabilityGroupSid + 4) = 0LL;
  *((_DWORD *)CapabilityGroupSid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v13);
    v7 = v13;
    *(_WORD *)CapabilityGroupSid = 2305;
    *(_DWORD *)((char *)CapabilityGroupSid + 2) = RtlpNtAuthority;
    *((_WORD *)CapabilityGroupSid + 3) = 1280;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    v12 = v7;
    v8 = v14;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v14;
    v9 = 0;
    v13 = v8;
    while ( v9 < 0xC )
    {
      if ( DestinationString.Length == *((unsigned __int16 *)&RtlpLegacyApplicationCapabilityNames + 8 * v9)
        && !memcmp(
              DestinationString.Buffer,
              *((const void **)&RtlpLegacyApplicationCapabilityNames + 2 * v9 + 1),
              DestinationString.Length) )
      {
        *(_WORD *)CapabilitySid = 513;
        *(_SID_IDENTIFIER_AUTHORITY *)((char *)CapabilitySid + 2) = RtlpAppPackageAuthority;
        *((_DWORD *)CapabilitySid + 2) = 3;
        *((_DWORD *)CapabilitySid + 3) = v9 + 1;
        break;
      }
      ++v9;
    }
    if ( DestinationString.Buffer )
      RtlpSysVolFree(DestinationString.Buffer);
    if ( v9 == 12 )
    {
      *(_WORD *)CapabilitySid = 2561;
      *(_SID_IDENTIFIER_AUTHORITY *)((char *)CapabilitySid + 2) = RtlpAppPackageAuthority;
      *((_DWORD *)CapabilitySid + 2) = 3;
      *((_DWORD *)CapabilitySid + 3) = RtlPrefixUnicodeString((PUNICODE_STRING)&String1, UnicodeString, 1u) != 0
                                     ? 0x10000
                                     : 1024;
      v10 = v13;
      *((_OWORD *)CapabilitySid + 1) = v12;
      *((_OWORD *)CapabilitySid + 2) = v10;
    }
    return 0;
  }
  return result;
}
