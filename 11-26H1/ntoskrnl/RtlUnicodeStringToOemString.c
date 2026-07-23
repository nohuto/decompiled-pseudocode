/*
 * XREFs of RtlUnicodeStringToOemString @ 0x140B3EDD0
 * Callers:
 *     DifRtlUnicodeStringToOemStringWrapper @ 0x14069A3B0 (DifRtlUnicodeStringToOemStringWrapper.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x140470980 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToOemN @ 0x14097B010 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteSize @ 0x14097CA40 (RtlUnicodeToMultiByteSize.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // edx
  unsigned __int16 *p_MaximumLength; // r15
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  unsigned __int16 v11; // dx
  ULONG BytesInOemString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v13; // [rsp+80h] [rbp+18h]

  v13 = AllocateDestinationString;
  BytesInOemString = 0;
  RtlUnicodeToMultiByteSize(&BytesInOemString, SourceString->Buffer, SourceString->Length);
  v6 = BytesInOemString + 1;
  BytesInOemString = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlUnicodeToOemN(*p_Buffer, *p_MaximumLength, &BytesInOemString, SourceString->Buffer, SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInOemString;
      (*p_Buffer)[BytesInOemString] = 0;
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
