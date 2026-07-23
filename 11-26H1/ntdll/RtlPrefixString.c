/*
 * XREFs of RtlPrefixString @ 0x1800C7800
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x18007A160 (RtlUpperChar.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

BOOLEAN __cdecl RtlPrefixString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rbx
  char *v5; // rsi
  char *v6; // r14
  CHAR v7; // bp
  CHAR v9; // di

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length < (unsigned __int16)Length )
    return 0;
  v6 = &Buffer[Length];
  if ( !CaseInSensitive )
    return memcmp(String1->Buffer, String2->Buffer, String1->Length) == 0;
  while ( Buffer < v6 )
  {
    v7 = *Buffer;
    if ( *Buffer != *v5 )
    {
      v9 = RtlUpperChar(*v5);
      if ( RtlUpperChar(v7) != v9 )
        return 0;
    }
    ++Buffer;
    ++v5;
  }
  return 1;
}
