/*
 * XREFs of CmpTransInitializeTransaction @ 0x1408AC920
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmTmCreateEnlistment @ 0x1408ACAB8 (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x1408ACB38 (CmpStartRMLogs.c)
 *     CmpAccountForLogReservation @ 0x1408ACE58 (CmpAccountForLogReservation.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     CmpTransDereferenceTransaction @ 0x1408ECC08 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpTransInitializeTransaction(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  __int64 v4; // rcx
  int v5; // ebp
  _QWORD *v6; // r15
  int started; // edi
  void *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v15 = 0LL;
  v2 = (_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 64;
  if ( !v4 )
    goto LABEL_11;
  v6 = v2;
  if ( *(struct _LIST_ENTRY **)(a1 + 64) == WheapPfaLock.Timer.Header.WaitListHead.Flink )
  {
LABEL_6:
    v1 = *v2;
    started = CmpTransReferenceTransaction(*v2);
    if ( started < 0 )
      return (unsigned int)started;
    started = CmpStartRMLogs(*(_QWORD *)(a1 + 64));
    if ( started < 0
      || (started = CmTmCreateEnlistment(
                      a1 + 80,
                      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                      *v6 & 0xFFFFFFFFFFFFFFFEuLL,
                      a1),
          started < 0) )
    {
LABEL_17:
      if ( v1 )
        CmpTransDereferenceTransaction(v1);
      return (unsigned int)started;
    }
    v8 = *(void **)(a1 + 80);
    Object = 0LL;
    ObReferenceObjectByHandle(v8, 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v9) = 1;
    v10 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = Object;
    if ( (int)CmpAccountForLogReservation(v10, v11, v9) >= 0 )
      v5 = 96;
LABEL_11:
    LOCK_TRANSACTION_LIST();
    if ( (*(_DWORD *)(a1 + 48) & 6) == 0 )
    {
      *(_DWORD *)(a1 + 48) = v5;
      --*((_DWORD *)&WheapPfaLock.SwapListEntry + 2);
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      _InterlockedOr(v13, 0);
      if ( CmpTransactionInitializingEvent )
        ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
      return 0;
    }
    started = -1072103422;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    goto LABEL_17;
  }
  if ( !WheapPfaLock.Timer.Header.WaitListHead.Flink )
    return (unsigned int)-1072103419;
  started = CmpTransSearchAddTrans(
              v4,
              0,
              WheapPfaLock.Timer.Header.WaitListHead.Flink,
              *(_DWORD *)&stru_140E098B8.WaitBlockFill11[120],
              1,
              (__int64)&v15);
  if ( started >= 0 )
  {
    v6 = (_QWORD *)(a1 + 56);
    goto LABEL_6;
  }
  return (unsigned int)started;
}
