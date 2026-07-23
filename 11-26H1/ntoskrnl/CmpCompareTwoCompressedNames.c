/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x140A50420
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x1408D8DA0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     CmpCompareKeysByName @ 0x140A50214 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A50360 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140B42454 (CmpFindKcbInHashEntryByCompressedName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned int v8; // r15d
  unsigned int v9; // r14d

  while ( a2 && a4 )
  {
    v8 = *a1++;
    v9 = *a3++;
    if ( (_WORD)v8 != (_WORD)v9 )
    {
      if ( v8 >= 0x61 )
      {
        if ( v8 > 0x7A )
          LOWORD(v8) = RtlUpcaseUnicodeChar(v8);
        else
          LOWORD(v8) = v8 - 32;
      }
      if ( v9 >= 0x61 )
      {
        if ( v9 > 0x7A )
          LOWORD(v9) = RtlUpcaseUnicodeChar(v9);
        else
          LOWORD(v9) = v9 - 32;
      }
      if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
        return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
    }
    --a2;
    --a4;
  }
  return a2 - (unsigned int)a4;
}
