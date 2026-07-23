/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1403C0F80
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403C0DF0 (WmipDeregisterRegEntry.c)
 *     WmipRegistrationWorker @ 0x140A0A880 (WmipRegistrationWorker.c)
 *     WmipEventNotification @ 0x140A0CB60 (WmipEventNotification.c)
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140AC63D4 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140AC6630 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140ACF980 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140ACFADC (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140ACFDE8 (WmipDeregisterDevice.c)
 *     WmipFreeTraceDeviceList @ 0x140B0D154 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
