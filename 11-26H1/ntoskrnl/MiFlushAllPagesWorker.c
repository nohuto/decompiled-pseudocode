/*
 * XREFs of MiFlushAllPagesWorker @ 0x1403E3C5C
 * Callers:
 *     MiFlushAllPages @ 0x1404FE17C (MiFlushAllPages.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     CcNotifyWriteBehindEx @ 0x1403E364C (CcNotifyWriteBehindEx.c)
 *     MiCanFlushMakeProgress @ 0x1403E3EF4 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x1403E4038 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 */

__int64 __fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, ULONG64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
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
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
