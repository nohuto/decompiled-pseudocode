/*
 * XREFs of CmEnumerateKey @ 0x1408C21A0
 * Callers:
 *     CmEnumerateKeyCallout @ 0x1408C2100 (CmEnumerateKeyCallout.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C27F0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C2ED0 (CmpFindSubKeyByNumberEx.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B40958 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmEnumerateKey(_QWORD *a1, __int64 a2, int a3, unsigned int a4, __int64 a5, int a6, __int64 a7)
{
  ULONG_PTR v7; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  ULONG_PTR v13; // rbx
  _WORD *v14; // r13
  _WORD *v15; // rcx
  int SubKeyByNumberFromMergedView; // r14d
  ULONG_PTR v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r14d
  __int64 CellFlat; // rax
  __int64 v23; // r15
  __int64 CellPaged; // rax
  ULONG_PTR v25; // rcx
  __int64 v26; // rcx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // ax
  __int16 v30; // cx
  __int16 v31; // ax
  __int16 v32; // cx
  __int16 v33; // ax
  int v34; // eax
  unsigned int *v35; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // r12d
  __int64 v39; // r15
  __int64 v40; // [rsp+50h] [rbp-81h] BYREF
  int v41; // [rsp+58h] [rbp-79h]
  unsigned int v42[5]; // [rsp+5Ch] [rbp-75h] BYREF
  __int64 v43; // [rsp+70h] [rbp-61h] BYREF
  __int64 v44[2]; // [rsp+78h] [rbp-59h] BYREF
  ULONG_PTR v45; // [rsp+88h] [rbp-49h] BYREF
  __int64 v46; // [rsp+90h] [rbp-41h]
  __int64 v47; // [rsp+98h] [rbp-39h]
  __int64 v48; // [rsp+A0h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-29h] BYREF

  v7 = 0LL;
  v47 = a5;
  v46 = a7;
  v42[3] = a4;
  v41 = a3;
  v42[0] = 0;
  v40 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v45 = 0LL;
  *(_OWORD *)v44 = 0LL;
  HvpGetCellContextInitialize(&v40);
  v43 = 0LL;
  v11 = 0LL;
  *(_QWORD *)&v42[1] = 0LL;
  v48 = 0LL;
  CmpInitializeDelayDerefContext(v44);
  CmpAttachToRegistryProcess(&ApcState);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    v38 = v47;
    v39 = v46;
    do
    {
      v34 = CmpEnumerateLayeredKey((_DWORD)a1, v41, a4, v38, a6, v39, (__int64)&v48, (unsigned int)v7 <= 0xA);
      LODWORD(v7) = v7 + 1;
      SubKeyByNumberFromMergedView = v34;
    }
    while ( v34 == -1073741267 );
    CmpDrainDelayDerefContext((_QWORD **)v44);
    goto LABEL_43;
  }
  if ( a1[7] || a1[8] )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v12);
  v13 = a1[1];
  if ( a2 )
  {
    v14 = *(_WORD **)(a2 + 8);
    if ( v14 )
    {
      if ( v13 )
      {
        if ( v14 == (_WORD *)v13 )
        {
          v15 = *(_WORD **)(a2 + 8);
        }
        else
        {
          v29 = *(_WORD *)(v13 + 12);
          if ( v14[6] <= v29
            && (v14[6] < v29
             || ((v32 = v14[93], (v32 & 4) == 0) || (*(_DWORD *)(v13 + 184) & 0x20000) == 0)
             && ((v32 & 2) != 0 && (*(_DWORD *)(v13 + 184) & 0x40000) != 0
              || (v33 = *(_WORD *)(v13 + 66), (__int16)v14[33] <= v33)
              && ((__int16)v14[33] < v33 || (unsigned __int64)v14 <= v13))) )
          {
            CmpLockKcbShared(*(_QWORD *)(a2 + 8));
            v15 = (_WORD *)v13;
          }
          else
          {
            CmpLockKcbShared(a1[1]);
            v15 = v14;
          }
        }
      }
      else
      {
        v15 = *(_WORD **)(a2 + 8);
      }
      goto LABEL_9;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( v13 )
  {
    v15 = (_WORD *)a1[1];
LABEL_9:
    CmpLockKcbShared(v15);
  }
  SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( SubKeyByNumberFromMergedView < 0 )
    goto LABEL_36;
  if ( a1[7] || a1[8] )
  {
    SubKeyByNumberFromMergedView = CmpTransSearchAddTransFromKeyBody(a1, &v43);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_36;
    v11 = v43;
    SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a1, v43);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_36;
  }
  if ( a2 )
  {
    SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a2, v11);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_36;
    goto LABEL_94;
  }
  if ( CmpVEEnabled && (*(_DWORD *)(v13 + 184) & 0x1000000) != 0 )
  {
LABEL_94:
    v35 = &v42[1];
    if ( !v11 )
      v35 = 0LL;
    if ( a2 )
    {
      v36 = v13;
      v37 = (int)v14;
    }
    else
    {
      v36 = 0;
      v37 = v13;
    }
    SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberFromMergedView(
                                     v37,
                                     v36,
                                     v41,
                                     v11,
                                     (__int64)v44,
                                     (__int64)&v45,
                                     (__int64)v42,
                                     (__int64)v35,
                                     (__int64)&v43);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_103;
    v17 = v45;
    goto LABEL_19;
  }
  v17 = *(_QWORD *)(v13 + 32);
  if ( v11 )
  {
    v18 = &v42[1];
    v19 = (__int64)v14;
    v20 = v13;
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
  }
  SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberEx(v17, v20, v19, v11, (__int64)v44, (__int64)v18);
  if ( SubKeyByNumberFromMergedView < 0 )
    goto LABEL_103;
LABEL_19:
  v21 = v42[0];
  if ( v42[0] == -1 )
  {
    SubKeyByNumberFromMergedView = -2147483622;
LABEL_103:
    v7 = *(_QWORD *)&v42[1];
    goto LABEL_36;
  }
  if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v17, v42[0], (unsigned int *)&v40);
  else
    CellFlat = HvpGetCellPaged(v17);
  v23 = CellFlat;
  if ( (*(_DWORD *)(v17 + 160) & 0x8001) == 0
    && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v17, &v40);
    else
      HvpReleaseCellPaged(v17, &v40);
    HvLockHiveFlusherShared(v17);
    if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v17, v21, (unsigned int *)&v40);
    else
      CellPaged = HvpGetCellPaged(v17);
    v23 = CellPaged;
    if ( (*(_DWORD *)(v17 + 160) & 0x8001) == 0
      && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
      && (int)HvpMarkCellDirty(v17, v21) >= 0 )
    {
      *(_BYTE *)(v23 + 12) |= CmpAccessBitForPhase;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
    KeAbPostRelease(v17 + 72);
  }
  v7 = *(_QWORD *)&v42[1];
  SubKeyByNumberFromMergedView = CmpQueryKeyDataFromNode(v17, a6, v46, *(__int64 *)&v42[1], v11);
  if ( v23 )
  {
    if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v17, &v40);
    else
      HvpReleaseCellPaged(v17, &v40);
  }
LABEL_36:
  if ( v14 )
  {
    if ( v13 && v14 != (_WORD *)v13 )
    {
      v28 = *(_WORD *)(v13 + 12);
      if ( v14[6] <= v28
        && (v14[6] < v28
         || ((v30 = v14[93], (v30 & 4) == 0) || (*(_DWORD *)(v13 + 184) & 0x20000) == 0)
         && ((v30 & 2) != 0 && (*(_DWORD *)(v13 + 184) & 0x40000) != 0
          || (v31 = *(_WORD *)(v13 + 66), (__int16)v14[33] <= v31)
          && ((__int16)v14[33] < v31 || (unsigned __int64)v14 <= v13))) )
      {
        CmpUnlockKcb(v13);
      }
      else
      {
        CmpUnlockKcb((ULONG_PTR)v14);
        v14 = (_WORD *)v13;
      }
    }
    v25 = (ULONG_PTR)v14;
    goto LABEL_39;
  }
  if ( v13 )
  {
    v25 = v13;
LABEL_39:
    CmpUnlockKcb(v25);
  }
  if ( v7 )
    CmpDereferenceKeyControlBlock(v7);
  CmpDrainDelayDerefContext((_QWORD **)v44);
  CmpUnlockRegistry(v26);
LABEL_43:
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)SubKeyByNumberFromMergedView;
}
