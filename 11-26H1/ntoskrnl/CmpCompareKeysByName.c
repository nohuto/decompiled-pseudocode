/*
 * XREFs of CmpCompareKeysByName @ 0x140A50214
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14094420C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140944570 (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x1409446E4 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B42968 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareCompressedName @ 0x1409DFA40 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 *     CmpCompareUnicodeString @ 0x140A8961C (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpCompareKeysByName(__int64 a1, _WORD *a2)
{
  WCHAR *v2; // r12
  __int16 v3; // r8
  unsigned __int8 *v4; // r15
  bool v5; // zf
  unsigned __int16 v6; // r14
  unsigned __int16 i; // si
  int v9; // edx
  WCHAR v10; // di
  unsigned int v11; // ebx
  unsigned __int16 v12; // r8
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF

  v2 = a2 + 38;
  v3 = a2[1] & 0x20;
  v4 = (unsigned __int8 *)(a1 + 76);
  v5 = (*(_BYTE *)(a1 + 2) & 0x20) == 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( v5 )
  {
    *((_QWORD *)&v13 + 1) = a1 + 76;
    if ( v3 )
    {
      v12 = a2[36];
      LOWORD(v13) = *(_WORD *)(a1 + 72);
      WORD1(v13) = v13;
      return CmpCompareCompressedName((__int64)&v13, (unsigned __int8 *)a2 + 76, v12, 0);
    }
    else
    {
      LOWORD(v14) = a2[36];
      WORD1(v14) = v14;
      LOWORD(v13) = *(_WORD *)(a1 + 72);
      WORD1(v13) = v13;
      *((_QWORD *)&v14 + 1) = a2 + 38;
      return CmpCompareUnicodeString(&v13, &v14, 0LL);
    }
  }
  else
  {
    v6 = *(_WORD *)(a1 + 72);
    if ( v3 )
    {
      return CmpCompareTwoCompressedNames(a1 + 76, *(unsigned __int16 *)(a1 + 72), v2, (unsigned __int16)a2[36]);
    }
    else
    {
      for ( i = a2[36] >> 1; i && v6; --i )
      {
        v10 = *v2++;
        v11 = *v4++;
        if ( v10 != (_WORD)v11 )
        {
          if ( v10 >= 0x61u )
          {
            if ( v10 > 0x7Au )
              v10 = RtlUpcaseUnicodeChar(v10);
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              LOWORD(v11) = RtlUpcaseUnicodeChar(v11);
            else
              LOWORD(v11) = v11 - 32;
          }
          v9 = v10 - (unsigned __int16)v11;
          if ( v10 != (unsigned __int16)v11 )
            return (unsigned int)-v9;
        }
        --v6;
      }
      v9 = i - v6;
      return (unsigned int)-v9;
    }
  }
}
