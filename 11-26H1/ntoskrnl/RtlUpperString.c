/*
 * XREFs of RtlUpperString @ 0x14096C880
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x14096CC40 (RtlpIsUtf8Process.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // ebp
  char *Buffer; // rdi
  char *v4; // rsi
  char v5; // bl

  Length = SourceString->Length;
  Buffer = DestinationString->Buffer;
  v4 = SourceString->Buffer;
  if ( (unsigned __int16)Length > DestinationString->MaximumLength )
    Length = DestinationString->MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
  {
    v5 = *v4;
    RtlpIsUtf8Process(0LL);
    if ( v5 >= 97 && v5 <= 122 )
      v5 ^= 0x20u;
    *Buffer = v5;
    ++v4;
    ++Buffer;
  }
}
