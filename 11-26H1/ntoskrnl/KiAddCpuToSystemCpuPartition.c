/*
 * XREFs of KiAddCpuToSystemCpuPartition @ 0x140BF54BC
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KiWriteAcquireCpuStateTickLock @ 0x14046AC0C (KiWriteAcquireCpuStateTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x140485188 (RtlWriteReleaseTickLock.c)
 *     KiAcquireCpuPartitionLockAtDpcLevel @ 0x140507E54 (KiAcquireCpuPartitionLockAtDpcLevel.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405E5B9C (KiNotifyAvailableCpusChangeCpuPartition.c)
 */

void __fastcall KiAddCpuToSystemCpuPartition(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  KiAcquireCpuPartitionLockAtDpcLevel(KiSystemCpuPartition);
  KeAddProcessorAffinityEx(*(unsigned __int16 **)KiSystemCpuPartition, *(_DWORD *)(a1 + 36));
  KxReleaseSpinLock((PKSPIN_LOCK)(KiSystemCpuPartition + 8));
  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v2);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_QWORD *)(a1 + 14320) = KiSystemCpuPartition;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  KiWriteAcquireCpuStateTickLock((__int64)&KiSupervisorXStateFeaturesLock.CycleTime);
  KeAddProcessorAffinityEx((unsigned __int16 *)&KiSupervisorXStateFeaturesLock.CurrentRunTime, *(_DWORD *)(a1 + 36));
  RtlWriteReleaseTickLock((__int64 *)&KiSupervisorXStateFeaturesLock.CycleTime);
  if ( KiBootProcessorsStarted )
    KiNotifyAvailableCpusChangeCpuPartition(KiSystemCpuPartition);
}
