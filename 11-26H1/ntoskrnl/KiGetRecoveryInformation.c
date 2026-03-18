/*
 * XREFs of KiGetRecoveryInformation @ 0x1405FA1D0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KiGetRecoveryInformation(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  memset_0(a1, 0, 0x4CuLL);
  *a1 = 3;
  *((_BYTE *)a1 + 5) = CurrentPrcb->DebuggerSavedIRQL;
  *((_BYTE *)a1 + 6) = KeGetEffectiveIrql();
  *((_QWORD *)a1 + 1) = *(_QWORD *)&KiBugCheckDriver;
  a1[4] = KiClockTimerOwner;
  *((_BYTE *)a1 + 20) = CurrentPrcb->NmiActive != 0;
  *((_BYTE *)a1 + 22) = CurrentPrcb->NestingLevel;
  *((_BYTE *)a1 + 23) = (CurrentPrcb->DpcRoutineActive != 0) | *((_BYTE *)a1 + 23) & 0xFE;
  a1[8] = CurrentPrcb->Number;
  a1[9] = KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink;
  *((_QWORD *)a1 + 5) = KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink;
  *((_QWORD *)a1 + 6) = KiDpcWatchdogConfigurationLock.SListFaultAddress;
  *((_QWORD *)a1 + 7) = KiDpcWatchdogConfigurationLock.QuantumTarget;
  *((_QWORD *)a1 + 8) = KiDpcWatchdogConfigurationLock.InitialStack;
  result = *(unsigned int *)&KsepShimDbLock.WaitBlockFill11[136];
  a1[18] = *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[136];
  return result;
}
