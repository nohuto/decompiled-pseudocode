/*
 * XREFs of KiGetRecoveryInformation @ 0x1405FCBF0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  a1[9] = KiBugCheckData;
  *((_QWORD *)a1 + 5) = qword_140F4B108;
  *((_OWORD *)a1 + 3) = xmmword_140F4B110;
  *((_QWORD *)a1 + 8) = qword_140F4B120;
  result = *(unsigned int *)&KsepShimDbLock.SchedulerApcFill5[76];
  a1[18] = *(_DWORD *)&KsepShimDbLock.SchedulerApcFill5[76];
  return result;
}
