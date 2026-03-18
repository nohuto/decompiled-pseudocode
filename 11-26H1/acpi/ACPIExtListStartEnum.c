/*
 * XREFs of ACPIExtListStartEnum @ 0x140028384
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDockFindCorrespondingDock @ 0x14001C6D4 (ACPIDockFindCorrespondingDock.c)
 *     ACPIDetectDockDevices @ 0x14001CBDC (ACPIDetectDockDevices.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1400280E0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C050 (ACPIInitDeleteChildDeviceList.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x140041748 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x140046F28 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x140047354 (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051218 (ACPIGpeBuildWakeMasks.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x140067048 (EnableDisableDeviceTreeRegionSpace.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r9
  _QWORD **v3; // r8
  char *result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = **(_QWORD ****)a1;
  result = (char *)v3 - *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = result;
  if ( v3 == v2 )
    result = 0LL;
  *(_QWORD *)(a1 + 8) = **v2;
  return result;
}
