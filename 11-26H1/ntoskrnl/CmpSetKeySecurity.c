/*
 * XREFs of CmpSetKeySecurity @ 0x1408C45DC
 * Callers:
 *     CmpSecurityMethod @ 0x1408F39C0 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpCheckKcbStackAccess @ 0x140775FB8 (CmpCheckKcbStackAccess.c)
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408C2A00 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpRollbackTransactionArray @ 0x1408D67C8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D6890 (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     CmpCleanupKcbStack @ 0x140944530 (CmpCleanupKcbStack.c)
 *     SeSetSecurityAccessMask @ 0x140A836A0 (SeSetSecurityAccessMask.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // r13
  char v8; // bl
  char v9; // r15
  ULONG_PTR v10; // rdi
  char v11; // r12
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  int started; // ebx
  __int64 v20; // r8
  char v21; // r14
  int v22; // eax
  PPRIVILEGE_SET v23; // rbx
  PPRIVILEGE_SET v24; // rcx
  PPRIVILEGE_SET v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 KeyNodeForKcb; // rax
  __int64 v31; // rcx
  PPRIVILEGE_SET v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // [rsp+50h] [rbp-B0h]
  char v39; // [rsp+51h] [rbp-AFh]
  char v40; // [rsp+52h] [rbp-AEh]
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v42; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-98h]
  int v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF

  v51 = a6;
  v52 = a4;
  v41 = 0;
  v46 = 0LL;
  v42 = 0LL;
  WORD1(v42) = -1;
  v7 = 0LL;
  v47 = 0LL;
  v44 = 0;
  v8 = 0;
  v49 = 0LL;
  v9 = 0;
  v38 = 0;
  v10 = 0LL;
  v11 = 0;
  v45 = 0;
  v12 = 0LL;
  v53 = a3;
  v50 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextInitialize(&v47);
  v48[0] = v48;
  v48[1] = v48;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    while ( 1 )
    {
      v40 = CmpAcquireShutdownRundown(v14, v13);
      if ( !v40 )
      {
        started = -1073741431;
        v39 = 0;
        goto LABEL_35;
      }
      if ( v8 )
        CmpLockRegistryExclusive(0LL);
      else
        CmpLockRegistry(0LL, v15, v16, v17);
      v10 = *(_QWORD *)(a1 + 8);
      v39 = 1;
      if ( (unsigned __int8)CmpIsKcbImmutable(v10, v18) )
        goto LABEL_88;
      started = CmpStartKcbStackForTopLayerKcb((__int64)&v42, v10);
      if ( started < 0 )
        goto LABEL_38;
      if ( !v38 )
      {
        CmpLockKcbStackTopExclusiveRestShared(&v42);
        v11 = 1;
      }
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started < 0 )
        goto LABEL_38;
      if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      {
        started = CmpTransSearchAddTransFromKeyBody(a1, &v49);
        if ( started < 0 )
          goto LABEL_38;
        v7 = v49;
        started = CmpPerformKeyBodyDeletionCheck(a1, v49);
        if ( started < 0 )
          goto LABEL_38;
      }
      if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 4120LL) & 0x20) != 0 )
      {
LABEL_88:
        started = -1073741790;
        goto LABEL_38;
      }
      if ( !*(_WORD *)(v10 + 66) || *(_BYTE *)(v10 + 65) || v38 )
        break;
      v8 = 1;
      v38 = 1;
      CmpUnlockKcbStack((__int64)&v42);
      v26 = Privileges[1];
      v11 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v42 = 0LL;
      WORD1(v42) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v26);
      CmpReleaseShutdownRundown(v27);
    }
    if ( *(_WORD *)(a1 + 4) )
    {
      SeSetSecurityAccessMask(*v50, &v44);
      started = CmpCheckKcbStackAccess((__int64)&v42, v7);
      if ( started < 0 )
        goto LABEL_38;
    }
    if ( *(_WORD *)(v10 + 66) )
    {
      if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v10, 0LL) )
      {
        started = CmpPromoteKey((__int64)&v42, 1, 0);
        if ( started < 0 )
          goto LABEL_38;
        started = CmpPartialPromoteSubkeys((__int64)&v42);
        if ( started < 0 )
          goto LABEL_38;
      }
    }
    if ( v7 )
      break;
    if ( *(_DWORD *)(v10 + 248) )
    {
      started = CmpSnapshotTxOwnerArray(v10 + 248, &v41, &v46);
      if ( started < 0 )
        goto LABEL_38;
      if ( v11 )
      {
        CmpUnlockKcbStack((__int64)&v42);
        v11 = 0;
      }
      CmpCleanupKcbStack(&v42);
      v42 = 0LL;
      WORD1(v42) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v35);
      v39 = 0;
      CmpReleaseShutdownRundown(v36);
      v40 = 0;
      started = CmpRollbackTransactionArray(v41, v46, v37, &v45);
      if ( started < 0 )
        goto LABEL_40;
    }
    else
    {
      if ( !*(_DWORD *)(v10 + 264) )
        goto LABEL_20;
      started = CmpSnapshotTxOwnerArray(v10 + 264, &v41, &v46);
      if ( started < 0 )
        goto LABEL_38;
      if ( v11 )
      {
        CmpUnlockKcbStack((__int64)&v42);
        v11 = 0;
      }
      v32 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v42 = 0LL;
      WORD1(v42) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v32);
      v39 = 0;
      CmpReleaseShutdownRundown(v33);
      v40 = 0;
      started = CmpRollbackTransactionArray(v41, v46, v34, &v45);
      if ( started < 0 )
        goto LABEL_38;
    }
    v8 = v38;
  }
  v28 = *(unsigned int *)(*(_QWORD *)(v10 + 32) + 160LL);
  if ( (v28 & 2) != 0 )
  {
    started = -1072103423;
  }
  else
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v28);
    v12 = UnitOfWork;
    if ( UnitOfWork )
    {
      CmpTransEnlistUowInKcb(UnitOfWork, v10);
      started = CmpTransEnlistUowInCmTrans(v12, v7);
      if ( started >= 0 )
      {
        if ( !CmpLockIXLockExclusive(v10 + 248, v12, 0LL) || !CmpLockIXLockExclusive(v10 + 264, v12, 1LL) )
        {
          started = -1072103423;
          goto LABEL_63;
        }
LABEL_20:
        if ( !v38 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v10 + 32));
          v9 = 1;
          CmLockHiveSecurityExclusive(*(_QWORD *)(v10 + 32));
        }
        started = CmpSetSecurityDescriptorInfo(
                    v10,
                    (_DWORD)v50,
                    v53,
                    v52,
                    a5,
                    v51,
                    v7,
                    (__int64)v12,
                    (__int64)&SubjectContext);
        v21 = v9;
        if ( started >= 0 )
        {
          v12 = 0LL;
          if ( v9 )
          {
            CmUnlockHiveSecurity(*(_QWORD *)(v10 + 32));
            v21 = 0;
          }
          if ( *(_WORD *)(v10 + 66) && !*(_BYTE *)(v10 + 65) )
          {
            LOBYTE(v20) = v9;
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v10, &v47, v20);
            *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
            v31 = *(_QWORD *)(v10 + 32);
            if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v31, &v47);
            else
              HvpReleaseCellPaged(v31, &v47);
            *(_BYTE *)(v10 + 65) = 2;
          }
          if ( v9 )
          {
            HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
            v9 = 0;
          }
          v22 = SWORD1(v42);
          _mm_lfence();
          if ( v22 >= 2 )
            v23 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v42) - 2);
          else
            v23 = Privileges[SWORD1(v42) - 1];
          CmpReportNotifyHelper((unsigned int)&v42, *(_QWORD *)&v23[1].Privilege[0].Luid.HighPart, v7, 10, (__int64)v48);
          if ( *(_QWORD *)&v23[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((unsigned int)&v42, CmpMasterHive, v7, 10, (__int64)v48);
          started = 0;
        }
        if ( v21 )
          CmUnlockHiveSecurity(*(_QWORD *)(v10 + 32));
LABEL_35:
        if ( v9 )
          HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
        if ( !v12 )
          goto LABEL_38;
      }
LABEL_63:
      CmpRundownUnitOfWork((ULONG_PTR)v12);
      ExFreePoolWithTag(v12, 0x77554D43u);
      goto LABEL_38;
    }
    started = -1073741670;
  }
LABEL_38:
  if ( v11 )
    CmpUnlockKcbStack((__int64)&v42);
LABEL_40:
  v24 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v39 )
    CmpUnlockRegistry(v24);
  if ( (_QWORD *)v48[0] != v48 )
    CmpSignalDeferredPosts(v48);
  if ( v40 )
    CmpReleaseShutdownRundown(v24);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
