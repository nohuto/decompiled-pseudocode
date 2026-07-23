/*
 * XREFs of CmpUndoDeleteKeyForTrans @ 0x140ABAA1C
 * Callers:
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     CmpDereferenceSecurityNode @ 0x1404C20E0 (CmpDereferenceSecurityNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpUndoDeleteKeyForTrans(ULONG_PTR BugCheckParameter3, __int64 a2, void *a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r15
  PVOID *Pool2; // r13
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rsi
  ULONG_PTR v14; // rcx
  __int64 v15; // rdx
  __int64 CellFlat; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned int v19; // ebx
  ULONG_PTR v20; // rcx
  __int64 CellPaged; // rax
  _DWORD *v22; // rcx
  __int64 v23; // r15
  _QWORD *UnitOfWork; // rax
  int SecurityDescriptorNode; // ebx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // r8
  struct _KLOCK_ENTRIES *v35; // r9
  ULONG_PTR v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned int v40; // r15d
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  PVOID *v45; // rdi
  ULONG_PTR v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v49[2]; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v50[2]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v51[2]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v52; // [rsp+60h] [rbp-18h]
  __int64 v53; // [rsp+68h] [rbp-10h]
  unsigned int v54; // [rsp+C0h] [rbp+48h]
  ULONG_PTR v57; // [rsp+D8h] [rbp+60h] BYREF

  v3 = 0;
  v49[0] = -1;
  v5 = a2;
  v49[1] = 0;
  Pool2 = 0LL;
  v51[0] = -1;
  v51[1] = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter3 + 72) + 208LL;
  v48 = 0;
  LODWORD(v57) = -1;
  do
  {
    if ( !v7 )
      v7 = *(_QWORD *)(v8 + 8);
    v52 = v7;
    v9 = v7;
    if ( v8 != v7 )
    {
      v10 = v7 - 32;
      v7 = *(_QWORD *)(v7 + 8);
      if ( v10 )
        continue;
    }
    return 3221225524LL;
  }
  while ( *(_DWORD *)(v9 + 36) != 3 || *(_QWORD *)(v9 + 56) != BugCheckParameter3 );
  v11 = 0LL;
  v12 = *(_QWORD *)(BugCheckParameter3 + 216);
  if ( BugCheckParameter3 + 208 != v12 )
    v11 = v12 - 32;
  v53 = v11;
  if ( !v11 || *(_DWORD *)(v11 + 68) != 2 )
    return 3221225524LL;
  v13 = (__int64 *)(BugCheckParameter3 + 32);
  if ( *(_QWORD *)(BugCheckParameter3 + 288) == v5 )
  {
    v18 = *(unsigned int *)(BugCheckParameter3 + 280);
    v19 = *(_DWORD *)(BugCheckParameter3 + 284);
    v54 = *(_DWORD *)(BugCheckParameter3 + 280);
  }
  else
  {
    v14 = *v13;
    v15 = *(unsigned int *)(BugCheckParameter3 + 40);
    v50[0] = -1;
    v50[1] = 0;
    if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v14, v15, v50);
    else
      CellFlat = HvpGetCellPaged(v14, v15);
    if ( !CellFlat )
      return 3221225626LL;
    v17 = *v13;
    v18 = *(unsigned int *)(CellFlat + 36);
    v19 = *(_DWORD *)(CellFlat + 40);
    v54 = *(_DWORD *)(CellFlat + 36);
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v17, (__int64)v50);
    else
      HvpReleaseCellPaged(v17, v50);
  }
  if ( !(_DWORD)v18 )
    goto LABEL_32;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v20 = *v13;
  if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v20, v19, v49);
  else
    CellPaged = HvpGetCellPaged(v20, v19);
  v23 = CellPaged;
  if ( !CellPaged )
  {
    SecurityDescriptorNode = -1073741670;
LABEL_62:
    if ( (_DWORD)v18 )
    {
      v45 = Pool2;
      do
      {
        if ( *v45 )
        {
          CmpRundownUnitOfWork(*v45);
          ExFreePoolWithTag(*v45, 0x77554D43u);
        }
        ++v45;
        --v18;
      }
      while ( v18 );
    }
    goto LABEL_51;
  }
  while ( v3 < (unsigned int)v18 )
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v22);
    v18 = v3;
    Pool2[v3] = UnitOfWork;
    if ( !UnitOfWork )
    {
      SecurityDescriptorNode = -1073741670;
      goto LABEL_61;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, BugCheckParameter3);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(Pool2[v3], a2);
    if ( SecurityDescriptorNode < 0 )
      goto LABEL_50;
    if ( !CmpLockIXLockIntent((unsigned int *)(BugCheckParameter3 + 248), (__int64)Pool2[v3], v26)
      || !CmpLockIXLockExclusive(BugCheckParameter3 + 264, Pool2[v3], 1LL) )
    {
      SecurityDescriptorNode = -1072103423;
      goto LABEL_61;
    }
    ++v3;
    *((_DWORD *)Pool2[v18] + 17) = 6;
    v22 = Pool2[v18];
    v27 = *(_DWORD *)(v23 + 4 * v18);
    LODWORD(v18) = v54;
    v22[22] = v27;
  }
  v28 = *v13;
  if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v28, (__int64)v49);
  else
    HvpReleaseCellPaged(v28, v49);
  v5 = a2;
LABEL_32:
  v32 = CmpAllocateUnitOfWork(v12);
  if ( v32 )
  {
    HvLockHiveFlusherShared(*v13, v29, v30, v31);
    CmLockHiveSecurityExclusive(*v13, v33, v34, v35);
    CmpTransEnlistUowInKcb((_QWORD *)v32, BugCheckParameter3);
    SecurityDescriptorNode = CmpTransEnlistUowInCmTrans((_QWORD *)v32, v5);
    if ( SecurityDescriptorNode >= 0 )
    {
      if ( CmpLockIXLockExclusive(BugCheckParameter3 + 248, (_QWORD *)v32, 0LL)
        && CmpLockIXLockExclusive(BugCheckParameter3 + 264, (_QWORD *)v32, 1LL) )
      {
        *(_DWORD *)(v32 + 68) = 9;
        *(_DWORD *)(v32 + 96) = -1;
        *(_QWORD *)(v32 + 88) = 0LL;
        *(_BYTE *)(v32 + 100) = 0;
        v36 = *v13;
        v37 = *(unsigned int *)(BugCheckParameter3 + 40);
        if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
          v38 = HvpGetCellFlat(v36, v37, v51);
        else
          v38 = HvpGetCellPaged(v36, v37);
        v39 = v38;
        SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                   *v13,
                                   *(_DWORD *)(BugCheckParameter3 + 40),
                                   v38,
                                   1u,
                                   a3,
                                   1,
                                   (unsigned int *)&v57);
        if ( SecurityDescriptorNode < 0 )
        {
          v40 = v57;
        }
        else
        {
          if ( !CmpFindSecurityCellCacheIndex(*v13, v57, &v48) )
            KeBugCheckEx(0x51u, 4uLL, 3uLL, BugCheckParameter3, (unsigned int)v57);
          v40 = -1;
          v41 = *(_DWORD **)(*(_QWORD *)(*v13 + 1896) + 16LL * v48 + 8);
          *(_QWORD *)(v32 + 88) = v41;
          *(_DWORD *)(v32 + 96) = *v41;
          v42 = v52;
          *(_BYTE *)(v32 + 100) = 1;
          v32 = 0LL;
          *(_DWORD *)(v42 + 36) = 13;
          *(_DWORD *)(v53 + 68) = 15;
          if ( *(_QWORD *)(BugCheckParameter3 + 288) )
          {
            v46 = *(unsigned int *)(BugCheckParameter3 + 284);
            if ( (_DWORD)v46 != -1 )
              HvFreeCell(*v13, v46);
          }
          *(_QWORD *)(BugCheckParameter3 + 288) = a2;
          *(_DWORD *)(BugCheckParameter3 + 280) = 0;
          *(_DWORD *)(BugCheckParameter3 + 284) = -1;
        }
        if ( v40 != -1 )
          CmpDereferenceSecurityNode(*v13, v40);
        if ( v39 )
        {
          v43 = *v13;
          if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v43, (__int64)v51);
          else
            HvpReleaseCellPaged(v43, v51);
        }
      }
      else
      {
        SecurityDescriptorNode = -1072103423;
      }
    }
    CmUnlockHiveSecurity(*v13);
    HvUnlockHiveFlusherShared(*v13);
    v23 = 0LL;
    if ( v32 )
    {
      CmpRundownUnitOfWork((_QWORD *)v32);
      ExFreePoolWithTag((PVOID)v32, 0x77554D43u);
    }
  }
  else
  {
    SecurityDescriptorNode = -1073741670;
    v23 = 0LL;
  }
  if ( !Pool2 )
    goto LABEL_52;
LABEL_50:
  if ( SecurityDescriptorNode < 0 )
  {
LABEL_61:
    v18 = v54;
    goto LABEL_62;
  }
LABEL_51:
  ExFreePoolWithTag(Pool2, 0x37344D43u);
LABEL_52:
  if ( v23 )
  {
    v47 = *v13;
    if ( (*(_BYTE *)(*v13 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v47, (__int64)v49);
    else
      HvpReleaseCellPaged(v47, v49);
  }
  return (unsigned int)SecurityDescriptorNode;
}
