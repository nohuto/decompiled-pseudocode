/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140440C90
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x140502EFC (HalpHvInitMcaPcrContext.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FF658 (KiAltContextWorkQueueAddItem.c)
 *     PopIdleWakeNotifyWakeSource @ 0x140613B64 (PopIdleWakeNotifyWakeSource.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406DB0A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     KiCopyCountersWorker @ 0x1407BE00C (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140BF0068 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
