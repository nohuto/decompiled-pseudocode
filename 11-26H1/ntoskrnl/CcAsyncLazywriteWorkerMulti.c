/*
 * XREFs of CcAsyncLazywriteWorkerMulti @ 0x1404B4E10
 * Callers:
 *     CcAsyncLazywriteWorkerThread @ 0x1404B4CA0 (CcAsyncLazywriteWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcRepostToSynchronousLazywriter @ 0x140387C9C (CcRepostToSynchronousLazywriter.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcFindNextWBWorkQueueEntry @ 0x1405B61C0 (CcFindNextWBWorkQueueEntry.c)
 *     CcQueueAsyncLazywriteCompletion @ 0x1405B6238 (CcQueueAsyncLazywriteCompletion.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x1405B62C4 (CcWriteBehindAsyncFlushOneRange.c)
 *     CcWriteBehindAsyncPreProcess @ 0x1405B6344 (CcWriteBehindAsyncPreProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall CcAsyncLazywriteWorkerMulti(__int64 a1)
{
  int v1; // r15d
  __int64 v2; // r14
  __int64 v3; // r12
  int v4; // edi
  _DWORD *v5; // rbx
  int CycleTime; // r9d
  unsigned int CurrentRunTime; // eax
  __int64 v8; // rdx
  ULONG v9; // esi
  char v10; // cl
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  const char *v13; // r8
  KSPIN_LOCK *v14; // r14
  __int64 v15; // rcx
  ULONG v16; // r13d
  __int64 NextWBWorkQueueEntry; // rbx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rax
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r8
  char v29; // al
  BOOLEAN Alertable[4]; // [rsp+28h] [rbp-D8h]
  ULONG v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v34; // [rsp+80h] [rbp-80h]
  PVOID Object[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v38[64]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v39[64]; // [rsp+300h] [rbp+200h] BYREF
  struct _KWAIT_BLOCK v40; // [rsp+500h] [rbp+400h] BYREF

  if ( !a1 )
    return;
  v1 = *(_DWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 72);
  v4 = 3;
  v32 = v2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v1 )
    return;
  v5 = *(_DWORD **)(a1 + 64);
  CycleTime = KeGetCurrentThread()[1].CycleTime;
  *(_DWORD *)Alertable = v5[6];
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v34 = v5;
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Starting worker thread(tid-%x, %p)\n",
    CycleTime,
    CurrentRunTime,
    *(_DWORD *)Alertable,
    0,
    KeGetCurrentThread());
  memset_0(v38, 0, sizeof(v38));
  memset_0(v39, 0, sizeof(v39));
  LODWORD(v8) = v5[402];
  Object[1] = v5 + 294;
  Object[0] = (PVOID)(v3 + 328);
  v38[0] = (PVOID)(v3 + 328);
  if ( (unsigned int)v8 >= 0x40 )
    LODWORD(v8) = 63;
  v9 = 1;
  v31 = v8;
  while ( 1 )
  {
    v10 = *(_BYTE *)(v3 + 196);
    if ( v10 )
    {
      if ( v9 == 1 )
        break;
    }
    if ( v9 - 1 < (unsigned int)v8 && *(_QWORD *)(v3 + 312) != v3 + 312 && !v10 )
      break;
    if ( v9 == 1 )
    {
      v11 = KeWaitForMultipleObjects(
              2u,
              Object,
              WaitAny,
              WrFreePage,
              0,
              0,
              (PLARGE_INTEGER)&EmpParseLock.AbCompletedIoQoSBoostCount,
              &WaitBlockArray);
      v12 = v11;
      if ( v11 == 258 )
      {
        v4 = 3;
      }
      else if ( v11 )
      {
        if ( v11 == 1 )
          v4 = 2;
      }
      else
      {
        v4 = 0;
      }
      if ( !v4 )
        goto LABEL_29;
      if ( v4 != 1 )
      {
        if ( v4 != 2 )
          goto LABEL_49;
        goto LABEL_23;
      }
    }
    else
    {
      v12 = KeWaitForMultipleObjects(v9, v38, WaitAny, WrFreePage, 0, 0, 0LL, &v40);
      if ( !v12 )
        break;
      v4 = 1;
    }
    LODWORD(v8) = v31;
    if ( v12 < v9 )
    {
      _mm_lfence();
      v25 = v12;
      v26 = v39[v25];
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 16);
        if ( v27 )
        {
          if ( !CcFlushCachePostProcessOneRange(*(__int64 **)(v26 + 16))
            || (v29 = CcWriteBehindAsyncFlushOneRange(v27), v1 = 0, v8 = v31, !v29) )
          {
            LOBYTE(v28) = 1;
            v38[v12] = 0LL;
            LOBYTE(v8) = 1;
            v39[v12] = 0LL;
            CcQueueAsyncLazywriteCompletion(v26, v8, v28);
            while ( v12 < v9 - 1 )
            {
              v38[v25++] = v38[++v12];
              v38[v25 + 63] = (PVOID)v39[v12];
            }
            v1 = 0;
            --v9;
            LODWORD(v8) = v31;
            v38[v12] = 0LL;
            v39[v12] = 0LL;
            _InterlockedDecrement(*(volatile signed __int32 **)(v3 + 352));
          }
        }
        else
        {
          v1 = 0;
        }
      }
LABEL_7:
      v2 = v32;
    }
  }
  v4 = 0;
LABEL_29:
  v14 = (KSPIN_LOCK *)(v2 + 832);
  KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
  v16 = v9 - 1;
  while ( *(_QWORD *)(v3 + 312) != v3 + 312 && v16 < v31 )
  {
    NextWBWorkQueueEntry = CcFindNextWBWorkQueueEntry(v15, v3, v3 + 312, v16);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !NextWBWorkQueueEntry )
    {
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
      break;
    }
    if ( *(_DWORD *)(NextWBWorkQueueEntry + 128) == 4 )
    {
      KeSetEvent(*(PRKEVENT *)(NextWBWorkQueueEntry + 16), 0, 0);
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWBWorkQueueEntry);
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
      *(_BYTE *)(v3 + 196) = 0;
    }
    else
    {
      v18 = CcWriteBehindAsyncPreProcess(NextWBWorkQueueEntry, NextWBWorkQueueEntry + 56, NextWBWorkQueueEntry + 32);
      if ( v18 == 1 )
      {
        v19 = 0LL;
LABEL_41:
        v22 = 0LL;
        goto LABEL_45;
      }
      if ( v18 == 2 )
      {
        CcRepostToSynchronousLazywriter(NextWBWorkQueueEntry);
        goto LABEL_46;
      }
      v20 = *(_QWORD *)(NextWBWorkQueueEntry + 16);
      v21 = CcFlushCachePreProcess(v20);
      *(_QWORD *)(v20 + 96) = 0LL;
      if ( !v21 )
      {
        LOBYTE(v19) = 1;
        goto LABEL_41;
      }
      if ( (unsigned __int8)CcWriteBehindAsyncFlushOneRange(v20) )
      {
        v23 = v9++;
        ++v16;
        v38[v23] = *(PVOID *)(v20 + 72);
        v24 = *(volatile signed __int32 **)(v3 + 352);
        v39[v23] = NextWBWorkQueueEntry;
        _InterlockedIncrement(v24);
        goto LABEL_46;
      }
      LOBYTE(v19) = 1;
      LOBYTE(v22) = 1;
LABEL_45:
      CcQueueAsyncLazywriteCompletion(NextWBWorkQueueEntry, v22, v19);
LABEL_46:
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v1 = 0;
LABEL_49:
  if ( v4 != 3 )
  {
    LODWORD(v8) = v31;
    goto LABEL_7;
  }
LABEL_23:
  v13 = "ExitEvent";
  if ( v4 != 2 )
    v13 = "Inactivity";
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcAsyncLazywriteWorkerMulti(vid-%02x): Exiting worker thread (tid-%x, %p) due to %s.\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    v34[6],
    v1,
    KeGetCurrentThread(),
    v13);
}
