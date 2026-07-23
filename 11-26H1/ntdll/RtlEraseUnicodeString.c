/*
 * XREFs of RtlEraseUnicodeString @ 0x1801118E0
 * Callers:
 *     <none>
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __cdecl RtlEraseUnicodeString(PUNICODE_STRING String)
{
  wchar_t *Buffer; // rcx

  Buffer = String->Buffer;
  if ( Buffer )
  {
    if ( String->MaximumLength )
    {
      memset_thunk_772440563353939046(Buffer, 0, String->MaximumLength);
      String->Length = 0;
    }
  }
}
