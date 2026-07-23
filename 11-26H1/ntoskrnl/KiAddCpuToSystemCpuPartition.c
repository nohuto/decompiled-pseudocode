/*
 * XREFs of KiAddCpuToSystemCpuPartition @ 0x140BFB4BC
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiWriteAcquireCpuStateTickLock @ 0x14046438C (KiWriteAcquireCpuStateTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x14047EAF8 (RtlWriteReleaseTickLock.c)
 *     KiAcquireCpuPartitionLockAtDpcLevel @ 0x140501828 (KiAcquireCpuPartitionLockAtDpcLevel.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405E850C (KiNotifyAvailableCpusChangeCpuPartition.c)
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
  KiWriteAcquireCpuStateTickLock((__int64)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink);
  KeAddProcessorAffinityEx(
    (unsigned __int16 *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[64],
    *(_DWORD *)(a1 + 36));
  RtlWriteReleaseTickLock((__int64 *)&KiSupervisorXStateFeaturesLock.WaitBlock[1].WaitListEntry.Blink);
  if ( KiBootProcessorsStarted )
    KiNotifyAvailableCpusChangeCpuPartition(KiSystemCpuPartition);
}
