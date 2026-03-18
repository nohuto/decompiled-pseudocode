/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x140B03630
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x1404822A4 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405DB7F8 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x140B60570 (PiQueueDeviceRequest.c)
 * Callees:
 *     PiPdcDeactivate @ 0x1409DE320 (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 20, 0xFFFFFFFF) == 1 )
  {
    PiPdcDeactivate(*((_QWORD *)P + 4));
    *((_QWORD *)P + 4) = 0LL;
    ExFreePoolWithTag(P, 0x32706E50u);
  }
}
