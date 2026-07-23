/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x140B05244
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14047BC14 (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405DE0A8 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiControlGetSetDeviceStatus @ 0x140967F20 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x140B63610 (PiQueueDeviceRequest.c)
 * Callees:
 *     PiPdcDeactivate @ 0x140A1B44C (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
