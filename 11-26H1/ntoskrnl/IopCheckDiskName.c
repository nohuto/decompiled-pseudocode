/*
 * XREFs of IopCheckDiskName @ 0x1405CB648
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x140CBEB30 (IopGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlPrefixString @ 0x14096D690 (RtlPrefixString.c)
 *     RtlCharToInteger @ 0x140ADC490 (RtlCharToInteger.c)
 */

char __fastcall IopCheckDiskName(const STRING *a1, const STRING *a2, ULONG *a3)
{
  char v6; // bl
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0;
  DestinationString = 0LL;
  v6 = 0;
  if ( RtlPrefixString(a1, a2, 0) )
  {
    v6 = 1;
    RtlInitAnsiString(&DestinationString, &a2->Buffer[a1->Length]);
    if ( DestinationString.Length > 0xAu )
    {
      if ( RtlPrefixString(&stru_14000BDB0, &DestinationString, 0) )
        RtlCharToInteger((PCSZ)DestinationString.Buffer + 10, 0xAu, a3);
    }
  }
  return v6;
}
