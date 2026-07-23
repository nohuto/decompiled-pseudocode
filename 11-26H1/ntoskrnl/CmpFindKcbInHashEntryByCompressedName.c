/*
 * XREFs of CmpFindKcbInHashEntryByCompressedName @ 0x140B42454
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByCompressedName(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int16 a5)
{
  __int64 v6; // rsi
  unsigned __int8 *v7; // r11
  __int64 i; // rbp
  __int64 v9; // rax
  unsigned __int16 v10; // di
  unsigned __int8 *v11; // r12
  bool v12; // zf
  unsigned __int16 v13; // r14
  unsigned __int8 *v14; // r13
  __int16 j; // di
  unsigned __int16 v16; // cx
  unsigned int v17; // eax
  unsigned __int16 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v20 = a3;
  v6 = 0LL;
  v7 = a4;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v9 = *(_QWORD *)(i + 64);
      v10 = *(_WORD *)(v9 + 24);
      v11 = (unsigned __int8 *)(v9 + 26);
      if ( (*(_DWORD *)(v9 + 12) & 1) != 0 )
      {
        v12 = (unsigned int)CmpCompareTwoCompressedNames(v7, a5, v11, v10) == 0;
      }
      else
      {
        v13 = a5;
        v14 = v7;
        for ( j = v10 >> 1; j && v13; --j )
        {
          v16 = *(_WORD *)v11;
          v11 += 2;
          v17 = *v14++;
          v19 = v16;
          if ( v16 != (_WORD)v17 )
          {
            if ( v17 >= 0x61 )
            {
              if ( v17 <= 0x7A )
                LOWORD(v17) = v17 - 32;
              else
                LOWORD(v17) = RtlUpcaseUnicodeChar(v17);
            }
            if ( v19 != (unsigned __int16)v17 )
              goto LABEL_19;
          }
          --v13;
        }
        v12 = j == (__int16)v13;
      }
      if ( v12 )
        return i - 16;
LABEL_19:
      v7 = a4;
      a3 = v20;
    }
  }
  return v6;
}
