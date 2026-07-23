/*
 * XREFs of RtlPrefixString @ 0x14097DFD0
 * Callers:
 *     IopCheckDiskName @ 0x1405CDF18 (IopCheckDiskName.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlUpperChar @ 0x14097D180 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // r14
  CHAR v7; // bp
  CHAR v8; // bl

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
      v8 = RtlUpperChar(*v5);
      if ( RtlUpperChar(v7) != v8 )
        return 0;
    }
    ++Buffer;
    ++v5;
  }
  return 1;
}
