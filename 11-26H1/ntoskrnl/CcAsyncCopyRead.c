/*
 * XREFs of CcAsyncCopyRead @ 0x140389580
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026C040 (IoReferenceIoAttributionFromThread.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     CcGetNodeForReadAhead @ 0x1403898B0 (CcGetNodeForReadAhead.c)
 *     CcAllocateWorkQueueEntry @ 0x140389900 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueueAsyncRead @ 0x140389A38 (CcPostWorkQueueAsyncRead.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B623E8 (CcSetTelemetryPeriodicTimer.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 Ahead; // rax
  _DWORD *v16; // r9
  __int64 v17; // rbp
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // r9
  _SLIST_ENTRY *PoolWithTagFromNode; // rax
  _SLIST_ENTRY *v22; // r15
  NTSTATUS v23; // r14d
  volatile signed __int64 *v24; // rcx
  PSLIST_ENTRY v25; // r14
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v29; // [rsp+90h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  ListEntry = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  v29 = *(_QWORD *)(v12 + 536);
  Ahead = CcGetNodeForReadAhead(v12, v13, v14, Object[3].Next);
  v17 = Ahead;
  v18 = *a2 + a3;
  if ( v18 > *(_QWORD *)(v12 + 8) )
    KeBugCheckEx(0x34u, 0x407uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && (*v16 & 0x20000) != 0 )
    CcScheduleReadAheadNuma(Object, a2, a3, a7, Ahead);
  ++EmpParseLock.WaitBlock[0].WaitListEntry.Blink;
  if ( !HIDWORD(EmpParseLock.Affinity)
    && !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink)
    && *((_BYTE *)&EmpParseLock.SwapListEntry + 8)
    && !LODWORD(EmpParseLock.Affinity) )
  {
    CcSetTelemetryPeriodicTimer(*(LARGE_INTEGER *)&EmpParseLock.Timer.Header.Lock);
  }
  v20 = *(unsigned int *)(v17 + 24);
  LODWORD(v20) = v20 | 0x80000000;
  PoolWithTagFromNode = (_SLIST_ENTRY *)ExAllocatePoolWithTagFromNode(v18, 8LL, 1933665091LL, v20);
  v22 = PoolWithTagFromNode;
  if ( !PoolWithTagFromNode )
    RtlRaiseStatus(-1073741670);
  PoolWithTagFromNode->Next = 0LL;
  v23 = CcAllocateWorkQueueEntry(v29, *(_QWORD *)(v12 + 600), v17, &ListEntry);
  if ( v23 < 0 )
  {
    ExFreePoolWithTag(v22, 0x73416343u);
    RtlRaiseStatus(v23);
  }
  if ( !a7 )
    CurrentThread = KeGetCurrentThread();
  v24 = (volatile signed __int64 *)CurrentThread->Process[3].Padding[4];
  if ( v24 )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedAdd64(v24, (a3 + 4095) & 0xFFFFF000);
    _InterlockedIncrement64(v24 + 2);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v29 + 768), &LockHandle);
  ++*(_DWORD *)(v12 + 4);
  ++*(_DWORD *)(v12 + 544);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 528));
  v25 = ListEntry;
  LODWORD(ListEntry[8].Next) = 5;
  v25[1].Next = (_SLIST_ENTRY *)v12;
  v25[2].Next = Object;
  *((_QWORD *)&v25[1].Next + 1) = *a2;
  *((_DWORD *)&v25[2].Next + 2) = a3;
  v25[3].Next = v22;
  v25[4].Next = *(_SLIST_ENTRY **)(a8 + 16);
  *((_QWORD *)&v25[4].Next + 1) = a6;
  v25[5].Next = (_SLIST_ENTRY *)a8;
  *((_DWORD *)&v25[3].Next + 2) = PsGetPagePriorityThread((__int64)CurrentThread);
  *((_QWORD *)&v25[5].Next + 1) = KeGetCurrentThread()->ApcState.Process;
  v25[6].Next = (_SLIST_ENTRY *)CurrentThread;
  LOBYTE(v25[7].Next) = *(_BYTE *)(a8 + 24);
  HIDWORD(v25[7].Next) = *(_DWORD *)(a8 + 28);
  *((LARGE_INTEGER *)&v25[7].Next + 1) = PerformanceCounter;
  *((_QWORD *)&v25[6].Next + 1) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread, (_QWORD *)&v25[6].Next + 1);
  if ( *(_DWORD *)(a8 + 28) > HIDWORD(EmpParseLock.OtherOperationCount) )
    KeBugCheckEx(0x34u, 0x4ADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead(v25);
  return 1;
}
