/*
 * XREFs of AcpiSdevEntryCompare @ 0x1400BA618
 * Callers:
 *     AcpiSearchSdevTable @ 0x1400BA760 (AcpiSearchSdevTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall AcpiSdevEntryCompare(PCUNICODE_STRING String1, __int64 a2)
{
  const char *v4; // rdx
  LONG v5; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_BYTE *)a2 )
    return 0;
  v4 = (const char *)(a2 + *(unsigned __int16 *)(a2 + 4));
  DestinationString = 0LL;
  String2 = 0LL;
  RtlInitAnsiString(&DestinationString, v4);
  RtlAnsiStringToUnicodeString(&String2, &DestinationString, 1u);
  v5 = RtlCompareUnicodeString(String1, &String2, 1u);
  RtlFreeUnicodeString(&String2);
  return v5 == 0;
}
