/*
 * XREFs of CmpDuplicateIndex @ 0x140A40E80
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140A407E4 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvDuplicateCell @ 0x140A4115C (HvDuplicateCell.c)
 */

__int64 __fastcall CmpDuplicateIndex(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, unsigned int *a4)
{
  unsigned int v4; // edi
  _DWORD *v6; // r14
  _WORD *CellFlat; // rax
  _WORD *v8; // r15
  int v9; // r13d
  unsigned int v10; // esi
  _DWORD *CellPaged; // rax
  unsigned int i; // r12d
  _WORD *v14; // rax
  _WORD *v15; // rsi
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v17[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v18[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+A0h] [rbp+50h]
  unsigned int *v21; // [rsp+A8h] [rbp+58h]

  v21 = a4;
  v20 = a3;
  v4 = 0;
  v18[1] = 0;
  v18[0] = -1;
  v17[0] = -1;
  LODWORD(v19) = -1;
  v6 = 0LL;
  v17[1] = 0;
  LODWORD(v16) = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter2, a2, v18);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter2, a2);
  v8 = CellFlat;
  if ( *CellFlat == 26994 )
  {
    v9 = HvDuplicateCell(BugCheckParameter2, (__int64)&v19);
    if ( v9 >= 0 )
    {
      v10 = v19;
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        CellPaged = (_DWORD *)HvpGetCellFlat(BugCheckParameter2, v19, v17);
      else
        CellPaged = (_DWORD *)HvpGetCellPaged(BugCheckParameter2, (unsigned int)v19);
      v6 = CellPaged;
      *CellPaged = 26994;
      for ( i = 0; i < (unsigned __int16)v8[1]; ++i )
      {
        v9 = HvDuplicateCell(BugCheckParameter2, (__int64)&v16);
        if ( v9 < 0 )
          goto LABEL_7;
        v6[i + 1] = v16;
        ++*((_WORD *)v6 + 1);
      }
      goto LABEL_6;
    }
LABEL_20:
    v10 = v19;
    goto LABEL_8;
  }
  v9 = HvDuplicateCell(BugCheckParameter2, (__int64)&v19);
  if ( v9 < 0 )
    goto LABEL_20;
  v10 = v19;
LABEL_6:
  *v21 = v10;
  v10 = -1;
LABEL_7:
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)v17);
    else
      HvpReleaseCellPaged(BugCheckParameter2, v17);
  }
LABEL_8:
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, (__int64)v18);
  else
    HvpReleaseCellPaged(BugCheckParameter2, v18);
  if ( v10 != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      v14 = (_WORD *)HvpGetCellFlat(BugCheckParameter2, v10, v17);
    else
      v14 = (_WORD *)HvpGetCellPaged(BugCheckParameter2, v10);
    v15 = v14;
    if ( *v14 == 26994 && v14[1] )
    {
      do
        HvFreeCell(BugCheckParameter2, *(unsigned int *)&v15[2 * v4++ + 2]);
      while ( v4 < (unsigned __int16)v15[1] );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)v17);
    else
      HvpReleaseCellPaged(BugCheckParameter2, v17);
  }
  return (unsigned int)v9;
}
