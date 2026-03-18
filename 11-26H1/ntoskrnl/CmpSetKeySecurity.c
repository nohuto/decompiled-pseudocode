/*
 * XREFs of CmpSetKeySecurity @ 0x1408BE00C
 * Callers:
 *     CmpSecurityMethod @ 0x1408ED400 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404BD714 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpCheckKcbStackAccess @ 0x140772FB8 (CmpCheckKcbStackAccess.c)
 *     CmpPartialPromoteSubkeys @ 0x1408607FC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408BC430 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockIXLockExclusive @ 0x1408BC950 (CmpLockIXLockExclusive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpRollbackTransactionArray @ 0x1408D0204 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408D02CC (CmpSnapshotTxOwnerArray.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmLockHiveSecurityExclusive @ 0x1408DF19C (CmLockHiveSecurityExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 *     SeSetSecurityAccessMask @ 0x140A7D830 (SeSetSecurityAccessMask.c)
 *     CmpAllocateUnitOfWork @ 0x140AB9B34 (CmpAllocateUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 *     CmUnlockHiveSecurity @ 0x140C58BA8 (CmUnlockHiveSecurity.c)
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
  int started; // ebx
  __int64 v17; // r8
  char v18; // r14
  int v19; // eax
  PPRIVILEGE_SET v20; // rbx
  PPRIVILEGE_SET v21; // rcx
  PPRIVILEGE_SET v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 KeyNodeForKcb; // rax
  __int64 v28; // rcx
  PPRIVILEGE_SET v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // [rsp+50h] [rbp-B0h]
  char v36; // [rsp+51h] [rbp-AFh]
  char v37; // [rsp+52h] [rbp-AEh]
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v39; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v45[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF

  v48 = a6;
  v49 = a4;
  v38 = 0;
  v43 = 0LL;
  v39 = 0LL;
  WORD1(v39) = -1;
  v7 = 0LL;
  v44 = 0LL;
  v41 = 0;
  v8 = 0;
  v46 = 0LL;
  v9 = 0;
  v35 = 0;
  v10 = 0LL;
  v11 = 0;
  v42 = 0;
  v12 = 0LL;
  v50 = a3;
  v47 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextInitialize(&v44);
  v45[0] = v45;
  v45[1] = v45;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = CmpAcquireShutdownRundown(v14, v13);
      if ( !v37 )
      {
        started = -1073741431;
        v36 = 0;
        goto LABEL_35;
      }
      if ( v8 )
        CmpLockRegistryExclusive(0LL);
      else
        CmpLockRegistry(0LL);
      v10 = *(_QWORD *)(a1 + 8);
      v36 = 1;
      if ( (unsigned __int8)CmpIsKcbImmutable(v10, v15) )
        goto LABEL_88;
      started = CmpStartKcbStackForTopLayerKcb((__int64)&v39, v10);
      if ( started < 0 )
        goto LABEL_38;
      if ( !v35 )
      {
        CmpLockKcbStackTopExclusiveRestShared(&v39);
        v11 = 1;
      }
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started < 0 )
        goto LABEL_38;
      if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      {
        started = CmpTransSearchAddTransFromKeyBody(a1, &v46);
        if ( started < 0 )
          goto LABEL_38;
        v7 = v46;
        started = CmpPerformKeyBodyDeletionCheck(a1, v46);
        if ( started < 0 )
          goto LABEL_38;
      }
      if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 4120LL) & 0x20) != 0 )
      {
LABEL_88:
        started = -1073741790;
        goto LABEL_38;
      }
      if ( !*(_WORD *)(v10 + 66) || *(_BYTE *)(v10 + 65) || v35 )
        break;
      v8 = 1;
      v35 = 1;
      CmpUnlockKcbStack((__int64)&v39);
      v23 = Privileges[1];
      v11 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v39 = 0LL;
      WORD1(v39) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v23);
      CmpReleaseShutdownRundown(v24);
    }
    if ( *(_WORD *)(a1 + 4) )
    {
      SeSetSecurityAccessMask(*v47, &v41);
      started = CmpCheckKcbStackAccess((__int64)&v39, v7);
      if ( started < 0 )
        goto LABEL_38;
    }
    if ( *(_WORD *)(v10 + 66) )
    {
      if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v10, 0LL) )
      {
        started = CmpPromoteKey((__int64)&v39, 1, 0);
        if ( started < 0 )
          goto LABEL_38;
        started = CmpPartialPromoteSubkeys((__int64)&v39);
        if ( started < 0 )
          goto LABEL_38;
      }
    }
    if ( v7 )
      break;
    if ( *(_DWORD *)(v10 + 248) )
    {
      started = CmpSnapshotTxOwnerArray(v10 + 248, &v38, &v43);
      if ( started < 0 )
        goto LABEL_38;
      if ( v11 )
      {
        CmpUnlockKcbStack((__int64)&v39);
        v11 = 0;
      }
      CmpCleanupKcbStack(&v39);
      v39 = 0LL;
      WORD1(v39) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v32);
      v36 = 0;
      CmpReleaseShutdownRundown(v33);
      v37 = 0;
      started = CmpRollbackTransactionArray(v38, v43, v34, &v42);
      if ( started < 0 )
        goto LABEL_40;
    }
    else
    {
      if ( !*(_DWORD *)(v10 + 264) )
        goto LABEL_20;
      started = CmpSnapshotTxOwnerArray(v10 + 264, &v38, &v43);
      if ( started < 0 )
        goto LABEL_38;
      if ( v11 )
      {
        CmpUnlockKcbStack((__int64)&v39);
        v11 = 0;
      }
      v29 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v39 = 0LL;
      WORD1(v39) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v29);
      v36 = 0;
      CmpReleaseShutdownRundown(v30);
      v37 = 0;
      started = CmpRollbackTransactionArray(v38, v43, v31, &v42);
      if ( started < 0 )
        goto LABEL_38;
    }
    v8 = v35;
  }
  v25 = *(unsigned int *)(*(_QWORD *)(v10 + 32) + 160LL);
  if ( (v25 & 2) != 0 )
  {
    started = -1072103423;
  }
  else
  {
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v25);
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
        if ( !v35 )
        {
          HvLockHiveFlusherShared(*(_QWORD *)(v10 + 32));
          v9 = 1;
          CmLockHiveSecurityExclusive(*(_QWORD *)(v10 + 32));
        }
        started = CmpSetSecurityDescriptorInfo(
                    v10,
                    (_DWORD)v47,
                    v50,
                    v49,
                    a5,
                    v48,
                    v7,
                    (__int64)v12,
                    (__int64)&SubjectContext);
        v18 = v9;
        if ( started >= 0 )
        {
          v12 = 0LL;
          if ( v9 )
          {
            CmUnlockHiveSecurity(*(_QWORD *)(v10 + 32));
            v18 = 0;
          }
          if ( *(_WORD *)(v10 + 66) && !*(_BYTE *)(v10 + 65) )
          {
            LOBYTE(v17) = v9;
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v10, &v44, v17);
            *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
            v28 = *(_QWORD *)(v10 + 32);
            if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v28, &v44);
            else
              HvpReleaseCellPaged(v28, &v44);
            *(_BYTE *)(v10 + 65) = 2;
          }
          if ( v9 )
          {
            HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
            v9 = 0;
          }
          v19 = SWORD1(v39);
          _mm_lfence();
          if ( v19 >= 2 )
            v20 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v39) - 2);
          else
            v20 = Privileges[SWORD1(v39) - 1];
          CmpReportNotifyHelper((unsigned int)&v39, *(_QWORD *)&v20[1].Privilege[0].Luid.HighPart, v7, 10, (__int64)v45);
          if ( *(_QWORD *)&v20[1].Privilege[0].Luid.HighPart != CmpMasterHive )
            CmpReportNotifyHelper((unsigned int)&v39, CmpMasterHive, v7, 10, (__int64)v45);
          started = 0;
        }
        if ( v18 )
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
    CmpUnlockKcbStack((__int64)&v39);
LABEL_40:
  v21 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v36 )
    CmpUnlockRegistry(v21);
  if ( (_QWORD *)v45[0] != v45 )
    CmpSignalDeferredPosts(v45);
  if ( v37 )
    CmpReleaseShutdownRundown(v21);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
