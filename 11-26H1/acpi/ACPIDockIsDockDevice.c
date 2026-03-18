/*
 * XREFs of ACPIDockIsDockDevice @ 0x14001B4BC
 * Callers:
 *     ACPIBusIrpQueryPower @ 0x14001BD80 (ACPIBusIrpQueryPower.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140034B80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x140041DFC (OSNotifyDeviceEnum.c)
 *     ACPIFilterIrpQueryPower @ 0x140043700 (ACPIFilterIrpQueryPower.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x140057D40 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400C69F0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 */

bool ACPIDockIsDockDevice()
{
  return (int)AMLIGetNameSpaceObject("_DCK") >= 0;
}
