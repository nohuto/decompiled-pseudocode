/*
 * XREFs of CmpMarkKeyParentDirty @ 0x140B00B7C
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpMarkIndexDirty @ 0x1408C3D30 (CmpMarkIndexDirty.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpMarkKeyParentDirty(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  bool v2; // zf
  __int64 CellPaged; // rax
  unsigned int v5; // esi
  int v6; // edi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v9 = 0;
  if ( v2 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  if ( (*(_BYTE *)(CellPaged + 2) & 4) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(CellPaged + 16);
    v6 = CmpMarkIndexDirty(BugCheckParameter3, v5);
    if ( v6 >= 0 )
    {
      v6 = HvpMarkCellDirty(BugCheckParameter3, v5, 0);
      if ( v6 >= 0 )
        v6 = 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v8);
  return (unsigned int)v6;
}
