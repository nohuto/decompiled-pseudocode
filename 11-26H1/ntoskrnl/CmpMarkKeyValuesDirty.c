/*
 * XREFs of CmpMarkKeyValuesDirty @ 0x140B1F2A4
 * Callers:
 *     CmpFreeKeyValues @ 0x140B1F1B8 (CmpFreeKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpMarkValueDataDirty @ 0x1408C3BA4 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpMarkKeyValuesDirty(ULONG_PTR BugCheckParameter3, int a2, __int64 a3)
{
  bool v3; // zf
  __int64 v6; // r14
  int v7; // esi
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r13
  _BYTE *v13; // rdi
  __int64 v15; // rdx
  __int64 CellPaged; // rax
  __int64 i; // r12
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int *v21; // rdx
  unsigned int v22[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+50h] BYREF
  int v24; // [rsp+84h] [rbp+54h]
  unsigned int v25; // [rsp+88h] [rbp+58h] BYREF
  int v26; // [rsp+8Ch] [rbp+5Ch]

  v3 = (*(_BYTE *)(a3 + 2) & 2) == 0;
  v22[0] = -1;
  v22[1] = 0;
  v6 = 0LL;
  v23 = -1;
  v24 = 0;
  v25 = -1;
  v26 = 0;
  if ( !v3 )
    return 0;
  v7 = HvpMarkCellDirty(BugCheckParameter3, a2, 0);
  if ( v7 >= 0 )
  {
    v8 = *(_DWORD *)(a3 + 48);
    if ( v8 == -1 || (v7 = HvpMarkCellDirty(BugCheckParameter3, v8, 0), v7 >= 0) )
    {
      v9 = *(_DWORD *)(a3 + 44);
      if ( v9 != -1 )
      {
        v7 = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v10 = *(unsigned int *)(a3 + 44);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, &v23);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v10);
        v12 = CellFlat;
        v7 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(CellFlat + 4), 0);
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
        if ( v7 < 0 || (v7 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v12 + 8), 0), v7 < 0) )
        {
          if ( v12 )
          {
            v21 = &v23;
LABEL_33:
            if ( (*v13 & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v21);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v21);
          }
LABEL_11:
          if ( v6 )
          {
            if ( (*v13 & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v22);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v22);
          }
          return (unsigned int)v7;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v23);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v23);
      }
      if ( *(_DWORD *)(a3 + 36) )
      {
        v7 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(a3 + 40), 0);
        if ( v7 < 0 )
          return (unsigned int)v7;
        v15 = *(unsigned int *)(a3 + 40);
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(BugCheckParameter3, v15, v22);
        else
          CellPaged = HvpGetCellPaged(BugCheckParameter3, v15);
        v6 = CellPaged;
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 36); i = (unsigned int)(i + 1) )
        {
          v7 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v6 + 4 * i), 0);
          if ( v7 < 0 )
          {
            v13 = (_BYTE *)(BugCheckParameter3 + 140);
            goto LABEL_11;
          }
          v18 = *(unsigned int *)(v6 + 4 * i);
          if ( (*v13 & 1) != 0 )
            v19 = HvpGetCellFlat(BugCheckParameter3, v18, &v25);
          else
            v19 = HvpGetCellPaged(BugCheckParameter3, v18);
          v20 = v19;
          v7 = CmpMarkValueDataDirty(BugCheckParameter3, v19);
          if ( v7 < 0 )
          {
            if ( !v20 )
              goto LABEL_11;
            v21 = &v25;
            goto LABEL_33;
          }
          if ( (*v13 & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v25);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v25);
        }
      }
      else
      {
        v13 = (_BYTE *)(BugCheckParameter3 + 140);
      }
      v7 = 0;
      goto LABEL_11;
    }
  }
  return (unsigned int)v7;
}
