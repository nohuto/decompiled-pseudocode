/*
 * XREFs of CmEnumerateKey @ 0x1408C8770
 * Callers:
 *     CmEnumerateKeyCallout @ 0x1408C86D0 (CmEnumerateKeyCallout.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B42968 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmEnumerateKey(_QWORD *a1, __int64 a2, int a3, unsigned int a4, __int64 a5, int a6, __int64 a7)
{
  ULONG_PTR v7; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rbx
  _WORD *v17; // r13
  _WORD *v18; // rcx
  int SubKeyByNumberFromMergedView; // r14d
  ULONG_PTR v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // r14d
  __int64 CellFlat; // rax
  __int64 v26; // r15
  __int64 CellPaged; // rax
  ULONG_PTR v28; // rcx
  __int64 v29; // rcx
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // ax
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  __int16 v36; // ax
  int v37; // eax
  unsigned int *v38; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // r12d
  __int64 v42; // r15
  __int64 v43; // [rsp+50h] [rbp-81h] BYREF
  int v44; // [rsp+58h] [rbp-79h]
  unsigned int v45[5]; // [rsp+5Ch] [rbp-75h] BYREF
  __int64 v46; // [rsp+70h] [rbp-61h] BYREF
  __int64 v47[2]; // [rsp+78h] [rbp-59h] BYREF
  ULONG_PTR v48; // [rsp+88h] [rbp-49h] BYREF
  __int64 v49; // [rsp+90h] [rbp-41h]
  __int64 v50; // [rsp+98h] [rbp-39h]
  __int64 v51; // [rsp+A0h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-29h] BYREF

  v7 = 0LL;
  v50 = a5;
  v49 = a7;
  v45[3] = a4;
  v44 = a3;
  v45[0] = 0;
  v43 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v48 = 0LL;
  *(_OWORD *)v47 = 0LL;
  HvpGetCellContextInitialize(&v43);
  v46 = 0LL;
  v11 = 0LL;
  *(_QWORD *)&v45[1] = 0LL;
  v51 = 0LL;
  CmpInitializeDelayDerefContext(v47);
  CmpAttachToRegistryProcess(&ApcState);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    v41 = v50;
    v42 = v49;
    do
    {
      v37 = CmpEnumerateLayeredKey((_DWORD)a1, v44, a4, v41, a6, v42, (__int64)&v51, (unsigned int)v7 <= 0xA);
      LODWORD(v7) = v7 + 1;
      SubKeyByNumberFromMergedView = v37;
    }
    while ( v37 == -1073741267 );
    CmpDrainDelayDerefContext((_QWORD **)v47);
    goto LABEL_43;
  }
  if ( a1[7] || a1[8] )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v13, v12, v14, v15);
  v16 = a1[1];
  if ( a2 )
  {
    v17 = *(_WORD **)(a2 + 8);
    if ( v17 )
    {
      if ( v16 )
      {
        if ( v17 == (_WORD *)v16 )
        {
          v18 = *(_WORD **)(a2 + 8);
        }
        else
        {
          v32 = *(_WORD *)(v16 + 12);
          if ( v17[6] <= v32
            && (v17[6] < v32
             || ((v35 = v17[93], (v35 & 4) == 0) || (*(_DWORD *)(v16 + 184) & 0x20000) == 0)
             && ((v35 & 2) != 0 && (*(_DWORD *)(v16 + 184) & 0x40000) != 0
              || (v36 = *(_WORD *)(v16 + 66), (__int16)v17[33] <= v36)
              && ((__int16)v17[33] < v36 || (unsigned __int64)v17 <= v16))) )
          {
            CmpLockKcbShared(*(_QWORD *)(a2 + 8));
            v18 = (_WORD *)v16;
          }
          else
          {
            CmpLockKcbShared(a1[1]);
            v18 = v17;
          }
        }
      }
      else
      {
        v18 = *(_WORD **)(a2 + 8);
      }
      goto LABEL_9;
    }
  }
  else
  {
    v17 = 0LL;
  }
  if ( v16 )
  {
    v18 = (_WORD *)a1[1];
LABEL_9:
    CmpLockKcbShared(v18);
  }
  SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( SubKeyByNumberFromMergedView < 0 )
    goto LABEL_36;
  if ( a1[7] || a1[8] )
  {
    SubKeyByNumberFromMergedView = CmpTransSearchAddTransFromKeyBody(a1, &v46);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_36;
    v11 = v46;
    SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a1, v46);
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
  if ( CmpVEEnabled && (*(_DWORD *)(v16 + 184) & 0x1000000) != 0 )
  {
LABEL_94:
    v38 = &v45[1];
    if ( !v11 )
      v38 = 0LL;
    if ( a2 )
    {
      v39 = v16;
      v40 = (int)v17;
    }
    else
    {
      v39 = 0;
      v40 = v16;
    }
    SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberFromMergedView(
                                     v40,
                                     v39,
                                     v44,
                                     v11,
                                     (__int64)v47,
                                     (__int64)&v48,
                                     (__int64)v45,
                                     (__int64)v38,
                                     (__int64)&v46);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_103;
    v20 = v48;
    goto LABEL_19;
  }
  v20 = *(_QWORD *)(v16 + 32);
  if ( v11 )
  {
    v21 = &v45[1];
    v22 = (__int64)v17;
    v23 = v16;
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
  }
  SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberEx(v20, v23, v22, v11, (__int64)v47, (__int64)v21);
  if ( SubKeyByNumberFromMergedView < 0 )
    goto LABEL_103;
LABEL_19:
  v24 = v45[0];
  if ( v45[0] == -1 )
  {
    SubKeyByNumberFromMergedView = -2147483622;
LABEL_103:
    v7 = *(_QWORD *)&v45[1];
    goto LABEL_36;
  }
  if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v20, v45[0], (unsigned int *)&v43);
  else
    CellFlat = HvpGetCellPaged(v20);
  v26 = CellFlat;
  if ( (*(_DWORD *)(v20 + 160) & 0x8001) == 0
    && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v20, &v43);
    else
      HvpReleaseCellPaged(v20, &v43);
    HvLockHiveFlusherShared(v20);
    if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v20, v24, (unsigned int *)&v43);
    else
      CellPaged = HvpGetCellPaged(v20);
    v26 = CellPaged;
    if ( (*(_DWORD *)(v20 + 160) & 0x8001) == 0
      && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
      && (int)HvpMarkCellDirty(v20, v24) >= 0 )
    {
      *(_BYTE *)(v26 + 12) |= CmpAccessBitForPhase;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v20 + 72));
    KeAbPostRelease(v20 + 72);
  }
  v7 = *(_QWORD *)&v45[1];
  SubKeyByNumberFromMergedView = CmpQueryKeyDataFromNode(v20, a6, v49, *(__int64 *)&v45[1], v11);
  if ( v26 )
  {
    if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v20, &v43);
    else
      HvpReleaseCellPaged(v20, &v43);
  }
LABEL_36:
  if ( v17 )
  {
    if ( v16 && v17 != (_WORD *)v16 )
    {
      v31 = *(_WORD *)(v16 + 12);
      if ( v17[6] <= v31
        && (v17[6] < v31
         || ((v33 = v17[93], (v33 & 4) == 0) || (*(_DWORD *)(v16 + 184) & 0x20000) == 0)
         && ((v33 & 2) != 0 && (*(_DWORD *)(v16 + 184) & 0x40000) != 0
          || (v34 = *(_WORD *)(v16 + 66), (__int16)v17[33] <= v34)
          && ((__int16)v17[33] < v34 || (unsigned __int64)v17 <= v16))) )
      {
        CmpUnlockKcb(v16);
      }
      else
      {
        CmpUnlockKcb((ULONG_PTR)v17);
        v17 = (_WORD *)v16;
      }
    }
    v28 = (ULONG_PTR)v17;
    goto LABEL_39;
  }
  if ( v16 )
  {
    v28 = v16;
LABEL_39:
    CmpUnlockKcb(v28);
  }
  if ( v7 )
    CmpDereferenceKeyControlBlock(v7);
  CmpDrainDelayDerefContext((_QWORD **)v47);
  CmpUnlockRegistry(v29);
LABEL_43:
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)SubKeyByNumberFromMergedView;
}
