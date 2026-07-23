/*
 * XREFs of CmpInsertSecurityCellList @ 0x140AE3114
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpAddSecurityCellToCache @ 0x1409C96E0 (CmpAddSecurityCellToCache.c)
 */

__int64 __fastcall CmpInsertSecurityCellList(ULONG_PTR BugCheckParameter3, unsigned int a2, signed int a3, char a4)
{
  bool v7; // zf
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 CellPaged; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // rcx
  __int64 CellFlat; // rax
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v27[2]; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v28[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v29[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v30[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+90h] [rbp+40h]
  char v32; // [rsp+A0h] [rbp+50h]

  v31 = 0LL;
  v26[0] = -1;
  v7 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v8 = 0LL;
  v26[1] = 0;
  v9 = 0LL;
  v27[0] = -1;
  v10 = 0LL;
  v27[1] = 0;
  v30[0] = -1;
  v30[1] = 0;
  v29[0] = -1;
  v29[1] = 0;
  v28[0] = -1;
  v28[1] = 0;
  v32 = 0;
  if ( v7 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, (unsigned int)a3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a3, v30);
  v13 = CellPaged;
  if ( a3 < 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, v29);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
  v9 = CellFlat;
  v18 = *(_WORD *)(CellFlat + 2) & 4;
  if ( a4 )
  {
    v10 = v9;
  }
  else
  {
    if ( v18 )
    {
LABEL_4:
      *(_DWORD *)(v13 + 8) = a3;
      *(_DWORD *)(v13 + 4) = a3;
      goto LABEL_5;
    }
    v24 = *(unsigned int *)(v9 + 16);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v25 = HvpGetCellFlat(BugCheckParameter3, v24, v28);
    else
      v25 = HvpGetCellPaged(BugCheckParameter3, v24);
    v10 = v25;
  }
  v19 = *(unsigned int *)(v10 + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v20 = HvpGetCellFlat(BugCheckParameter3, v19, v27);
  else
    v20 = HvpGetCellPaged(BugCheckParameter3, v19);
  v21 = *(unsigned int *)(v20 + 4);
  v8 = v20;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v22 = HvpGetCellFlat(BugCheckParameter3, v21, v26);
  else
    v22 = HvpGetCellPaged(BugCheckParameter3, v21);
  v31 = v22;
  v14 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v10 + 44), 0);
  if ( v14 < 0 )
    goto LABEL_7;
  v23 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v8 + 4), 0);
  v15 = v31;
  v14 = v23;
  if ( v23 < 0 )
    goto LABEL_8;
  *(_DWORD *)(v13 + 4) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v13 + 8) = *(_DWORD *)(v31 + 8);
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v31 + 8) = a3;
  v32 = 1;
LABEL_5:
  v14 = CmpAddSecurityCellToCache(BugCheckParameter3, a3, 0, v12);
  if ( v14 >= 0 )
  {
    v14 = 0;
LABEL_7:
    v15 = v31;
    goto LABEL_8;
  }
  v15 = v31;
  if ( v32 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v31 + 8) = *(_DWORD *)(v13 + 8);
  }
LABEL_8:
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v26);
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v27);
  }
  if ( v10 && v10 != v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v28);
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v29);
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v30);
  }
  return (unsigned int)v14;
}
