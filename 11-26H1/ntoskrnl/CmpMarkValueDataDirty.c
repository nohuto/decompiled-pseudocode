/*
 * XREFs of CmpMarkValueDataDirty @ 0x1408C3BA4
 * Callers:
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpMarkKeyDirty @ 0x1408C3494 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1408C54A0 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408C570C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpMarkKeyValuesDirty @ 0x140B1F2A4 (CmpMarkKeyValuesDirty.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpMarkValueDataDirty(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned int v3; // edx
  unsigned int v5; // eax
  int v6; // esi
  char v8; // si
  __int64 v9; // r15
  __int64 CellFlat; // rax
  unsigned int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int16 i; // r14
  ULONG_PTR v15; // rdx
  unsigned int v16; // [rsp+68h] [rbp+48h] BYREF
  int v17; // [rsp+6Ch] [rbp+4Ch]
  unsigned int v18; // [rsp+70h] [rbp+50h] BYREF
  int v19; // [rsp+74h] [rbp+54h]

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 == -1 )
    return 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 >= 0x80000000 )
    return 0;
  if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || v5 - 16345 > 0x7FFFC026 )
    goto LABEL_34;
  v8 = *(_BYTE *)(BugCheckParameter3 + 140);
  v18 = -1;
  v9 = 0LL;
  v19 = 0;
  v16 = -1;
  v17 = 0;
  if ( (v8 & 1) != 0 )
  {
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v18);
  }
  else
  {
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v8 = *(_BYTE *)(BugCheckParameter3 + 140);
  }
  v11 = *(_DWORD *)(CellFlat + 4);
  v12 = CellFlat;
  if ( v11 == -1 )
    goto LABEL_18;
  v13 = (v8 & 1) != 0 ? HvpGetCellFlat(BugCheckParameter3, v11, &v16) : HvpGetCellPaged(BugCheckParameter3);
  v9 = v13;
  for ( i = 0; i < *(_WORD *)(v12 + 2); ++i )
  {
    v15 = *(unsigned int *)(v9 + 4LL * i);
    if ( (_DWORD)v15 != -1 )
    {
      v6 = HvpMarkCellDirty(BugCheckParameter3, v15);
      if ( v6 < 0 )
        goto LABEL_19;
    }
  }
  v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v12 + 4));
  if ( v6 >= 0 )
LABEL_18:
    v6 = 0;
LABEL_19:
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v16);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v18);
  if ( v6 >= 0 )
  {
LABEL_34:
    v6 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(a2 + 8));
    if ( v6 >= 0 )
      return 0;
  }
  return (unsigned int)v6;
}
