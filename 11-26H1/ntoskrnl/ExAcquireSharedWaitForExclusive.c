/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x14042D7E0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026D554 (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14042D7A0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     DifExAcquireSharedWaitForExclusiveWrapper @ 0x140652F90 (DifExAcquireSharedWaitForExclusiveWrapper.c)
 * Callees:
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140205768 (ExpApplyPrewaitBoost.c)
 *     ExpWaitForResource @ 0x14020606C (ExpWaitForResource.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceShared @ 0x14042DBC0 (ExpTryAcquireResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x14042E190 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x14042E1B0 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x14042E2E4 (ExpFindEmptyEntry.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceWait @ 0x14048F974 (PerfLogExecutiveResourceWait.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14048FAF8 (PerfLogExecutiveResourceAcquire.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  LegacyAutoBoost *CurrentThread; // r14
  int v5; // r15d
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  int v9; // ebx
  __int64 EmptyEntry; // rax
  __int64 v11; // rbx
  ULONG v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  BOOLEAN v15; // bl
  unsigned int v16; // eax
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int ThreadResourceHint; // eax
  BOOLEAN v23; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-9h] BYREF
  LegacyAutoBoost *v27; // [rsp+60h] [rbp+7h]
  __int16 v28; // [rsp+68h] [rbp+Fh]
  char v29; // [rsp+6Ah] [rbp+11h]
  int v30; // [rsp+6Ch] [rbp+13h]
  _QWORD v31[4]; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v32; // [rsp+C8h] [rbp+6Fh]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v26, 0, 0x40uLL);
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
      v12 = Resource->OwnerEntry.TableSize & 7 | ((Resource->OwnerEntry.TableSize & 0xFFFFFFF8) + 8);
      Resource->OwnerEntry.TableSize = v12;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x9100u);
      __incgsdword(0x90A4u);
      if ( v5 )
      {
        v13 = 65585LL;
        v14 = v12 >> 3;
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
        v11 = 0LL;
LABEL_28:
        v17 = Resource->NumberOfSharedWaiters + 1;
        v27 = CurrentThread;
        Resource->NumberOfSharedWaiters = v17;
        v28 = 1;
        v31[1] = v31;
        v31[0] = v31;
        v29 = 6;
        v30 = 0;
        v31[2] = 0LL;
        RtlInsertHeadCircularList(&Resource->SharedWaiters, v26);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x910Cu);
        if ( v5 )
          PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
        ExpApplyPrewaitBoost((__int64)Resource, v18, v19);
        ExpWaitForResource(Resource, (__int64)v26, 0x10244u);
        if ( !v11 )
        {
          KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
          do
            v21 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&LockHandle, 1, 1, 0);
          while ( !v21 );
          *(_QWORD *)v21 = CurrentThread;
          *(_DWORD *)(v21 + 8) = *(_DWORD *)(v21 + 8) & 7 | 8;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v20);
        ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, ThreadResourceHint);
        __incgsdword(0x9104u);
        __incgsdword(0x90A4u);
        if ( !v5 )
          return 1;
        v14 = 1LL;
        v13 = 65601LL;
LABEL_18:
        PerfLogExecutiveResourceAcquire(v13, Resource, v14, Resource->ContentionCount);
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry(Resource, &LockHandle);
      v11 = EmptyEntry;
      if ( EmptyEntry )
      {
        *(_QWORD *)EmptyEntry = CurrentThread;
        *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 7 | 8;
        goto LABEL_28;
      }
    }
    else
    {
      v7 = ExpGetThreadResourceHint(CurrentThread, v6);
      v8 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&LockHandle, 1, 1, v7);
      if ( v8 )
      {
        if ( *(_QWORD *)v8 )
        {
          v32 = *(_DWORD *)(v8 + 8) & 7 | ((*(_DWORD *)(v8 + 8) & 0xFFFFFFF8) + 8);
          *(_DWORD *)(v8 + 8) = v32;
          v9 = v32 >> 3;
        }
        else
        {
          *(_QWORD *)v8 = CurrentThread;
          v9 = 1;
          *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 8) & 7 | 8;
          ExpTryAcquireResourceShared(Resource);
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v16 = 37128;
        if ( v9 == 1 )
          v16 = 37124;
        __incgsdword(v16);
        __incgsdword(0x9108u);
        if ( !v5 )
          return 1;
        v13 = 65617LL;
        v14 = 1LL;
        if ( v9 == 1 )
          v13 = 65601LL;
        goto LABEL_18;
      }
    }
  }
  v23 = ExpTryAcquireResourceShared(Resource);
  Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
  v15 = v23;
  Resource->OwnerEntry.TableSize = Resource->OwnerEntry.TableSize & 7 | 8;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x9104u);
  __incgsdword(0x90A4u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
  return v15;
}
