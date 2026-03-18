/*
 * XREFs of MiFlushAllPagesWorker @ 0x1403E0A6C
 * Callers:
 *     MiFlushAllPages @ 0x140504838 (MiFlushAllPages.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     CcNotifyWriteBehindEx @ 0x1403E045C (CcNotifyWriteBehindEx.c)
 *     MiCanFlushMakeProgress @ 0x1403E0D04 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1403E0E48 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E0ED8 (MiStoreUpdateMemoryConditions.c)
 */

__int64 __fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, ULONG64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 916));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0LL, 1LL) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2u, *(_QWORD *)(a1 + 256));
    if ( *(_DWORD *)(a1 + 1300) != -1 )
      MiStoreUpdateMemoryConditions(a1);
    if ( (*(_DWORD *)(a1 + 892) || !*(_QWORD *)(a1 + 248)) && !*(_DWORD *)(a1 + 744) )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp) - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 23248) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 916), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10);
}
