/*
 * XREFs of HalpTimerClockIpiRoutine @ 0x140461810
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogTriggerSystemReset @ 0x140220C90 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     HalpScanForProfilingCorruption @ 0x140461914 (HalpScanForProfilingCorruption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerClockIpiRoutine(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v5; // rbx

  KeClockInterruptNotify(*(_QWORD *)(a1 + 136), *(_BYTE *)(*(_QWORD *)(a1 + 136) + 41LL), 2u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( HalpWatchdogTimer && CurrentPrcb->ClockOwner )
  {
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
      guard_dispatch_icall_no_overrides(v3, v2);
    if ( HalpTimerWatchdogResetCount == -1 )
      HalpTimerWatchdogTriggerSystemReset(0);
  }
  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 && (KeGetCurrentPrcb()->HalReserved[3] & 1) == 0 )
  {
    LODWORD(v1) = KeGetPcr()->Prcb.Number;
    v5 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
    if ( MEMORY[0xFFFFF78000000008] - v5[2] >= 0x4C4B40uLL )
    {
      if ( (_QWORD *)*v5 != v5 )
        guard_dispatch_icall_no_overrides(0LL, 0LL);
      HalpScanForProfilingCorruption((unsigned int)v1);
      v5[2] = MEMORY[0xFFFFF78000000008];
    }
  }
  return 1;
}
