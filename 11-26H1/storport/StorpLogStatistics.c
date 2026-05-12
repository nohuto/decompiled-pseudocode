/*
 * XREFs of StorpLogStatistics @ 0x140038EB8
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x140038D20 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x140039F08 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x14003A14C (RaidReleasePortData.c)
 *     StorpLogPerUnitStatistics @ 0x140046F34 (StorpLogPerUnitStatistics.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     StorpIterateAndLogNvmeNamespaceStatistics @ 0x1400B8378 (StorpIterateAndLogNvmeNamespaceStatistics.c)
 *     StorpLogNvmePerAdapterStatistics @ 0x1400B842C (StorpLogNvmePerAdapterStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B84B8 (StorpLogPerAdapterStatistics.c)
 */

__int64 __fastcall StorpLogStatistics(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r15
  __int16 v5; // r14
  __int16 v6; // r13
  __int64 result; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *i; // r12
  _QWORD *v12; // rbx
  int v13; // eax
  _QWORD *j; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v15; // rcx
  __int64 v16; // rcx
  _QWORD *k; // rdi
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  __int16 v21; // [rsp+C0h] [rbp+48h]
  __int16 v22; // [rsp+C8h] [rbp+50h]
  _QWORD *v23; // [rsp+D0h] [rbp+58h]
  __int64 v24; // [rsp+D8h] [rbp+60h]

  *(_QWORD *)&v19.OldIrql = 0LL;
  v4 = a1;
  v5 = a1 & 0xC3;
  v6 = a1 & 0x1FC;
  v21 = v5;
  v22 = a1 & 0x1FC;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = RaidGetPortData(a1, a2, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL);
  v24 = result;
  v8 = result;
  if ( !result )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(result + 24), &LockHandle);
  v9 = *(_QWORD **)(v8 + 8);
  v23 = (_QWORD *)(v8 + 8);
  if ( v9 == (_QWORD *)(v8 + 8) )
    goto LABEL_35;
  do
  {
    KeAcquireInStackQueuedSpinLock(v9 + 7, &v19);
    v10 = v9 + 4;
    for ( i = (_QWORD *)v9[4]; i != v10; i = (_QWORD *)*i )
    {
      v12 = i - 8;
      v13 = *((_DWORD *)i - 16);
      if ( v13 == 1094997074 )
      {
        if ( (int)RaidAcquireAdapterRemoveLock((__int64)(i - 8)) < 0 )
          continue;
        if ( v5 )
          StorpLogPerAdapterStatistics(i - 8, v4);
        if ( v6 )
        {
          KeAcquireInStackQueuedSpinLock(v12 + 17, &v18);
          for ( j = (_QWORD *)v12[18]; j != v12 + 18; j = (_QWORD *)*j )
            StorpLogPerUnitStatistics(j - 8, v4);
          KeReleaseInStackQueuedSpinLock(&v18);
          v5 = v21;
          v10 = v9 + 4;
        }
        if ( (v4 & 0x20) != 0 )
          *((_DWORD *)v12 + 1353) = 0;
        if ( (v4 & 0x40) != 0 )
          v12[677] = 0LL;
        v15 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v12[42];
        goto LABEL_30;
      }
      if ( v13 == 1314275652 && (int)NvmeAdapterAcquireRemoveLock(i - 8) >= 0 )
      {
        if ( v5 )
          StorpLogNvmePerAdapterStatistics(i - 8, v4);
        v16 = v12[144];
        if ( v16 )
        {
          StorpIterateAndLogNvmeNamespaceStatistics(v16, v4);
        }
        else if ( (v12[52] & 0x40) != 0 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(v12 + 149), 1u);
          for ( k = (_QWORD *)v12[163]; k != v12 + 163; k = (_QWORD *)*k )
            StorpIterateAndLogNvmeNamespaceStatistics(k - 14, v4);
          ExReleaseResourceLite((PERESOURCE)(v12 + 149));
          KeLeaveCriticalRegion();
          v5 = v21;
          v10 = v9 + 4;
          v6 = v22;
        }
        v15 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v12[19];
LABEL_30:
        ExReleaseRundownProtectionCacheAware(v15);
        continue;
      }
    }
    KeReleaseInStackQueuedSpinLock(&v19);
    v9 = (_QWORD *)*v9;
  }
  while ( v9 != v23 );
  v8 = v24;
LABEL_35:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return RaidReleasePortData(v8);
}
