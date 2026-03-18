/*
 * XREFs of CmSetLastWriteTimeKey @ 0x140B53BB0
 * Callers:
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpTransEnlistUowInKcb @ 0x1404BD714 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmAddLogForAction @ 0x1408AD014 (CmAddLogForAction.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpCleanupRollbackPacket @ 0x1408B1080 (CmpCleanupRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1408B10E4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockIXLockIntent @ 0x1408BC8A0 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408BC950 (CmpLockIXLockExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsKcbImmutable @ 0x140931B20 (CmpIsKcbImmutable.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 *     CmpAllocateUnitOfWork @ 0x140AB9B34 (CmpAllocateUnitOfWork.c)
 *     CmpRetryBackOff @ 0x140B3C68C (CmpRetryBackOff.c)
 *     CmpAbortRollbackPacket @ 0x140B4CB14 (CmpAbortRollbackPacket.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpIsShutdownRundownActive @ 0x140C58CC0 (CmpIsShutdownRundownActive.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  char v7; // r15
  __int64 v8; // rdx
  int started; // ebx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-49h] BYREF
  __int128 v28; // [rsp+38h] [rbp-41h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+48h] [rbp-31h]
  int v30; // [rsp+58h] [rbp-21h] BYREF
  __int128 v31; // [rsp+60h] [rbp-19h] BYREF
  __int64 v32; // [rsp+70h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-1h] BYREF

  v27 = 0LL;
  v32 = 0LL;
  v30 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  HvpGetCellContextInitialize(&v27);
  v28 = 0LL;
  WORD1(v28) = -1;
  *(_OWORD *)Privileges = 0LL;
  v31 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  while ( !(unsigned __int8)CmpIsShutdownRundownActive(v4) )
  {
    CmpLockRegistry(v5);
    v6 = a1[1];
    v7 = 1;
    if ( CmpIsKcbImmutable(v6) )
    {
      started = -1073741790;
      goto LABEL_40;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v28, v6);
    if ( started < 0 )
      goto LABEL_40;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v28, v8, v10, v11);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_37;
    if ( *(_BYTE *)(v6 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_37;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v32);
      if ( started < 0 )
        goto LABEL_37;
      v13 = v32;
      started = CmpPerformKeyBodyDeletionCheck(a1, v32);
      if ( started < 0 )
        goto LABEL_37;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_37;
      }
      if ( v13 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v23 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_37:
          CmpUnlockKcbStack((__int64)&v28);
          goto LABEL_40;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v23, v13);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v6 + 248), v23, v24)
            && CmpLockIXLockExclusive(v6 + 264, (_QWORD *)v23, 1LL) )
          {
            *(_DWORD *)(v23 + 68) = 8;
            *(_QWORD *)(v23 + 88) = *a2;
            started = CmAddLogForAction(v23, 1u);
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
        CmpRundownUnitOfWork((_QWORD *)v23);
        ExFreePoolWithTag((PVOID)v23, 0x77554D43u);
        goto LABEL_37;
      }
    }
    v14 = CmpTryAcquireKcbIXLocks(v6, 0LL, v12, (__int64)&v31);
    started = v14;
    if ( v14 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 2, (__int64)v17, v31);
      CmpUnlockKcbStack((__int64)&v28);
      CmpCleanupKcbStack((__int64)&v28);
      v28 = 0LL;
      WORD1(v28) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v18);
      v7 = 0;
      started = CmpAbortRollbackPacket((__int64)&v31, 0LL);
      if ( started < 0 )
        goto LABEL_40;
      CmpRetryBackOff(&v30);
      CmpCleanupRollbackPacket((__int64)&v31);
      v31 = 0LL;
    }
    else
    {
      if ( v14 < 0 )
        goto LABEL_37;
      if ( *(_DWORD *)(v6 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v6 + 32), v15, v16, v17);
        started = HvpMarkCellDirty(*(_QWORD *)(v6 + 32), *(_DWORD *)(v6 + 40), 0);
        if ( started >= 0 )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v6, (unsigned int *)&v27, 1) + 4) = *a2;
          v20 = *a2;
          v21 = *(_QWORD *)(v6 + 32);
          ++*(_QWORD *)(v6 + 304);
          *(_QWORD *)(v6 + 168) = v20;
          if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v21, (__int64)&v27);
          else
            HvpReleaseCellPaged(v21, (unsigned int *)&v27);
          started = 0;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v6 + 32));
        goto LABEL_37;
      }
      CmpUnlockKcbStack((__int64)&v28);
      started = CmpPromoteKey((__int64)&v28, 0, 0);
      if ( started < 0 )
        goto LABEL_40;
      CmpUnlockRegistry(v19);
      CmpCleanupKcbStack((__int64)&v28);
      v28 = 0LL;
      WORD1(v28) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  started = -1073741431;
  v7 = 0;
LABEL_40:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v31);
  if ( v7 )
    CmpUnlockRegistry(v25);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)started;
}
