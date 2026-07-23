/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x18009F380
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x18009F1E0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax

  v7 = qword_1801C5038;
  v8 = a5;
  if ( a5 >= a2 )
    v8 = a2;
  if ( a3 )
    *a3 = v8;
  if ( v8 )
  {
    v10 = v8;
    do
    {
      v11 = *(unsigned __int16 *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6));
      if ( (unsigned int)v11 >= 0x61 )
      {
        if ( (unsigned int)v11 > 0x7A )
        {
          if ( v7 && (unsigned __int16)v11 >= 0xC0u )
            LOWORD(v11) = *(_WORD *)(v7
                                   + 2
                                   * ((v11 & 0xF)
                                    + *(unsigned __int16 *)(v7
                                                          + 2LL
                                                          * (((unsigned __int8)v11 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v7 + 2 * (v11 >> 8))))))
                        + v11;
        }
        else
        {
          LOWORD(v11) = v11 - 32;
        }
      }
      ++a4;
      *a1++ = *(_BYTE *)((unsigned __int16)v11 + a6);
      --v10;
    }
    while ( v10 );
  }
  return a2 < a5 ? 0x80000005 : 0;
}
