/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x14043AF30
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14043AEF0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     DifExAcquireSharedWaitForExclusiveWrapper @ 0x14064F3B0 (DifExAcquireSharedWaitForExclusiveWrapper.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x140205314 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205688 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x140205F8C (ExpWaitForResource.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceShared @ 0x14043B310 (ExpTryAcquireResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x14043B8E0 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x14043B900 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x14043BA34 (ExpFindEmptyEntry.c)
 *     RtlInsertHeadCircularList @ 0x140447AE0 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceWait @ 0x140495E24 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140495FA8 (PerfLogExecutiveResourceAcquire.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  LegacyAutoBoost *CurrentThread; // r14
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rax
  int v11; // ebx
  __int64 EmptyEntry; // rax
  __int64 v13; // rbx
  ULONG v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  BOOLEAN v17; // bl
  unsigned int v18; // eax
  ULONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int ThreadResourceHint; // eax
  BOOLEAN v27; // al
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-39h]
  __int64 v30; // [rsp+28h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v32[16]; // [rsp+50h] [rbp-9h] BYREF
  LegacyAutoBoost *v33; // [rsp+60h] [rbp+7h]
  __int16 v34; // [rsp+68h] [rbp+Fh]
  char v35; // [rsp+6Ah] [rbp+11h]
  int v36; // [rsp+6Ch] [rbp+13h]
  _QWORD v37[4]; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v38; // [rsp+C8h] [rbp+6Fh]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v32, 0, 0x40uLL);
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (LegacyAutoBoost *)KeGetCurrentThread();
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x90FCu);
  KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
  while ( Resource->ActiveEntries )
  {
    if ( (Resource->ReservedLowFlags & 0x80u) != 0
      && (LegacyAutoBoost *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v14 = Resource->OwnerEntry.TableSize & 7 | ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
      Resource->OwnerEntry.TableSize = v14;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x9100u);
      __incgsdword(0x90A4u);
      if ( v5 )
      {
        v15 = 65585LL;
        v16 = v14 >> 3;
        goto LABEL_18;
      }
      return 1;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0 || Resource->NumberOfExclusiveWaiters )
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x9110u);
        return 0;
      }
      if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
      {
        v13 = 0LL;
LABEL_28:
        v19 = Resource->NumberOfSharedWaiters + 1;
        v33 = CurrentThread;
        Resource->NumberOfSharedWaiters = v19;
        v34 = 1;
        v37[1] = v37;
        v37[0] = v37;
        v35 = 6;
        v36 = 0;
        v37[2] = 0LL;
        RtlInsertHeadCircularList(&Resource->SharedWaiters, v32);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x910Cu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost((__int64)Resource, v20, v21);
        ExpWaitForResource(Resource, (__int64)v32, 0x10244u);
        if ( !v13 )
        {
          KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
          do
            v25 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&LockHandle, 1, 1, 0);
          while ( !v25 );
          *(_QWORD *)v25 = CurrentThread;
          *(_DWORD *)(v25 + 8) = *(_DWORD *)(v25 + 8) & 7 | 8;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        ThreadResourceHint = ExpGetThreadResourceHint(
                               CurrentThread,
                               v22,
                               v23,
                               v24,
                               BugCheckParameter4,
                               v30,
                               LockHandle.LockQueue.Next);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, ThreadResourceHint);
        __incgsdword(0x9104u);
        __incgsdword(0x90A4u);
        if ( !v5 )
          return 1;
        v16 = 1LL;
        v15 = 65601LL;
LABEL_18:
        PerfLogExecutiveResourceAcquire(v15, Resource, v16, Resource->ContentionCount);
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry(Resource, &LockHandle);
      v13 = EmptyEntry;
      if ( EmptyEntry )
      {
        *(_QWORD *)EmptyEntry = CurrentThread;
        *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 7 | 8;
        goto LABEL_28;
      }
    }
    else
    {
      v9 = ExpGetThreadResourceHint(CurrentThread, v6, v7, v8, BugCheckParameter4, v30, LockHandle.LockQueue.Next);
      v10 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&LockHandle, 1, 1, v9);
      if ( v10 )
      {
        if ( *(_QWORD *)v10 )
        {
          v38 = *(_DWORD *)(v10 + 8) & 7 | ((*(_DWORD *)(v10 + 8) & 0xFFFFFFF8) + 8);
          *(_DWORD *)(v10 + 8) = v38;
          v11 = v38 >> 3;
        }
        else
        {
          *(_QWORD *)v10 = CurrentThread;
          v11 = 1;
          *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 8) & 7 | 8;
          ExpTryAcquireResourceShared(Resource);
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v18 = 37128;
        if ( v11 == 1 )
          v18 = 37124;
        __incgsdword(v18);
        __incgsdword(0x9108u);
        if ( !v5 )
          return 1;
        v15 = 65617LL;
        v16 = 1LL;
        if ( v11 == 1 )
          v15 = 65601LL;
        goto LABEL_18;
      }
    }
  }
  v27 = ExpTryAcquireResourceShared(Resource);
  Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
  v17 = v27;
  Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | 8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x9104u);
  __incgsdword(0x90A4u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
  return v17;
}
