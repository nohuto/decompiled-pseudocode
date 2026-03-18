/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x1402B4158
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1402B2370 (SepCanTokenMatchAllPackageSid.c)
 *     SepAcquireOrderedReadLocks @ 0x1402B2790 (SepAcquireOrderedReadLocks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402B39B0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402B3B20 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x140205314 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205688 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x140205F8C (ExpWaitForResource.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceShared @ 0x14043B310 (ExpTryAcquireResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x14043B8E0 (ExpGetThreadResourceHint.c)
 *     ExpFindEmptyEntry @ 0x14043BA34 (ExpFindEmptyEntry.c)
 *     ExpExpandResourceOwnerTable @ 0x14043BA94 (ExpExpandResourceOwnerTable.c)
 *     RtlInsertHeadCircularList @ 0x140447AE0 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceWait @ 0x140495E24 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140495FA8 (PerfLogExecutiveResourceAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  __int64 v4; // rcx
  unsigned __int64 EmptyEntry; // r8
  LegacyAutoBoost *CurrentThread; // rsi
  int v7; // r15d
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rdx
  char v10; // al
  char v11; // bl
  unsigned int ThreadResourceHint; // eax
  int v14; // r9d
  LegacyAutoBoost *v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // r8
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-40h] BYREF
  LegacyAutoBoost *v34; // [rsp+50h] [rbp-30h]
  __int16 v35; // [rsp+58h] [rbp-28h]
  char v36; // [rsp+5Ah] [rbp-26h]
  int v37; // [rsp+5Ch] [rbp-24h]
  _QWORD v38[4]; // [rsp+60h] [rbp-20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset_0(v33, 0, 0x40uLL);
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v9 = _InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&LockHandle);
    if ( v9 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v9, EmptyEntry);
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
        v20 = *(_DWORD *)(a1 + 56) & 7 | ((*(_DWORD *)(a1 + 56) & 0xFFFFFFF8) + 8);
        *(_DWORD *)(a1 + 56) = v20;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90D0u);
        __incgsdword(0x90A4u);
        if ( !v7 )
          return 1;
        v21 = 65585LL;
        goto LABEL_61;
      }
      if ( *(char *)(a1 + 26) < 0 )
      {
        EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
        v22 = EmptyEntry == 0;
        goto LABEL_31;
      }
      ThreadResourceHint = ExpGetThreadResourceHint(
                             CurrentThread,
                             v9,
                             EmptyEntry,
                             *(unsigned int *)(a1 + 76),
                             LockHandle.LockQueue.Next,
                             LockHandle.LockQueue.Lock,
                             *(_QWORD *)&LockHandle.OldIrql);
      EmptyEntry = a1 + 48;
      v15 = *(LegacyAutoBoost **)(a1 + 48);
      if ( v15 != CurrentThread )
      {
        v9 = 0LL;
        if ( !v15 )
        {
          v9 = a1 + 48;
          if ( v14 )
            v9 = 0LL;
        }
        v16 = *(_QWORD *)(a1 + 48) != 0LL;
        if ( !ThreadResourceHint )
          break;
        v17 = *(_QWORD *)(a1 + 16);
        if ( !v17 )
          break;
        if ( ThreadResourceHint >= *(_DWORD *)(v17 + 8) )
          break;
        EmptyEntry = v17 + 16LL * ThreadResourceHint;
        if ( *(LegacyAutoBoost **)EmptyEntry != CurrentThread )
          break;
      }
LABEL_30:
      v22 = EmptyEntry == 0;
LABEL_31:
      if ( !v22 )
        goto LABEL_32;
    }
    EmptyEntry = *(_QWORD *)(a1 + 16);
    v18 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
    if ( !EmptyEntry )
    {
      v19 = 0LL;
      goto LABEL_24;
    }
    v19 = EmptyEntry + 16LL * *(unsigned int *)(EmptyEntry + 8);
    EmptyEntry += 16LL;
    if ( v16 < v18 )
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
          if ( ++v16 == v18 )
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
      while ( EmptyEntry != v19 );
    }
LABEL_24:
    if ( v9 )
      break;
    if ( EmptyEntry < v19 )
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
    v20 = *(_DWORD *)(EmptyEntry + 8) & 7 | ((*(_DWORD *)(EmptyEntry + 8) & 0xFFFFFFF8) + 8);
    *(_DWORD *)(EmptyEntry + 8) = v20;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90D8u);
    __incgsdword(0x90A4u);
    if ( !v7 )
      return 1;
    v21 = 65617LL;
LABEL_61:
    v24 = v20 >> 3;
LABEL_37:
    PerfLogExecutiveResourceAcquire(v21, a1, v24, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceShared(a1) )
  {
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = *(_DWORD *)(v23 + 8) & 7 | 8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_35;
  }
  if ( a2 )
  {
    *(_QWORD *)v23 = CurrentThread;
    *(_DWORD *)(v23 + 8) = *(_DWORD *)(v23 + 8) & 7 | 8;
    v25 = *(_DWORD *)(a1 + 72) + 1;
    v34 = CurrentThread;
    *(_DWORD *)(a1 + 72) = v25;
    v38[1] = v38;
    v38[0] = v38;
    v35 = 1;
    v36 = 6;
    v37 = 0;
    v38[2] = 0LL;
    RtlInsertHeadCircularList(a1 + 32, v33);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90DCu);
    if ( v7 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1, v26, v27);
    ExpWaitForResource((_DWORD *)a1, (__int64)v33, 0x10244u);
    v31 = ExpGetThreadResourceHint(
            CurrentThread,
            v28,
            v29,
            v30,
            LockHandle.LockQueue.Next,
            LockHandle.LockQueue.Lock,
            *(_QWORD *)&LockHandle.OldIrql);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v31);
LABEL_35:
    __incgsdword(0x90D4u);
    __incgsdword(0x90A4u);
    if ( v7 )
    {
      v24 = 1LL;
      v21 = 65601LL;
      goto LABEL_37;
    }
    return 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x90E0u);
  return 0;
}
