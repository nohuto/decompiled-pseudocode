/*
 * XREFs of RtlCompareUnicodeString @ 0x1800BC890
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlCompareUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int16 *v8; // r10
  SIZE_T v9; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9

  v3 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a2 + 1);
  v5 = (unsigned __int64)*a1 >> 1;
  v6 = (unsigned __int64)*a2 >> 1;
  v7 = v5;
  if ( v5 > v6 )
    v7 = (unsigned __int64)*a2 >> 1;
  v8 = &v3[v7];
  if ( a3 )
  {
    v11 = v4 - (_QWORD)v3;
    while ( v3 < v8 )
    {
      v12 = *v3;
      v13 = *(unsigned __int16 *)((char *)v3 + v11);
      if ( (_WORD)v12 != (_WORD)v13 )
      {
        if ( (unsigned int)v12 >= 0x61 )
        {
          if ( (unsigned int)v12 > 0x7A )
          {
            if ( qword_1801C6038 && (unsigned __int16)v12 >= 0xC0u )
              LOWORD(v12) = *(_WORD *)(qword_1801C6038
                                     + 2
                                     * ((v12 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C6038
                                                            + 2LL
                                                            * (((unsigned __int8)v12 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C6038
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
            if ( qword_1801C6038 )
            {
              if ( (unsigned __int16)v13 >= 0xC0u )
                LOWORD(v13) = *(_WORD *)(qword_1801C6038
                                       + 2
                                       * ((v13 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801C6038
                                                              + 2LL
                                                              * (((unsigned __int8)v13 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801C6038 + 2 * (v13 >> 8))))))
                            + v13;
            }
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
        if ( (_WORD)v12 != (_WORD)v13 )
          return (unsigned __int16)v12 - (unsigned int)(unsigned __int16)v13;
      }
      ++v3;
    }
    return (unsigned int)(v5 - v6);
  }
  v9 = RtlCompareMemory(*((const void **)a1 + 1), *((const void **)a2 + 1), 2 * v7) >> 1;
  if ( v9 >= v7 )
    return (unsigned int)(v5 - v6);
  return v3[v9] - (unsigned int)*(unsigned __int16 *)(v4 + 2 * v9);
}
