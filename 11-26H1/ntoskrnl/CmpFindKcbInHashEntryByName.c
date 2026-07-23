/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x1409DF780
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  __int64 v6; // rcx
  WCHAR *v7; // r12
  __int16 v8; // si
  __int16 *v9; // r14
  unsigned __int16 v10; // bp
  WCHAR v12; // ax
  __int16 v13; // r13
  WCHAR v14; // ax
  __int16 v15; // r13
  __int64 v16; // [rsp+70h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); ; i = *(_QWORD *)(i + 8) )
  {
    if ( !i )
      return 0LL;
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
      break;
LABEL_9:
    ;
  }
  v6 = *(_QWORD *)(i + 64);
  v7 = *(WCHAR **)(a4 + 8);
  v8 = *(_WORD *)a4 >> 1;
  v9 = (__int16 *)(v6 + 26);
  v10 = *(_WORD *)(v6 + 24);
  if ( (*(_DWORD *)(v6 + 12) & 1) != 0 )
  {
    while ( v8 && v10 )
    {
      v12 = *v7++;
      v13 = *(unsigned __int8 *)v9;
      v9 = (__int16 *)((char *)v9 + 1);
      if ( v12 != v13 )
      {
        if ( v12 >= 0x61u )
        {
          if ( v12 > 0x7Au )
            v12 = RtlUpcaseUnicodeChar(v12);
          else
            v12 -= 32;
        }
        if ( v12 != v13 )
          goto LABEL_8;
      }
      --v8;
      --v10;
    }
  }
  else
  {
    for ( v10 >>= 1; v8 && v10; --v10 )
    {
      v14 = *v7++;
      v15 = *v9++;
      if ( v14 != v15 )
      {
        if ( v14 >= 0x61u )
        {
          if ( v14 > 0x7Au )
            v14 = RtlUpcaseUnicodeChar(v14);
          else
            v14 -= 32;
        }
        if ( v14 != v15 )
          goto LABEL_8;
      }
      --v8;
    }
  }
  if ( v8 != v10 )
  {
LABEL_8:
    a3 = v16;
    a4 = v17;
    goto LABEL_9;
  }
  return i - 16;
}
