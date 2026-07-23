/*
 * XREFs of RtlAppendAsciizToString @ 0x180140690
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

NTSTATUS __cdecl RtlAppendAsciizToString(PSTRING Destination, PCSTR Source)
{
  size_t v4; // rdi
  __int64 Length; // rax

  if ( !Source )
    return 0;
  v4 = strlen(Source);
  if ( v4 <= 0xFFFF )
  {
    Length = Destination->Length;
    if ( Length + v4 <= Destination->MaximumLength )
    {
      memmove(&Destination->Buffer[Length], Source, v4);
      Destination->Length += v4;
      return 0;
    }
  }
  return -1073741789;
}
