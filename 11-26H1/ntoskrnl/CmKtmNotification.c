/*
 * XREFs of CmKtmNotification @ 0x1408ADED0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     TmCommitComplete @ 0x140534470 (TmCommitComplete.c)
 *     TmDereferenceEnlistmentKey @ 0x140534510 (TmDereferenceEnlistmentKey.c)
 *     TmPrepareComplete @ 0x140534650 (TmPrepareComplete.c)
 *     TmReadOnlyEnlistment @ 0x1405346D0 (TmReadOnlyEnlistment.c)
 *     TmReferenceEnlistmentKey @ 0x140534750 (TmReferenceEnlistmentKey.c)
 *     TmRollbackComplete @ 0x1405347B0 (TmRollbackComplete.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpRecoverEnlistment @ 0x14085DCE4 (CmpRecoverEnlistment.c)
 *     CmpAccountForLogReservation @ 0x1408ACE58 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpIsCmRm @ 0x1408AE404 (CmpIsCmRm.c)
 *     CmpTransMgrRollback @ 0x1408AEDA8 (CmpTransMgrRollback.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmLogTmRmAction @ 0x1408AF088 (CmLogTmRmAction.c)
 *     CmpTransMgrCommit @ 0x1408AF444 (CmpTransMgrCommit.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408B11FC (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408B45EC (LOCK_HIVE_LOAD.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x140A77968 (CmpQueryNameString.c)
 */

__int64 __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        struct _LIST_ENTRY *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        GUID *Argument)
{
  char v8; // r12
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  int v13; // eax
  struct _KTHREAD *Thread; // rcx
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  PVOID v20; // rcx
  NTSTATUS v21; // eax
  NTSTATUS OnlyEnlistment; // eax
  NTSTATUS v24; // eax
  __int64 v25; // r8
  UNICODE_STRING *p_UnicodeString; // rcx
  char v27; // [rsp+40h] [rbp-81h] BYREF
  char v28; // [rsp+41h] [rbp-80h]
  char v29; // [rsp+42h] [rbp-7Fh]
  PVOID Key; // [rsp+48h] [rbp-79h] BYREF
  int v31; // [rsp+50h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h]
  __int128 v34; // [rsp+78h] [rbp-49h] BYREF
  __int64 v35; // [rsp+88h] [rbp-39h]
  __int128 v36; // [rsp+90h] [rbp-31h]
  _OWORD v37[2]; // [rsp+A0h] [rbp-21h] BYREF

  Key = 0LL;
  Handle = 0LL;
  v35 = 0LL;
  v29 = 0;
  v27 = 0;
  v34 = 0LL;
  v31 = 0;
  v8 = 0;
  v36 = 0LL;
  UnicodeString = 0LL;
  v28 = 1;
  memset(v37, 0, sizeof(v37));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v34);
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
  {
    v12 = -1073741811;
    goto LABEL_35;
  }
  if ( ((__int64)RMContext[6].Blink & 8) != 0 )
    goto LABEL_55;
  if ( TransactionNotification == 256 )
  {
    v24 = CmpRecoverEnlistment((__int64)RMContext, v11, Argument);
    goto LABEL_75;
  }
  if ( (TransactionNotification & 0xE) == 0 )
  {
LABEL_55:
    v12 = 0;
    goto LABEL_35;
  }
  v12 = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  if ( v12 )
    goto LABEL_35;
  LOCK_TRANSACTION_LIST();
  v13 = *((_DWORD *)Key + 12);
  if ( (v13 & 8) != 0 )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        *((_DWORD *)Key + 12) = v13 | 1;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v24 = TmPrepareComplete(EnlistmentObject, 0LL);
        break;
      case 4u:
        *((_DWORD *)Key + 12) = v13 | 4;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        TmCommitComplete(EnlistmentObject, 0LL);
        goto LABEL_35;
      case 8u:
        *((_DWORD *)Key + 12) = v13 | 2;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KeLeaveCriticalRegion();
        v24 = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_35:
        CmCleanupThreadInfo((_KAFFINITY_EX **)&v34);
        return (unsigned int)v12;
    }
LABEL_75:
    v12 = v24;
    goto LABEL_35;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  Thread = stru_140E098B8.WaitBlock[2].Thread;
  if ( WheapPfaLock.Timer.Header.WaitListHead.Flink != RMContext )
    Thread = (struct _KTHREAD *)RMContext[5].Flink;
  if ( ExpPlatformBinaryLock.Timer.Header.WaitListHead.Blink
    && (int)CmpQueryNameString(Thread[1].WaitBlock[0].WaitListEntry.Blink, &UnicodeString) >= 0 )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v37, 0x20000uLL, v25);
    v36 = *(_OWORD *)((char *)Key + 88);
  }
  if ( ExpPlatformBinaryLock.WaitBlock[0].Object == KeGetCurrentThread() )
  {
    v15 = 0;
  }
  else
  {
    LOCK_HIVE_LOAD(Thread);
    v15 = 1;
  }
  if ( (unsigned __int8)CmpIsCmRm(RMContext) )
  {
    if ( TransactionNotification == 2 )
    {
      v18 = CmpTransMgrPrepare(RMContext, Key, &v31, &v27);
      v19 = 4LL;
    }
    else if ( TransactionNotification == 4 )
    {
      v18 = CmpTransMgrCommit(v17, Key, &v31);
      v19 = 16LL;
    }
    else
    {
      v20 = Key;
      if ( TransactionNotification != 8 )
      {
        v12 = -1073741811;
LABEL_22:
        if ( v27 != 1 )
          goto LABEL_23;
        goto LABEL_39;
      }
      v18 = CmpTransMgrRollback(Key, &v31);
      v19 = 8LL;
    }
    v12 = v18;
    if ( v18 >= 0 || TransactionNotification == 4 )
    {
      v20 = Key;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v18 < 0 )
      {
        v28 = 0;
      }
      else
      {
        v21 = CmLogTmRmAction(RMContext, Key, v19);
        v20 = Key;
        v12 = 0;
        if ( TransactionNotification == 2 )
          v12 = v21;
      }
      v29 = 1;
      if ( TransactionNotification == 4 )
        goto LABEL_39;
    }
    else
    {
      v20 = Key;
    }
    if ( TransactionNotification != 8 )
      goto LABEL_22;
LABEL_39:
    if ( *((_QWORD *)v20 + 9) )
      Handle = (HANDLE)*((_QWORD *)v20 + 10);
    if ( (*((_DWORD *)v20 + 12) & 0x20) != 0 )
    {
      if ( (int)CmpAccountForLogReservation((__int64)RMContext, v16, 0) >= 0 )
        *((_DWORD *)Key + 12) &= ~0x20u;
      v20 = Key;
    }
    if ( v12 >= 0 || TransactionNotification != 4 )
    {
      v12 = CmpTransMgrRollback(v20, &v31);
      CmpCleanupTransactionState((__int64)RMContext, Key, TransactionNotification, v28);
    }
LABEL_23:
    TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
    if ( v15 )
      UNLOCK_HIVE_LOAD();
    if ( v29 != 1 )
      goto LABEL_26;
    switch ( TransactionNotification )
    {
      case 2u:
        if ( v27 == 1 )
          OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
        else
          OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
        break;
      case 4u:
        TmCommitComplete(EnlistmentObject, 0LL);
        goto LABEL_26;
      case 8u:
        OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_26:
        if ( Handle )
          ZwClose(Handle);
        switch ( TransactionNotification )
        {
          case 2u:
            v8 = 31;
            break;
          case 4u:
            v8 = 30;
            break;
          case 8u:
            v8 = 32;
            break;
        }
        if ( !ExpPlatformBinaryLock.Timer.Header.WaitListHead.Blink || !v8 )
          goto LABEL_33;
        if ( UnicodeString.Buffer )
        {
          p_UnicodeString = &UnicodeString;
          LOBYTE(p_UnicodeString) = v8;
          guard_dispatch_icall_no_overrides((__int64)p_UnicodeString, (__int64)v37);
LABEL_33:
          if ( UnicodeString.Buffer )
            RtlFreeAnsiString(&UnicodeString);
          goto LABEL_35;
        }
        goto LABEL_35;
    }
    v12 = OnlyEnlistment;
    goto LABEL_26;
  }
  if ( v15 )
    UNLOCK_HIVE_LOAD();
  TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return 3221225485LL;
}
