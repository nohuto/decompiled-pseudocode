/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1404984A0
 * Callers:
 *     DbgkpCreateNotificationEvent @ 0x14078A2D0 (DbgkpCreateNotificationEvent.c)
 *     PiUEventInitClientRegistrationContext @ 0x1409D7674 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x140A3AE38 (PopCreateNotificationName.c)
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B4E1EC (CmpHiveRootSecurityDescriptor.c)
 *     SepVariableInitialization @ 0x140CDADF0 (SepVariableInitialization.c)
 * Callees:
 *     SymCryptSha256 @ 0x140553430 (SymCryptSha256.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1409E9B60 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x140A29BF0 (RtlPrefixUnicodeString.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 */

NTSTATUS __fastcall RtlDeriveCapabilitySidsFromName(PCUNICODE_STRING String2, _OWORD *Sid, _OWORD *a3)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int i; // edi
  __int128 v10; // xmm1
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h]

  DestinationString = 0LL;
  if ( !String2 || !Sid || !a3 )
    __fastfail(5u);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *Sid = 0LL;
  Sid[1] = 0LL;
  *((_QWORD *)Sid + 4) = 0LL;
  *((_DWORD *)Sid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, String2, 1u);
  if ( result >= 0 )
  {
    SymCryptSha256(DestinationString.Buffer, DestinationString.Length, &v12);
    RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v12;
    *((_DWORD *)Sid + 2) = 32;
    v8 = v13;
    *(_OWORD *)((char *)Sid + 12) = v7;
    *(_OWORD *)((char *)Sid + 28) = v8;
    for ( i = 0; i < 0xC; ++i )
    {
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames[2 * i], 0) )
      {
        RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
        *((_DWORD *)a3 + 2) = 3;
        *((_DWORD *)a3 + 3) = i + 1;
        break;
      }
    }
    RtlFreeAnsiString(&DestinationString);
    if ( i == 12 )
    {
      RtlInitializeSid(a3, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      *((_DWORD *)a3 + 2) = 3;
      *((_DWORD *)a3 + 3) = RtlPrefixUnicodeString(&String1, String2, 1u) != 0 ? 0x10000 : 1024;
      v10 = v13;
      a3[1] = v12;
      a3[2] = v10;
    }
    return 0;
  }
  return result;
}
