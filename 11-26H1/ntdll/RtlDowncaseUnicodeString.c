/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1800C42B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v5; // rdi
  unsigned __int16 v6; // r14
  __int64 Atom; // rax
  unsigned int v8; // r11d
  __int64 i; // r10
  unsigned __int64 v10; // r9

  if ( !a3 && !*a2 )
  {
    *(_WORD *)a1 = 0;
    return 0LL;
  }
  v5 = qword_1801C6040;
  v6 = *a2;
  if ( a3 )
  {
    Atom = RtlpAllocateAtom(*a2);
    *(_QWORD *)(a1 + 8) = Atom;
    if ( Atom )
    {
      *(_WORD *)(a1 + 2) = v6;
      goto LABEL_6;
    }
    *(_WORD *)(a1 + 2) = 0;
    return 3221225495LL;
  }
  else
  {
    if ( v6 <= *(_WORD *)(a1 + 2) && *(_QWORD *)(a1 + 8) )
    {
LABEL_6:
      v8 = *a2 >> 1;
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
      {
        v10 = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2 * i);
        if ( (unsigned int)v10 >= 0x41 )
        {
          if ( (unsigned int)v10 <= 0x5A )
          {
            LOWORD(v10) = v10 + 32;
          }
          else if ( v5 )
          {
            if ( (unsigned __int16)v10 >= 0xC0u )
              LOWORD(v10) = *(_WORD *)(v5
                                     + 2
                                     * ((v10 & 0xF)
                                      + *(unsigned __int16 *)(v5
                                                            + 2LL
                                                            * (((unsigned __int8)v10 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v5 + 2 * (v10 >> 8))))))
                          + v10;
          }
        }
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * i) = v10;
      }
      *(_WORD *)a1 = *a2;
      return 0LL;
    }
    return 2147483653LL;
  }
}
