/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x140303000
 * Callers:
 *     DifExReleaseResourceAndLeaveCriticalRegionWrapper @ 0x140658130 (DifExReleaseResourceAndLeaveCriticalRegionWrapper.c)
 *     AccelpReleaseLockExclusive @ 0x140851120 (AccelpReleaseLockExclusive.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140300FE0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PerfLogExecutiveResourceRelease @ 0x1403047A0 (PerfLogExecutiveResourceRelease.c)
 *     ExpFreeOwnerEntry @ 0x140304B10 (ExpFreeOwnerEntry.c)
 *     RtlRemoveEntryCircularList @ 0x140440580 (RtlRemoveEntryCircularList.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int64 v1; // r8
  UCHAR ReservedLowFlags; // cl
  ULONG_PTR v4; // rdi
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  struct _KTHREAD *v7; // r8
  bool v8; // r12
  ULONG v9; // edi
  ULONG ContentionCount; // r14d
  ERESOURCE_THREAD v11; // rdi
  UCHAR v12; // dl
  ULONG NumberOfSharedWaiters; // ecx
  unsigned int WaiterPriority; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // esi
  bool v18; // zf
  bool v19; // r13
  ULONG v20; // ecx
  OWNER_ENTRY *p_OwnerEntry; // rdx
  unsigned __int64 v22; // r8
  POWNER_ENTRY v23; // rdx
  POWNER_ENTRY OwnerTable; // rdx
  unsigned __int64 v25; // r9
  OWNER_ENTRY *v26; // rcx
  unsigned __int8 v27; // r14
  ULONG *i; // rsi
  char v29; // cl
  __int64 v30; // rdx
  volatile signed __int32 *SharedWaiters; // rax
  ERESOURCE_THREAD v32; // rdi
  UCHAR v33; // r10
  ULONG ActiveEntries; // r9d
  ULONG v35; // ecx
  volatile signed __int32 *v36; // rax
  unsigned int v37; // esi
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  PVOID ExclusiveWaiters; // rdx
  __int64 v43; // rdx
  char v44; // al
  char v45; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+90h] [rbp+20h]
  volatile signed __int32 *v48; // [rsp+98h] [rbp+28h] BYREF

  ReservedLowFlags = Resource->ReservedLowFlags;
  if ( (ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  v4 = (ULONG_PTR)KeGetCurrentThread();
  if ( (Resource->ReservedLowFlags & 1) == 0 )
  {
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    v5 = KeGetCurrentIrql();
    if ( v5 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
    LockHandle.OldIrql = v5;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v6 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&LockHandle);
      if ( v6 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v6, v1);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&Resource->SpinLock);
    }
    v7 = KeGetCurrentThread();
    if ( ((Resource->ReservedLowFlags & 1) != 0 || LODWORD(ExSaPageGroupDescriptorArrayLock.AutoBoostThreadState))
      && (v4 & 3) != 3
      && (struct _KTHREAD *)v4 != v7 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v7, v4, 0LL);
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 )
    {
      v8 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
      if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource) && Resource->OwnerEntry.OwnerThread != v4 )
        KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 1uLL);
      v9 = (Resource->OwnerEntry.TableSize >> 3) - 1;
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | (8 * v9);
      if ( v9 )
      {
        ContentionCount = Resource->ContentionCount;
        v17 = 65586;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        ExpFreeOwnerEntry(&Resource->OwnerEntry);
        ContentionCount = Resource->ContentionCount;
        v11 = 0LL;
        v12 = Resource->ReservedLowFlags;
        NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
        if ( NumberOfSharedWaiters )
        {
          SharedWaiters = (volatile signed __int32 *)Resource->SharedWaiters;
          Resource->SharedWaiters = 0LL;
          Resource->NumberOfSharedWaiters = 0;
          Resource->ReservedLowFlags = v12 & 0x7F;
          v48 = SharedWaiters;
          Resource->ActiveEntries = Resource->ActiveEntries - 1 + NumberOfSharedWaiters;
        }
        else
        {
          v48 = 0LL;
          if ( Resource->NumberOfExclusiveWaiters )
          {
            if ( Resource->ExclusiveWaiters )
            {
              RtlRemoveEntryCircularList(&Resource->ExclusiveWaiters);
              v11 = *(_QWORD *)(v30 + 16);
              RtlInsertHeadCircularList(&v48, v30);
            }
            --Resource->NumberOfExclusiveWaiters;
            Resource->ActiveEntries = Resource->ActiveEntries;
          }
          else
          {
            Resource->ReservedLowFlags = v12 & 0x7F;
            Resource->ActiveEntries = 0;
            Resource->ActiveCount = 0;
          }
        }
        if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
          Resource->ReservedLowFlags &= 0xF9u;
        WaiterPriority = Resource->WaiterPriority;
        if ( v11 )
        {
          Resource->OwnerEntry.OwnerThread = v11;
          Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | 8;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ExpCommitWakeResourceShared(v15, &v48, v16, WaiterPriority, v11 != 0);
        v17 = 65570;
        v9 = 0;
      }
      __incgsdword(0x90ACu);
      v18 = !v8;
      goto LABEL_28;
    }
    v19 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
    v20 = 0;
    if ( (v4 & 3) == 0 )
      v20 = *(unsigned __int8 *)(v4 + 1120);
    p_OwnerEntry = &Resource->OwnerEntry;
    if ( Resource->OwnerEntry.OwnerThread != v4 )
    {
      v22 = Resource->OwnerEntry.OwnerThread != 0;
      if ( !v20
        || (v23 = Resource->OwnerTable) == 0LL
        || v20 >= v23->TableSize
        || (p_OwnerEntry = &v23[v20], p_OwnerEntry->OwnerThread != v4) )
      {
        OwnerTable = Resource->OwnerTable;
        v25 = Resource->ActiveEntries + (unsigned __int64)Resource->NumberOfSharedWaiters;
        if ( !OwnerTable || (v26 = &OwnerTable[OwnerTable->TableSize], p_OwnerEntry = OwnerTable + 1, v22 >= v25) )
LABEL_40:
          KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, (ULONG_PTR)Resource->OwnerTable, 2uLL);
        while ( p_OwnerEntry->OwnerThread != v4 )
        {
          if ( !p_OwnerEntry->OwnerThread || (++v22, v22 != v25) )
          {
            if ( ++p_OwnerEntry != v26 )
              continue;
          }
          goto LABEL_40;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)p_OwnerEntry
                                                                    - LODWORD(Resource->OwnerTable)) >> 4;
      }
    }
    if ( !p_OwnerEntry )
      goto LABEL_40;
    v47 = p_OwnerEntry->TableSize & 7 | (8 * (p_OwnerEntry->TableSize >> 3) - 8);
    v9 = v47 >> 3;
    p_OwnerEntry->TableSize = v47;
    if ( v47 >> 3 )
    {
      ContentionCount = Resource->ContentionCount;
      v17 = 65618;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90B0u);
      v18 = !v19;
LABEL_28:
      if ( !v18 )
        PerfLogExecutiveResourceRelease(v17, Resource, v9, ContentionCount);
      goto LABEL_30;
    }
    ExpFreeOwnerEntry(p_OwnerEntry);
    ContentionCount = Resource->ContentionCount;
    v32 = 0LL;
    v33 = Resource->ReservedLowFlags;
    ActiveEntries = Resource->ActiveEntries;
    if ( ActiveEntries > 1 )
      goto LABEL_70;
    if ( Resource->NumberOfExclusiveWaiters )
    {
      ExclusiveWaiters = Resource->ExclusiveWaiters;
      v48 = 0LL;
      if ( ExclusiveWaiters )
      {
        RtlRemoveEntryCircularList(&Resource->ExclusiveWaiters);
        v32 = *(_QWORD *)(v43 + 16);
        RtlInsertHeadCircularList(&v48, v43);
      }
      v35 = 1;
      --Resource->NumberOfExclusiveWaiters;
      Resource->ReservedLowFlags = v33 | 0x80;
      goto LABEL_72;
    }
    v35 = Resource->NumberOfSharedWaiters;
    if ( v35 )
    {
      v36 = (volatile signed __int32 *)Resource->SharedWaiters;
      Resource->SharedWaiters = 0LL;
      Resource->NumberOfSharedWaiters = 0;
    }
    else
    {
LABEL_70:
      v36 = 0LL;
      v35 = 0;
    }
    v48 = v36;
LABEL_72:
    Resource->ActiveEntries = v35 + ActiveEntries - 1;
    if ( !(v35 + ActiveEntries - 1) )
      Resource->ActiveCount = 0;
    if ( !Resource->NumberOfExclusiveWaiters && !Resource->NumberOfSharedWaiters )
      Resource->ReservedLowFlags &= 0xF9u;
    v37 = Resource->WaiterPriority;
    if ( v32 )
    {
      Resource->OwnerEntry.OwnerThread = v32;
      Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | 8;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExpCommitWakeResourceShared(v38, &v48, v39, v37, v32 != 0);
    __incgsdword(0x90B0u);
    v17 = 65602;
    v18 = !v19;
    v9 = 0;
    goto LABEL_28;
  }
  v27 = KeGetCurrentIrql();
  if ( v27 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v27, 2);
  if ( ((__int64)Resource->SystemResourcesList.Flink & 1) == 0
    || (i = &Resource->ActiveEntries, Resource->Reserved2 != (PVOID)v4) )
  {
    for ( i = *(ULONG **)(v4 + 1720); i != (ULONG *)(v4 + 1720); i = *(ULONG **)i )
    {
      v29 = *((_BYTE *)i + 37);
      if ( (v29 & 2) == 0 && *((PERESOURCE *)i + 3) == Resource && (v29 & 1) != 0 )
        goto LABEL_49;
    }
LABEL_50:
    KeBugCheckEx(0xE3u, (ULONG_PTR)Resource, v4, 0LL, 0LL);
  }
LABEL_49:
  if ( !i )
    goto LABEL_50;
  v44 = *((_BYTE *)i + 37);
  if ( (v44 & 2) != 0 )
  {
    v45 = 0;
  }
  else
  {
    v45 = 1;
    *((_BYTE *)i + 37) = v44 & 0xFE;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
  __writecr8(v27);
  ExReleaseFastResource((struct _KTHREAD *)Resource, (ULONG_PTR)i);
  if ( v45 )
    ExFreePoolWithTag(i, 0);
LABEL_30:
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
