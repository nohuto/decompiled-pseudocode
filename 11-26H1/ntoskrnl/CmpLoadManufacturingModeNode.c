/*
 * XREFs of CmpLoadManufacturingModeNode @ 0x140CF6170
 * Callers:
 *     CmpLoadManufacturingProfileNode @ 0x140CF62AC (CmpLoadManufacturingProfileNode.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x140AC518C (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadManufacturingModeNode(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 *a3, unsigned int *a4)
{
  bool v4; // zf
  __int64 CellPaged; // rax
  unsigned int SubKeyByName; // edi
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 CellFlat; // rax
  unsigned int v14[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+50h] [rbp+20h] BYREF
  int v16; // [rsp+54h] [rbp+24h]

  v14[0] = -1;
  v4 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v14[1] = 0;
  v15 = -1;
  v16 = 0;
  if ( v4 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v15);
  if ( !CellPaged )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, CellPaged, (unsigned __int16 *)&CmpControlString);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v15);
  if ( SubKeyByName == -1 )
    return 0;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, v14)
      : HvpGetCellPaged(BugCheckParameter3, SubKeyByName);
  if ( !v10 )
    return 0;
  v11 = CmpFindSubKeyByName(BugCheckParameter3, v10, L"\"$");
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v14);
  if ( v11 == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v11, a4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v11);
  *a3 = CellFlat;
  return CellFlat != 0;
}
