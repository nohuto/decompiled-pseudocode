/*
 * XREFs of CmpCopyKeyPartial @ 0x1408E41BC
 * Callers:
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A4043C (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpCopyCell @ 0x1408E3124 (CmpCopyCell.c)
 *     CmpCopyValue @ 0x1408E342C (CmpCopyValue.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1408E5714 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1408E57C4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int16 a5,
        __int64 a6,
        int a7,
        unsigned int *a8)
{
  unsigned int v8; // r13d
  unsigned int v11; // r14d
  __int64 v12; // rdi
  __int64 CellFlat; // rax
  __int64 v14; // r15
  int SecurityDescriptorNode; // r14d
  __int16 v16; // r14
  unsigned int v17; // r12d
  __int64 CellPaged; // rax
  __int16 v19; // ax
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned int v24; // r15d
  unsigned int v25; // r13d
  __int64 v27; // rax
  unsigned int *v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-41h]
  unsigned int v32[2]; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v33[2]; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v34[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v35[2]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v36; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v37[12]; // [rsp+74h] [rbp-15h] BYREF
  __int64 v38; // [rsp+80h] [rbp-9h]
  int v39; // [rsp+88h] [rbp-1h]
  int v40; // [rsp+D0h] [rbp+47h]

  v8 = a7;
  *(_QWORD *)v37 = 0LL;
  v31 = 0;
  LODWORD(a6) = -1;
  v40 = -1;
  v11 = a2;
  v30 = -1LL;
  v12 = 0LL;
  v36 = 0;
  v32[0] = -1;
  v32[1] = 0;
  v33[0] = -1;
  v33[1] = 0;
  v38 = 0LL;
  v34[0] = -1;
  v34[1] = 0;
  v35[0] = -1;
  v35[1] = 0;
  *(_DWORD *)&v37[8] = -1;
  if ( a7 == 2 )
  {
    if ( a4 == -1 )
      v8 = 0;
    else
      v8 = a4 >> 31;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, v32);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
  v14 = CellFlat;
  v39 = *(_DWORD *)(CellFlat + 44);
  SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, v11, a3, v8, &a6);
  if ( SecurityDescriptorNode < 0 )
  {
    v17 = a6;
    goto LABEL_49;
  }
  v16 = a5;
  if ( (a5 & 2) != 0 )
  {
    a7 = *(unsigned __int16 *)(v14 + 74);
    if ( a7 )
    {
      SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, *(unsigned int *)(v14 + 48), a3, v8, &v30);
      if ( SecurityDescriptorNode < 0 )
      {
        v17 = a6;
        v25 = v30;
        goto LABEL_50;
      }
      v16 = a5;
      v40 = v30;
    }
  }
  else
  {
    a7 = 0;
  }
  v17 = a6;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(a3, a6, v33);
  else
    CellPaged = HvpGetCellPaged(a3, (unsigned int)a6);
  v12 = CellPaged;
  *(_DWORD *)(CellPaged + 48) = v40;
  *(_WORD *)(CellPaged + 74) = a7;
  *(_DWORD *)(CellPaged + 44) = -1;
  *(_DWORD *)(CellPaged + 28) = -1;
  *(_QWORD *)(CellPaged + 20) = 0LL;
  *(_DWORD *)(CellPaged + 32) = -1;
  *(_DWORD *)(CellPaged + 16) = a4;
  *(_BYTE *)(CellPaged + 12) = 0;
  if ( (v16 & 0x100) != 0 )
    *(_BYTE *)(CellPaged + 13) &= 0xFCu;
  if ( (v16 & 0x80u) != 0 )
    *(_BYTE *)(CellPaged + 13) |= 0x80u;
  v19 = *(_WORD *)(v14 + 2) & 0x30;
  *(_WORD *)(v12 + 2) = v19;
  if ( (v16 & 0x20) != 0 )
  {
    v19 = *(_WORD *)(v14 + 2) & 0xFFBF;
    *(_WORD *)(v12 + 2) = v19;
  }
  if ( a4 == -1 )
    *(_WORD *)(v12 + 2) = v19 | 0xC;
  if ( (v16 & 0x10) == 0 )
  {
    CmpLockTwoSecurityCachesExclusiveShared(a3, BugCheckParameter3);
    CmpFindSecurityCellCacheIndex(BugCheckParameter3, v39, &v36);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a3,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1896) + 16LL * v36 + 8) + 32LL),
                               0,
                               v12 + 44);
    CmpUnlockTwoSecurityCaches(a3, BugCheckParameter3);
    if ( SecurityDescriptorNode < 0 )
    {
LABEL_49:
      v25 = v40;
LABEL_50:
      v24 = HIDWORD(v30);
      goto LABEL_34;
    }
  }
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
    v20 = 0;
  else
    v20 = *(_DWORD *)(v14 + 36);
  a7 = v20;
  *(_DWORD *)(v12 + 40) = -1;
  *(_DWORD *)(v12 + 36) = 0;
  if ( (a5 & 4) != 0 && v20 )
  {
    v21 = *(unsigned int *)(v14 + 40);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = HvpGetCellFlat(BugCheckParameter3, v21, v34);
    else
      v22 = HvpGetCellPaged(BugCheckParameter3, v21);
    v38 = v22;
    v23 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= v20 )
      {
        *(_QWORD *)(v12 + 36) = *(_QWORD *)&v37[4];
        goto LABEL_33;
      }
      SecurityDescriptorNode = CmpCopyValue(BugCheckParameter3, *(_DWORD *)(v22 + 4 * v23), a3, v8, (unsigned int *)v37);
      if ( SecurityDescriptorNode < 0 )
        break;
      SecurityDescriptorNode = CmpAddValueToListEx(a3, *(int *)v37, v23, v8, (unsigned int *)&v37[4], a7);
      if ( SecurityDescriptorNode < 0 )
        break;
      v20 = a7;
      v23 = (unsigned int)(v23 + 1);
      v22 = v38;
    }
    v24 = *(_DWORD *)&v37[8];
    v25 = v40;
    v31 = *(_DWORD *)&v37[4];
  }
  else
  {
LABEL_33:
    v24 = -1;
    v31 = 0;
    v25 = -1;
    SecurityDescriptorNode = 0;
    *a8 = v17;
    v17 = -1;
  }
LABEL_34:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v32);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v32);
  if ( v12 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64)v33);
    else
      HvpReleaseCellPaged(a3, v33);
  }
  if ( v38 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v34);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v34);
  }
  if ( v24 != -1 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      v27 = HvpGetCellFlat(a3, v24, v35);
    else
      v27 = HvpGetCellPaged(a3, v24);
    v28 = (unsigned int *)v27;
    if ( v31 )
    {
      v29 = v31;
      do
      {
        HvFreeCell(a3, *v28++);
        --v29;
      }
      while ( v29 );
    }
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64)v35);
    else
      HvpReleaseCellPaged(a3, v35);
    HvFreeCell(a3, v24);
  }
  if ( v25 != -1 )
    HvFreeCell(a3, v25);
  if ( v17 != -1 )
    HvFreeCell(a3, v17);
  return (unsigned int)SecurityDescriptorNode;
}
