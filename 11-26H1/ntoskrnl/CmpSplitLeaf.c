/*
 * XREFs of CmpSplitLeaf @ 0x1408C5D28
 * Callers:
 *     CmpSelectLeaf @ 0x1408C629C (CmpSelectLeaf.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  unsigned int v10; // r14d
  _WORD *CellPaged; // rax
  _WORD *v12; // r12
  int v13; // r14d
  int Cell; // eax
  unsigned int v15; // r14d
  unsigned __int16 v16; // si
  _WORD *v17; // rdx
  __int64 v18; // rsi
  int v19; // ecx
  int v21; // eax
  unsigned __int16 v22; // [rsp+40h] [rbp-30h]
  unsigned int Size; // [rsp+48h] [rbp-28h]
  unsigned int Size_4; // [rsp+4Ch] [rbp-24h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v26[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+68h] [rbp-8h] BYREF
  unsigned __int16 v29; // [rsp+B0h] [rbp+40h]

  v6 = a3;
  v25 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v26[0] = -1;
  v26[1] = 0;
  v27 = 0xFFFFFFFFLL;
  Size_4 = 0;
  v28 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, (unsigned int *)&v25);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( *(_WORD *)(CellFlat + 2) == 0xFFFF )
  {
    v13 = -1073741670;
    goto LABEL_22;
  }
  v10 = *(_DWORD *)(CellFlat + 4 * v6 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(CellFlat + 4 * v6 + 4), v26);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v12 = CellPaged;
  v29 = CellPaged[1] >> 1;
  v22 = CellPaged[1] - v29;
  if ( *CellPaged == 26732 || (Size = 4, *CellPaged == 26220) )
    Size = 8;
  v13 = HvpMarkCellDirty(BugCheckParameter3, v10);
  if ( v13 >= 0 )
  {
    Size *= v22;
    Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v28, (__int64)&v27);
    v7 = v28;
    v13 = Cell;
    if ( Cell >= 0 )
    {
      *(_WORD *)v28 = *v12;
      if ( ((-8 - 4 * *(unsigned __int16 *)(v9 + 2) - *(_DWORD *)(v9 - 4)) & 0xFFFFFFFC) >= 4 )
      {
        v15 = a2;
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v25);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v25);
      v28 = 0LL;
      v21 = HvReallocateCell(BugCheckParameter3, a2, (__int64)&Size_4, (__int64)&v28, (__int64)&v25);
      v9 = v28;
      v13 = v21;
      if ( v21 >= 0 )
      {
        v15 = Size_4;
LABEL_12:
        if ( *v12 == 26732 || *v12 == 26220 )
        {
          v16 = v29;
          v17 = &v12[4 * v29 + 2];
        }
        else
        {
          v16 = v29;
          v17 = &v12[2 * v29 + 2];
        }
        memmove((void *)(v7 + 4), v17, Size);
        v12[1] = v16;
        v18 = (unsigned int)(v6 + 1);
        *(_WORD *)(v7 + 2) = v22;
        v19 = *(unsigned __int16 *)(v9 + 2);
        if ( (unsigned int)v6 < v19 - 1 )
          memmove(
            (void *)(v9 + 4 * ((unsigned int)(v6 + 2) + 1LL)),
            (const void *)(v9 + 4 * ((unsigned int)v18 + 1LL)),
            4LL * (unsigned int)(v19 - v6 - 1));
        ++*(_WORD *)(v9 + 2);
        *(_DWORD *)(v9 + 4 * v18 + 4) = -1;
        *a5 = v15;
        v13 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v26);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v26);
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v27);
  }
LABEL_22:
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v25);
  }
  return (unsigned int)v13;
}
