/*
 * XREFs of CmpTryToRundownHive @ 0x140463B48
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1403682A0 (ExpUnblockPushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1407714F8 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmCloseRmHandle @ 0x140776A94 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x140776ABC (CmCloseTmHandle.c)
 *     CmObliterateRMTxArray @ 0x14085BBD0 (CmObliterateRMTxArray.c)
 *     CmSnapshotRMTxArray @ 0x1408ACD84 (CmSnapshotRMTxArray.c)
 *     CmShutdownCmRM @ 0x1408AF354 (CmShutdownCmRM.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1408AF8E8 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpCleanupRollbackPacket @ 0x1408B1080 (CmpCleanupRollbackPacket.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B11FC (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1408B45EC (LOCK_HIVE_LOAD.c)
 *     CmpInitializeRollbackPacket @ 0x140B1B8E0 (CmpInitializeRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x140B4CB14 (CmpAbortRollbackPacket.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140C58FB8 (CmpIsHiveLoadUnloadRundownActive.c)
 */

char __fastcall CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  char v3; // bp
  char v4; // r14
  __int64 v6; // rcx
  unsigned __int64 Count; // rcx
  void *v9; // r14
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  v15[0] = 0LL;
  CmpInitializeRollbackPacket(v15);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive()
      || *(_QWORD *)a2 != 2LL && ((unsigned __int8)CmpDoesKeyHaveOpenSubkeys(a2) || *(_QWORD *)a2 != 2LL) )
    {
      if ( !v3 )
      {
LABEL_22:
        CmpCleanupRollbackPacket(v15);
        return 0;
      }
LABEL_28:
      *(_DWORD *)(a2 + 8) &= ~0x40000u;
      _InterlockedExchange64((volatile __int64 *)&a1[205], 0LL);
      if ( _InterlockedExchangeAdd((_DWORD *)&WheapPfaLock.FirstArgument + 1, 0xFFFFFFFF) == 1 )
      {
        _InterlockedOr(v14, 0);
        if ( CmpActiveHiveRundownEvent )
          ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
      }
      goto LABEL_22;
    }
    if ( !v3 )
    {
      *(_DWORD *)(a2 + 8) |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement((_DWORD *)&WheapPfaLock.FirstArgument + 1);
      ExWaitForRundownProtectionRelease(a1 + 205);
      v3 = 1;
      _InterlockedExchange64((volatile __int64 *)&a1[205], 1LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v6) = 1;
      goto LABEL_6;
    }
    Count = a1[520].Count;
    if ( !Count || v4 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v15) < 0 )
      goto LABEL_28;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v15);
    CmpUnlockRegistry();
    if ( LODWORD(v15[0]) )
    {
      v16 = 0;
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpAbortRollbackPacket(v15, &v16) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v13) = 1;
        CmpLockRegistryFreezeAware(v13);
        goto LABEL_28;
      }
      if ( v16 == 1 )
        CmObliterateRMTxArray(a1[520].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v6) = 1;
LABEL_6:
      CmpLockRegistryFreezeAware(v6);
    }
    else
    {
      v9 = (void *)CmCloseRmHandle(a1[520].Count, 0LL);
      v10 = (void *)CmCloseTmHandle(a1[520].Count);
      UNLOCK_HIVE_LOAD();
      if ( v9 )
        ZwClose(v9);
      if ( v10 )
        ZwClose(v10);
      LOCK_HIVE_LOAD();
      LOBYTE(v11) = 1;
      CmShutdownCmRM(a1[520].Count, v11);
      LOBYTE(v12) = 1;
      CmpLockRegistryFreezeAware(v12);
      v4 = 1;
    }
  }
  if ( _InterlockedExchangeAdd((_DWORD *)&WheapPfaLock.FirstArgument + 1, 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v14, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
  }
  CmpCleanupRollbackPacket(v15);
  return 1;
}
