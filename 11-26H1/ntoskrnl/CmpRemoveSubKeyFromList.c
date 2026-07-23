/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x1408C41C0
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpRemoveSubKey @ 0x1408C4110 (CmpRemoveSubKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A3FE60 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextMove @ 0x1408E20A4 (HvpGetCellContextMove.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  int v3; // r14d
  _WORD *v6; // r13
  __int64 CellFlat; // rax
  bool v9; // zf
  unsigned int v10; // esi
  unsigned int v11; // r12d
  _WORD *CellPaged; // rax
  _WORD *v13; // rdi
  unsigned int v14; // ecx
  unsigned __int16 v15; // ax
  unsigned int v16; // edx
  __int64 v17; // r9
  size_t v18; // r8
  _WORD *v19; // rdx
  _WORD *v20; // rcx
  char v21; // si
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  int SubKeyInRoot; // [rsp+30h] [rbp-30h]
  unsigned int v26[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v27[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  _DWORD *v30; // [rsp+A8h] [rbp+48h]
  __int64 v31; // [rsp+B8h] [rbp+58h] BYREF

  v30 = a2;
  v3 = -1;
  v31 = 0xFFFFFFFFLL;
  v26[0] = -1;
  v26[1] = 0;
  v27[0] = -1;
  v27[1] = 0;
  v6 = 0LL;
  LODWORD(v29) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, (unsigned int *)&v31);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat )
    return 0;
  v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  DestinationString.Length = *(_WORD *)(CellFlat + 72);
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = (wchar_t *)(CellFlat + 76);
  if ( v9 )
    HvpReleaseCellPaged(BugCheckParameter3, &v31);
  else
    HvpReleaseCellFlat(BugCheckParameter3, &v31);
  v10 = *a2;
  v11 = v10;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v10, v26);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  v13 = CellPaged;
  if ( !CellPaged )
    return 0;
  SubKeyInRoot = 0x80000000;
  if ( *CellPaged != 26994 )
    goto LABEL_10;
  SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)&v29);
  if ( SubKeyInRoot < 0 )
  {
    v21 = 0;
LABEL_18:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v26);
LABEL_20:
    if ( !v6 )
      return v21;
    goto LABEL_21;
  }
  v6 = v13;
  HvpGetCellContextMove(v27, v26);
  v11 = v29;
  v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v29, v26)
      : HvpGetCellPaged(BugCheckParameter3);
  v13 = (_WORD *)v23;
  if ( v23 )
  {
LABEL_10:
    LODWORD(v31) = 0;
    CmpFindSubKeyInLeafWithStatus(BugCheckParameter3, (__int64)&v29, (__int64)&v31);
    v14 = v31;
    if ( (int)v31 < 0 )
    {
      v21 = 0;
LABEL_17:
      if ( !v13 )
        goto LABEL_20;
      goto LABEL_18;
    }
    v15 = v13[1] - 1;
    v13[1] = v15;
    if ( v15 )
    {
      v3 = v10;
      if ( v14 < v15 )
      {
        v16 = v15 - v14;
        v17 = v14 + 1;
        if ( *v13 == 26988 )
        {
          v18 = 4LL * v16;
          v19 = &v13[2 * v17 + 2];
          v20 = &v13[2 * v14 + 2];
        }
        else
        {
          v18 = 8LL * v16;
          v19 = &v13[4 * v17 + 2];
          v20 = &v13[4 * v14 + 2];
        }
        goto LABEL_15;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v26);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v26);
      v13 = 0LL;
      HvFreeCell(BugCheckParameter3, v11);
      if ( !v6 )
        goto LABEL_16;
      v24 = v6[1] - 1;
      v6[1] = v24;
      if ( !v24 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v27);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v27);
        v6 = 0LL;
        HvFreeCell(BugCheckParameter3, v10);
        goto LABEL_16;
      }
      v3 = v10;
      if ( SubKeyInRoot < (unsigned int)v24 )
      {
        v18 = 4LL * ((unsigned int)v24 - SubKeyInRoot);
        v19 = &v6[2 * (SubKeyInRoot + 1) + 2];
        v20 = &v6[2 * SubKeyInRoot + 2];
LABEL_15:
        memmove(v20, v19, v18);
      }
    }
LABEL_16:
    v21 = 1;
    *v30 = v3;
    goto LABEL_17;
  }
  v21 = 0;
LABEL_21:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v27);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v27);
  return v21;
}
