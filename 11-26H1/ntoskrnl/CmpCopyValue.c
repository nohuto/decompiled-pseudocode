/*
 * XREFs of CmpCopyValue @ 0x1408E342C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpMergeKeyValues @ 0x140B2DE64 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeValueData @ 0x1408D7634 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpCopyCell @ 0x1408E3124 (CmpCopyCell.c)
 *     CmpSetValueDataNew @ 0x1408E4628 (CmpSetValueDataNew.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCopyValue(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        ULONG_PTR a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v7; // r12d
  __int64 v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // r15d
  int v15; // eax
  unsigned int v16; // esi
  int v17; // r14d
  __int64 v18; // rax
  bool v19; // zf
  int *CellPaged; // rax
  int v22; // r14d
  __int64 v23; // rax
  char ValueData; // al
  unsigned int v25; // r14d
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-28h]
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+48h]
  unsigned int v33; // [rsp+C8h] [rbp+58h]

  v33 = a4;
  v32 = a2;
  v29 = 0LL;
  v7 = -1;
  BugCheckParameter3a = -1LL;
  HvpGetCellContextInitialize(&v29);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, (unsigned int *)&v29);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v10);
  v12 = CellFlat;
  v13 = *(_DWORD *)(CellFlat + 4);
  LODWORD(v28) = v13;
  v14 = v13 + 0x80000000;
  if ( v13 < 0x80000000 )
    v14 = v13;
  P[0] = (PVOID)(v12 + 8);
  LODWORD(v31) = *(_DWORD *)(v12 + 8);
  v27 = v14;
  v15 = CmpCopyCell(BugCheckParameter3, a2, a3, a4, (_DWORD *)&BugCheckParameter3a + 1);
  v16 = HIDWORD(BugCheckParameter3a);
  v17 = v15;
  if ( v15 >= 0 )
  {
    v17 = 0;
    if ( !v14 )
    {
LABEL_22:
      *a5 = v16;
      v16 = -1;
      v7 = -1;
      goto LABEL_23;
    }
    if ( v14 <= 4 )
    {
      CellPaged = (int *)P[0];
      if ( (unsigned int)v28 < 0x80000000 )
      {
        v25 = *(_DWORD *)P[0];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v29);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = (int *)HvpGetCellFlat(BugCheckParameter3, v25, (unsigned int *)&v29);
        else
          CellPaged = (int *)HvpGetCellPaged(BugCheckParameter3, v25);
      }
      v22 = *CellPaged;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v29);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v23 = HvpGetCellFlat(a3, v16, (unsigned int *)&v29);
      else
        v23 = HvpGetCellPaged(a3, v16);
      *(_DWORD *)(v23 + 8) = v22;
      *(_DWORD *)(v23 + 4) = v14 + 0x80000000;
      v19 = (*(_BYTE *)(a3 + 140) & 1) == 0;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v14 - 16345 <= 0x7FFFC026
      || *(_DWORD *)(a3 + 220) >= 4u && v14 - 16345 <= 0x7FFFC026 )
    {
      P[0] = 0LL;
      LOBYTE(v31) = 0;
      v28 = 0xFFFFFFFFLL;
      ValueData = CmpGetValueData(BugCheckParameter3, (__int64)P, (__int64)&v31, (__int64)&v28);
      v14 = v27;
      if ( !ValueData )
      {
        v16 = HIDWORD(BugCheckParameter3a);
        v17 = -1073741670;
        goto LABEL_23;
      }
      v17 = CmpSetValueDataNew(a3, P[0], v27, (__int64)&BugCheckParameter3a);
      if ( (_BYTE)v31 )
      {
        ExFreePoolWithTag(P[0], 0);
      }
      else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v28);
      }
      else
      {
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
      }
    }
    else
    {
      v17 = CmpCopyCell(BugCheckParameter3, (unsigned int)v31, a3, v33, &BugCheckParameter3a);
    }
    if ( v17 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v29);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v18 = HvpGetCellFlat(a3, v16, (unsigned int *)&v29);
      else
        v18 = HvpGetCellPaged(a3, v16);
      *(_DWORD *)(v18 + 8) = BugCheckParameter3a;
      *(_DWORD *)(v18 + 4) = v14;
      v19 = (*(_BYTE *)(a3 + 140) & 1) == 0;
LABEL_19:
      if ( v19 )
        HvpReleaseCellPaged(a3, (unsigned int *)&v29);
      else
        HvpReleaseCellFlat(a3, (__int64)&v29);
      v17 = 0;
      v12 = 0LL;
      goto LABEL_22;
    }
    v7 = BugCheckParameter3a;
  }
LABEL_23:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v29);
  }
  if ( v7 != -1 )
    CmpFreeValueData(a3, v7, v14);
  if ( v16 != -1 )
    HvFreeCell(a3, v16);
  return (unsigned int)v17;
}
