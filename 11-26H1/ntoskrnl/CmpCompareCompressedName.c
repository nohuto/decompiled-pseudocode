/*
 * XREFs of CmpCompareCompressedName @ 0x1409DFA40
 * Callers:
 *     CmpCompareKeysByName @ 0x140A50214 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A50360 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 *v5; // r14
  unsigned __int16 i; // bx
  unsigned __int64 v10; // rdi
  unsigned int v11; // r8d
  struct _LIST_ENTRY *Flink; // r9

  v5 = *(unsigned __int16 **)(a1 + 8);
  for ( i = *(_WORD *)a1 >> 1; ; --i )
  {
    if ( !i || !a3 )
      return i - (unsigned int)a3;
    v10 = *v5++;
    v11 = *a2++;
    if ( (_WORD)v10 != (_WORD)v11 )
    {
      if ( (a4 & 1) == 0 && (unsigned int)v10 >= 0x61 )
      {
        if ( (unsigned int)v10 > 0x7A )
        {
          Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( Flink && (unsigned __int16)v10 >= 0xC0u )
            LOWORD(v10) = *((_WORD *)&Flink->Flink
                          + (v10 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v10 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v10 >> 8))))
                        + v10;
        }
        else
        {
          LOWORD(v10) = v10 - 32;
        }
      }
      if ( (a4 & 2) == 0 && v11 >= 0x61 )
      {
        if ( v11 > 0x7A )
          LOWORD(v11) = RtlUpcaseUnicodeChar(v11);
        else
          LOWORD(v11) = v11 - 32;
      }
      if ( (unsigned __int16)v10 != (unsigned __int16)v11 )
        break;
    }
    --a3;
  }
  return (unsigned __int16)v10 - (unsigned int)(unsigned __int16)v11;
}
