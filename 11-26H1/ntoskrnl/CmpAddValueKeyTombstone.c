/*
 * XREFs of CmpAddValueKeyTombstone @ 0x140858F40
 * Callers:
 *     CmpSetValueKeyTombstone @ 0x140B4F768 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408DB7FC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408DD750 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408DD790 (CmpCopyName.c)
 */

__int64 __fastcall CmpAddValueKeyTombstone(ULONG_PTR BugCheckParameter2, unsigned __int16 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // r15d
  int Cell; // eax
  _WORD *v10; // rbx
  unsigned int v11; // esi
  unsigned __int16 v12; // ax
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  void *v15; // [rsp+40h] [rbp-28h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  HvpGetCellContextInitialize(&v14);
  v8 = (unsigned __int16)CmpNameSize(v7) + 20;
  Cell = HvAllocateCell(BugCheckParameter2, (__int64)&v15, (__int64)&v14);
  v10 = v15;
  v11 = Cell;
  if ( Cell >= 0 )
  {
    memset_0(v15, 0, v8);
    *v10 = 27510;
    v10[8] = 2;
    *((_DWORD *)v10 + 1) = 0;
    *((_DWORD *)v10 + 2) = -1;
    *((_DWORD *)v10 + 3) = 0;
    v12 = CmpCopyName(v10 + 10, a2);
    v10[1] = v12;
    if ( v12 < *a2 )
      v10[8] |= 1u;
    v11 = 0;
    *a4 = -1;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v14);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v14);
  }
  return v11;
}
