/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x180039B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     strlen @ 0x180164FE0 (strlen.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, char *Str)
{
  size_t v3; // rax
  STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = Str;
  if ( !Str )
    return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u) >= 0;
  v3 = strlen(Str);
  if ( v3 <= 0xFFFE )
  {
    SourceString.Length = v3;
    SourceString.MaximumLength = v3 + 1;
    return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u) >= 0;
  }
  return 0;
}
