/*
 * XREFs of MiNodeZeroConductor @ 0x140B29DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x14049F620 (KeInitializeTimerEx.c)
 *     MiZeroNodeConductorWait @ 0x1404F18D8 (MiZeroNodeConductorWait.c)
 *     MiMergeNewProcessAffinity @ 0x1404F8524 (MiMergeNewProcessAffinity.c)
 *     MiZeroNodeExiting @ 0x14050CC64 (MiZeroNodeExiting.c)
 *     MiLockDynamicMemoryExclusive @ 0x140529F60 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14052CC38 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x1406EE344 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x1406EEEAC (MiUnlockDynamicMemoryNestedExclusive.c)
 *     MiBackgroundZeroTimerExpired @ 0x140712F84 (MiBackgroundZeroTimerExpired.c)
 *     MiPreserveBootDecisions @ 0x140713378 (MiPreserveBootDecisions.c)
 *     MiStartZeroEngineThreads @ 0x140B29FA4 (MiStartZeroEngineThreads.c)
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 */

void __fastcall MiNodeZeroConductor(char *P, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  LARGE_INTEGER v13; // rdx
  LARGE_INTEGER v14; // rbx
  const LARGE_INTEGER *v15; // rdi
  int started; // eax
  LARGE_INTEGER *v17; // rdx
  unsigned int v18; // eax
  LARGE_INTEGER v19; // rax
  LARGE_INTEGER v20; // rcx
  signed __int32 v21[14]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread((__int64)CurrentThread, 12LL, a3);
  v5 = *((_QWORD *)P + 6);
  KeInitializeEvent((PRKEVENT)P, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)P + 7, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)P + 8, SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(P + 88), SynchronizationTimer);
  v6 = *(_QWORD *)(v5 + 16) + 56320LL * *((unsigned int *)P + 14);
  MiLockDynamicMemoryExclusive(v5, (__int64)CurrentThread, v7, v8);
  if ( (ULONG *)v5 != &MiSystemPartition )
    MiLockDynamicMemoryNestedExclusive(v10, v9, v11, v12);
  *(_QWORD *)(v6 + 14192) = P;
  if ( (ULONG *)v5 != &MiSystemPartition )
    MiUnlockDynamicMemoryNestedExclusive();
  MiUnlockDynamicMemoryExclusive(v5, (__int64)CurrentThread);
  *((_QWORD *)P + 5) = P + 32;
  *((_QWORD *)P + 4) = P + 32;
  PerformanceFrequency.QuadPart = 0LL;
  v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
  {
    v13.QuadPart = 10000000 * v14.QuadPart % PerformanceFrequency.QuadPart;
    v14.QuadPart = 10000000 * v14.QuadPart / PerformanceFrequency.QuadPart;
  }
  _InterlockedOr(v21, 0);
  while ( 1 )
  {
    v15 = &MiFiveSeconds;
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))MiInitializeZeroEngines)(P, (LARGE_INTEGER)v13.QuadPart) )
      v15 = 0LL;
    started = MiStartZeroEngineThreads(P);
    v17 = (LARGE_INTEGER *)&MiFiveSeconds;
    if ( started )
      v17 = (LARGE_INTEGER *)v15;
    v18 = MiZeroNodeConductorWait((__int64)P, v17);
    if ( v18 < 2 )
      break;
    switch ( v18 )
    {
      case 3u:
        if ( P[161] )
        {
          P[161] = 0;
          _InterlockedOr(v21, 0);
          PerformanceFrequency.QuadPart = 0LL;
          v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( PerformanceFrequency.QuadPart != 10000000 )
            v19.QuadPart = 10000000 * v19.QuadPart / PerformanceFrequency.QuadPart;
          v20 = v14;
          if ( v19.QuadPart >= (unsigned __int64)v14.QuadPart )
            v20 = v19;
          *((_QWORD *)P + 3) = v20.QuadPart - v14.QuadPart;
          MiPreserveBootDecisions((volatile LONG *)v6, P);
        }
        break;
      case 5u:
        MiBackgroundZeroTimerExpired((__int64)P);
        break;
      case 4u:
        MiMergeNewProcessAffinity((__int64)P);
        break;
    }
  }
  MiZeroNodeExiting((unsigned int *)P);
}
