/*
 * XREFs of CmpPerformUnloadKey @ 0x1408AFC14
 * Callers:
 *     CmUnloadKey @ 0x140B0A63C (CmUnloadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     TmRollbackEnlistment @ 0x1405347D0 (TmRollbackEnlistment.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     CmpUnfreezeHive @ 0x14077B2EC (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x14085BBD0 (CmObliterateRMTxArray.c)
 *     CmSnapshotRMTxArray @ 0x1408ACD84 (CmSnapshotRMTxArray.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408AE484 (CmpRollbackLightWeightTransaction.c)
 *     CmShutdownCmRM @ 0x1408AF354 (CmShutdownCmRM.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x1408AF75C (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1408AF8E8 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408AF9AC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpCleanupRollbackPacket @ 0x1408B1080 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B10E4 (CmpTryAcquireKcbIXLocks.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B11FC (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408B45EC (LOCK_HIVE_LOAD.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408BA114 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpSignalDeferredPosts @ 0x1408D0CA0 (CmpSignalDeferredPosts.c)
 *     CmpTransDereferenceTransaction @ 0x1408ECC08 (CmpTransDereferenceTransaction.c)
 *     CmpFreezeHive @ 0x140A2F860 (CmpFreezeHive.c)
 *     CmpLogUnsupportedOperation @ 0x140B5C1B8 (CmpLogUnsupportedOperation.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  char v5; // bl
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  char v11; // r15
  __int64 v12; // r13
  int v13; // edi
  __int16 v14; // ax
  PPRIVILEGE_SET v15; // rbx
  __int64 v16; // r8
  ULONG_PTR v17; // rdx
  __int64 v18; // rcx
  char *v19; // rbx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rcx
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  void *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rcx
  __int64 v46; // r12
  unsigned __int64 v47; // rbx
  int v48; // r14d
  unsigned __int64 v49; // rbx
  int v50; // r14d
  unsigned __int64 v51; // rbx
  int v52; // r14d
  signed __int32 v53[8]; // [rsp+0h] [rbp-D9h] BYREF
  char v54; // [rsp+40h] [rbp-99h]
  char v55; // [rsp+41h] [rbp-98h]
  __int128 v56; // [rsp+48h] [rbp-91h] BYREF
  int v57; // [rsp+58h] [rbp-81h] BYREF
  _QWORD v58[2]; // [rsp+60h] [rbp-79h] BYREF
  __int128 v59; // [rsp+70h] [rbp-69h] BYREF
  __int128 v60; // [rsp+80h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+90h] [rbp-49h]
  __int64 v62; // [rsp+A0h] [rbp-39h]
  _QWORD v63[3]; // [rsp+A8h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-19h] BYREF

  v62 = a4;
  v55 = a3;
  v58[1] = v58;
  v58[0] = v58;
  v5 = 0;
  v60 = 0LL;
  WORD1(v60) = -1;
  memset(&ApcState, 0, sizeof(ApcState));
  v54 = 0;
  v59 = 0LL;
  v56 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeDelayDerefContext(&v59);
  LOCK_HIVE_LOAD(v7);
  LOBYTE(v8) = 1;
  CmpLockRegistryFreezeAware(v8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 6;
  v57 = 6;
  v12 = *(_QWORD *)(v10 + 32);
  if ( (*(_DWORD *)(v10 + 8) & 0x80u) != 0 )
  {
    v13 = -1073741790;
    goto LABEL_64;
  }
  v13 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v13 < 0 )
    goto LABEL_64;
  if ( (*(_DWORD *)(v10 + 8) & 0x40000) != 0 )
  {
    v13 = -1073740763;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(v12 + 2952) && ((a2 & 1) == 0 || (*(_DWORD *)(v12 + 4120) & 0x20) == 0) )
  {
    v13 = -1073741431;
    goto LABEL_64;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb(&v60, v10) < 0 )
  {
    v13 = -1073741670;
    goto LABEL_64;
  }
  v14 = WORD1(v60);
  _mm_lfence();
  if ( v14 >= 2 )
    v15 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v60) - 2);
  else
    v15 = Privileges[SWORD1(v60) - 1];
  CmpReportNotifyHelper((unsigned int)&v60, *(_QWORD *)&v15[1].Privilege[0].Luid.HighPart, 0, 4, (__int64)v58);
  v17 = CmpMasterHive;
  if ( *(_QWORD *)&v15[1].Privilege[0].Luid.HighPart != CmpMasterHive )
    CmpReportNotifyHelper((unsigned int)&v60, CmpMasterHive, 0, 4, (__int64)v58);
  v18 = *(_QWORD *)(a1 + 16);
  if ( v18 )
  {
    if ( *(_QWORD *)(v18 + 16) != v18 + 16 )
      CmpPostNotify(v18, v17, v16, 267, 0, 0LL, (__int64)v58);
    v19 = *(char **)(a1 + 16);
    if ( v19 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v19 + 56));
      **((_QWORD **)v19 + 1) = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
        *(_QWORD *)(*(_QWORD *)v19 + 8LL) = *((_QWORD *)v19 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      ExFreePoolWithTag(v19, 0);
    }
  }
  v9 = *(_QWORD *)(v10 + 32);
  if ( v9 == CmpMasterHive || (*(_DWORD *)(v10 + 184) & 0x40000) == 0 )
  {
    v13 = -1073741811;
    goto LABEL_63;
  }
  if ( (*(_DWORD *)(v9 + 4120) & 4) != 0 )
  {
    v13 = -1073741790;
    goto LABEL_63;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !CmpDoesKeyHaveOpenSubkeys(v10) && *(_QWORD *)v10 == 2LL )
    {
LABEL_23:
      *(_DWORD *)(v10 + 8) |= 0x40000u;
      v20 = *(_BYTE *)(v12 + 2952) == 1;
      v54 = 1;
      if ( v20 )
      {
        CmpUnfreezeHive(v12);
        ++*(_DWORD *)&CmpKeyLockTracker.Timer.Processor;
      }
      CmpDrainDelayDerefContext((_QWORD **)&v59);
      CmpUnlockRegistry(v21);
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement((_DWORD *)&WheapPfaLock.FirstArgument + 1);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v12 + 1640));
      _InterlockedExchange64((volatile __int64 *)(v12 + 1640), 1LL);
      LOCK_HIVE_LOAD(v22);
      LOBYTE(v23) = 1;
      CmpLockRegistryFreezeAware(v23);
      v24 = *(_QWORD *)(v12 + 4160);
      if ( !v24 )
        goto LABEL_26;
      v13 = CmSnapshotRMTxArray(v24, (unsigned int *)&v56);
      if ( v13 < 0 )
      {
LABEL_63:
        v5 = v54;
        goto LABEL_64;
      }
      CmpLogTransactionAbortedWithChildName(v10, 0LL, 9, v33, v56);
      CmpUnlockRegistry(v34);
      UNLOCK_HIVE_LOAD();
      v13 = 0;
      v11 = 0;
      v35 = 0LL;
      v55 = 0;
      if ( !(_DWORD)v56 )
      {
LABEL_48:
        if ( v13 >= 0 )
        {
          CmpCleanupRollbackPacket(&v56);
          v56 = 0LL;
          if ( v55 )
            CmObliterateRMTxArray(*(_QWORD *)(v12 + 4160));
          LOCK_HIVE_LOAD(v36);
          v37 = *(_QWORD *)(v12 + 4160);
          v38 = 0LL;
          if ( v37 && *(_DWORD *)(v37 + 64) == 1 )
          {
            v38 = *(void **)(v37 + 48);
            *(_QWORD *)(v37 + 48) = 0LL;
          }
          v39 = *(_QWORD *)(v12 + 4160);
          v40 = 0LL;
          if ( v39 && *(_DWORD *)(v39 + 64) == 1 )
          {
            v40 = *(void **)(v39 + 32);
            *(_QWORD *)(v39 + 32) = 0LL;
          }
          UNLOCK_HIVE_LOAD();
          if ( v38 )
            ZwClose(v38);
          if ( v40 )
            ZwClose(v40);
          LOCK_HIVE_LOAD(v41);
          CmShutdownCmRM(*(_QWORD *)(v12 + 4160), 1);
          LOBYTE(v42) = 1;
          CmpLockRegistryFreezeAware(v42);
          v57 = 6;
LABEL_26:
          CmpAttachToRegistryProcess(&ApcState);
          CmpCompleteUnloadKey(v10, v25, &v57);
          CmpDetachFromRegistryProcess(&ApcState);
          v11 = v57;
          v13 = 0;
LABEL_27:
          if ( _InterlockedExchangeAdd((_DWORD *)&WheapPfaLock.FirstArgument + 1, 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v53, 0);
            if ( CmpActiveHiveRundownEvent )
              ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
          }
          goto LABEL_30;
        }
        goto LABEL_63;
      }
      v55 = 0;
      while ( 1 )
      {
        v51 = *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v35);
        if ( v51 )
          break;
LABEL_127:
        v35 = (unsigned int)(v35 + 1);
        if ( (unsigned int)v35 >= (unsigned int)v56 )
          goto LABEL_48;
      }
      if ( (v51 & 1) != 0 )
      {
        v52 = CmpRollbackLightWeightTransaction(v51 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( v52 >= 0 )
        {
          CmpTransDereferenceTransaction(v51);
          v9 = *((_QWORD *)&v56 + 1);
          *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v35) = 0LL;
LABEL_124:
          if ( v13 >= 0 && v52 < 0 )
            v13 = v52;
          goto LABEL_127;
        }
      }
      else
      {
        v52 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v56 + 1) + 8 * v35), 0LL);
        if ( v52 >= 0 )
        {
          ObfDereferenceObject((PVOID)v51);
          *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v35) = 0LL;
          goto LABEL_124;
        }
      }
      if ( v52 == -1072103403 || v52 == -1072103405 || v52 == -1072103402 )
      {
        v52 = 0;
        v55 = 1;
      }
      goto LABEL_124;
    }
    if ( v55 )
    {
      v13 = CmpFreezeHive(v10, v62);
      if ( v13 >= 0 )
      {
        v13 = 259;
        goto LABEL_30;
      }
      goto LABEL_63;
    }
LABEL_62:
    v13 = -1073741535;
    goto LABEL_63;
  }
  v27 = *(_QWORD *)(v10 + 192);
  if ( v27 && *(_QWORD *)(v27 + 32) != v27 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
    goto LABEL_62;
  }
  LOBYTE(v17) = 1;
  v28 = CmpTryAcquireKcbIXLocks(v10, v17, v16, &v56);
  v13 = v28;
  if ( v28 != -1073741267 )
  {
    if ( v28 < 0 )
      goto LABEL_63;
    v30 = CmpPrepareForSubtreeInvalidation(v10, 0, (__int64)&v56);
    v13 = v30;
    if ( v30 != -1073741267 )
    {
      if ( v30 < 0 )
        goto LABEL_63;
      v63[0] = 1LL;
      v63[2] = &v59;
      v63[1] = 1LL;
      CmpEnumerateAllOpenSubKeys(v10, 1, (__int64)CmpInvalidateSubtreeWorker, (__int64)v63);
      LOBYTE(v32) = 1;
      CmpFlushNotifiesOnKeyBodyList(v10, 1LL, &v59, v32);
      goto LABEL_23;
    }
    CmpLogTransactionAbortedWithChildName(v10, 0LL, 10, v31, v56);
    CmpUnlockRegistry(v43);
    UNLOCK_HIVE_LOAD();
    v11 = 0;
    v13 = 0;
    v44 = 0LL;
    if ( !(_DWORD)v56 )
      goto LABEL_68;
    while ( 1 )
    {
      v49 = *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v44);
      if ( v49 )
        break;
LABEL_112:
      v44 = (unsigned int)(v44 + 1);
      if ( (unsigned int)v44 >= (unsigned int)v56 )
        goto LABEL_68;
    }
    if ( (v49 & 1) != 0 )
    {
      v50 = CmpRollbackLightWeightTransaction(v49 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v50 >= 0 )
      {
        CmpTransDereferenceTransaction(v49);
        v9 = *((_QWORD *)&v56 + 1);
        *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v44) = 0LL;
LABEL_109:
        if ( v13 >= 0 && v50 < 0 )
          v13 = v50;
        goto LABEL_112;
      }
    }
    else
    {
      v50 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v56 + 1) + 8 * v44), 0LL);
      if ( v50 >= 0 )
      {
        ObfDereferenceObject((PVOID)v49);
        *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v44) = 0LL;
        goto LABEL_109;
      }
    }
    if ( v50 == -1072103403 || v50 == -1072103405 || v50 == -1072103402 )
      v50 = 0;
    goto LABEL_109;
  }
  CmpLogTransactionAbortedWithChildName(v10, 0LL, 10, v29, v56);
  CmpUnlockRegistry(v45);
  UNLOCK_HIVE_LOAD();
  v11 = 0;
  v13 = 0;
  v46 = 0LL;
  if ( (_DWORD)v56 )
  {
    while ( 1 )
    {
      v47 = *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v46);
      if ( v47 )
        break;
LABEL_101:
      v46 = (unsigned int)(v46 + 1);
      if ( (unsigned int)v46 >= (unsigned int)v56 )
        goto LABEL_68;
    }
    if ( (v47 & 1) != 0 )
    {
      v48 = CmpRollbackLightWeightTransaction(v47 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v48 >= 0 )
      {
        CmpTransDereferenceTransaction(v47);
        v9 = *((_QWORD *)&v56 + 1);
        *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v46) = 0LL;
LABEL_98:
        if ( v13 >= 0 && v48 < 0 )
          v13 = v48;
        goto LABEL_101;
      }
    }
    else
    {
      v48 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v56 + 1) + 8 * v46), 0LL);
      if ( v48 >= 0 )
      {
        ObfDereferenceObject((PVOID)v47);
        *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v46) = 0LL;
        goto LABEL_98;
      }
    }
    if ( v48 == -1072103403 || v48 == -1072103405 || v48 == -1072103402 )
      v48 = 0;
    goto LABEL_98;
  }
LABEL_68:
  v5 = 0;
  if ( v13 >= 0 )
    v13 = -1073741267;
LABEL_64:
  if ( (v11 & 4) == 0 )
  {
    LOCK_HIVE_LOAD(v9);
    v11 |= 4u;
  }
  if ( (v11 & 2) == 0 )
  {
    LOBYTE(v9) = 1;
    CmpLockRegistryFreezeAware(v9);
    v11 |= 2u;
  }
  if ( v5 )
  {
    _InterlockedExchange64((volatile __int64 *)(v12 + 1640), 0LL);
    *(_DWORD *)(v10 + 8) &= ~0x40000u;
    goto LABEL_27;
  }
LABEL_30:
  if ( (v11 & 2) != 0 )
    CmpUnlockRegistry(v9);
  if ( (v11 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (_QWORD *)v58[0] != v58 )
    CmpSignalDeferredPosts(v58);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v56);
  return (unsigned int)v13;
}
