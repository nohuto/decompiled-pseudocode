/*
 * XREFs of CmpPerformUnloadKey @ 0x1408B6104
 * Callers:
 *     CmUnloadKey @ 0x140A3E88C (CmUnloadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     TmRollbackEnlistment @ 0x140536C50 (TmRollbackEnlistment.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmpUnfreezeHive @ 0x14077DF2C (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x140861EC4 (CmObliterateRMTxArray.c)
 *     CmSnapshotRMTxArray @ 0x1408B31C4 (CmSnapshotRMTxArray.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408B48C4 (CmpRollbackLightWeightTransaction.c)
 *     CmShutdownCmRM @ 0x1408B5760 (CmShutdownCmRM.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x1408B5C5C (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1408B5DE8 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1408B5EAC (CmpPrepareForSubtreeInvalidation.c)
 *     CmpCleanupRollbackPacket @ 0x1408B7570 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1408C06E4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpSignalDeferredPosts @ 0x1408D7260 (CmpSignalDeferredPosts.c)
 *     CmpTransDereferenceTransaction @ 0x1408F31C8 (CmpTransDereferenceTransaction.c)
 *     CmpFreezeHive @ 0x140A416D8 (CmpFreezeHive.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
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
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rax
  void *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // r12
  unsigned __int64 v46; // rbx
  int v47; // r14d
  unsigned __int64 v48; // rbx
  int v49; // r14d
  unsigned __int64 v50; // rbx
  int v51; // r14d
  signed __int32 v52[8]; // [rsp+0h] [rbp-D9h] BYREF
  char v53; // [rsp+40h] [rbp-99h]
  char v54; // [rsp+41h] [rbp-98h]
  __int128 v55; // [rsp+48h] [rbp-91h] BYREF
  int v56; // [rsp+58h] [rbp-81h] BYREF
  _QWORD v57[2]; // [rsp+60h] [rbp-79h] BYREF
  __int128 v58; // [rsp+70h] [rbp-69h] BYREF
  __int128 v59; // [rsp+80h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+90h] [rbp-49h]
  __int64 v61; // [rsp+A0h] [rbp-39h]
  _QWORD v62[3]; // [rsp+A8h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-19h] BYREF

  v61 = a4;
  v54 = a3;
  v57[1] = v57;
  v57[0] = v57;
  v5 = 0;
  v59 = 0LL;
  WORD1(v59) = -1;
  memset(&ApcState, 0, sizeof(ApcState));
  v53 = 0;
  v58 = 0LL;
  v55 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeDelayDerefContext(&v58);
  LOCK_HIVE_LOAD(v7);
  LOBYTE(v8) = 1;
  CmpLockRegistryFreezeAware(v8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 6;
  v56 = 6;
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
  if ( (int)CmpStartKcbStackForTopLayerKcb(&v59, v10) < 0 )
  {
    v13 = -1073741670;
    goto LABEL_64;
  }
  v14 = WORD1(v59);
  _mm_lfence();
  if ( v14 >= 2 )
    v15 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v59) - 2);
  else
    v15 = Privileges[SWORD1(v59) - 1];
  CmpReportNotifyHelper((unsigned int)&v59, *(_QWORD *)&v15[1].Privilege[0].Luid.HighPart, 0, 4, (__int64)v57);
  v17 = CmpMasterHive;
  if ( *(_QWORD *)&v15[1].Privilege[0].Luid.HighPart != CmpMasterHive )
    CmpReportNotifyHelper((unsigned int)&v59, CmpMasterHive, 0, 4, (__int64)v57);
  v18 = *(_QWORD *)(a1 + 16);
  if ( v18 )
  {
    if ( *(_QWORD *)(v18 + 16) != v18 + 16 )
      CmpPostNotify(v18, v17, v16, 267, 0, 0LL, (__int64)v57);
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
      v53 = 1;
      if ( v20 )
      {
        CmpUnfreezeHive(v12);
        ++LODWORD(CmpKeyLockTracker.Timer.Dpc);
      }
      CmpDrainDelayDerefContext((_QWORD **)&v58);
      CmpUnlockRegistry(v21);
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement((volatile signed __int32 *)&WheapPfaLock.ApcStateFill[12]);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v12 + 1640));
      _InterlockedExchange64((volatile __int64 *)(v12 + 1640), 1LL);
      LOCK_HIVE_LOAD(v22);
      LOBYTE(v23) = 1;
      CmpLockRegistryFreezeAware(v23);
      v24 = *(_QWORD *)(v12 + 4160);
      if ( !v24 )
        goto LABEL_26;
      v13 = CmSnapshotRMTxArray(v24, (unsigned int *)&v55);
      if ( v13 < 0 )
      {
LABEL_63:
        v5 = v53;
        goto LABEL_64;
      }
      CmpLogTransactionAbortedWithChildName(v10, 0LL, 9, v32, v55);
      CmpUnlockRegistry(v33);
      UNLOCK_HIVE_LOAD();
      v13 = 0;
      v11 = 0;
      v34 = 0LL;
      v54 = 0;
      if ( !(_DWORD)v55 )
      {
LABEL_48:
        if ( v13 >= 0 )
        {
          CmpCleanupRollbackPacket(&v55);
          v55 = 0LL;
          if ( v54 )
            CmObliterateRMTxArray(*(_QWORD *)(v12 + 4160));
          LOCK_HIVE_LOAD(v35);
          v36 = *(_QWORD *)(v12 + 4160);
          v37 = 0LL;
          if ( v36 && *(_DWORD *)(v36 + 64) == 1 )
          {
            v37 = *(void **)(v36 + 48);
            *(_QWORD *)(v36 + 48) = 0LL;
          }
          v38 = *(_QWORD *)(v12 + 4160);
          v39 = 0LL;
          if ( v38 && *(_DWORD *)(v38 + 64) == 1 )
          {
            v39 = *(void **)(v38 + 32);
            *(_QWORD *)(v38 + 32) = 0LL;
          }
          UNLOCK_HIVE_LOAD();
          if ( v37 )
            ZwClose(v37);
          if ( v39 )
            ZwClose(v39);
          LOCK_HIVE_LOAD(v40);
          CmShutdownCmRM(*(_QWORD *)(v12 + 4160), 1);
          LOBYTE(v41) = 1;
          CmpLockRegistryFreezeAware(v41);
          v56 = 6;
LABEL_26:
          CmpAttachToRegistryProcess(&ApcState);
          CmpCompleteUnloadKey(v10, v25, &v56);
          CmpDetachFromRegistryProcess(&ApcState);
          v11 = v56;
          v13 = 0;
LABEL_27:
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&WheapPfaLock.ApcStateFill[12], 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v52, 0);
            if ( CmpActiveHiveRundownEvent )
              ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
          }
          goto LABEL_30;
        }
        goto LABEL_63;
      }
      v54 = 0;
      while ( 1 )
      {
        v50 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v34);
        if ( v50 )
          break;
LABEL_127:
        v34 = (unsigned int)(v34 + 1);
        if ( (unsigned int)v34 >= (unsigned int)v55 )
          goto LABEL_48;
      }
      if ( (v50 & 1) != 0 )
      {
        v51 = CmpRollbackLightWeightTransaction(v50 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( v51 >= 0 )
        {
          CmpTransDereferenceTransaction(v50);
          v9 = *((_QWORD *)&v55 + 1);
          *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v34) = 0LL;
LABEL_124:
          if ( v13 >= 0 && v51 < 0 )
            v13 = v51;
          goto LABEL_127;
        }
      }
      else
      {
        v51 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v55 + 1) + 8 * v34), 0LL);
        if ( v51 >= 0 )
        {
          ObfDereferenceObject((PVOID)v50);
          *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v34) = 0LL;
          goto LABEL_124;
        }
      }
      if ( v51 == -1072103403 || v51 == -1072103405 || v51 == -1072103402 )
      {
        v51 = 0;
        v54 = 1;
      }
      goto LABEL_124;
    }
    if ( v54 )
    {
      v13 = CmpFreezeHive(v10, v61);
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
  v28 = CmpTryAcquireKcbIXLocks(v10, v17, v16, &v55);
  v13 = v28;
  if ( v28 != -1073741267 )
  {
    if ( v28 < 0 )
      goto LABEL_63;
    v30 = CmpPrepareForSubtreeInvalidation(v10, 0, (__int64)&v55);
    v13 = v30;
    if ( v30 != -1073741267 )
    {
      if ( v30 < 0 )
        goto LABEL_63;
      v62[0] = 1LL;
      v62[2] = &v58;
      v62[1] = 1LL;
      CmpEnumerateAllOpenSubKeys(v10, 1, (__int64)CmpInvalidateSubtreeWorker, (__int64)v62);
      CmpFlushNotifiesOnKeyBodyList(v10, 1LL, &v58);
      goto LABEL_23;
    }
    CmpLogTransactionAbortedWithChildName(v10, 0LL, 10, v31, v55);
    CmpUnlockRegistry(v42);
    UNLOCK_HIVE_LOAD();
    v11 = 0;
    v13 = 0;
    v43 = 0LL;
    if ( !(_DWORD)v55 )
      goto LABEL_68;
    while ( 1 )
    {
      v48 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v43);
      if ( v48 )
        break;
LABEL_112:
      v43 = (unsigned int)(v43 + 1);
      if ( (unsigned int)v43 >= (unsigned int)v55 )
        goto LABEL_68;
    }
    if ( (v48 & 1) != 0 )
    {
      v49 = CmpRollbackLightWeightTransaction(v48 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v49 >= 0 )
      {
        CmpTransDereferenceTransaction(v48);
        v9 = *((_QWORD *)&v55 + 1);
        *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v43) = 0LL;
LABEL_109:
        if ( v13 >= 0 && v49 < 0 )
          v13 = v49;
        goto LABEL_112;
      }
    }
    else
    {
      v49 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v55 + 1) + 8 * v43), 0LL);
      if ( v49 >= 0 )
      {
        ObfDereferenceObject((PVOID)v48);
        *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v43) = 0LL;
        goto LABEL_109;
      }
    }
    if ( v49 == -1072103403 || v49 == -1072103405 || v49 == -1072103402 )
      v49 = 0;
    goto LABEL_109;
  }
  CmpLogTransactionAbortedWithChildName(v10, 0LL, 10, v29, v55);
  CmpUnlockRegistry(v44);
  UNLOCK_HIVE_LOAD();
  v11 = 0;
  v13 = 0;
  v45 = 0LL;
  if ( (_DWORD)v55 )
  {
    while ( 1 )
    {
      v46 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v45);
      if ( v46 )
        break;
LABEL_101:
      v45 = (unsigned int)(v45 + 1);
      if ( (unsigned int)v45 >= (unsigned int)v55 )
        goto LABEL_68;
    }
    if ( (v46 & 1) != 0 )
    {
      v47 = CmpRollbackLightWeightTransaction(v46 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v47 >= 0 )
      {
        CmpTransDereferenceTransaction(v46);
        v9 = *((_QWORD *)&v55 + 1);
        *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v45) = 0LL;
LABEL_98:
        if ( v13 >= 0 && v47 < 0 )
          v13 = v47;
        goto LABEL_101;
      }
    }
    else
    {
      v47 = TmRollbackEnlistment(*(PKENLISTMENT *)(*((_QWORD *)&v55 + 1) + 8 * v45), 0LL);
      if ( v47 >= 0 )
      {
        ObfDereferenceObject((PVOID)v46);
        *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8 * v45) = 0LL;
        goto LABEL_98;
      }
    }
    if ( v47 == -1072103403 || v47 == -1072103405 || v47 == -1072103402 )
      v47 = 0;
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
  if ( (_QWORD *)v57[0] != v57 )
    CmpSignalDeferredPosts(v57);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v55);
  return (unsigned int)v13;
}
