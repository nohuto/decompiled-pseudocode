/*
 * XREFs of CmpDoCompareKeyName @ 0x1408DA640
 * Callers:
 *     CmpSelectLeaf @ 0x1408C629C (CmpSelectLeaf.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     CmpCompareTwoCompressedNames @ 0x140A50420 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpDoCompareKeyName(ULONG_PTR a1, unsigned __int16 *a2, unsigned __int16 *a3, unsigned int a4)
{
  bool v4; // zf
  __int64 CellPaged; // rax
  WCHAR *v9; // r13
  WCHAR *v10; // r12
  unsigned __int16 v11; // bp
  unsigned __int16 i; // di
  int v13; // ebx
  WCHAR v15; // si
  unsigned int v16; // ebx
  LONG v17; // eax
  unsigned __int8 *v18; // r12
  unsigned __int16 v19; // bp
  unsigned __int16 j; // si
  int v21; // ebx
  WCHAR v22; // di
  unsigned int v23; // ebx
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+64h] [rbp+Ch]

  v24 = -1;
  v4 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v25 = 0;
  if ( v4 )
    CellPaged = HvpGetCellPaged(a1);
  else
    CellPaged = HvpGetCellFlat(a1, a4, &v24);
  if ( !CellPaged )
    return 2LL;
  v9 = (WCHAR *)(CellPaged + 76);
  if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
  {
    if ( !a3 )
    {
      v10 = (WCHAR *)*((_QWORD *)a2 + 1);
      v11 = *(_WORD *)(CellPaged + 72);
      for ( i = *a2 >> 1; i && v11; --i )
      {
        v15 = *v10++;
        v16 = *(unsigned __int8 *)v9;
        v9 = (WCHAR *)((char *)v9 + 1);
        if ( v15 != (_WORD)v16 )
        {
          if ( v15 >= 0x61u )
          {
            if ( v15 > 0x7Au )
              v15 = RtlUpcaseUnicodeChar(v15);
            else
              v15 -= 32;
          }
          if ( v16 >= 0x61 )
          {
            if ( v16 > 0x7A )
              LOWORD(v16) = RtlUpcaseUnicodeChar(v16);
            else
              LOWORD(v16) = v16 - 32;
          }
          v13 = v15 - (unsigned __int16)v16;
          if ( v13 )
            goto LABEL_9;
        }
        --v11;
      }
      v13 = i - v11;
      goto LABEL_9;
    }
    v17 = CmpCompareTwoCompressedNames(*((_QWORD *)a3 + 1), *a3, CellPaged + 76, *(unsigned __int16 *)(CellPaged + 72));
  }
  else
  {
    if ( a3 )
    {
      v18 = (unsigned __int8 *)*((_QWORD *)a3 + 1);
      v19 = *a3;
      for ( j = *(_WORD *)(CellPaged + 72) >> 1; j && v19; --j )
      {
        v22 = *v9++;
        v23 = *v18++;
        if ( v22 != (_WORD)v23 )
        {
          if ( v22 >= 0x61u )
          {
            if ( v22 > 0x7Au )
              v22 = RtlUpcaseUnicodeChar(v22);
            else
              v22 -= 32;
          }
          if ( v23 >= 0x61 )
          {
            if ( v23 > 0x7A )
              LOWORD(v23) = RtlUpcaseUnicodeChar(v23);
            else
              LOWORD(v23) = v23 - 32;
          }
          v21 = v22 - (unsigned __int16)v23;
          if ( v21 )
            goto LABEL_36;
        }
        --v19;
      }
      v21 = j - v19;
LABEL_36:
      v13 = -v21;
      goto LABEL_9;
    }
    v17 = RtlCompareUnicodeStrings(
            *((PCWCH *)a2 + 1),
            (unsigned __int64)*a2 >> 1,
            (PCWCH)(CellPaged + 76),
            (unsigned __int64)*(unsigned __int16 *)(CellPaged + 72) >> 1,
            1u);
  }
  v13 = v17;
LABEL_9:
  if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
    HvpReleaseCellFlat(a1, &v24);
  else
    HvpReleaseCellPaged(a1, &v24);
  if ( v13 )
    return ((v13 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
