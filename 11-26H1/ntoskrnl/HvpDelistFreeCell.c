/*
 * XREFs of HvpDelistFreeCell @ 0x1408E3DC8
 * Callers:
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvpDoAllocateCell @ 0x1408E20F0 (HvpDoAllocateCell.c)
 *     HvpIsFreeNeighbor @ 0x140A92FF0 (HvpIsFreeNeighbor.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpRemoveFreeCellHint @ 0x1408E2F60 (HvpRemoveFreeCellHint.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR a1, __int64 a2, int a3)
{
  bool v3; // zf
  unsigned int v5; // edi
  __int64 CellPaged; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  v13 = -1;
  v3 = (*(_BYTE *)(a1 + 140) & 1) == 0;
  v5 = a2;
  v14 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(a1, a2);
  else
    CellPaged = HvpGetCellFlat(a1, a2, &v13);
  v8 = CellPaged;
  result = CellPaged - 4;
  v10 = (_DWORD *)(result & -(__int64)(v8 != 0));
  if ( v10 )
  {
    v11 = (*v10 >> 3) - 1;
    if ( v11 >= 0x10 )
    {
      v12 = v11 >> 4;
      if ( v12 > 0xFF )
      {
        v11 = 23;
      }
      else
      {
        _BitScanReverse(&v12, v12);
        v11 = v12 + 16;
      }
    }
    HvpRemoveFreeCellHint(a1, v5, v11, a3, 0);
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(a1, (__int64)&v13);
    else
      return HvpReleaseCellPaged(a1, &v13);
  }
  return result;
}
