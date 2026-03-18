/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1404289E0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140427F74 (KeSetIdealProcessorThreadByNumber.c)
 *     HalpInterruptInitializeIpis @ 0x14057F394 (HalpInterruptInitializeIpis.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x1405805F8 (HalpPmuReservedResourcesProcessorCallback.c)
 *     IoGetAffinityInterrupt @ 0x1405D8CD0 (IoGetAffinityInterrupt.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FCC08 (KiAltContextWorkQueueAddItem.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406D6F0C (WheaFlushETWEventsAddWorkRtn.c)
 *     PnprAddProcessorResources @ 0x1407AEAEC (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x14082FBE8 (EtwpProcessorRundown.c)
 *     PnprQuiesceProcessorDpc @ 0x140BF2260 (PnprQuiesceProcessorDpc.c)
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
    v2 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * ProcIndex);
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
