/*
 * XREFs of CmpSetValueDataExisting @ 0x140B33210
 * Callers:
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter2,
        char *Src,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  char *v7; // r12
  bool v8; // zf
  __int64 CellPaged; // rax
  __int64 v10; // r14
  char v12; // di
  __int64 v13; // rdx
  __int64 CellFlat; // rax
  __int64 v15; // r15
  int Cell; // edi
  unsigned int v17; // esi
  unsigned int v18; // esi
  ULONG_PTR v19; // rdx
  int v20; // eax
  unsigned __int16 v21; // r12
  unsigned __int16 v22; // di
  ULONG_PTR v23; // rdx
  unsigned __int16 i; // di
  __int64 v25; // rdx
  void *v26; // rax
  size_t v27; // r8
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v30[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v31[2]; // [rsp+58h] [rbp-8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  char *v33; // [rsp+A8h] [rbp+48h]
  unsigned int v34; // [rsp+B8h] [rbp+58h]

  v34 = a4;
  v33 = Src;
  v30[1] = 0;
  v30[0] = -1;
  v7 = Src;
  v31[0] = -1;
  v8 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v28 = 0xFFFFFFFFLL;
  v31[1] = 0;
  LODWORD(v32) = 0;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2, a5);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, a5, v31);
  v10 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  v12 = *(_BYTE *)(BugCheckParameter2 + 140);
  v13 = *(unsigned int *)(CellPaged + 4);
  if ( (v12 & 1) != 0 )
  {
    CellFlat = HvpGetCellFlat(BugCheckParameter2, v13, (unsigned int *)&v28);
  }
  else
  {
    CellFlat = HvpGetCellPaged(BugCheckParameter2, v13);
    v12 = *(_BYTE *)(BugCheckParameter2 + 140);
  }
  v15 = CellFlat;
  if ( CellFlat )
  {
    v17 = a3 + 16343;
    if ( a3 + 16343 >= a3 && v17 < 0x3FD80000 )
    {
      v18 = v17 / 0x3FD8;
      if ( (unsigned __int16)v18 <= *(_WORD *)(v10 + 2) )
      {
        if ( (unsigned __int16)v18 < *(_WORD *)(v10 + 2) )
        {
          v22 = v18;
          do
            HvFreeCell(BugCheckParameter2, *(unsigned int *)(v15 + 4LL * v22++));
          while ( v22 < *(_WORD *)(v10 + 2) );
          if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v28);
          else
            HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v28);
          v23 = *(unsigned int *)(v10 + 4);
          v29 = 0LL;
          HvReallocateCell(BugCheckParameter2, v23, 4 * (unsigned __int16)v18, 1, (unsigned int *)&v32, &v29, &v28);
          v15 = v29;
          *(_DWORD *)(v10 + 4) = v32;
        }
      }
      else
      {
        if ( (v12 & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v28);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v28);
        v19 = *(unsigned int *)(v10 + 4);
        v29 = 0LL;
        v20 = HvReallocateCell(
                BugCheckParameter2,
                v19,
                4 * (unsigned int)(unsigned __int16)v18,
                1,
                (unsigned int *)&v32,
                &v29,
                &v28);
        v15 = v29;
        Cell = v20;
        if ( v20 < 0 )
          goto LABEL_44;
        v21 = *(_WORD *)(v10 + 2);
        *(_DWORD *)(v10 + 4) = v32;
        while ( v21 < (unsigned __int16)v18 )
        {
          Cell = HvAllocateCell(BugCheckParameter2, 16344, v34, (unsigned int *)(v15 + 4LL * v21), 0LL, 0LL);
          if ( Cell < 0 )
            goto LABEL_44;
          ++v21;
        }
        v7 = v33;
      }
      for ( i = 0; i < (unsigned __int16)v18; ++i )
      {
        v25 = *(unsigned int *)(v15 + 4LL * i);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          v26 = (void *)HvpGetCellFlat(BugCheckParameter2, v25, v30);
        else
          v26 = (void *)HvpGetCellPaged(BugCheckParameter2, v25);
        if ( !v26 )
          goto LABEL_10;
        v27 = a3;
        if ( a3 > 0x3FD8 )
          v27 = 16344LL;
        memmove(v26, v7, v27);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, (__int64)v30);
        else
          HvpReleaseCellPaged(BugCheckParameter2, v30);
        a3 -= 16344;
        v7 += 16344;
      }
      *(_WORD *)(v10 + 2) = v18;
      Cell = 0;
      goto LABEL_44;
    }
    Cell = -1073741675;
  }
  else
  {
LABEL_10:
    Cell = -1073741670;
  }
LABEL_44:
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v28);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v28);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, (__int64)v31);
  else
    HvpReleaseCellPaged(BugCheckParameter2, v31);
  return (unsigned int)Cell;
}
