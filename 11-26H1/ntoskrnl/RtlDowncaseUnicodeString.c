/*
 * XREFs of RtlDowncaseUnicodeString @ 0x140A50E10
 * Callers:
 *     DifRtlDowncaseUnicodeStringWrapper @ 0x1406995A0 (DifRtlDowncaseUnicodeStringWrapper.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084A4C4 (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x14045B1B0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  struct _LIST_ENTRY *Blink; // rsi
  unsigned __int16 *v6; // rdx
  char v7; // r10
  NTSTATUS result; // eax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  if ( AllocateDestinationString || SourceString->Length )
  {
    Blink = PsGetCurrentServerSiloGlobals()[75].Blink;
    result = AllocateOrValidateUnicodeStringBuffer(
               v7,
               *v6,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v9 = SourceString->Length >> 1;
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = SourceString->Buffer[i];
      if ( (unsigned int)v11 >= 0x41 )
      {
        if ( (unsigned int)v11 <= 0x5A )
        {
          LOWORD(v11) = v11 + 32;
        }
        else if ( Blink )
        {
          if ( (unsigned __int16)v11 >= 0xC0u )
            LOWORD(v11) = *((_WORD *)&Blink->Flink
                          + (v11 & 0xF)
                          + *((unsigned __int16 *)&Blink->Flink
                            + ((unsigned __int8)v11 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Blink->Flink + (v11 >> 8))))
                        + v11;
        }
      }
      DestinationString->Buffer[i] = v11;
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
