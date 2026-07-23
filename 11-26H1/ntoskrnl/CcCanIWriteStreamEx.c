/*
 * XREFs of CcCanIWriteStreamEx @ 0x140385C00
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     CcCanIWrite @ 0x1403854B0 (CcCanIWrite.c)
 *     CcShouldLazyWriteCacheMap @ 0x14038B260 (CcShouldLazyWriteCacheMap.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmEnoughMemoryForWrite @ 0x140385F80 (MmEnoughMemoryForWrite.c)
 *     CcIsFileObjectDirectMapped @ 0x140386384 (CcIsFileObjectDirectMapped.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall CcCanIWriteStreamEx(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        _BYTE *a7)
{
  char v7; // bl
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  unsigned int v13; // ebp
  int v14; // r12d
  unsigned int v15; // r12d
  volatile __int64 *v16; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v18; // rdx
  _QWORD *v19; // r9
  unsigned __int128 v20; // rax
  unsigned __int64 v21; // rsi
  bool v22; // di
  __int64 v23; // rsi
  bool v25; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  _QWORD *v28; // [rsp+20h] [rbp-68h]
  _QWORD *v29; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  char v32; // [rsp+A8h] [rbp+20h]
  unsigned int v33; // [rsp+B0h] [rbp+28h]

  v7 = 0;
  v32 = 0;
  v9 = a1;
  v33 = (a5 >> 12) + ((a5 & 0xFFF) != 0);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v10 = (_QWORD *)(a1 + 1080);
  v11 = (_QWORD *)(a2 + 1016);
  if ( !a2 )
    v11 = v10;
  v28 = v11;
  v12 = (_QWORD *)(a2 + 992);
  if ( !a2 )
    v12 = (_QWORD *)(v9 + 1056);
  v29 = v12;
  LockHandle.LockQueue = 0LL;
  if ( a7 )
    *a7 = 0;
  v13 = 0x1000000;
  v14 = 0;
  if ( a4 <= 0x1000000 )
    v13 = a4;
  LOBYTE(v14) = (v13 & 0xFFF) != 0;
  v15 = (v13 >> 12) + v14;
  if ( (a6 & 8) == 0 )
  {
    v16 = (volatile __int64 *)(v9 + 768);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 768);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v18 = _InterlockedExchange64(v16, (__int64)&LockHandle);
      if ( v18 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v18, v9);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v16);
    }
  }
  v19 = v29;
  *((_QWORD *)&v20 + 1) = v28;
  v21 = v15 + (unsigned __int64)v33;
  if ( v21 + *v29 >= *v28 )
  {
    v22 = 1;
    if ( a3 )
    {
      LOBYTE(v20) = CcIsFileObjectDirectMapped(a3, v28);
      *((_QWORD *)&v20 + 1) = v28;
      v19 = v29;
      v32 = v20;
      v22 = (_BYTE)v20 == 0;
    }
  }
  else
  {
    v22 = 0;
  }
  if ( a7 )
  {
    if ( CcAzure_SoftThrottleLargeWriteAtPct )
    {
      if ( CcAzure_LargeWriteSize )
      {
        if ( v13 )
        {
          if ( v13 >= CcAzure_LargeWriteSize )
          {
            v27 = **((_QWORD **)&v20 + 1) * (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct;
            v20 = v27 * (unsigned __int128)0x47AE147AE147AE15uLL;
            v9 = v27 / 0x64;
            if ( v21 + *v19 >= v9 )
              *a7 = 1;
          }
        }
      }
    }
  }
  if ( (a6 & 8) == 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  v23 = 0LL;
  if ( v32 || !a3 )
    goto LABEL_57;
  if ( (a6 & 0xA) == 0 && (*(_BYTE *)(*(_QWORD *)(a3 + 24) + 4LL) & 4) == 0 && !v22 )
  {
LABEL_28:
    v7 = MmEnoughMemoryForWrite(0LL, *((_QWORD *)&v20 + 1), v9);
    return v7 != 0;
  }
  if ( (a6 & 8) == 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v23 = *(_QWORD *)(a3 + 40);
  v25 = 0;
  if ( v23 )
  {
    v26 = *(_QWORD *)(v23 + 8);
    if ( v26 )
    {
      *((_QWORD *)&v20 + 1) = *(unsigned int *)(v26 + 272);
      if ( DWORD2(v20) )
      {
        LODWORD(v20) = *(_DWORD *)(v26 + 112);
        if ( (_DWORD)v20 )
        {
          v9 = 1LL;
          v25 = v15 + (unsigned int)v20 > DWORD2(v20);
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)(v26 + 512) + 40LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages
        && (a6 & 4) == 0 )
      {
        v22 = 0;
      }
    }
    v7 = MmEnoughMemoryForWrite(*(_QWORD *)(a3 + 40), *((_QWORD *)&v20 + 1), v9);
  }
  if ( (a6 & 8) == 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v25 )
  {
LABEL_57:
    if ( !v22 )
    {
      if ( v23 )
        return v7 != 0;
      goto LABEL_28;
    }
  }
  return 0;
}
