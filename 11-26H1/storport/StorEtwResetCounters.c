/*
 * XREFs of StorEtwResetCounters @ 0x1400B24B8
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x140038D20 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004AB0 (RaUnitAcquireRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x140039F08 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x14003A14C (RaidReleasePortData.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 */

void StorEtwResetCounters()
{
  __int64 PortData; // rax
  _QWORD *v1; // r15
  _QWORD *v2; // r12
  _QWORD *i; // rsi
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 **v8; // rax
  __int64 *v9; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v10; // rcx
  __int64 *j; // rdi
  unsigned __int64 v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v17, 0, sizeof(v17));
  memset(&v16, 0, sizeof(v16));
  memset(&v15, 0, sizeof(v15));
  PortData = RaidGetPortData();
  v1 = (_QWORD *)PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PortData + 24), &LockHandle);
    v2 = v1 + 1;
    for ( i = (_QWORD *)v1[1]; ; i = (_QWORD *)*i )
    {
      if ( i == v2 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        RaidReleasePortData(v1);
        return;
      }
      KeAcquireInStackQueuedSpinLock(i + 7, &v17);
      v4 = (_QWORD *)i[4];
      if ( v4 == i + 4 )
        goto LABEL_28;
      do
      {
        v5 = v4 - 8;
        v6 = *((_DWORD *)v4 - 16);
        if ( v6 == 1314275652 )
        {
          if ( (int)NvmeAdapterAcquireRemoveLock((__int64)(v4 - 8)) < 0 )
            goto LABEL_26;
          *((_WORD *)v5 + 572) = 0;
          *((_WORD *)v5 + 573) = 0;
          *((_WORD *)v5 + 574) = 0;
          v7 = v5[76];
          if ( v7 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &v15);
            v8 = (__int64 **)(v5[76] + 136LL);
            v9 = *v8;
            while ( v9 != (__int64 *)v8 )
            {
              *((_WORD *)v9 + 328) = 0;
              *((_WORD *)v9 + 329) = 0;
              *((_WORD *)v9 + 330) = 0;
              v9 = (__int64 *)*v9;
              v8 = (__int64 **)(v5[76] + 136LL);
            }
            KeReleaseInStackQueuedSpinLock(&v15);
          }
          v10 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v5[19];
          goto LABEL_25;
        }
        if ( v6 == 1094997074 && (int)RaidAcquireAdapterRemoveLock((__int64)(v4 - 8)) >= 0 )
        {
          *((_WORD *)v5 + 3028) = 0;
          *((_WORD *)v5 + 3029) = 0;
          *((_WORD *)v5 + 3030) = 0;
          KeAcquireInStackQueuedSpinLock(v5 + 17, &v16);
          for ( j = (__int64 *)v5[18]; j != v5 + 18; j = (__int64 *)*j )
          {
            if ( (int)RaUnitAcquireRemoveLock((__int64)(j - 8), 0LL, 0) >= 0 )
            {
              *((_WORD *)j + 1736) = 0;
              *((_WORD *)j + 1737) = 0;
              *((_WORD *)j + 1738) = 0;
              v12 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
              v13 = *(_DWORD *)(v12 + *(j - 3));
              while ( (v13 & 1) == 0 )
              {
                v14 = v13;
                v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + *(j - 3)), v13 - 2, v13);
                if ( v14 == v13 )
                  goto LABEL_22;
              }
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)j + 242, 0xFFFFFFFF) == 1 )
                KeSetEvent((PRKEVENT)j + 19, 0, 0);
            }
LABEL_22:
            ;
          }
          KeReleaseInStackQueuedSpinLock(&v16);
          v10 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v5[42];
LABEL_25:
          ExReleaseRundownProtectionCacheAware(v10);
        }
LABEL_26:
        v4 = (_QWORD *)*v4;
      }
      while ( v4 != i + 4 );
      v2 = v1 + 1;
LABEL_28:
      KeReleaseInStackQueuedSpinLock(&v17);
    }
  }
}
