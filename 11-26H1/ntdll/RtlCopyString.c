/*
 * XREFs of RtlCopyString @ 0x180104F20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

void __cdecl RtlCopyString(PSTRING DestinationString, PSTRING SourceString)
{
  unsigned __int64 MaximumLength; // r8

  DestinationString->Length = 0;
  if ( SourceString )
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( SourceString->Length <= MaximumLength )
      MaximumLength = SourceString->Length;
    DestinationString->Length = MaximumLength;
    memmove(DestinationString->Buffer, SourceString->Buffer, MaximumLength);
  }
}
