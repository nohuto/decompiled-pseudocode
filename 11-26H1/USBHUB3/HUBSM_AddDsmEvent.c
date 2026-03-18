/*
 * XREFs of HUBSM_AddDsmEvent @ 0x14000A800
 * Callers:
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007D044 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1400836F0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceReportedMissing @ 0x140083A30 (HUBPDO_EvtDeviceReportedMissing.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x140083A90 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddDsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 512, a2);
}
