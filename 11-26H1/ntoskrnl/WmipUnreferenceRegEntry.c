/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1403B7080
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403B6EF0 (WmipDeregisterRegEntry.c)
 *     WmipRegistrationWorker @ 0x140A0B650 (WmipRegistrationWorker.c)
 *     WmipEventNotification @ 0x140A0D110 (WmipEventNotification.c)
 *     WmipForwardWmiIrp @ 0x140A0F03C (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x140AC4764 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140AC49C0 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140ACD740 (IoWMIRegistrationControl.c)
 *     WmipUpdateRegistration @ 0x140ACD89C (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140ACDBA8 (WmipDeregisterDevice.c)
 *     WmipFreeTraceDeviceList @ 0x140B0BA04 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
