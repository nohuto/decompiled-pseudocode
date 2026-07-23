/*
 * XREFs of RtlPrefixUnicodeString @ 0x1800A6410
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18005B900 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x1800A4A00 (RtlpDetermineDosPathNameType4.c)
 *     RtlNtPathNameToDosPathName @ 0x1800A6190 (RtlNtPathNameToDosPathName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CEF9C (LdrpFindOrPrepareEnclaveModule.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D1B94 (RtlpProcessIFEOKeyFilter.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rcx
  wchar_t *v5; // rbx
  char *v6; // r11
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length < (unsigned __int16)Length )
    return 0;
  v5 = (wchar_t *)((char *)Buffer + Length);
  if ( !CaseInSensitive )
    return memcmp(Buffer, String2->Buffer, (unsigned int)Length) == 0;
  v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
  while ( Buffer < v5 )
  {
    v7 = *Buffer;
    v8 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
    if ( (_WORD)v7 != (_WORD)v8 )
    {
      if ( (unsigned int)v7 >= 0x61 )
      {
        if ( (unsigned int)v7 > 0x7A )
        {
          if ( qword_1801C5038 && (unsigned __int16)v7 >= 0xC0u )
            LOWORD(v7) = *(_WORD *)(qword_1801C5038
                                  + 2
                                  * ((v7 & 0xF)
                                   + *(unsigned __int16 *)(qword_1801C5038
                                                         + 2LL
                                                         * (((unsigned __int8)v7 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                              + 2 * (v7 >> 8))))))
                       + v7;
        }
        else
        {
          LOWORD(v7) = v7 - 32;
        }
      }
      if ( (unsigned int)v8 >= 0x61 )
      {
        if ( (unsigned int)v8 > 0x7A )
        {
          if ( qword_1801C5038 )
          {
            if ( (unsigned __int16)v8 >= 0xC0u )
              LOWORD(v8) = *(_WORD *)(qword_1801C5038
                                    + 2
                                    * ((v8 & 0xF)
                                     + *(unsigned __int16 *)(qword_1801C5038
                                                           + 2LL
                                                           * (((unsigned __int8)v8 >> 4)
                                                            + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                                + 2 * (v8 >> 8))))))
                         + v8;
          }
        }
        else
        {
          LOWORD(v8) = v8 - 32;
        }
      }
      if ( (_WORD)v7 != (_WORD)v8 )
        return 0;
    }
    ++Buffer;
  }
  return 1;
}
