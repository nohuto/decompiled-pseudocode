/*
 * XREFs of RtlOemStringToCountedUnicodeString @ 0x14097E170
 * Callers:
 *     DifRtlOemStringToCountedUnicodeStringWrapper @ 0x1406998A0 (DifRtlOemStringToCountedUnicodeStringWrapper.c)
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x14045B1B0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlMultiByteToUnicodeSize @ 0x14097BFE0 (RtlMultiByteToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x14097E070 (RtlOemToUnicodeN.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlOemStringToCountedUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int16 *p_MaximumLength; // r14
  wchar_t **p_Buffer; // rsi
  NTSTATUS result; // eax
  int v9; // edi
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v11; // [rsp+80h] [rbp+18h]

  v11 = AllocateDestinationString;
  BytesInUnicodeString = 0;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, SourceString->Buffer, SourceString->Length);
  if ( BytesInUnicodeString )
  {
    if ( BytesInUnicodeString > 0xFFFE )
    {
      return -1073741584;
    }
    else
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      p_Buffer = &DestinationString->Buffer;
      result = AllocateOrValidateUnicodeStringBuffer(
                 AllocateDestinationString,
                 BytesInUnicodeString,
                 (__int64 *)&DestinationString->Buffer,
                 &DestinationString->MaximumLength);
      if ( result >= 0 )
      {
        v9 = RtlOemToUnicodeN(
               *p_Buffer,
               *p_MaximumLength,
               &BytesInUnicodeString,
               SourceString->Buffer,
               SourceString->Length);
        if ( v9 < 0 )
        {
          if ( AllocateDestinationString )
          {
            ExFreePool(*p_Buffer);
            *p_Buffer = 0LL;
            *p_MaximumLength = 0;
          }
        }
        else
        {
          DestinationString->Length = BytesInUnicodeString;
        }
        return v9;
      }
    }
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  return result;
}
