/*
 * XREFs of CcCopyReadEx @ 0x14021E590
 * Callers:
 *     FsRtlCopyRead @ 0x140AAD560 (FsRtlCopyRead.c)
 *     CcCopyRead @ 0x140AE30E0 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x140B0F2D0 (CcFastCopyRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026C040 (IoReferenceIoAttributionFromThread.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcMapAndCopyFromCache @ 0x140A718D0 (CcMapAndCopyFromCache.c)
 *     CcTelemetryBucketizeLatency @ 0x140A87318 (CcTelemetryBucketizeLatency.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B623E8 (CcSetTelemetryPeriodicTimer.c)
 */

__int64 __fastcall CcCopyReadEx(
        _QWORD *Object,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        __int64 a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  unsigned int v8; // r10d
  struct _KTHREAD *CurrentThread; // rcx
  int v12; // ebx
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rdi
  unsigned int *v17; // r8
  signed __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned int v24; // eax
  unsigned __int8 v25; // r12
  __int64 v26; // r8
  __int64 v27; // rdx
  signed __int64 v28; // rbx
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r11
  __int64 v34; // r8
  _QWORD *v35; // r8
  _QWORD *v36; // rdx
  unsigned __int64 v37; // r11
  __int64 v39; // [rsp+58h] [rbp-80h] BYREF
  __int64 v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h]
  signed __int64 v42; // [rsp+70h] [rbp-68h]
  __int64 v43; // [rsp+78h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-58h] BYREF
  __int64 v45; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v46; // [rsp+E8h] [rbp+10h] BYREF
  unsigned int v47; // [rsp+F0h] [rbp+18h]
  unsigned __int8 v48; // [rsp+F8h] [rbp+20h]

  v47 = a3;
  v8 = a3;
  LODWORD(v45) = 0;
  CurrentThread = KeGetCurrentThread();
  v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v13 = CurrentThread->Process[1].Padding[3];
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 1084);
    if ( v12 >= v14 )
      v12 = v14;
  }
  if ( v12 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v12 = 2;
  v15 = 0LL;
  v39 = 0LL;
  v46 = 0LL;
  v40 = 0LL;
  v16 = *(_QWORD *)(Object[5] + 8LL);
  v43 = v16;
  v17 = (unsigned int *)Object[6];
  v42 = (signed __int64)v17;
  ++EmpParseLock.WaitBlock[0].WaitListEntry.Flink;
  if ( !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink)
    && !HIDWORD(EmpParseLock.Affinity)
    && *((_BYTE *)&EmpParseLock.SwapListEntry + 8)
    && !LODWORD(EmpParseLock.Affinity) )
  {
    CcSetTelemetryPeriodicTimer(*(LARGE_INTEGER *)&EmpParseLock.Timer.Header.Lock);
    v17 = (unsigned int *)v42;
    v8 = v47;
  }
  if ( v12 <= 0 )
    a4 = 1;
  v48 = a4;
  v18 = *(_QWORD *)(v16 + 8);
  v42 = v8;
  if ( *a2 + v8 > v18 )
    KeBugCheckEx(0x34u, 0x2A4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v19 = a5;
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  v20 = *(_QWORD *)(v16 + 536);
  v21 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    v22 = *(_QWORD *)(*(_QWORD *)(v16 + 600) + 8 * v21 + 64);
  else
    v22 = *(_QWORD *)(v20 + 8 * v21 + 128);
  v41 = v22;
  v23 = *v17;
  if ( (*v17 & 0x20000) != 0 )
  {
    CcScheduleReadAheadNuma(Object, v22);
    v8 = v47;
  }
  v24 = 11988;
  if ( !a4 )
    v24 = 11984;
  __incgsdword(v24);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  if ( a7 && a7 != KeGetCurrentThread() )
  {
    IoReferenceIoAttributionFromThread(a7, &v39, v17, v20);
    v15 = v39;
    v8 = v47;
  }
  v25 = CcMapAndCopyFromCache(Object, *a2, v8, a4, v19, &v45, (v23 >> 18) & 7, v15, &v46);
  if ( !v25 )
  {
    __incgsdword(0x2ED8u);
    goto LABEL_40;
  }
  __addgsdword(0x8984u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( (*(_DWORD *)(v16 + 152) & 0x40000000) != 0 )
  {
    v28 = v42;
LABEL_33:
    v29 = a6;
    *a6 = 0;
    *((_QWORD *)v29 + 1) = v28;
    goto LABEL_40;
  }
  if ( (_DWORD)v45 && (v23 & 0x20000) == 0 )
    CcScheduleReadAheadNuma(Object, v41);
  v45 = *(_QWORD *)(Object[5] + 8LL);
  v26 = v45;
  v27 = Object[6];
  _InterlockedExchange64((volatile __int64 *)(v27 + 16), *(_QWORD *)(v27 + 32));
  _InterlockedExchange64((volatile __int64 *)(v27 + 24), *(_QWORD *)(v27 + 40));
  _InterlockedExchange64((volatile __int64 *)(v27 + 32), *a2);
  v28 = v42;
  _InterlockedExchange64((volatile __int64 *)(v27 + 40), v42 + *a2);
  if ( (*(_DWORD *)(v26 + 152) & 0x200000) == 0
    || (unsigned int)((*(_DWORD *)(v27 + 32) >> 12) - (*(_DWORD *)(v27 + 24) >> 12)) <= 1 )
  {
    goto LABEL_33;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v26 + 536) + 768LL), &LockHandle);
  *(_DWORD *)(v45 + 152) &= ~0x200000u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v30 = a6;
  *a6 = 0;
  *((_QWORD *)v30 + 1) = v28;
LABEL_40:
  if ( v15 )
    IoDiskIoAttributionDereference(v15);
  if ( !BYTE1(EmpParseLock.Timer.TimerListEntry.Flink) )
  {
    v31 = *(_QWORD **)(v16 + 512);
    if ( v25 )
    {
      v32 = v46;
      if ( v46 )
        v33 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v32) / (__int64)EmpParseLock.Queue;
      else
        v33 = v40;
      v34 = 70LL;
      if ( !a4 )
        v34 = 94LL;
      v35 = &v31[v34];
      v36 = v31 + 58;
      if ( !a4 )
        v36 = v31 + 82;
      CcTelemetryBucketizeLatency(v33, v36, v35);
      if ( a4 )
      {
        ++v31[46];
        if ( v37 > v31[56] )
          v31[56] = v37;
      }
      else
      {
        ++v31[47];
        if ( v37 > v31[57] )
          v31[57] = v37;
      }
    }
    else
    {
      ++v31[48];
    }
  }
  return v25;
}
