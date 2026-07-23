/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140202CC0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140202C34 (KeSetIdealProcessorThreadByNumber.c)
 *     KeIntSteerSnapPerf @ 0x140256EE0 (KeIntSteerSnapPerf.c)
 *     HalpInterruptInitializeIpis @ 0x1405818B4 (HalpInterruptInitializeIpis.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140582B18 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IoGetAffinityInterrupt @ 0x1405DB4D0 (IoGetAffinityInterrupt.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FF658 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406DB0A4 (WheaFlushETWEventsAddWorkRtn.c)
 *     PnprAddProcessorResources @ 0x1407B1B4C (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x140835E28 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v2; // r8d

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < KeMaximumProcessors )
  {
    v2 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + ProcIndex);
    if ( v2 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v2 >> 6;
      ProcNumber->Number = v2 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
