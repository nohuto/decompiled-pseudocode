/*
 * XREFs of RtlOemStringToUnicodeString @ 0x14097E860
 * Callers:
 *     DifRtlOemStringToUnicodeStringWrapper @ 0x140699A20 (DifRtlOemStringToUnicodeStringWrapper.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x14045B1B0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlMultiByteToUnicodeSize @ 0x14097BFE0 (RtlMultiByteToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x14097E070 (RtlOemToUnicodeN.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlOemStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
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
             (__int64 *)&DestinationString->Buffer,
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
        ExFreePool(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v10;
  }
  return result;
}
