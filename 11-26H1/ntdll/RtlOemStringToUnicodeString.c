/*
 * XREFs of RtlOemStringToUnicodeString @ 0x18009EC30
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18009EE40 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180025C90 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlMultiByteToUnicodeSize @ 0x18009ED20 (RtlMultiByteToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x18009EDD0 (RtlOemToUnicodeN.c)
 */

NTSTATUS __cdecl RtlOemStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        POEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // edx
  unsigned __int16 *p_MaximumLength; // r15
  wchar_t **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  unsigned __int16 v11; // dx
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v13; // [rsp+80h] [rbp+18h]

  v13 = AllocateDestinationString;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, SourceString->Buffer, SourceString->Length);
  v6 = BytesInUnicodeString + 2;
  BytesInUnicodeString = v6;
  if ( v6 > 0xFFFE )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateUnicodeStringBuffer(
             AllocateDestinationString,
             v6,
             &DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlOemToUnicodeN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInUnicodeString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInUnicodeString;
      (*p_Buffer)[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
      DestinationString->Length = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        RtlpSysVolFree(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v10;
  }
  return result;
}
