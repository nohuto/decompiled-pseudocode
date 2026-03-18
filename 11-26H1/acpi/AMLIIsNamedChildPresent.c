/*
 * XREFs of AMLIIsNamedChildPresent @ 0x14001C060
 * Callers:
 *     ACPIBusIrpQueryPower @ 0x14001BD80 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x14001BFBC (CmosGetOpRegionType.c)
 *     GetPciAddressWorker @ 0x140022E60 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140035770 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x140035FC0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     EnableDisableCMOSRegions @ 0x14003DA1C (EnableDisableCMOSRegions.c)
 *     ACPIFilterIrpQueryPower @ 0x140043700 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1400454E0 (ACPIRootIrpQueryPower.c)
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14004FE60 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDockIrpQueryPower @ 0x140056C60 (ACPIDockIrpQueryPower.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005D1C0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005D320 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1400AB740 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIInternalSetProximityDomain @ 0x1400CA8FC (ACPIInternalSetProximityDomain.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400CA9C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400CDEFC (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // rcx

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  while ( v7 != v6 )
  {
    if ( a2 == *((_DWORD *)v6 + 10) )
      goto LABEL_6;
    v6 = (__int64 *)*v6;
  }
  v6 = 0LL;
LABEL_6:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return v6 != 0LL;
}
