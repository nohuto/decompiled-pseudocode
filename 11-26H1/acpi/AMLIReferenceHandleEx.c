/*
 * XREFs of AMLIReferenceHandleEx @ 0x140024CAC
 * Callers:
 *     CmosConfigSpaceHandler @ 0x14001BEA0 (CmosConfigSpaceHandler.c)
 *     PciConfigSpaceHandlerWorker @ 0x1400214B0 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x140022E60 (GetPciAddressWorker.c)
 *     GetPciAddress @ 0x140024C14 (GetPciAddress.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x140027900 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     IsPciBusAsync @ 0x140028690 (IsPciBusAsync.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1400348C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x140034DD0 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x140035C00 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     OSNotifyDeviceEnum @ 0x140041DFC (OSNotifyDeviceEnum.c)
 *     PciConfigInternal @ 0x140042C58 (PciConfigInternal.c)
 *     GetOpRegionScope @ 0x140047E1C (GetOpRegionScope.c)
 *     GetOpRegionScopeWorker @ 0x140047EC0 (GetOpRegionScopeWorker.c)
 *     IsPciDevice @ 0x140047FCC (IsPciDevice.c)
 *     ACPIBuildDeviceExtension @ 0x14004F860 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildPowerResourceExtension @ 0x140057F90 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x140058500 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x140058720 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1400589F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIEcStartDevice @ 0x14005FEB0 (ACPIEcStartDevice.c)
 *     AcpiHandleInternalNotify @ 0x140065F50 (AcpiHandleInternalNotify.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1400ACFC4 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIReferenceHandleEx(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLI;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
