/*
 * XREFs of CmpTransInitializeTransaction @ 0x1408B2D64
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     CmTmCreateEnlistment @ 0x1408B2EFC (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x1408B2F7C (CmpStartRMLogs.c)
 *     CmpAccountForLogReservation @ 0x1408B3298 (CmpAccountForLogReservation.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     CmpTransDereferenceTransaction @ 0x1408F31C8 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x1408F48C4 (CmpTransReferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
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
  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
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
      --HIDWORD(WheapPfaLock.Timer.Header.WaitListHead.Blink);
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
  if ( !*(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
    return (unsigned int)-1072103419;
  started = CmpTransSearchAddTrans(
              v4,
              0,
              *(_DWORD *)&WheapPfaLock.WaitBlockFill11[16],
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
