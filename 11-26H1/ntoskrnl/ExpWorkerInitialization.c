/*
 * XREFs of ExpWorkerInitialization @ 0x140CE6768
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038227C (KeIsNodeInitialized.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     ExQueueDebuggerWorker @ 0x1406D0A48 (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x1406D0AB4 (ExpLegacyWorkerInitialization.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D0F2C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpNodeInitialize @ 0x14083F9C0 (ExpNodeInitialize.c)
 *     ExpPartitionInitialize @ 0x14083FCA4 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x14083FE48 (ExpPartitionStart.c)
 *     ExpWorkQueueInitializeHealthMetricsMonitor @ 0x140840160 (ExpWorkQueueInitializeHealthMetricsMonitor.c)
 *     ObpLockObjectTypeExclusive @ 0x1409242F0 (ObpLockObjectTypeExclusive.c)
 *     ObpUnlockObjectType @ 0x140A5AAA0 (ObpUnlockObjectType.c)
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
  const char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax

  ExSaPageGroupDescriptorArrayLock.WaitBlockFill7[130] = 6;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[112] = 0LL;
  ExSaPageGroupDescriptorArrayLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[136];
  ExSaPageGroupDescriptorArrayLock.WaitBlock[2].SparePtr = &ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[136];
  v0 = ExpMaximumKernelWorkerThreads;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[104] = 1;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[120] = 0;
  *(_WORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[128] = 1;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[132] = 0;
  ExSaPageGroupDescriptorArrayLock.WaitBlockFill6[80] = 1;
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
        if ( !qword_140E623F0 )
        {
          v14 = __rdtsc();
          qword_140E623F0 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) >> 4)) ^ 0xB96LL;
          if ( !qword_140E623F0 )
            qword_140E623F0 = 1LL;
          v15 = __rdtsc();
          v16 = (unsigned __int64)HIDWORD(v15) << 32;
          qword_140E623F8 = (41929663 * (unsigned int)((v16 | (unsigned __int64)(unsigned int)v15) >> 4)) ^ 0x5CBLL;
          ObpLockObjectTypeExclusive((__int64)ObpTypeObjectType, v16, v12, v13);
          v17 = 0;
          v18 = 64;
          v19 = *((_DWORD *)ObpTypeObjectType + 11);
          qword_140E62408 = v19;
          while ( v17 < v19 )
          {
            v20 = *((_QWORD *)&stru_140F132C8.SavedApcState.ApcListHead[2].Flink + v17);
            if ( !v20 )
            {
              v19 = v17;
              qword_140E62408 = v17;
              break;
            }
            if ( (*(_BYTE *)(v20 + 66) & 0x40) != 0 )
              qword_140E62410[(unsigned __int64)v17 >> 3] |= 1 << (v17 & 7);
            ++v17;
          }
          ObpUnlockObjectType((__int64)ObpTypeObjectType);
          if ( v19 )
          {
            qword_140E62430 = *((_QWORD *)&stru_140F132C8.SavedApcState.ApcListHead[2].Flink
                              + 41929663 * (__rdtsc() >> 4) % v19);
            v21 = (_QWORD *)(qword_140E62430 + 112);
            v22 = (const char *)(qword_140E62430 + 112);
            if ( qword_140E62430 + 112 < (unsigned __int64)(qword_140E62430 + 176) )
            {
              do
              {
                _mm_prefetch(v22, 0);
                v22 += 64;
              }
              while ( (unsigned __int64)v22 < qword_140E62430 + 176 );
            }
            v23 = qword_140E623F0;
            v24 = 8LL;
            do
            {
              v23 = __ROR8__(v23 - *v21++, qword_140E623F8);
              v18 -= 8;
              --v24;
            }
            while ( v24 );
            for ( ; v18; --v18 )
            {
              v25 = *(unsigned __int8 *)v21;
              v21 = (_QWORD *)((char *)v21 + 1);
              v23 = __ROR8__(v23 - v25, qword_140E623F8);
            }
            qword_140E62438 = v23;
            qword_140E62400 = KiQueryUnbiasedInterruptTime()
                            + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                            + 288000000000LL;
          }
          else
          {
            qword_140E623F0 = 0LL;
          }
        }
        *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerApcFill5[32] = 275;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.NormalContext = ExpDebuggerDpcRoutine;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.ApcListEntry.Flink = (struct _LIST_ENTRY *)ExpDebuggerWorker;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.SystemArgument1 = 0LL;
        *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.Lock = 0LL;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.Reserved[2] = 0LL;
        ExSaPageGroupDescriptorArrayLock.SchedulerApc.ApcListEntry.Blink = 0LL;
        *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerApc.Type = 0LL;
        ExpDebuggerWork = 1;
        ExQueueDebuggerWorker();
        return v11;
      }
    }
  }
  return result;
}
