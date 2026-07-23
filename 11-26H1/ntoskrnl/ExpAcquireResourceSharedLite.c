/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x1402FEE28
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1402FD040 (SepCanTokenMatchAllPackageSid.c)
 *     SepAcquireOrderedReadLocks @ 0x1402FD460 (SepAcquireOrderedReadLocks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402FE680 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402FE7F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205768 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x14020606C (ExpWaitForResource.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceShared @ 0x14042DBC0 (ExpTryAcquireResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x14042E190 (ExpGetThreadResourceHint.c)
 *     ExpFindEmptyEntry @ 0x14042E2E4 (ExpFindEmptyEntry.c)
 *     ExpExpandResourceOwnerTable @ 0x14042E344 (ExpExpandResourceOwnerTable.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceWait @ 0x14048F974 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14048FAF8 (PerfLogExecutiveResourceAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  LegacyAutoBoost *CurrentThread; // rsi
  int v7; // r15d
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rdx
  char v10; // al
  char v11; // bl
  unsigned int ThreadResourceHint; // eax
  int v14; // r9d
  unsigned __int64 EmptyEntry; // r8
  LegacyAutoBoost *v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // r8
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v32[16]; // [rsp+40h] [rbp-40h] BYREF
  LegacyAutoBoost *v33; // [rsp+50h] [rbp-30h]
  __int16 v34; // [rsp+58h] [rbp-28h]
  char v35; // [rsp+5Ah] [rbp-26h]
  int v36; // [rsp+5Ch] [rbp-24h]
  _QWORD v37[4]; // [rsp+60h] [rbp-20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset_0(v32, 0, 0x40uLL);
  CurrentThread = (LegacyAutoBoost *)KeGetCurrentThread();
  v7 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x90CCu);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&LockHandle);
    if ( v9 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v9, v5);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 64) )
      {
        v10 = ExpTryAcquireResourceShared(a1);
        *(_QWORD *)(a1 + 48) = CurrentThread;
        v11 = v10;
        *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 7 | 8;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90D4u);
        __incgsdword(0x90A4u);
        if ( v7 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v11;
      }
      if ( *(char *)(a1 + 26) < 0 && *(LegacyAutoBoost **)(a1 + 48) == CurrentThread )
      {
        v21 = *(_DWORD *)(a1 + 56) & 7 | ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
        *(_DWORD *)(a1 + 56) = v21;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90D0u);
        __incgsdword(0x90A4u);
        if ( !v7 )
          return 1;
        v22 = 65585LL;
        goto LABEL_61;
      }
      if ( *(char *)(a1 + 26) < 0 )
      {
        EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
        v23 = EmptyEntry == 0;
        goto LABEL_31;
      }
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v9);
      EmptyEntry = a1 + 48;
      v16 = *(LegacyAutoBoost **)(a1 + 48);
      if ( v16 != CurrentThread )
      {
        v9 = 0LL;
        if ( !v16 )
        {
          v9 = a1 + 48;
          if ( v14 )
            v9 = 0LL;
        }
        v17 = *(_QWORD *)(a1 + 48) != 0LL;
        if ( !ThreadResourceHint )
          break;
        v18 = *(_QWORD *)(a1 + 16);
        if ( !v18 )
          break;
        if ( ThreadResourceHint >= *(_DWORD *)(v18 + 8) )
          break;
        EmptyEntry = v18 + 16LL * ThreadResourceHint;
        if ( *(LegacyAutoBoost **)EmptyEntry != CurrentThread )
          break;
      }
LABEL_30:
      v23 = EmptyEntry == 0;
LABEL_31:
      if ( !v23 )
        goto LABEL_32;
    }
    EmptyEntry = *(_QWORD *)(a1 + 16);
    v19 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
    if ( !EmptyEntry )
    {
      v20 = 0LL;
      goto LABEL_24;
    }
    v20 = EmptyEntry + 16LL * *(unsigned int *)(EmptyEntry + 8);
    EmptyEntry += 16LL;
    if ( v17 < v19 )
    {
      do
      {
        if ( *(LegacyAutoBoost **)EmptyEntry == CurrentThread )
        {
          KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(EmptyEntry - *(_DWORD *)(a1 + 16)) >> 4;
          goto LABEL_30;
        }
        if ( *(_QWORD *)EmptyEntry )
        {
          if ( ++v17 == v19 )
          {
            EmptyEntry += 16LL;
            break;
          }
        }
        else if ( !v9 )
        {
          v9 = EmptyEntry;
        }
        EmptyEntry += 16LL;
      }
      while ( EmptyEntry != v20 );
    }
LABEL_24:
    if ( v9 )
      break;
    if ( EmptyEntry < v20 )
    {
      v9 = EmptyEntry;
      if ( EmptyEntry )
        break;
    }
    ExpExpandResourceOwnerTable(a1, &LockHandle);
  }
  EmptyEntry = v9;
  KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v9 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_32:
  if ( *(LegacyAutoBoost **)EmptyEntry == CurrentThread )
  {
    v21 = *(_DWORD *)(EmptyEntry + 8) & 7 | ((*(_DWORD *)(EmptyEntry + 8) & 0xFFFFFFF8) + 8);
    *(_DWORD *)(EmptyEntry + 8) = v21;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90D8u);
    __incgsdword(0x90A4u);
    if ( !v7 )
      return 1;
    v22 = 65617LL;
LABEL_61:
    v25 = v21 >> 3;
LABEL_37:
    PerfLogExecutiveResourceAcquire(v22, a1, v25, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceShared(a1) )
  {
    *(_QWORD *)v24 = CurrentThread;
    *(_DWORD *)(v24 + 8) = *(_DWORD *)(v24 + 8) & 7 | 8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_35;
  }
  if ( a2 )
  {
    *(_QWORD *)v24 = CurrentThread;
    *(_DWORD *)(v24 + 8) = *(_DWORD *)(v24 + 8) & 7 | 8;
    v26 = *(_DWORD *)(a1 + 72) + 1;
    v33 = CurrentThread;
    *(_DWORD *)(a1 + 72) = v26;
    v37[1] = v37;
    v37[0] = v37;
    v34 = 1;
    v35 = 6;
    v36 = 0;
    v37[2] = 0LL;
    RtlInsertHeadCircularList(a1 + 32, v32);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90DCu);
    if ( v7 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1, v27, v28);
    ExpWaitForResource((_DWORD *)a1, (__int64)v32, 0x10244u);
    v30 = ExpGetThreadResourceHint(CurrentThread, v29);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v30);
LABEL_35:
    __incgsdword(0x90D4u);
    __incgsdword(0x90A4u);
    if ( v7 )
    {
      v25 = 1LL;
      v22 = 65601LL;
      goto LABEL_37;
    }
    return 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x90E0u);
  return 0;
}
