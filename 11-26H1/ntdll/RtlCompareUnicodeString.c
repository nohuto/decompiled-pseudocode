/*
 * XREFs of RtlCompareUnicodeString @ 0x1800B9DC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rbx
  wchar_t *v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  wchar_t *v8; // r10
  SIZE_T v9; // rcx
  signed __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9

  Buffer = String1->Buffer;
  v4 = String2->Buffer;
  v5 = (unsigned __int64)String1->Length >> 1;
  v6 = (unsigned __int64)String2->Length >> 1;
  v7 = v5;
  if ( v5 > v6 )
    v7 = (unsigned __int64)String2->Length >> 1;
  v8 = &Buffer[v7];
  if ( CaseInSensitive )
  {
    v11 = (char *)v4 - (char *)Buffer;
    while ( Buffer < v8 )
    {
      v12 = *Buffer;
      v13 = *(wchar_t *)((char *)Buffer + v11);
      if ( (_WORD)v12 != (_WORD)v13 )
      {
        if ( (unsigned int)v12 >= 0x61 )
        {
          if ( (unsigned int)v12 > 0x7A )
          {
            if ( qword_1801C5038 && (unsigned __int16)v12 >= 0xC0u )
              LOWORD(v12) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v12 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (((unsigned __int8)v12 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                                 + 2 * (v12 >> 8))))))
                          + v12;
          }
          else
          {
            LOWORD(v12) = v12 - 32;
          }
        }
        if ( (unsigned int)v13 >= 0x61 )
        {
          if ( (unsigned int)v13 > 0x7A )
          {
            if ( qword_1801C5038 )
            {
              if ( (unsigned __int16)v13 >= 0xC0u )
                LOWORD(v13) = *(_WORD *)(qword_1801C5038
                                       + 2
                                       * ((v13 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801C5038
                                                              + 2LL
                                                              * (((unsigned __int8)v13 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v13 >> 8))))))
                            + v13;
            }
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
        if ( (_WORD)v12 != (_WORD)v13 )
          return (unsigned __int16)v12 - (unsigned __int16)v13;
      }
      ++Buffer;
    }
    return v5 - v6;
  }
  v9 = RtlCompareMemory(String1->Buffer, String2->Buffer, 2 * v7) >> 1;
  if ( v9 >= v7 )
    return v5 - v6;
  return Buffer[v9] - v4[v9];
}
