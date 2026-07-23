/*
 * XREFs of ExpWorkQueueManagerThread @ 0x140A77D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KeTimeOutQueueWaiters @ 0x1403E3298 (KeTimeOutQueueWaiters.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     ExpNewThreadNecessary @ 0x140456C90 (ExpNewThreadNecessary.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     ExpGetNodeSubQueueConcurrencyCount @ 0x1404D95F8 (ExpGetNodeSubQueueConcurrencyCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x1405FC13C (KeSetMaximumCountPriQueue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140775290 (ExpPartitionCreatePoolDelayed.c)
 *     ExpCreateWorkerThread @ 0x140A78ABC (ExpCreateWorkerThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkQueueManagerThread(__int64 *a1)
{
  __int64 *v1; // rsi
  int v2; // ebx
  struct _WORK_QUEUE_ITEM *v3; // r13
  __int64 v4; // r8
  _QWORD *Pool2; // r12
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int16 **v7; // r14
  char v8; // r15
  NTSTATUS v9; // eax
  int v10; // r11d
  unsigned __int16 *v11; // rdx
  unsigned int n; // edi
  int PoolDelayed; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // r10
  _KAFFINITY_EX *UserAffinity; // r10
  unsigned __int16 Count; // r9
  __int64 *v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  unsigned __int16 k; // dx
  int m; // edi
  unsigned __int16 *v24; // rax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  int NodeSubQueueConcurrencyCount; // eax
  int v31; // r8d
  unsigned __int16 *v32; // rax
  unsigned int v33; // r9d
  __int64 v34; // rdx
  _DWORD *v35; // rcx
  int v36; // eax
  unsigned __int64 v37; // r13
  unsigned __int16 *v38; // rax
  unsigned int j; // edi
  __int64 v40; // rdx
  _DWORD *v41; // rcx
  __int64 v42; // r8
  ULONG_PTR v43; // r9
  unsigned int i; // edi
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rdx
  int WorkerThread; // eax
  char v50; // [rsp+48h] [rbp-C0h]
  char v51; // [rsp+49h] [rbp-BFh]
  struct _KTHREAD *v53; // [rsp+58h] [rbp-B0h]
  __int64 v54; // [rsp+60h] [rbp-A8h]
  _QWORD v55[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object[4]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v57; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v58[33]; // [rsp+A0h] [rbp-68h] BYREF

  v1 = a1;
  memset_0(&v57, 0, 0x108uLL);
  v2 = 0;
  v51 = 1;
  v54 = 0LL;
  v3 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v54 = ExAllocatePool2(0x40uLL);
    v3 = (struct _WORK_QUEUE_ITEM *)v54;
    if ( v54 )
    {
      v51 = 0;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  KeSetActualBasePriorityThread((__int64)CurrentThread, 12LL, v4);
  v55[0] = 0LL;
  v55[1] = -1LL;
  KeSetTimer2(
    (__int64)(v1 + 16),
    -(__int64)((10000000 * (unsigned __int64)(unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000 * (unsigned __int64)(unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v55);
  v7 = (unsigned __int16 **)(v1 + 1);
  v50 = 0;
  v55[0] = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = v1 + 2;
  Object[1] = v1 + 5;
  Object[2] = v1 + 13;
  while ( 1 )
  {
    v8 = 0;
    v9 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    if ( !v9 )
      break;
    v10 = 1;
    v36 = v9 - 1;
    if ( !v36 )
    {
      v50 = 0;
      v43 = 0LL;
      while ( v2 <= v10 )
      {
        for ( i = v43; i < *((_DWORD *)*v7 + 30); i += v10 )
        {
          v45 = *v1;
          v46 = v43;
          v47 = *(_QWORD *)(v45 + 8);
          v48 = i + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v2 + 8 * **v7);
          if ( ((unsigned __int8)*(_QWORD *)(v47 + 8 * v48) & (unsigned __int8)v10) == 0 )
            v46 = *(_QWORD *)(v47 + 8 * v48);
          if ( *(_DWORD *)(v46 + 704) == *(_DWORD *)(v46 + 708) && ExpNewThreadNecessary(v46, 0x3FFF) )
          {
            if ( (ExSaPageGroupDescriptorArrayLock.SchedulerApcFill3[32] & 2) != 0 )
              KeBugCheckEx(
                0x163u,
                *(unsigned int *)&ExSaPageGroupDescriptorArrayLock.SchedulerApcFill5[32],
                2uLL,
                0LL,
                v43);
            if ( v2 == v10 && v51 == (_BYTE)v43 )
            {
              *(_DWORD *)Pool2 = v10;
              Pool2[1] = v46;
              v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
              v3->Parameter = Pool2;
              v3->List.Flink = (struct _LIST_ENTRY *)v43;
              ExQueueWorkItem(v3, NormalWorkQueue);
              v51 = 1;
            }
            WorkerThread = ExpCreateWorkerThread(v46, (char *)a1 + 276);
            v43 = 0LL;
            v10 = 1;
            if ( WorkerThread < 0 )
              v8 = 1;
          }
          v1 = a1;
        }
        v2 += v10;
      }
      v16 = 0;
      v2 = 0;
      CurrentThread = v53;
LABEL_38:
      v31 = 0;
      do
      {
        v32 = *v7;
        v33 = 0;
        if ( *((_DWORD *)*v7 + 30) )
        {
          do
          {
            v34 = v33 + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v31 + 8 * *v32);
            v35 = 0LL;
            if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*v1 + 8) + 8 * v34) & (unsigned __int8)v10) == 0 )
              v35 = *(_DWORD **)(*(_QWORD *)(*v1 + 8) + 8 * v34);
            v35[177] = v35[176];
            if ( (v35[178] & 0x3FFF) >= v35[180] || v8 )
              v16 = v10;
            v32 = *v7;
            v33 += v10;
          }
          while ( v33 < *((_DWORD *)*v7 + 30) );
          v50 = v16;
        }
        v31 += v10;
      }
      while ( v31 <= v10 );
      if ( v16 )
        KeSetCoalescableTimer((PKTIMER)(v1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, 0LL);
      goto LABEL_16;
    }
    if ( v36 == 1 )
    {
      v37 = v55[0];
      do
      {
        v38 = *v7;
        for ( j = 0; j < *((_DWORD *)*v7 + 30); ++j )
        {
          v40 = j + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v2 + 8 * *v38);
          v41 = 0LL;
          if ( (*(_QWORD *)(*(_QWORD *)(*v1 + 8) + 8 * v40) & 1) == 0 )
            v41 = *(_DWORD **)(*(_QWORD *)(*v1 + 8) + 8 * v40);
          if ( v41 )
          {
            if ( (v41[178] & 0x4000) == 0 && !v41[1] )
            {
              v42 = (v41[178] & 0x3FFFu) - ((2 * v41[179]) >> 1);
              if ( (_DWORD)v42 )
              {
                KeTimeOutQueueWaiters((__int64)v41, v37, v42);
                v10 = 1;
              }
            }
          }
          v38 = *v7;
        }
        ++v2;
      }
      while ( v2 < 8 );
      goto LABEL_14;
    }
LABEL_15:
    v16 = v50;
    if ( !v50 )
      goto LABEL_38;
LABEL_16:
    v57 = 2097153LL;
    memset_0(v58, 0, 0x100uLL);
    KeQueryNodeActiveAffinityEx(**v7, (unsigned __int16 *)&v57, 0LL);
    UserAffinity = CurrentThread->UserAffinity;
    Count = v57;
    if ( (unsigned __int16)v57 < UserAffinity->Count )
    {
      v19 = (__int64 *)CurrentThread->UserAffinity;
    }
    else
    {
      v19 = &v57;
      Count = UserAffinity->Count;
    }
    for ( k = 0; k < Count; ++k )
    {
      if ( v58[k] != UserAffinity->Bitmap[k] )
      {
LABEL_59:
        KeSetUserAffinityThread((__int64)CurrentThread, (unsigned __int16 *)&v57);
        goto LABEL_28;
      }
    }
    while ( k < *(_WORD *)v19 )
    {
      if ( v19[k + 1] )
        goto LABEL_59;
      ++k;
    }
LABEL_28:
    for ( m = 0; m < 8; ++m )
    {
      v24 = *v7;
      if ( *((_DWORD *)*v7 + 30) )
      {
        do
        {
          v25 = m + 8 * *v24;
          v26 = *v1;
          v27 = 0LL;
          v28 = *(_QWORD *)(v26 + 8);
          v29 = (unsigned int)(v2 + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * v25);
          if ( (*(_QWORD *)(v28 + 8 * v29) & 1) == 0 )
            v27 = *(_QWORD *)(v28 + 8 * v29);
          if ( v27 )
          {
            NodeSubQueueConcurrencyCount = ExpGetNodeSubQueueConcurrencyCount(*v7, v2);
            if ( *(_DWORD *)(v27 + 664) != NodeSubQueueConcurrencyCount )
              KeSetMaximumCountPriQueue(v27, NodeSubQueueConcurrencyCount);
          }
          v24 = *v7;
          ++v2;
          v1 = a1;
        }
        while ( (unsigned int)v2 < *((_DWORD *)*v7 + 30) );
      }
      v2 = 0;
    }
    CurrentThread = v53;
  }
  if ( !*((_DWORD *)v1 + 68) )
  {
    v10 = 1;
    do
    {
      v11 = *v7;
      for ( n = 0; n < *((_DWORD *)*v7 + 30); n += v10 )
      {
        if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*v1 + 8)
                                         + 8LL
                                         * (n
                                          + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72]
                                          * (v2 + 8 * *v11))) & (unsigned __int8)v10) != 0
          && (PoolDelayed = ExpPartitionCreatePoolDelayed(*v1, v11, v2, n), v10 = 1, PoolDelayed < 0) )
        {
          v8 = 1;
        }
        else
        {
          v14 = n + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v2 + 8 * **v7);
          v15 = 0LL;
          if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*v1 + 8) + 8 * v14) & (unsigned __int8)v10) == 0 )
            v15 = *(_QWORD *)(*(_QWORD *)(*v1 + 8) + 8 * v14);
          if ( v15 )
          {
            if ( ExpNewThreadNecessary(v15, *(_DWORD *)(v15 + 720)) )
            {
              v21 = ExpCreateWorkerThread(v20, (char *)v1 + 276);
              v10 = 1;
              if ( v21 < 0 )
                v8 = 1;
            }
          }
        }
        v11 = *v7;
      }
      v2 += v10;
    }
    while ( v2 < 8 );
LABEL_14:
    CurrentThread = v53;
    v2 = 0;
    v3 = (struct _WORK_QUEUE_ITEM *)v54;
    goto LABEL_15;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
