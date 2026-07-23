/*
 * XREFs of CcCompleteAsyncRead @ 0x1403A05A8
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404B83D0 (CcCompleteAsyncReadWorker.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140384E10 (PsSetPagePriorityThread.c)
 *     CcDecrementOpenCount @ 0x1403A04AC (CcDecrementOpenCount.c)
 *     CcCopyReadExceptionFilter @ 0x1404EDB58 (CcCopyReadExceptionFilter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CcMapAndCopyFromCache @ 0x140A718D0 (CcMapAndCopyFromCache.c)
 *     CcTelemetryBucketizeLatency @ 0x140A87318 (CcTelemetryBucketizeLatency.c)
 */

void __fastcall CcCompleteAsyncRead(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID MappedSystemVa; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // rtt
  unsigned __int64 v16; // r11
  int v17; // [rsp+9Ch] [rbp-A4h]
  __int64 v18; // [rsp+A0h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-90h]
  PMDL MemoryDescriptorList; // [rsp+C8h] [rbp-78h]
  __int64 v21; // [rsp+D0h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-50h] BYREF
  int v23; // [rsp+150h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+158h] [rbp+18h]
  int PagePriorityThread; // [rsp+160h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  v23 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *(_QWORD *)(a1 + 16);
  v21 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v24 = *(_DWORD *)(a1 + 40);
  v17 = *(_DWORD *)(a1 + 56);
  MemoryDescriptorList = *(PMDL *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD **)(a1 + 80);
  v18 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 120);
  PsSetPagePriorityThread(v7, v17);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
  if ( *(int *)v4 < 0 )
  {
    v12 = v18;
  }
  else
  {
    *(_DWORD *)v4 = 0;
    v8 = v24;
    *(_QWORD *)(v4 + 8) = v24;
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      v8 = v24;
    }
    if ( MappedSystemVa )
    {
      LOBYTE(v10) = 1;
      CcMapAndCopyFromCache(v21, v3, (unsigned int)v8, v10, MappedSystemVa, &v23, v17, v18, 0LL);
    }
    else
    {
      *(_DWORD *)v4 = -1073741670;
    }
    v12 = v18;
  }
  if ( v12 )
    IoDiskIoAttributionDereference(v12);
  if ( v23 )
    ++CcNumberAsyncReadRefaulted;
  if ( v5 && *v5 )
    guard_dispatch_icall_no_overrides(v5[1], v8, v9);
  KeGetCurrentThread()[1].TrapFrame = 0LL;
  PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 528));
  if ( !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink) )
  {
    v14 = *(_QWORD *)(v2 + 512);
    v15 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v6);
    CcTelemetryBucketizeLatency(v15 / (__int64)EmpParseLock.Queue, v14 + 1288, v14 + 1384);
    ++*(_QWORD *)(v14 + 1272);
    if ( v16 > *(_QWORD *)(v14 + 1280) )
      *(_QWORD *)(v14 + 1280) = v16;
  }
  v13 = *(_QWORD *)(a1 + 136);
  if ( v13 != *(_QWORD *)(v2 + 536) )
    KeBugCheckEx(0x34u, 0x715uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 768), &LockHandle);
  CcDecrementOpenCount(v2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
