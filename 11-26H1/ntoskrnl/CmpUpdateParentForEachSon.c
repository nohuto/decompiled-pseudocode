/*
 * XREFs of CmpUpdateParentForEachSon @ 0x14086645C
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpUpdateParentForEachSon(ULONG_PTR BugCheckParameter3, unsigned int a2, char a3)
{
  bool v5; // zf
  __int64 CellPaged; // rax
  unsigned int v7; // r15d
  unsigned int i; // esi
  int SubKeyByNumber; // edi
  __int64 CellFlat; // rax
  unsigned int v12; // [rsp+60h] [rbp+40h] BYREF
  int v13; // [rsp+64h] [rbp+44h]
  unsigned int v14; // [rsp+70h] [rbp+50h]
  unsigned int v15; // [rsp+78h] [rbp+58h] BYREF
  int v16; // [rsp+7Ch] [rbp+5Ch]

  LOBYTE(v14) = a3;
  v16 = 0;
  v13 = 0;
  v15 = -1;
  v12 = -1;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v14 = 0;
  if ( v5 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v15);
  v7 = *(_DWORD *)(CellPaged + 20) + *(_DWORD *)(CellPaged + 24);
  for ( i = 0; i < v7; ++i )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
    if ( SubKeyByNumber < 0 )
      goto LABEL_15;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v14, &v12);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    *(_DWORD *)(CellFlat + 16) = a2;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v12);
  }
  SubKeyByNumber = 0;
LABEL_15:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v15);
  return (unsigned int)SubKeyByNumber;
}
