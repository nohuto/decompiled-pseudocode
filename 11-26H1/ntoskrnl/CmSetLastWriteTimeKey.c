/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140B56450
 * Callers:
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B23C8 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404B6EF4 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B7570 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B75D4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x14090D6F0 (CmpIsKcbImmutable.c)
 *     CmpCleanupKcbStack @ 0x140944530 (CmpCleanupKcbStack.c)
 *     CmpAllocateUnitOfWork @ 0x140ABAF54 (CmpAllocateUnitOfWork.c)
 *     CmpRetryBackOff @ 0x140B3E90C (CmpRetryBackOff.c)
 *     CmpAbortRollbackPacket @ 0x140B4E8A4 (CmpAbortRollbackPacket.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C5ECC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rdi
  char v10; // r15
  __int64 v11; // rdx
  int started; // ebx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v30; // [rsp+30h] [rbp-49h] BYREF
  __int128 v31; // [rsp+38h] [rbp-41h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+48h] [rbp-31h]
  int v33; // [rsp+58h] [rbp-21h] BYREF
  __int128 v34; // [rsp+60h] [rbp-19h] BYREF
  __int64 v35; // [rsp+70h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-1h] BYREF

  v30 = 0LL;
  v35 = 0LL;
  v33 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  HvpGetCellContextInitialize(&v30);
  v31 = 0LL;
  WORD1(v31) = -1;
  *(_OWORD *)Privileges = 0LL;
  v34 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  while ( !(unsigned __int8)CmpIsShutdownRundownActive(v4) )
  {
    CmpLockRegistry(v6, v5, v7, v8);
    v9 = a1[1];
    v10 = 1;
    if ( CmpIsKcbImmutable(v9) )
    {
      started = -1073741790;
      goto LABEL_40;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v31, v9);
    if ( started < 0 )
      goto LABEL_40;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v31, v11, v13, v14);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_37;
    if ( *(_BYTE *)(v9 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_37;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v35);
      if ( started < 0 )
        goto LABEL_37;
      v16 = v35;
      started = CmpPerformKeyBodyDeletionCheck(a1, v35);
      if ( started < 0 )
        goto LABEL_37;
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_37;
      }
      if ( v16 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v26 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_37:
          CmpUnlockKcbStack((__int64)&v31);
          goto LABEL_40;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v26, v16);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v9 + 248), v26, v27)
            && CmpLockIXLockExclusive(v9 + 264, (_QWORD *)v26, 1LL) )
          {
            *(_DWORD *)(v26 + 68) = 8;
            *(_QWORD *)(v26 + 88) = *a2;
            started = CmAddLogForAction(v26, 1u);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_37;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
        CmpRundownUnitOfWork((_QWORD *)v26);
        ExFreePoolWithTag((PVOID)v26, 0x77554D43u);
        goto LABEL_37;
      }
    }
    v17 = CmpTryAcquireKcbIXLocks(v9, 0LL, v15, (__int64)&v34);
    started = v17;
    if ( v17 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v9, 0LL, 2, (__int64)v20, v34);
      CmpUnlockKcbStack((__int64)&v31);
      CmpCleanupKcbStack((__int64)&v31);
      v31 = 0LL;
      WORD1(v31) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v21);
      v10 = 0;
      started = CmpAbortRollbackPacket((__int64)&v34, 0LL);
      if ( started < 0 )
        goto LABEL_40;
      CmpRetryBackOff(&v33);
      CmpCleanupRollbackPacket((__int64)&v34);
      v34 = 0LL;
    }
    else
    {
      if ( v17 < 0 )
        goto LABEL_37;
      if ( *(_DWORD *)(v9 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32), v18, v19, v20);
        started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(_DWORD *)(v9 + 40), 0);
        if ( started >= 0 )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v9, (unsigned int *)&v30, 1) + 4) = *a2;
          v23 = *a2;
          v24 = *(_QWORD *)(v9 + 32);
          ++*(_QWORD *)(v9 + 304);
          *(_QWORD *)(v9 + 168) = v23;
          if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v24, (__int64)&v30);
          else
            HvpReleaseCellPaged(v24, (unsigned int *)&v30);
          started = 0;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        goto LABEL_37;
      }
      CmpUnlockKcbStack((__int64)&v31);
      started = CmpPromoteKey((__int64)&v31, 0, 0);
      if ( started < 0 )
        goto LABEL_40;
      CmpUnlockRegistry(v22);
      CmpCleanupKcbStack((__int64)&v31);
      v31 = 0LL;
      WORD1(v31) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  started = -1073741431;
  v10 = 0;
LABEL_40:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v34);
  if ( v10 )
    CmpUnlockRegistry(v28);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)started;
}
