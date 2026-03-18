/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1404481A0
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x14050944C (HalpHvInitMcaPcrContext.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FCC08 (KiAltContextWorkQueueAddItem.c)
 *     PopIdleWakeNotifyWakeSource @ 0x140610904 (PopIdleWakeNotifyWakeSource.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406D6F0C (WheaFlushETWEventsAddWorkRtn.c)
 *     KiCopyCountersWorker @ 0x1407BAFAC (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140BEA068 (HalpMcaInitializePcrContext.c)
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
