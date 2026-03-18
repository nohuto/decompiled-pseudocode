/*
 * XREFs of WmipUnreferenceRegEntry @ 0x140471A4C
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1404718C4 (WmipDeregisterRegEntry.c)
 *     WmipEventNotification @ 0x1409B3410 (WmipEventNotification.c)
 *     WmipForwardWmiIrp @ 0x1409B5F64 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x1409B81FC (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x1409B86B0 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
 *     WmipRegistrationWorker @ 0x1409B8D80 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x140A12168 (WmipFreeTraceDeviceList.c)
 *     IoWMISystemControl @ 0x140A3CC04 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140A3CEA0 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x140A65774 (WmipDeregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
