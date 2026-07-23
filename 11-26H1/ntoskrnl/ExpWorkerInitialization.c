/*
 * XREFs of ExpWorkerInitialization @ 0x140CECB08
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     ExQueueDebuggerWorker @ 0x1406D4A78 (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x1406D4AE4 (ExpLegacyWorkerInitialization.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D4F5C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpNodeInitialize @ 0x140845C00 (ExpNodeInitialize.c)
 *     ExpPartitionInitialize @ 0x140845EE4 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x140846088 (ExpPartitionStart.c)
 *     ExpWorkQueueInitializeHealthMetricsMonitor @ 0x1408463A0 (ExpWorkQueueInitializeHealthMetricsMonitor.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ObpUnlockObjectType @ 0x140A67A10 (ObpUnlockObjectType.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  int v1; // eax
  unsigned int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  unsigned __int16 i; // bx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int v11; // esi
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // edx
  int v18; // ebx
  unsigned int v19; // edi
  __int64 v20; // rax
  _QWORD *v21; // r8
  const char *j; // rcx
  char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax

  ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[18] = 6;
  ExSaPageGroupDescriptorArrayLock.SavedApcState.ApcListHead[0].Flink = 0LL;
  ExSaPageGroupDescriptorArrayLock.SavedApcState.Process = (_KPROCESS *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[24];
  ExSaPageGroupDescriptorArrayLock.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.SavedApcState.ApcListHead[1].Blink;
  v0 = ExpMaximumKernelWorkerThreads;
  LODWORD(ExSaPageGroupDescriptorArrayLock.NpxState) = 1;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[8] = 0;
  *(_WORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[16] = 1;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[20] = 0;
  LOBYTE(ExSaPageGroupDescriptorArrayLock.AffinityVersion) = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v1 = ExpMaximumProcessorsPerWorkQueue;
  if ( (unsigned int)ExpMaximumProcessorsPerWorkQueue > 0x800 )
  {
    v1 = 2048;
    ExpMaximumProcessorsPerWorkQueue = 2048;
  }
  if ( !v1 )
    ExpMaximumProcessorsPerWorkQueue = 1;
  v2 = ExpWorkerThreadTimeoutInSeconds;
  if ( (unsigned int)ExpWorkerThreadTimeoutInSeconds > 0xE10 )
  {
    v2 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v2 < 0x3C )
    ExpWorkerThreadTimeoutInSeconds = 60;
  v3 = ExpWorkQueueDelayHistogramBucketCount;
  if ( (unsigned int)ExpWorkQueueDelayHistogramBucketCount > 0x200 )
  {
    v3 = 512;
    ExpWorkQueueDelayHistogramBucketCount = 512;
  }
  if ( !v3 )
    ExpWorkQueueDelayHistogramBucketCount = 1;
  v4 = ExpWorkQueueDelayHistogramBaseResolutionMs;
  if ( (unsigned int)ExpWorkQueueDelayHistogramBaseResolutionMs > 0x64 )
  {
    v4 = 100;
    ExpWorkQueueDelayHistogramBaseResolutionMs = 100;
  }
  if ( !v4 )
    ExpWorkQueueDelayHistogramBaseResolutionMs = 1;
  v5 = ExpWorkQueueDelayHistogramSegmentSize;
  if ( (unsigned int)ExpWorkQueueDelayHistogramSegmentSize > 0x200 )
  {
    v5 = 512;
    ExpWorkQueueDelayHistogramSegmentSize = 512;
  }
  if ( !v5 )
    ExpWorkQueueDelayHistogramSegmentSize = 1;
  v6 = ExpWorkQueueDelayHistogramSegmentMultiplier;
  if ( (unsigned int)ExpWorkQueueDelayHistogramSegmentMultiplier > 0x64 )
  {
    v6 = 100;
    ExpWorkQueueDelayHistogramSegmentMultiplier = 100;
  }
  if ( !v6 )
    ExpWorkQueueDelayHistogramSegmentMultiplier = 1;
  v7 = ExpWorkQueueHealthMonitorIntervalMs;
  if ( (unsigned int)ExpWorkQueueHealthMonitorIntervalMs > 0xEA60 )
  {
    v7 = 60000;
    ExpWorkQueueHealthMonitorIntervalMs = 60000;
  }
  if ( v7 < 0x3E8 )
    ExpWorkQueueHealthMonitorIntervalMs = 1000;
  if ( !(unsigned int)Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline() )
    ExpMaximumProcessorsPerWorkQueue = 2048;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    if ( KeIsNodeInitialized(i) )
      v9 = KeNodeBlock[i];
    else
      v9 = 0LL;
    result = ExpNodeInitialize(v9);
    if ( (int)result < 0 )
      return result;
  }
  result = ExpWorkQueueInitializeHealthMetricsMonitor();
  if ( (int)result >= 0 )
  {
    result = ExpPartitionInitialize((__int64)PspSystemPartition);
    if ( (int)result >= 0 )
    {
      result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
      v11 = result;
      if ( (int)result >= 0 )
      {
        ExpLegacyWorkerInitialization();
        _mm_lfence();
        if ( !*(_QWORD *)&stru_140E62450.WaitBlockFill11[64] )
        {
          v14 = __rdtsc();
          *(_QWORD *)&stru_140E62450.WaitBlockFill11[64] = (41929663
                                                          * (unsigned int)((((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) >> 4)) ^ 0xB96LL;
          if ( !*(_QWORD *)&stru_140E62450.WaitBlockFill11[64] )
            *(_QWORD *)&stru_140E62450.WaitBlockFill11[64] = 1LL;
          v15 = __rdtsc();
          v16 = (unsigned __int64)HIDWORD(v15) << 32;
          stru_140E62450.WaitBlock[1].Thread = (struct _KTHREAD *)((41929663
                                                                  * (unsigned int)((v16 | (unsigned __int64)(unsigned int)v15) >> 4)) ^ 0x5CBLL);
          ObpLockObjectTypeExclusive(*(__int64 *)&ObpStackTraceLock.PriorityFloorSummary, v16, v12, v13);
          v17 = 0;
          v18 = 64;
          v19 = *(_DWORD *)(*(_QWORD *)&ObpStackTraceLock.PriorityFloorSummary + 44LL);
          stru_140E62450.WaitBlock[1].SparePtr = (PVOID)v19;
          while ( v17 < v19 )
          {
            v20 = *((_QWORD *)&ObpStackTraceLock.ForegroundLossTime + v17);
            if ( !v20 )
            {
              v19 = v17;
              stru_140E62450.WaitBlock[1].SparePtr = (PVOID)v17;
              break;
            }
            if ( (*(_BYTE *)(v20 + 66) & 0x40) != 0 )
              stru_140E62450.WaitBlockFill6[((unsigned __int64)v17 >> 3) + 96] |= 1 << (v17 & 7);
            ++v17;
          }
          ObpUnlockObjectType(*(__int64 *)&ObpStackTraceLock.PriorityFloorSummary);
          if ( v19 )
          {
            stru_140E62450.WaitBlock[2].Object = (PVOID)*((_QWORD *)&ObpStackTraceLock.ForegroundLossTime
                                                        + 41929663 * (__rdtsc() >> 4) % v19);
            v21 = (char *)stru_140E62450.WaitBlock[2].Object + 112;
            for ( j = (char *)stru_140E62450.WaitBlock[2].Object + 112;
                  j < (char *)stru_140E62450.WaitBlock[2].Object + 176;
                  j += 64 )
            {
              _mm_prefetch(j, 0);
            }
            v23 = *(char **)&stru_140E62450.WaitBlockFill11[64];
            v24 = 8LL;
            do
            {
              v23 = (char *)__ROR8__(&v23[-*v21++], stru_140E62450.WaitBlockFill6[72]);
              v18 -= 8;
              --v24;
            }
            while ( v24 );
            for ( ; v18; --v18 )
            {
              v25 = *(unsigned __int8 *)v21;
              v21 = (_QWORD *)((char *)v21 + 1);
              v23 = (char *)__ROR8__(&v23[-v25], stru_140E62450.WaitBlockFill6[72]);
            }
            stru_140E62450.WaitBlock[2].SparePtr = v23;
            stru_140E62450.WaitBlock[1].Object = (PVOID)(KiQueryUnbiasedInterruptTime()
                                                       + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                                                       + 288000000000LL);
          }
          else
          {
            *(_QWORD *)&stru_140E62450.WaitBlockFill11[64] = 0LL;
          }
        }
        *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerApcFill5[72] = 275;
        ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)ExpDebuggerDpcRoutine;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.NormalContext = ExpDebuggerWorker;
        ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Blink = 0LL;
        ExSaPageGroupDescriptorArrayLock.MutantListHead.Flink = 0LL;
        *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.Lock = 0LL;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.SystemArgument1 = 0LL;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.Reserved[1] = 0LL;
        ExpDebuggerWork = 1;
        ExQueueDebuggerWorker();
        return v11;
      }
    }
  }
  return result;
}
